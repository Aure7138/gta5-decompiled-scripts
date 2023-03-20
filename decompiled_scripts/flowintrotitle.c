#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x524AF15206846700(83))
	{
		func_10();
	}
	unk_0x78F90FB2D9195162(0);
	unk_0xF17F4B0641AB2DE1(&(Global_101154.f_8706.f_25), 1);
	func_7();
	unk_0x334FD925982DE56B(1);
	if (!unk_0x3934E959DB2478D3())
	{
		unk_0x4E63F662FDE672C3(0);
	}
	iLocal_0 = unk_0x9A64FC8B83855E3B("OPENING_CREDITS");
	while (!unk_0x4C3CEC038B6637D7(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x3934E959DB2478D3())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0xA0F74982C6AAA9D4() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x67FB99B1361E144E())
	{
		func_7();
		if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8706.f_25, 1))
		{
			unk_0x6201690B328DD500(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0xA0F74982C6AAA9D4() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0xA0F74982C6AAA9D4() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0xA0F74982C6AAA9D4() > iLocal_1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_8706.f_25), 1);
				if (unk_0xFCB0620889504FA8() || unk_0xDFCB321F1D24137F())
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
	Global_91317 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x8CED8F78CC31BEF2(iLocal_0, "HIDE_LOGO");
	unk_0x37B602106C6E0E91("STRING");
	unk_0xF9E9E11D6DF3EBF8(sParam0);
	unk_0xD3076D52458B36EF();
	unk_0x7E5FA681CB7A2EF7();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x8CED8F78CC31BEF2(iLocal_0, "SHOW_LOGO");
	unk_0x37B602106C6E0E91("STRING");
	unk_0xF9E9E11D6DF3EBF8(sParam0);
	unk_0xD3076D52458B36EF();
	unk_0x4ACF99392701B935(fParam1);
	unk_0x4ACF99392701B935(fParam2);
	unk_0x4ACF99392701B935(fParam3);
	unk_0x4ACF99392701B935(fParam4);
	unk_0x4ACF99392701B935(fParam5);
	unk_0x4ACF99392701B935(fParam6);
	unk_0x4ACF99392701B935(fParam7);
	unk_0x7E5FA681CB7A2EF7();
}

void func_7()
{
	unk_0x5CFE7BBCC87B1CDC();
	unk_0xCFF471245AFEEDCE(2, 199, 1);
	unk_0x5F817444B4379247(7);
	func_8();
}

void func_8()
{
	unk_0x6E6058A59531550F();
	func_9();
}

void func_9()
{
	Global_17118.f_134 = 1;
}

void func_10()
{
	unk_0x26545538B51562AD(&(Global_101154.f_8706.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xBBDCA990E9FC1AE1(&iLocal_0);
	}
	unk_0x5F817444B4379247(4);
	unk_0x334FD925982DE56B(0);
	unk_0x78F90FB2D9195162(1);
	unk_0x7C3AA2D27E16E2AD();
}

