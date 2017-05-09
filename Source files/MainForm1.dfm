object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Hash table'
  ClientHeight = 387
  ClientWidth = 605
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 464
    Top = 130
    Width = 60
    Height = 13
    Caption = 'Add element'
  end
  object Label5: TLabel
    Left = 423
    Top = 220
    Width = 150
    Height = 13
    Caption = 'Delete from stack with number:'
  end
  object Label6: TLabel
    Left = 409
    Top = 315
    Width = 169
    Height = 13
    Caption = 'Number of stack with max element:'
  end
  object Label1: TLabel
    Left = 444
    Top = 19
    Width = 100
    Height = 13
    Caption = 'Input hash table size'
  end
  object Label2: TLabel
    Left = 463
    Top = 39
    Width = 61
    Height = 13
    Caption = 'and create it'
  end
  object ButtonAdd: TButton
    Left = 458
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Add'
    TabOrder = 3
    OnClick = ButtonAddClick
  end
  object EditAdd: TEdit
    Left = 458
    Top = 149
    Width = 75
    Height = 21
    TabOrder = 2
  end
  object EditDel: TEdit
    Left = 459
    Top = 239
    Width = 75
    Height = 21
    TabOrder = 4
  end
  object ButtonDeleteFromStack: TButton
    Left = 459
    Top = 266
    Width = 75
    Height = 25
    Caption = 'Delete'
    TabOrder = 5
    OnClick = ButtonDeleteFromStackClick
  end
  object Memo: TMemo
    Left = 8
    Top = 8
    Width = 382
    Height = 281
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clDefault
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = []
    Lines.Strings = (
      '')
    ParentFont = False
    ParentShowHint = False
    ReadOnly = True
    ScrollBars = ssBoth
    ShowHint = False
    TabOrder = 8
  end
  object ButtonClear: TButton
    Left = 215
    Top = 323
    Width = 145
    Height = 41
    Caption = 'Clear all'
    TabOrder = 6
    OnClick = ButtonClearClick
  end
  object ButtonExit: TButton
    Left = 18
    Top = 323
    Width = 145
    Height = 41
    Caption = 'Exit'
    TabOrder = 7
    OnClick = ButtonExitClick
  end
  object PanelMaxStack: TPanel
    Left = 453
    Top = 334
    Width = 83
    Height = 33
    Caption = 'Create hash t.'
    TabOrder = 9
  end
  object EditCreate: TEdit
    Left = 432
    Top = 58
    Width = 124
    Height = 21
    TabOrder = 0
  end
  object ButtonCreate: TButton
    Left = 457
    Top = 85
    Width = 75
    Height = 25
    Caption = 'Create'
    TabOrder = 1
    OnClick = ButtonCreateClick
  end
end
