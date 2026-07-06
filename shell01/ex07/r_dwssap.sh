cat /etc/passwd \
| sed -e "/^#/d" \
| awk "NR!=1" \
| cut -d: -f1 \
| rev \
| sort -r
