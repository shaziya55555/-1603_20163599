import java.util.*;
class Test{
    public static void main(String[] args) {
	long startMili=System.currentTimeMillis();// ��ǰʱ���Ӧ�ĺ�����
	System.out.println("��ʼ "+startMili);
	// ִ��һ�δ���,��һ��������ֵ
for(int i=0;i<1000000;i++){
	    Math.random();
}
	long endMili=System.currentTimeMillis();
	System.out.println("���� s"+endMili);
		System.out.println("�ܺ�ʱΪ��"+(endMili-startMili)+"����			");
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
		// TODO �Զ����ɵķ������
		int i;
		Scanner in = new Scanner(System.in);
        OfoBicycle a=new OfoBicycle();
        a.scanCode(); 
        a.unlock();
        System.out.println("�Ƿ�����г̣������밴0");
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
		System.out.println("ɨ��ɹ�\n�ó���������"+this.password);
		return ;
	}
	 public void unlock()
	 {    
		 Scanner in = new Scanner(System.in);
		 int a= in.nextInt();
		 if(a==this.password)
		 {
			 this.state=1;
			 System.out.println("�����ɹ�");
			 time1 =(int) System.currentTimeMillis();
		 }
		 else
		 {
			 System.out.println("����ʧ��");
		 }
	 }
	 public void computingTime()
	 {  
		 time2 = (int) System.currentTimeMillis();
		 this.state=0;
		int  time=time2-time1;
		 System.out.println("��ʱ"+ time+"����");
		
	 }
	 public void calculatedPrice()
	 {
		 System.out.println("���ǵ�"+time+"��������");
	    if(time<=3600000);
		 System.out.println("���Ϊ1Ԫ");
	 }


}
