#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
#endregion

void __EntryFunction__()
{
	fLocal_4 = -99f;
	unk_0x69BC3CC82D2BC993();
	if (unk_0x4B4BD87E3D30C50D(32))
	{
		func_30();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16)
		{
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16)
		{
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5)
		{
			iLocal_3 = 0;
		}
		if (!func_1())
		{
			func_30();
		}
	}
}

int func_1()
{
	if (Global_36716)
	{
		return 1;
	}
	if (unk_0x06F36936289C5EC8(Global_36717))
	{
		return 1;
	}
	if (unk_0xB1A77D5C890711F9(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36526 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	
	if (!Global_36716)
	{
		return;
	}
	iVar0 = unk_0x3EAC9995EC220C5A();
	if (Global_36718 > iVar0 || Global_36718 == -1)
	{
		if (unk_0xA153A26DF49EBCC0())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_36721 != Global_36722)
		{
			fVar3 = (Global_36722 - Global_36721);
			Global_36721 = (Global_36721 + (fVar3 * 0.1f));
			if (unk_0x092B928D30C0282D((Global_36721 - Global_36722)) < 0.01f)
			{
				Global_36721 = Global_36722;
			}
		}
		if (!unk_0x48A6B27757CB88C0())
		{
			unk_0x2D868CE91F0EA692("DRUNK_SHAKE", ((Global_36721 * fVar1) * fVar2));
		}
		if ((unk_0x3EAC9995EC220C5A() % 100) == 0)
		{
			unk_0x64E4615A78E2227F(((Global_36721 * fVar1) * fVar2));
			unk_0xF92FDE77F72784E9(((Global_36720 * fVar1) * fVar2));
		}
		if (((Global_36720 * fVar1) * fVar2) < 1f)
		{
			unk_0x04581C3F6B94D241(((Global_36720 * fVar1) * fVar2));
		}
		else
		{
			unk_0x04581C3F6B94D241(1f);
		}
		if (!unk_0xD699D24213F6BAC6())
		{
			unk_0x8F861E9BCFB27699("DRUNK_SHAKE", (((Global_36721 * Global_36715) * fVar1) * fVar2));
		}
		unk_0x22115522B261A38C((((Global_36721 * Global_36715) * fVar1) * fVar2));
		if (unk_0x06F36936289C5EC8(Global_36717))
		{
			if (unk_0x2DC4E8BAE3350617(Global_36717))
			{
				unk_0x715907B2DBB7253B(Global_36717, ((Global_36721 * fVar1) * fVar2));
			}
		}
		if (!unk_0x0AAC2160036975D9(&Global_36744) && !unk_0x0AAC2160036975D9(&Global_36728))
		{
			unk_0xCAEDD1A8E831AD36(&Global_36728);
			StringCopy(&Global_36744, "", 16);
		}
		unk_0xA8407D43448CDD11();
		if (Global_36723 > 0f)
		{
			if (fLocal_4 != Global_36723)
			{
				if (unk_0x6B7B0E2581641469() != -1)
				{
				}
				else
				{
					unk_0x4DCA9AE0E050BB03(&Global_36724, 15f);
					fLocal_4 = Global_36723;
				}
			}
			else
			{
				if (unk_0x6B7B0E2581641469() != -1 && unk_0x452ACA0B680BF83A() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x5FEC5EA839B95ABE(2);
				iVar4 = (Global_36718 - iVar0);
				if (iVar4 <= (Global_36719 / 2))
				{
					bVar5 = false;
					if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
					{
						if (unk_0x19D0201F2EBC77D1(unk_0x77F050A399DB77ED()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0x77F050A399DB77ED()))
					{
						Global_36718 += 1000;
					}
					else if (bVar5)
					{
						Global_36718 += 1000;
					}
					else if (unk_0x6B7B0E2581641469() != -1)
					{
						Global_36718 += 1000;
					}
					else
					{
						if (unk_0x452ACA0B680BF83A() != -1)
						{
							unk_0xB0F6FBA350C8E322((unk_0xBBDA792448DB5A89((Global_36719 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36723 = 0f;
						StringCopy(&Global_36724, "", 16);
					}
				}
			}
		}
		return;
	}
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)
{
	unk_0xF92FDE77F72784E9(0f);
	unk_0x04581C3F6B94D241(0f);
	unk_0x64E4615A78E2227F(0f);
	unk_0x144C3925583A3494(1);
	unk_0x22115522B261A38C(0f);
	unk_0xED1DFAAAEBA8593A(1);
	unk_0x5FEC5EA839B95ABE(0);
	if (unk_0x0CB2A341EC5513A7("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xE0DB271DC0AEA972("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x0AAC2160036975D9(&Global_36728))
	{
		if (unk_0x0CB2A341EC5513A7(&Global_36728))
		{
			unk_0xE0DB271DC0AEA972(&Global_36728);
		}
	}
	if (unk_0x06F36936289C5EC8(Global_36717))
	{
		if (unk_0x2DC4E8BAE3350617(Global_36717))
		{
			unk_0x715907B2DBB7253B(Global_36717, 0f);
			unk_0x2BD68B7E4544BD1E(Global_36717, 1);
		}
	}
	if (unk_0x502162EB21ED7CB7())
	{
		unk_0x8DA6EAF4800D8D82(0);
	}
	if (bParam0)
	{
		if (unk_0x452ACA0B680BF83A() != -1 || unk_0x6B7B0E2581641469() != -1)
		{
			unk_0x3127460861FB17B2();
		}
		else if (unk_0xA153A26DF49EBCC0())
		{
			unk_0x3127460861FB17B2();
		}
	}
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
	StringCopy(&Global_36728, "", 64);
	StringCopy(&Global_36744, "", 16);
	func_4();
}

void func_4()
{
	Global_36716 = 0;
	Global_36717 = 0;
	Global_36718 = 0;
	Global_36719 = 30000;
	Global_36720 = 0f;
	Global_36722 = 0f;
	Global_36721 = 0f;
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
}

int func_5(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_6(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_6(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_7()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	iVar1 = func_11(unk_0x77F050A399DB77ED());
	iVar2 = func_8(unk_0x77F050A399DB77ED());
	if (iVar2 == 0)
	{
		if (iVar1 != 0)
		{
			fVar0 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 != 0)
	{
		fVar0 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36553[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
		{
			return Global_36553[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36553[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x3EAC9995EC220C5A();
	fVar1 = 1f;
	iVar2 = (Global_36718 - iVar0);
	if (iVar2 <= Global_36719)
	{
		if (Global_36718 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36719));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36527[iLocal_3 /*5*/] == 0)
	{
		func_14(iLocal_3);
	}
}

void func_14(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0x0B6E83A9A7ED3EBA(Global_36527[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36527[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0xF93DA38375EB3977("drunk"))
	{
		unk_0x507887ECD0989471("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36553[iVar0 /*5*/] = func_15();
	Global_36553[iVar0 /*5*/].f_1 = Global_36527[iParam0 /*5*/].f_1;
	Global_36553[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36527[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x2C85BCB989483284("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36525;
	Global_36525++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0x77F050A399DB77ED())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

void func_18()
{
	if (!Global_36634[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36634[iLocal_1 /*5*/].f_1 == 0)
		{
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36634[iParam0 /*5*/] = -1;
	Global_36634[iParam0 /*5*/].f_1 = -1;
	Global_36634[iParam0 /*5*/].f_2 = 6;
	Global_36634[iParam0 /*5*/].f_3 = 0;
	Global_36634[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36634[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_36553[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36553[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36553[iLocal_2 /*5*/]);
		}
		else
		{
			func_19(iVar0);
		}
	}
}

void func_22(int iParam0)
{
	int iVar0;
	
	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_23(iVar0);
}

void func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36553[iParam0 /*5*/] = -1;
	Global_36553[iParam0 /*5*/].f_1 = 0;
	Global_36553[iParam0 /*5*/].f_2 = -1;
	Global_36553[iParam0 /*5*/].f_3 = 0;
	Global_36553[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0)
{
	func_29(iParam0);
	func_26(iParam0);
}

void func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36634[iVar0 /*5*/].f_1)
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_28()
{
	if (Global_36634[iLocal_1 /*5*/] == 1)
	{
		Global_36634[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36634[iVar0 /*5*/])
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

void func_30()
{
	func_31();
	if (!iLocal_0)
	{
		func_3(1);
	}
	unk_0x2F798BA2098FDADE();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36749 = 0;
	Global_36748 = 0;
	Global_36526 = 0;
	unk_0x6F86F66DADFA5F86("drunk");
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_19(iVar0);
		iVar0++;
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(iVar0);
		iVar0++;
	}
}

