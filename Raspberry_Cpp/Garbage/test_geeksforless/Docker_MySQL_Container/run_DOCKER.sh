#/bin/bash/

# chmod u+x run_dockerSQL.sh
# ./run_dockerSQL.sh

docker build -t mysql_5:5.7.38 .

docker run --detach --name=mysql --publish 3307:3306 mysql_5:5.7.38

docker build - < Dockerfile