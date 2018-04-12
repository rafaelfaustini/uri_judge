unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, XPMan;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Edit2: TEdit;
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
function soma(a,b:integer):integer;
begin
    Result := a+b;
end;
procedure TForm1.Button1Click(Sender: TObject);
var
str:string;
begin
   str := inttostr(soma(strtoint(edit1.text),strtoint(edit2.text)));
    showmessage('X = '+str);
end;

end.
