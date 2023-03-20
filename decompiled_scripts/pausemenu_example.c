#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				unk_0x4EDE34FBADD967A6(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0x78C587487CD40B92();
}

void func_1(int iParam0)
{
	if (unk_0xB6A9AC5C40E1D647("DISPLAY_DATA_SLOT"))
	{
		unk_0x7CBFB9F4AF33C67E(iParam0);
		unk_0xE73340DA551C95E1();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0xB6A9AC5C40E1D647("SET_DATA_SLOT"))
	{
		unk_0x7CBFB9F4AF33C67E(iParam0);
		unk_0x7CBFB9F4AF33C67E(iParam1);
		unk_0x7CBFB9F4AF33C67E(iParam2);
		unk_0x7CBFB9F4AF33C67E(iParam3);
		unk_0x7CBFB9F4AF33C67E(iParam7);
		unk_0x7CBFB9F4AF33C67E(0);
		if (bParam4)
		{
			unk_0x7CBFB9F4AF33C67E(1);
		}
		else
		{
			unk_0x7CBFB9F4AF33C67E(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x481EA0389B099920(sParam5);
		}
		unk_0xE73340DA551C95E1();
	}
}

void func_3(var uParam0)
{
	unk_0x709662CF2BD061A4(uParam0);
	unk_0x1E77BE8F4283FA05();
}

