cat /etc/passwd | sed 's/#.*$//' | sed '/^$/d' | sed -n "n;p" | sed 's/:.*//' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed '$ s/.$/./' | sed 's/,/, /g' | tr -d '\n'
