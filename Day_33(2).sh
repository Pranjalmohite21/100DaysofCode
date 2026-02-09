read n
sum_total=0
for((i=0;i<n;i++))
do
read x 
sum_total=$((sum_total+x))
done
avg=$(echo "scale=4; $sum_total / $n" | bc)
printf "%.3f\n" $avg
