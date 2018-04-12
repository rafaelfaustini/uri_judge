unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, XPMan, Math, OleCtrls, SHDocVw;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Button1: TButton;
    XPManifest1: TXPManifest;
    Edit2: TEdit;
    WebBrowser1: TWebBrowser;
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}
function media(a,b,weight_a,weight_b:double):double;
begin
try
    if Not( (a<=10)and(a>=0)and(b<=10)and(b>=0))then
    begin
      raise Exception.Create('Grade has to be from 0 to 10');
      end;
    Result := RoundTo(((weight_a*a)+(weight_b*b))/(weight_a+weight_b),-5);
except
  showmessage('Houve um erro no cálculo');
  application.Terminate;
end;
end;
procedure TForm1.Button1Click(Sender: TObject);
var
str:string;
begin
   str := floattostr(media(strtofloat(edit1.text),strtofloat(edit2.text),3.5,7.5));
    showmessage('A = '+str);
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
webbrowser1.Navigate('https://www.urionlinejudge.com.br/judge/en/problems/view/1005');
end;

end.
