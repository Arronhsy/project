package Hannoi;
import javax.swing.*;
import java.awt.*;
public class Disc extends JButton{
   int number;//盘子的个数
   TowerPoint point;
   Disc(){
      setBackground(Color.cyan);
   }                 
   public void setNumber(int n){
       number=n;
   }
   public int getNumber(){
       return number;
   }
   public void setPoint(TowerPoint p){
      point=p;
   }
   public TowerPoint getPoint(){
      return point;
   }
}
