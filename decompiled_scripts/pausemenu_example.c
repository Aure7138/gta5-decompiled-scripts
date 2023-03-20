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
	unk_0x5E8B6D17FF91CD59();
}

void func_1(int iParam0)
{
	if (unk_0xD5CD87BEB036A1F0("DISPLAY_DATA_SLOT"))
	{
		unk_0xA734310215BCF528(iParam0);
		unk_0xD4D85E4148B638AD();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0xD5CD87BEB036A1F0("SET_DATA_SLOT"))
	{
		unk_0xA734310215BCF528(iParam0);
		unk_0xA734310215BCF528(iParam1);
		unk_0xA734310215BCF528(iParam2);
		unk_0xA734310215BCF528(iParam3);
		unk_0xA734310215BCF528(iParam7);
		unk_0xA734310215BCF528(0);
		if (bParam4)
		{
			unk_0xA734310215BCF528(1);
		}
		else
		{
			unk_0xA734310215BCF528(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x3FB5104DF4233F1D(sParam5);
		}
		unk_0xD4D85E4148B638AD();
	}
}

void func_3(var uParam0)
{
	unk_0x164FB269C22AF51C(uParam0);
	unk_0x5BB4D22B8B03A30B();
}

