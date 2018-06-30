import java.util.*;
class Test{
    public static void main(String[] args) {
	long startMili=System.currentTimeMillis();// 当前时间对应的毫秒数
	System.out.println("开始 "+startMili);
	// 执行一段代码,求一百万次随机值
for(int i=0;i<1000000;i++){
	    Math.random();
}
	long endMili=System.currentTimeMillis();
	System.out.println("结束 s"+endMili);
		System.out.println("总耗时为："+(endMili-startMili)+"毫秒			");
    }
}
public class OfoBicycle {
	static int time=0;
	private int ofono;
	private int state=0;
	private int price;
	private int password=4444;
	public int time1;
	public int time2;
	public int getOfono() {
		return ofono;
	}
	


	public void setOfono(int ofono) {
		this.ofono = ofono;
	}


	public int getState() {
		return state;
	}


	public void setState(int state) {
		this.state = state;
	}


	public int getPrice() {
		return price;
	}


	public void setPrice(int price) {
		this.price = price;
	}


	public int getPassword() {
		return password;
	}


	public void setPassword(int password) {
		this.password = password;
	}
	OfoBicycle()
	{
		time++;
		return;
	}
	OfoBicycle(int ofono,int state,int price,int password)
	{
		
		this.ofono = ofono;
		this.state = state;
		this.price = price;
		this.password = password;
	}


	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int i;
		Scanner in = new Scanner(System.in);
        OfoBicycle a=new OfoBicycle();
        a.scanCode(); 
        a.unlock();
        System.out.println("是否结束行程，结束请按0");
        i= in.nextInt();
        if(i==0)
        {
        a.computingTime();
        a.calculatedPrice();
        a.computingTime();
        }

	}
	public void scanCode()
	{
		
		int[] a = new int[10];
		int i;
		for(i=0;i<4;i++)
		{
		 a[i]=(int) (Math.random()*4+1);
		}

		this.password=a[0]*1000+a[1]*100+a[2]*10+a[3];
		System.out.println("扫码成功\n该车的密码是"+this.password);
		return ;
	}
	 public void unlock()
	 {    
		 Scanner in = new Scanner(System.in);
		 int a= in.nextInt();
		 if(a==this.password)
		 {
			 this.state=1;
			 System.out.println("解锁成功");
			 time1 =(int) System.currentTimeMillis();
		 }
		 else
		 {
			 System.out.println("解锁失败");
		 }
	 }
	 public void computingTime()
	 {  
		 time2 = (int) System.currentTimeMillis();
		 this.state=0;
		int  time=time2-time1;
		 System.out.println("用时"+ time+"毫秒");
		
	 }
	 public void calculatedPrice()
	 {
		 System.out.println("你是第"+time+"个骑行者");
	    if(time<=3600000);
		 System.out.println("金额为1元");
	 }


}
