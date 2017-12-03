#!/bin/bash

#SBATCH -J job_spp_pra1_a1_c
#SBATCH --mail-user=liuxinyu19930328@gmail.com
#SBATCH --mail-type=ALL
#SBATCH -e /home/kurse/kurs00015/xl23lico/errmsg/Job.err.%j
#SBATCH -o /home/kurse/kurs00015/xl23lico/results/Job.out.%j

#SBATCH --account=kurs00015
#SBATCH --partition=kurs00015
#SBATCH --reservation=kurs00015

#SBATCH -n 1
#SBATCH -c 2       # 2 Kerne pro Prozess
#SBATCH --mem-per-cpu=300
#SBATCH -t 00:05:00

echo "This is Job $SLURM_JOB_ID"
module load gcc
module load openmpi/gcc intel cuda python/3
cd ~/mastertheses/Supervised_method_KP_Extraction
python3 train_classifier.py