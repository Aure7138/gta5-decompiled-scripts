#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xC968670BFACE42D9(2))
	{
		func_1();
	}
	if (unk_0x7239B21A38F536BA(iScriptParam_0))
	{
		unk_0x428CA6DBD1094446(iScriptParam_0, true);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7239B21A38F536BA(iScriptParam_0))
		{
			if (unk_0xCCBA154209823057(iScriptParam_0) && unk_0x2C83A9DA6BFFC4F9(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x060D6E96F8B8E48D(iScriptParam_0))
						{
							unk_0xD3BD40951412FEF6("MISSMIC2");
							if (unk_0xD031A9162D01088C("MISSMIC2"))
							{
								unk_0x7FB218262B810701(iScriptParam_0, "beefsplitter_loop", "MISSMIC2", 1f, true, false, false, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xF66A602F829E2A06("MISSMIC2");
	unk_0x1090044AD1DA76FA();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (unk_0x0C515FAB3FF9EA92(sParam0, sParam0))
	{
	}
}

