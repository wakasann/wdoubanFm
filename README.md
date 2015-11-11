# wdoubanFm

###2015-11-10
1. 完成了Qmediapalyer的音量控制,have study QSlider 设置 参考[Qt基础学习（3）-----滑动条之QSlider](http://blog.csdn.net/qiurisuixiang/article/details/6897914)
2. 参考 [QT学习1 QSlider 更改样式](http://blog.csdn.net/denny_233/article/details/7329486),完成了QSlider的基本美化，目前还不懂QSS

###2015-11-11
1. QSlider 的滚动条随Media Player的时间滚动，参考了[Qt5中 QMediaPlayer的QSlider的进度条运行时不能setRange](http://bbs.csdn.net/topics/390718909),`QSlider上限改成duration就好了。`
2. 时间转换参考了[毫秒数转换成时分秒格式](http://blog.sina.com.cn/s/blog_6efce07e010138co.html),[毫秒转换为天、小时、分、秒](http://www.cnblogs.com/hxsyl/p/4226483.html),我使用的是前者
3. qDebug输出QString，参考了[怎么用QDebug打印出QString](http://bbs.csdn.net/topics/370143216)中的```js qDebug()<<"Just : "<<str ; ```,qDebug使用，参考了[qdebug使用方法](http://blog.sina.com.cn/s/blog_71cb68cb01013wck.html)
4. QString使用，参考了[QT QString 很全的使用](http://blog.csdn.net/zhoxier/article/details/7663895)
5. 当程序出现```js QMetaObject::connectSlotsByName: No matching signal for ...```时，参考了[QMetaObject::connectSlotsByName: No matching signal for问题的解决方法](http://blog.csdn.net/fm0517/article/details/5503575)
