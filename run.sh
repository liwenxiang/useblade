tmpfile=".tmpout.dot"
if [[ -f $tmpfile ]];then
    echo "$tmpfile has used"
    exit -1
fi

if [[ -z "$1" ]] ;then
    echo "use $0 target"
    exit -1
fi

echo "check $1"


blade  query --deps "$1" --output-to-dot $tmpfile
dot -Tpng $tmpfile -o /usr/share/nginx/html/out.png
rm -f $tmpfile
#/home/liwenxiang/bin/blade test ... --verbose -j1
echo 'check http://192.168.56.101/out.png'
