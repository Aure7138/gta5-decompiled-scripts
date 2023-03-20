#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
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
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
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

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (unk_0xD5CD87BEB036A1F0("SET_DATA_SLOT"))
	{
		unk_0xA734310215BCF528(iParam0);
		unk_0xA734310215BCF528(iParam1);
		unk_0xA734310215BCF528(iParam2);
		unk_0xA734310215BCF528(iParam3);
		unk_0xA734310215BCF528(0);
		unk_0xA734310215BCF528(0);
		if (bParam4)
		{
			unk_0xA734310215BCF528(1);
		}
		else
		{
			unk_0xA734310215BCF528(0);
		}
		func_3(sParam5);
		unk_0xD4D85E4148B638AD();
	}
}

void func_3(var uParam0)
{
	unk_0x164FB269C22AF51C(uParam0);
	unk_0x5BB4D22B8B03A30B();
}

