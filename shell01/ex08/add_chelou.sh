num1=$(echo "$FT_NBR1" | tr \'\\\\\"\?\! "01234")
num2=$(echo "$FT_NBR2" | tr mrdoc "01234")

echo "obase=13; ibase=5; $num1 + $num2" | bc | tr "0123456789ABC" "gtaio luSnemf"
