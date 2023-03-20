#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	if (unk_0xF5472C80DF2FF847())
	{
		unk_0x6A053CF596F67DF7(500);
	}
	if (unk_0xC11469DCA6FC3BB5(3))
	{
		func_2();
	}
	uLocal_17 = unk_0x67D02A194A2FC2BD("graphic_design");
	while (!unk_0x64BAE9BE701E6C19(uLocal_17))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x029823681D10A10E(uLocal_17, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_17);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14372 == 0)
	{
		if (((((((unk_0x2503EB2EA811EC9A(2, 189) || unk_0x2503EB2EA811EC9A(2, 190)) || unk_0x2503EB2EA811EC9A(2, 188)) || unk_0x2503EB2EA811EC9A(2, 187)) || unk_0x2503EB2EA811EC9A(2, 205)) || unk_0x2503EB2EA811EC9A(2, 206)) || unk_0x2503EB2EA811EC9A(2, 201)) || unk_0x2503EB2EA811EC9A(2, 202))
		{
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14372 = 0;
	}
	if (Global_14372 == 0)
	{
		if (unk_0x2503EB2EA811EC9A(2, 189))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(10);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0x2503EB2EA811EC9A(2, 190))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(11);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0x2503EB2EA811EC9A(2, 205))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(4);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0x2503EB2EA811EC9A(2, 206))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(6);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0x2503EB2EA811EC9A(2, 188))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(8);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0x2503EB2EA811EC9A(2, 187))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(9);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0x2503EB2EA811EC9A(2, 201))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(16);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0x2503EB2EA811EC9A(2, 202))
		{
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(17);
			unk_0xD4D85E4148B638AD();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0xFAEC088D28B1DE4A(0);
	unk_0x6215C0F9FFF76BAD(&uLocal_17);
	unk_0x5E8B6D17FF91CD59();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xF73FBE4845C43B5B(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14551)
	{
		func_6(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_5())
	{
		Global_14393.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

