import time
import sys
def constant_reg(stmt, regval, value):
    lstmt = "MOV "+"R"+str(regval)+"," + "#" + value
    stmt.append(lstmt)
    r1 = regval
    regval = (regval + 1)%13
    return stmt, regval, r1

def variable_reg(stmt, regval, value):
    st1 = "MOV "+"R" + str(regval) + ","+"="+str(value)
    r1 = regval
    regval = (regval + 1)%13
    stmt.append(st1)
    st2 = "MOV "+"R" + str(regval) +","+ "[R" + str(r1) + "]"
    stmt.append(st2)
    r2 = regval
    regval = (regval + 1)%13
    return stmt, regval, r1, r2

def arith_op(stmt, lhs, arg1, op, arg2,type):
    if(type==1):
        if(arg1.isdigit()):
            if(op == "+"):
                st = "ADD "+"R"+str(lhs)+","+"#"+arg1+",R"+arg2
                stmt.append(st)
                
            elif(op == "-"):
                st = "SUBS "+"R"+str(lhs)+","+"#"+arg1+",R"+arg2
                stmt.append(st)        
                
            elif(op == "*"):
                st = "MUL "+"R"+str(lhs)+","+"#"+arg1+",R"+arg2
                stmt.append(st)        
                
            elif(op == "/"):
                st = "SDIV "+"R"+str(lhs)+","+"#"+arg1+",R"+arg2
                stmt.append(st)   
            return stmt
        elif(arg2.isdigit()):
            if(op == "+"):
                st = "ADD "+"R"+str(lhs)+","+"R"+arg1+",#"+arg2
                stmt.append(st)
                
            elif(op == "-"):
                st = "SUBS "+"R"+str(lhs)+","+"R"+arg1+",#"+arg2
                stmt.append(st)        
                
            elif(op == "*"):
                st = "MUL "+"R"+str(lhs)+","+"R"+arg1+",#"+arg2
                stmt.append(st)        
                
            elif(op == "/"):
                st = "SDIV "+"R"+str(lhs)+","+"R"+arg1+",#"+arg2
                stmt.append(st)   
            return stmt
    elif(type==2):
            if(op == "+"):
                st = "ADD "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
                stmt.append(st)
                
            elif(op == "-"):
                st = "SUBS "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
                stmt.append(st)        
                
            elif(op == "*"):
                st = "MUL "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
                stmt.append(st)        
                
            elif(op == "/"):
                st = "SDIV "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
                stmt.append(st)   
            return stmt
    
