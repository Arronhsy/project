package Hannoi;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Hannoi extends JFrame implements ActionListener{
   Tower tower=null;
   int amountOfDisc=3;
   char []towerName={'A','B','C'};
   JMenuBar bar;
   JMenu menuGrade,exi;
   JMenuItem oneGradeItem,twoGradeItem,threeGradeItem,ex;
   JButton renew=null;
   JButton autoButton=null; 
   JPanel center=new JPanel(); 
   Hannoi(){
	  super("Hanoi塔动画演示程序");
	  setBounds(300,300,500,500);
	  setVisible(true);
      tower=new Tower(towerName);
      tower.setAmountOfDisc(amountOfDisc);
      tower.setMaxDiscWidth(120);
      tower.setMinDiscWidth(50);
      tower.setDiscHeight(16);
      tower.putDiscOnTower();
      add(tower,BorderLayout.CENTER);//设置整体布局为边界布局
      bar=new JMenuBar();
      menuGrade=new JMenu("选择难度");     //对菜单栏进行设置
      exi=new JMenu("系统");
      ex=new JMenuItem("退出系统");
      oneGradeItem=new JMenuItem("简单");
      twoGradeItem=new JMenuItem("中级");    
      threeGradeItem=new JMenuItem("困难");
      menuGrade.add(oneGradeItem);           
      menuGrade.add(twoGradeItem);
      menuGrade.add(threeGradeItem);
      exi.add(ex);
      bar.add(menuGrade);  bar.add(exi);                  
      setJMenuBar(bar);
      oneGradeItem.addActionListener(this);
      twoGradeItem.addActionListener(this);
      threeGradeItem.addActionListener(this); 
      renew=new JButton("重新开始");  
      ex.addActionListener(this); 
      renew.addActionListener(this);
      autoButton=new JButton("自动演示");
      autoButton.addActionListener(this);
      JPanel north=new JPanel();
      north.add(renew);
      north.add(autoButton); 
      String mess="将全部盘子从"+towerName[0]+"塔->"+towerName[1]+
                  "塔或"+towerName[2]+"塔";
      JLabel hintMess=new JLabel(mess,JLabel.CENTER);
      north.add(hintMess); 
      add(north,BorderLayout.NORTH);
      setResizable(false);    
      setVisible(true);
      setBounds(60,60,460,410);
      validate();
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
   }
   public void actionPerformed(ActionEvent e){   //对菜单项进行响应
      if(e.getSource()==oneGradeItem){
         amountOfDisc=3;
         tower.setAmountOfDisc(amountOfDisc);
         tower.putDiscOnTower();
      }
      else if(e.getSource()==twoGradeItem){
         amountOfDisc=4;
         tower.setAmountOfDisc(amountOfDisc);
         tower.putDiscOnTower();
      }
      else if(e.getSource()==threeGradeItem){
         amountOfDisc=5;
         tower.setAmountOfDisc(amountOfDisc);
         tower.putDiscOnTower();
      }
      else if(e.getSource()==renew){
    	  
         tower.setAmountOfDisc(amountOfDisc);
         tower.putDiscOnTower();
      }
      else if(e.getSource()==ex){System.exit(0);}
      else if(e.getSource()==autoButton){
         tower.setAmountOfDisc(amountOfDisc);
         tower.putDiscOnTower();
         int x=this.getBounds().x+this.getBounds().width;
         int y=this.getBounds().y;
         tower.getAutoMoveDisc().setLocation(x,y);
         tower.getAutoMoveDisc().setSize(280,this.getBounds().height);  
         tower.getAutoMoveDisc().setVisible(true);
         
      }
      validate();
   }
   public static void main(String args[]){
      new Hannoi();
   }
}
