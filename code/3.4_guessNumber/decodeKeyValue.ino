
/*
 *  FF6897 0    
    FF30CF 1    
    FF18E7 2    
    FF7A85 3    
    FF10EF 4    
    FF38C7 5    
    FF5AA5 6    
    FF42BD 7      
    FF4AB5 8    
    FF52AD 9    
    FF906F ＋   
    FFA857 -    
    FFE01F EQ   
    FFB04F U/SD 
    FF9867 CYCLE
    FF22DD PLAY/PAUSE
    FF02FD FORWARD
    FFC23D BACKWARD
    FFA25D POWER
    FFE21D MUTE
    FF629D MODE
 * 
 */
String decodeKeyValue(long result)
{
  switch(result){
    case 0xFF6897:
      return "0";
    case 0xFF30CF:
      return "1"; 
    case 0xFF18E7:
      return "2"; 
    case 0xFF7A85:
      return "3"; 
    case 0xFF10EF:
      return "4"; 
    case 0xFF38C7:
      return "5"; 
    case 0xFF5AA5:
      return "6"; 
    case 0xFF42BD:
      return "7"; 
    case 0xFF4AB5:
      return "8"; 
    case 0xFF52AD:
      return "9"; 
    case 0xFF906F:
      return "+"; 
    case 0xFFA857:
      return "-"; 
    case 0xFFE01F:
      return "EQ"; 
    case 0xFFB04F:
      return "U/SD";
    case 0xFF9867:
      return "CYCLE";         
    case 0xFF22DD:
      return "PLAY/PAUSE";   
    case 0xFF02FD:
      return "FORWARD";   
    case 0xFFC23D:
      return "BACKWARD";   
    case 0xFFA25D:
      return "POWER";   
    case 0xFFE21D:
      return "MUTE";   
    case 0xFF629D:
      return "MODE";       
    case 0xFFFFFFFF:
      return "ERROR";   
    default :
      return "ERROR";
    }
}
