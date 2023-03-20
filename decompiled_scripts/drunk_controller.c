#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
	float fLocal_5[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_14 = 0f;
#endregion

void __EntryFunction__()
{
	fLocal_4 = -99f;
	fLocal_14 = -1f;
	unk_0xE3074BC832716971();
	if (unk_0x2170E7BC25114A22(32))
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
	if (Global_36874)
	{
		return 1;
	}
	if (unk_0xE7E9CC62D1C4C0A8(Global_36875))
	{
		return 1;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36684 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_36874)
	{
		return;
	}
	iVar1 = unk_0x84A97C70FFDEC0C8();
	if (Global_36876 > iVar1 || Global_36876 == -1)
	{
		if (unk_0xB0D174BA6F10DF7B())
		{
			return;
		}
		iVar2 = func_12();
		iVar0 = (fLocal_5 - 1);
		while (iVar0 >= 1)
		{
			fLocal_5[iVar0] = fLocal_5[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_5[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_5)
		{
			fVar3 = (fVar3 + fLocal_5[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_7();
		if (Global_36879 != Global_36880)
		{
			fVar6 = (Global_36880 - Global_36879);
			Global_36879 = (Global_36879 + (fVar6 * 0.1f));
			if (unk_0xC3D3EC28F0EB3C6D((Global_36879 - Global_36880)) < 0.01f)
			{
				Global_36879 = Global_36880;
			}
		}
		if (!unk_0xD6F90F044F4C7262())
		{
			unk_0xE3BD8EA16D96EEE6("DRUNK_SHAKE", ((Global_36879 * fVar3) * fVar5));
		}
		if ((unk_0x84A97C70FFDEC0C8() % 100) == 0)
		{
			if (fLocal_14 == -1f)
			{
				fLocal_14 = fVar3;
			}
			unk_0xC7ABAC6C5875E33A(((Global_36879 * fVar3) * fVar5));
			unk_0x3F389A6E630C15FA(((Global_36878 * fVar3) * fVar5));
			fLocal_14 = fVar3;
		}
		if (((Global_36878 * fVar3) * fVar5) < 1f)
		{
			unk_0x213913CB92BC0571(((Global_36878 * fVar3) * fVar5));
		}
		else
		{
			unk_0x213913CB92BC0571(1f);
		}
		if (!unk_0xA820C74956C4B67E())
		{
			unk_0x5A797E4797292294("DRUNK_SHAKE", (((Global_36879 * Global_36873) * fVar3) * fVar5));
		}
		unk_0x877A1B3FE4C47EBC((((Global_36879 * Global_36873) * fVar3) * fVar5));
		if (unk_0xE7E9CC62D1C4C0A8(Global_36875))
		{
			if (unk_0xAB296211D1AEE406(Global_36875))
			{
				unk_0x409F9603FF1E99C4(Global_36875, ((Global_36879 * fVar3) * fVar5));
			}
		}
		if (!unk_0xC55B9553B3EDADE9(&Global_36902) && !unk_0xC55B9553B3EDADE9(&Global_36886))
		{
			unk_0xE3E53903AE9B5BD5(&Global_36886);
			StringCopy(&Global_36902, "", 16);
		}
		unk_0x5E6C3FF6B87209F4();
		if (Global_36881 > 0f)
		{
			if (fLocal_4 != Global_36881)
			{
				if (unk_0x005E42390D75A4CE() != -1)
				{
				}
				else
				{
					unk_0x1D23FE897662571C(&Global_36882, 15f);
					fLocal_4 = Global_36881;
				}
			}
			else
			{
				if (unk_0x005E42390D75A4CE() != -1 && unk_0x9119D0CD5D38AA4A() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0xD21D349FA6C7EDFC(2);
				iVar7 = (Global_36876 - iVar1);
				if (iVar7 <= (Global_36877 / 2))
				{
					bVar8 = false;
					if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (unk_0x821399740730B4B6(unk_0xD5A676B97920D126()))
						{
							bVar8 = true;
						}
					}
					if (func_5(unk_0xD5A676B97920D126()))
					{
						Global_36876 += 1000;
					}
					else if (bVar8)
					{
						Global_36876 += 1000;
					}
					else if (unk_0x005E42390D75A4CE() != -1)
					{
						Global_36876 += 1000;
					}
					else
					{
						if (unk_0x9119D0CD5D38AA4A() != -1)
						{
							unk_0x54F16DF1A23D3CCD((unk_0xBBDA792448DB5A89((Global_36877 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36881 = 0f;
						StringCopy(&Global_36882, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_5)
	{
		fLocal_5[iVar0] = 0f;
		iVar0++;
	}
	fLocal_14 = -1f;
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)
{
	unk_0x3F389A6E630C15FA(0f);
	unk_0x213913CB92BC0571(0f);
	unk_0xC7ABAC6C5875E33A(0f);
	unk_0x1464A250C1DC3A4B(1);
	unk_0x877A1B3FE4C47EBC(0f);
	unk_0x8E55C4F47BB39A5D(1);
	unk_0xD21D349FA6C7EDFC(0);
	if (unk_0x0FE8D1B72C1924FE("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xB3C38A4B84C152BF("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xC55B9553B3EDADE9(&Global_36886))
	{
		if (unk_0x0FE8D1B72C1924FE(&Global_36886))
		{
			unk_0xB3C38A4B84C152BF(&Global_36886);
		}
	}
	if (unk_0xE7E9CC62D1C4C0A8(Global_36875))
	{
		if (unk_0xAB296211D1AEE406(Global_36875))
		{
			unk_0x409F9603FF1E99C4(Global_36875, 0f);
			unk_0x8CF81D76C6590D34(Global_36875, 1);
		}
	}
	if (unk_0x9F1D905A1231896E())
	{
		unk_0x2778FD6505278E7F(0);
	}
	if (bParam0)
	{
		if (unk_0x9119D0CD5D38AA4A() != -1 || unk_0x005E42390D75A4CE() != -1)
		{
			unk_0xFA3D5B1467B19931();
		}
		else if (unk_0xB0D174BA6F10DF7B())
		{
			unk_0xFA3D5B1467B19931();
		}
	}
	Global_36881 = 0f;
	StringCopy(&Global_36882, "", 16);
	StringCopy(&Global_36886, "", 64);
	StringCopy(&Global_36902, "", 16);
	func_4();
}

void func_4()
{
	Global_36874 = 0;
	Global_36875 = 0;
	Global_36876 = 0;
	Global_36877 = 30000;
	Global_36878 = 0f;
	Global_36880 = 0f;
	Global_36879 = 0f;
	Global_36881 = 0f;
	StringCopy(&Global_36882, "", 16);
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
		if (!Global_36711[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36711[iVar0 /*5*/].f_1)
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
	
	fVar0 = 0.1f;
	iVar1 = func_11(unk_0xD5A676B97920D126());
	iVar2 = func_8(unk_0xD5A676B97920D126());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
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
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36711[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36711[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36711[iVar0 /*5*/].f_1)
		{
			return Global_36711[iVar0 /*5*/];
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
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36711[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x84A97C70FFDEC0C8();
	fVar1 = 1f;
	iVar2 = (Global_36876 - iVar0);
	if (iVar2 <= Global_36877)
	{
		if (Global_36876 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36877));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36685[iLocal_3 /*5*/] == 0)
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
	if (unk_0xB529B2A4B7C64D6D(Global_36685[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36685[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x4AAFD43C0AFB7A1A("drunk"))
	{
		unk_0x7FC35FCC666F974E("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36711[iVar0 /*5*/] = func_15();
	Global_36711[iVar0 /*5*/].f_1 = Global_36685[iParam0 /*5*/].f_1;
	Global_36711[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36685[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x0446A34B5E23D747("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36683;
	Global_36683++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36711[iVar0 /*5*/] == -1)
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
	if (!Global_36685[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36685[iParam0 /*5*/].f_1 == unk_0xD5A676B97920D126())
		{
			Global_36906 = 0;
		}
	}
	Global_36685[iParam0 /*5*/] = 13;
	Global_36685[iParam0 /*5*/].f_1 = 0;
	Global_36685[iParam0 /*5*/].f_2 = 0;
	Global_36685[iParam0 /*5*/].f_3 = 0;
	Global_36685[iParam0 /*5*/].f_4 = 0;
	Global_36684 = (Global_36684 - 1);
	if (Global_36684 < 0)
	{
		Global_36684 = 0;
	}
}

void func_18()
{
	if (!Global_36792[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36792[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36792[iParam0 /*5*/] = -1;
	Global_36792[iParam0 /*5*/].f_1 = -1;
	Global_36792[iParam0 /*5*/].f_2 = 6;
	Global_36792[iParam0 /*5*/].f_3 = 0;
	Global_36792[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36792[iParam0 /*5*/].f_2;
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
	if (!Global_36711[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36711[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36711[iLocal_2 /*5*/]);
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
	Global_36711[iParam0 /*5*/] = -1;
	Global_36711[iParam0 /*5*/].f_1 = 0;
	Global_36711[iParam0 /*5*/].f_2 = -1;
	Global_36711[iParam0 /*5*/].f_3 = 0;
	Global_36711[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36711[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36792[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36792[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36792[iVar0 /*5*/])
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
	if (Global_36792[iLocal_1 /*5*/] == 1)
	{
		Global_36792[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36792[iVar0 /*5*/])
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
	unk_0x01DFCA3621B68C4A();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36907 = 0;
	Global_36906 = 0;
	Global_36684 = 0;
	unk_0x69EBA78357A8E292("drunk");
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

