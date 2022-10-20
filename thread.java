import javax.swing.*;
import java.awt.*;
public class MoveCar extends JFrame{
	public MoveCar() {
		this.setVisible(true);
		this.setSize(800,600);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		JPanel p1=new GP1();
		this.add(p1);
	}

public static void main(String args[]) {
	new MoveCar();
}
}

class GP1 extends JPanel implements Runnable{
	Thread t;
	int x=10,y=50;
	public GP1() {
		setBackground(Color.pink);
		setForeground(Color.blue);
		t=new Thread(this);
		t.start();
	}
	public void run() 
		//control block
	{
		while(true) {
			try {
				Dimension d=getSize();
				x=x+10;
				if(x>d.width) {
					x=10;y=50;
				}
				repaint();
				if(x>250 && x<319) {
					Thread.sleep(250);
					
				}else if(x==320) {
					Thread.sleep(250);
					
				}
				else {
					Thread.sleep(100);
					
				}
			}
			catch(InterruptedException e) {
				
			}
		}
	}
	protected void paintComponent(Graphics g) {
		super.paintComponent(g);//clear Screen
		//int x=10,y=50;
		Dimension d=getSize();
		g.setColor(Color.red);
		g.fillRect(x+100, y+25,25,25);
		g.setColor(Color.green);
		g.fillOval(x+15, y+35, 25, 25);
		g.fillOval(x+45, y+35, 25, 25);
		g.fillOval(x+95, y+35, 25, 25);
		g.setColor(Color.blue);
		g.fillRect(0,110, d.width, 25);
		g.setColor(Color.white
				);
		g.fillRect(450, 50, 10, 60);
		if(x>250 && x<319) {
			g.setColor(Color.yellow);
		}
		else if(x==320) {
			g.setColor(Color.red);
			
		}
		else {g.setColor(Color.green);
	}
g.fillOval(450,55,12,12);
	
}}
