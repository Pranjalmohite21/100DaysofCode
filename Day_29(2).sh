read n
sum=0

for ((i=0; i<n; i++))
do
    read x
    sum=$((sum + x))
done

avg=$(echo "scale=3; $sum / $n" | bc)
printf "%.3f\n" "$avg"
