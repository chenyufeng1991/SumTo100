# SumTo100
快速找出一个数组中的两个数字，让这两个数字之和等于100（特定值）。
算法描述如下：</br>
（0）首先对原数组进行排序，成为递增数组；</br></br>
（1）对排序后的数组头部i [0]和数组尾部j [n-1]相加，判断是否等于100，等于100则打印，然后执行（3），否则执行（2）；</br></br>
 （2）如果相加小于100，则i++,j不变。如果相加大于100，则i不变，j--；继续执行（1）；</br></br>
 （3）数组下标i++，j--，继续执行（1）；</br></br>
 （4）当i==j，退出程序。</br></br>