def icg_to_asm(lines, file):
    vardec = []
    stmt = []
    varlist = []
    regval = 0
    index =0
    for i in lines:
        index+=1
        i = i.strip("\n")
        if(len(i.split()) == 1):
            stmt.append(i)
        
        elif(len(i.split()) == 2):
            if(i.split()[0] == "goto"):
                st = "B " + i.split()[1]
                stmt.append(st)
            else:
                st = i
                stmt.append(st)
        elif(len(i.split()) == 5):
            lhs, ass, arg1, op, arg2 = i.split()
            if(op=="<" or op==">" or op=="<=" or op==">=" or op=="==" or op=="!="):
                continue
            if(arg1.isdigit() and arg2.isdigit()):
                stmt, regval, r1 = constant_reg(stmt, regval, arg1)
                stmt, regval, r3, r4 = variable_reg(stmt, regval, lhs)
                stmt = arith_op(stmt, r4, str(r1), op, arg2,1)
                st = "STR R"+str(r4) + ", [R" + str(r3) + "]"
                stmt.append(st)
            elif(arg1.isdigit()):
                stmt, regval, r2, r3 = variable_reg(stmt, regval, arg2)
                stmt, regval, r4, r5 = variable_reg(stmt, regval, lhs)
                stmt = arith_op(stmt, r5, arg1, op, str(r3),1)
                st = "STR R"+str(r5) + ", [R" + str(r4) + "]"
                stmt.append(st)
            elif(arg2.isdigit()):
                stmt, regval, r1,r2 = variable_reg(stmt, regval, arg1)
                stmt, regval, r4, r5 = variable_reg(stmt, regval, lhs)
                stmt = arith_op(stmt, r5, str(r2), op, arg2,1)
                st = "STR R"+str(r5) + ", [R" + str(r4) + "]"
                stmt.append(st)                
            else:
                stmt, regval, r1,r2 = variable_reg(stmt, regval, arg1)
                stmt, regval, r3,r4 = variable_reg(stmt, regval, arg2)
                stmt, regval, r5,r6 = variable_reg(stmt, regval, lhs)
                stmt = arith_op(stmt, r6, r2, op, r4,2)
                st = "STR R"+str(r6) + ", [R" + str(r5) + "]"
                stmt.append(st)
        elif(len(i.split()) == 4):
            prev_line=lines[index-2].split()
            conditions={">":"LE","<":"GE",">=":"L","<=":"G","==":"NE","!=":"E"}
            if(prev_line[2].isdigit() and prev_line[4].isdigit()):
                stmt, regval, r=constant_reg(stmt, regval, prev_line[2])
                cmp_stmt="CMP "+"R"+str(r)+",#"+prev_line[4]
                stmt.append(cmp_stmt)
                b_stmt="B"+conditions[prev_line[3]]+" "+lines[index-1].split()[3]
                stmt.append(b_stmt)
            elif(prev_line[2].isdigit() or prev_line[4].isdigit()):
                if(prev_line[2].isdigit()):
                    stmt, regval, r1,r2 = variable_reg(stmt, regval, prev_line[4])
                    cmp_stmt="CMP "+"R"+str(r2)+",#"+prev_line[2]
                    stmt.append(cmp_stmt)
                    b_stmt="B"+conditions[prev_line[3]]+" "+lines[index-1].split()[3]
                    stmt.append(b_stmt)
                else:
                    stmt, regval, r1,r2 = variable_reg(stmt, regval, prev_line[2])
                    cmp_stmt="CMP "+"R"+str(r2)+",#"+prev_line[4]
                    stmt.append(cmp_stmt)
                    b_stmt="B"+conditions[prev_line[3]]+" "+lines[index-1].split()[3]
                    stmt.append(b_stmt)
            else:
                stmt, regval, r1,r2 = variable_reg(stmt, regval, prev_line[2])
                stmt, regval, r3,r4 = variable_reg(stmt, regval, prev_line[4])
                cmp_stmt="CMP "+"R"+str(r2)+",R"+str(r4)
                stmt.append(cmp_stmt)
                b_stmt="B"+conditions[prev_line[3]]+" "+lines[index-1].split()[3]
                stmt.append(b_stmt)
        elif(len(i.split()) == 3):
            variable = i.split()[0]
            value = i.split()[2]
            variable = str(variable)
            if variable not in varlist:
                out = ""
                out = out + variable + ":" + " .WORD " + str(value)
                vardec.append(out)
                varlist.append(variable)
            else:
                stmt, regval, r1, r2 = variable_reg(stmt, regval, variable)
                stmt, regval, r3 = constant_reg(stmt, regval, value)
                st = "STR R"+str(r3)+", [R" + str(r1) + "]"
                stmt.append(st)
    return vardec, stmt
                           
            
def file_write(stmt, vardec, File):
    File.write(".text\n")
    for i in stmt:
        File.write("%s\n"%(i))
    File.write("SWI 0x011\n")
    File.write(".DATA\n")
    for i in vardec:
        time.sleep(0.01)
        File.write("%s\n"%(i))

if __name__=="__main__":
    if(len(sys.argv)!=2):
        print("Usage: python gen.py [filename]")
        exit()
    fin = open(sys.argv[1], "r")
    fout = open(sys.argv[1].split('.')[0]+".s", "w")
    lines = fin.readlines()
    print('Compiling......')
    vardec, stmt = icg_to_asm(lines, fout)
    file_write(stmt, vardec, fout)
    fin.close()
    fout.close()
    print('Assembly code dumped to: ',sys.argv[1].split('.')[0]+".s")