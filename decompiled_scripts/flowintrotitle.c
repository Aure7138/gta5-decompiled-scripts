#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xC11469DCA6FC3BB5(83))
	{
		func_10();
	}
	unk_0xB3BC8250F4FE8B63(0);
	unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_8270.f_25), 1);
	func_7();
	unk_0x5CB83156AA038F95(1);
	if (!unk_0xF5472C80DF2FF847())
	{
		unk_0x40C719A5E410B9E4(0);
	}
	iLocal_0 = unk_0x67D02A194A2FC2BD("OPENING_CREDITS");
	while (!unk_0x64BAE9BE701E6C19(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xF5472C80DF2FF847())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x4F67E8ECA7D3F667() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x2004A43D1B1A5D9F())
	{
		func_7();
		if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8270.f_25, 1))
		{
			unk_0x2D8953D6CEBE69D2(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x4F67E8ECA7D3F667() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x4F67E8ECA7D3F667() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x4F67E8ECA7D3F667() > iLocal_1)
			{
				unk_0xF73FBE4845C43B5B(&(Global_97353.f_8270.f_25), 1);
				if (unk_0xB304BD692628B1E1() || unk_0xB0FB6CFAA5A1C833())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_10();
}

void func_1()
{
	Global_90001 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_90001.f_7 = iParam0;
	Global_90001.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xF6EA2AC68E7C7293(iLocal_0, "HIDE_LOGO");
	unk_0x164FB269C22AF51C("STRING");
	unk_0x54534D588C114163(sParam0);
	unk_0x5BB4D22B8B03A30B();
	unk_0xD4D85E4148B638AD();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xF6EA2AC68E7C7293(iLocal_0, "SHOW_LOGO");
	unk_0x164FB269C22AF51C("STRING");
	unk_0x54534D588C114163(sParam0);
	unk_0x5BB4D22B8B03A30B();
	unk_0xBC38230AD29DBDD4(fParam1);
	unk_0xBC38230AD29DBDD4(fParam2);
	unk_0xBC38230AD29DBDD4(fParam3);
	unk_0xBC38230AD29DBDD4(fParam4);
	unk_0xBC38230AD29DBDD4(fParam5);
	unk_0xBC38230AD29DBDD4(fParam6);
	unk_0xBC38230AD29DBDD4(fParam7);
	unk_0xD4D85E4148B638AD();
}

void func_7()
{
	unk_0xEA600AABAF4B9084();
	unk_0x562F5D788AF3FA80(2, 199, 1);
	unk_0xCFCC78391C8B3814(7);
	func_8();
}

void func_8()
{
	unk_0xA8C44C13419634F2();
	func_9();
}

void func_9()
{
	Global_17098.f_134 = 1;
}

void func_10()
{
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_8270.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x6215C0F9FFF76BAD(&iLocal_0);
	}
	unk_0xCFCC78391C8B3814(4);
	unk_0x5CB83156AA038F95(0);
	unk_0xB3BC8250F4FE8B63(1);
	unk_0x5E8B6D17FF91CD59();
}

