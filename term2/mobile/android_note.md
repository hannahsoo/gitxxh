# android

**459 329 035**

**077036**



String.xml 可以定义i18n，如定义string.xml , string-fr.xml(法语) , string-zh.xml(中文)

@+id/name 		//+表示declare 

R.id.name

0dp, weight 1,三个box自动平潭宽度

Builder 写在文件里，在activity中call

Send msg to certain activity in my app, use xocal bdct rev

Blue 0 , default value

## Lecture 2

intent 可以

- start an activity
- Start a service
- Broadcast

an intent contains:

- Component name

- action

- data

- Extras

  Extras are key-value pairs that can be used to pass parameters to the activity or service to be started

  **Intent.putExtra(key, value)**

  extra is in the class **Bundle**

<intent-filter>

Action filter: filter中没有的action不能通过，如果intent没有设置action则只要filter中有设置一个action filter就可以通过

category filter：intent可以关联多个category，这些category一定要在filter中才能通过。如果intent没有关联category，且该intent不是用来启动activity，则直接通过

某activity如果想监听广播，就在oncreat的时候register receiver, ondestroy的时候unregister receiver



Local storage:

- Shared preferences——simplest

  Key-value pairs

  https://developer.android.com/training/data-storage/shared-preferences

Debug:

Log.d("hhhh",a);


## Assg 2

String 的==操作在比较字符串地址，.equals()才是比较字符串内容

```
while ((str=br.readLine())!=null){
    System.out.println("?why not null"+str);
    stringBuffer.append(str);//str is json string..
}
```

## Assg3

```python
sudo pip3 install mysql.connector
sudo pip3 install mysql-connector-python
```

Line1 is the guide advice, however, **Could not find a version that satisfies the requirement mysql.connector**. Then, try line2 after installation, import mysql.connector is ok. While the reference of line2 advise to import MySQLdb, it cannot be imported. wired..

Sudo pwd: admin

MYSQL is ok

Log in MySQL: mysql -u dbuser -p

Mysql username: dbuser		pwd: password

Database created for my helloworld, name:iems5722

AWS有security groups相当于防火墙，需要添加inbound and outbound traffic才能从internet访问

Telnet ip port//测试端口

Select database();//显示各个数据库

Use 数据库名字;//switch that one

show tables;

desc table_name;

create table 数据表名(字段1 类型 约束1, 字段2 类型 约束2,...);

insert into 数据表名 values(按表中字段插入对应类型的值);

报错：

```
OSError: [Errno 98] Address already in use
```

solution：

```
输入netstat -ntulp | grep 5000(端口号)查看端口
sudo fuser -k -n tcp(协议类型) 5000(端口号)
```

From lecture 6

```
CREATE TABLE Students (
id INT NOT NULL AUTO_INCREMENT, name VARCHAR(100) NOT NULL, year INT NOT NULL,
PRIMARY KEY (id)
);
```

when insert, no need to specify id.

```
INSERT INTO Students (name, year) VALUES ('Paul Wong', 4);
```



把py3作为默认python

```
sudo update-alternatives --install /usr/bin/python python /usr/bin/python2 100
sudo update-alternatives --install /usr/bin/python python /usr/bin/python3 150
//切换python
sudo update-alternatives --config python
```

```
pip list
pip uninstall name//
```

报错

```
pkg_resources.DistributionNotFound: The 'gunicorn==19.7.1' distribution was not found and is required by the application
```

Step1:

```
pip install gunicorn==19.7.1
```

i dont know why apt-get the gunicorn19.7.1 cannot work

still error

```
gunicorn -b 0.0.0.0:8000 –w 4 iems5722_a3:app//the command given in assg3
ModuleNotFoundError: No module named '–w'
```

Step2:

```
gunicorn3 x
```

i don't know why

卸载apt-get 的包

```
# 删除软件及其配置文件
apt-get --purge remove <package>
# 删除没用的依赖包
apt-get autoremove <package>
```



## Lecture 9

NO class on Apr13

Asynchronous , not wait for response

regular jobs, periodically run, instead of when response. e.g.calculate total count

Cron is a tool in Linux to run program periodically

Celery+Redis+RabbitMQ

curl is a Linux cmd, download from url

Callback functionalists is to handle incoming message

Basic_consume()	when message comes to one queue, it calls the callback func

Round-robin means take turns to carry out

one message is only sent to one queue

the send method can be different:

- Direct-I know each message will goto one certain queue
- Fanout-send the message to every Q
- Topic-sent to one Q according to the topic of the message
- Header-sent to one Q according to the header of the message

f.dalay()//will not be carried out imidietaly



## Lecture 5

application server with flask

Unicorn worker:

- Sync worker

  做不耗时的工作

- Async worker

Nginx 不仅是web server 还可以做reverse proxy server

Load balaning指某一时刻来1000个request，如果只有一个sever那只能让它干，如果有多个server让load balancer separate 1000 requests to different server



## Lecture 10

websocket snake(youtube)

android_key: 130747//打包apk时用

## Assg4

Modify server file from local:

```
scp upload to ubuntu
cp to iems file
sudo supervisorctl update
sudo supervisorctl reload
then u can see new version
```



Before, I put Toast in the call of Listener directly and the app usually crashed without obvious error info. When I check the Logcat, I finally find error info. So, remember to check Logcat. The error INFO is:

```
java.lang.RuntimeException:Can't create handler inside thread that has not called Looper.prepare
```

The solution refers to **https://blog.csdn.net/m0_38025747/article/details/80196367**

One-Take-away: Toast cannot pop in child threads

Solution: use Handler(Looper.getMainLooper())//don't ask what's this, I don't know JAVA

```
new Thread(new Runnable() {
                @Override
                public void run() {
                    Handler handler = new Handler(Looper.getMainLooper());
                    handler.post(new Runnable() {
                        @Override
                        public void run() {
                            Toast toast = Toast.makeText(ChatRoomActivity.this, "someone joined", Toast.LENGTH_SHORT);
                            showMyToast(toast,1000);
                        }
                    });
                }
            }).start();
//new a thread and let the procedure of toast run in this thread.         
```



## PROJECT

OnCreate中注意创建的Activity和当前文件的名字一致

socket可以传递，用setsocket

对界面作出改变的东西要在UIThread上运行，对于非Activity的类，把改变的方法写到Activity中才能runOnUIThread

感谢伍哥。