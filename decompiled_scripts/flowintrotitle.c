#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x4B4BD87E3D30C50D(83))
	{
		func_10();
	}
	unk_0x45E6514714EC6B7E(0);
	unk_0xA5F70A8B83BDFA49(&(Global_99250.f_8634.f_25), 1);
	func_7();
	unk_0xBE2F8BFF037AA9F4(1);
	if (!unk_0x2CC731F9E664299E())
	{
		unk_0x16AA81661A0624FB(0);
	}
	iLocal_0 = unk_0x2F14983962462691("OPENING_CREDITS");
	while (!unk_0xEDE19C6ED6E2F478(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x2CC731F9E664299E())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x3EAC9995EC220C5A() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x7B8549A4F94FA4C8())
	{
		func_7();
		if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8634.f_25, 1))
		{
			unk_0xE636AA747867BC3D(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x3EAC9995EC220C5A() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x3EAC9995EC220C5A() > iLocal_1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_8634.f_25), 1);
				if (unk_0x112D1FC69005050F() || unk_0x2C063B4379F0C076())
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
	Global_91145 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91145.f_7 = iParam0;
	Global_91145.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x758017413321C628(iLocal_0, "HIDE_LOGO");
	unk_0xC976485333F81CE8("STRING");
	unk_0x82E0649BF28E05D3(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
	unk_0x098CA28C04E62E55();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x758017413321C628(iLocal_0, "SHOW_LOGO");
	unk_0xC976485333F81CE8("STRING");
	unk_0x82E0649BF28E05D3(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
	unk_0xBA93E45C163C745D(fParam1);
	unk_0xBA93E45C163C745D(fParam2);
	unk_0xBA93E45C163C745D(fParam3);
	unk_0xBA93E45C163C745D(fParam4);
	unk_0xBA93E45C163C745D(fParam5);
	unk_0xBA93E45C163C745D(fParam6);
	unk_0xBA93E45C163C745D(fParam7);
	unk_0x098CA28C04E62E55();
}

void func_7()
{
	unk_0x46A5D995D57103EA();
	unk_0x6E20845D23D3DFD4(2, 199, 1);
	unk_0x227C85DAD96E2942(7);
	func_8();
}

void func_8()
{
	unk_0xC08831A338A1D76E();
	func_9();
}

void func_9()
{
	Global_17118.f_134 = 1;
}

void func_10()
{
	unk_0x573691DB812DC8AA(&(Global_99250.f_8634.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xD2E03CEA477E4E3D(&iLocal_0);
	}
	unk_0x227C85DAD96E2942(4);
	unk_0xBE2F8BFF037AA9F4(0);
	unk_0x45E6514714EC6B7E(1);
	unk_0x2F798BA2098FDADE();
}

