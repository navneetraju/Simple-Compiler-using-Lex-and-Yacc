bin/./icgGen < $1 
python bin/ICG_Optimization/icg_opt.py bin/icg.txt
mv icg.txt bin/icg.txt
python bin/Assembly_Generation/gen.py optimized_icg.txt
sleep 2
rm optimized_icg.txt
rm bin/icg.txt
echo "Dumped: assembly.s"
