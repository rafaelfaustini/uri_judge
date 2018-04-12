unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, XPMan, Math;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Button1: TButton;
    XPManifest1: TXPManifest;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}
function circle_area(r:double):double;
var
n:double;
begin
try
    n:= 3.14159;
    Result := RoundTo(n*power(r,2),-4);
except
  showmessage('Houve um erro no cálculo');
  application.Terminate;
end;
end;
procedure TForm1.Button1Click(Sender: TObject);
var
str:string;
begin
   str := floattostr(circle_area(strtofloat(edit1.text)));
    showmessage('A = '+str);
end;

end.
