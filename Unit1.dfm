object Form1: TForm1
  Left = 700
  Top = 225
  Caption = #1055#1077#1088#1077#1074#1086#1076' '#1040#1083#1100#1090' '#1082#1086#1076#1086#1074' for WOW v2.0'
  ClientHeight = 369
  ClientWidth = 149
  Color = clBtnFace
  Constraints.MaxHeight = 407
  Constraints.MaxWidth = 165
  Constraints.MinHeight = 407
  Constraints.MinWidth = 165
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 9
    Top = 34
    Width = 134
    Height = 328
    ColCount = 2
    FixedCols = 0
    RowCount = 13
    TabOrder = 0
    OnKeyPress = StringGrid1KeyPress
  end
  object Edit1: TEdit
    Left = 8
    Top = 7
    Width = 135
    Height = 21
    MaxLength = 12
    TabOrder = 1
    Text = #1053#1080#1082'..'
    OnChange = Edit1Change
    OnKeyPress = Edit1KeyPress
    OnMouseDown = Edit1MouseDown
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 64
    Top = 320
  end
end
