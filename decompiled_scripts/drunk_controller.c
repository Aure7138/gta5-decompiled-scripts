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
	unk_0xB64A6F2B8046CEF8();
	if (unk_0x2EC83C7ACA23E8A4(32))
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
	if (Global_36872)
	{
		return 1;
	}
	if (unk_0x0D2E3F017CBCB8A8(Global_36873))
	{
		return 1;
	}
	if (unk_0xA96867DD0A63C62C(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36682 > 0)
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
	
	if (!Global_36872)
	{
		return;
	}
	iVar0 = unk_0xDF658EB6CA91DFBC();
	if (Global_36874 > iVar0 || Global_36874 == -1)
	{
		if (unk_0xC740F8182E7E9681())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_36877 != Global_36878)
		{
			fVar3 = (Global_36878 - Global_36877);
			Global_36877 = (Global_36877 + (fVar3 * 0.1f));
			if (unk_0x7466327978A6A24C((Global_36877 - Global_36878)) < 0.01f)
			{
				Global_36877 = Global_36878;
			}
		}
		if (!unk_0x9CE7F23542F47D14())
		{
			unk_0xF739099EF2A2F292("DRUNK_SHAKE", ((Global_36877 * fVar1) * fVar2));
		}
		if ((unk_0xDF658EB6CA91DFBC() % 100) == 0)
		{
			unk_0xDD90E0980BB277E2(((Global_36877 * fVar1) * fVar2));
			unk_0x828E2FE4BF9B3DDF(((Global_36876 * fVar1) * fVar2));
		}
		if (((Global_36876 * fVar1) * fVar2) < 1f)
		{
			unk_0x5001EA127FDD8208(((Global_36876 * fVar1) * fVar2));
		}
		else
		{
			unk_0x5001EA127FDD8208(1f);
		}
		if (!unk_0x23721F933285401A())
		{
			unk_0x613AC5736DC3F029("DRUNK_SHAKE", (((Global_36877 * Global_36871) * fVar1) * fVar2));
		}
		unk_0x5A1DDA7C7C1FAEA9((((Global_36877 * Global_36871) * fVar1) * fVar2));
		if (unk_0x0D2E3F017CBCB8A8(Global_36873))
		{
			if (unk_0xB9A03175F1C0EC4E(Global_36873))
			{
				unk_0x95CDEE1B0E45B05E(Global_36873, ((Global_36877 * fVar1) * fVar2));
			}
		}
		if (!unk_0x509383441597090D(&Global_36900) && !unk_0x509383441597090D(&Global_36884))
		{
			unk_0xC94C39C53546E775(&Global_36884);
			StringCopy(&Global_36900, "", 16);
		}
		unk_0xC24506E2E3181933();
		if (Global_36879 > 0f)
		{
			if (fLocal_4 != Global_36879)
			{
				if (unk_0x5AFA3A506B8EFE7E() != -1)
				{
				}
				else
				{
					unk_0x921948E3E12DAFB6(&Global_36880, 15f);
					fLocal_4 = Global_36879;
				}
			}
			else
			{
				if (unk_0x5AFA3A506B8EFE7E() != -1 && unk_0x8E565AC3E8559D14() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x88E94C2B463D2CE0(2);
				iVar4 = (Global_36874 - iVar0);
				if (iVar4 <= (Global_36875 / 2))
				{
					bVar5 = false;
					if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
					{
						if (unk_0x2C93AFAEAA97C570(unk_0xA0081090911D13E5()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0xA0081090911D13E5()))
					{
						Global_36874 += 1000;
					}
					else if (bVar5)
					{
						Global_36874 += 1000;
					}
					else if (unk_0x5AFA3A506B8EFE7E() != -1)
					{
						Global_36874 += 1000;
					}
					else
					{
						if (unk_0x8E565AC3E8559D14() != -1)
						{
							unk_0x9F27FAF28742F0F5((unk_0xBBDA792448DB5A89((Global_36875 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36879 = 0f;
						StringCopy(&Global_36880, "", 16);
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
	unk_0x828E2FE4BF9B3DDF(0f);
	unk_0x5001EA127FDD8208(0f);
	unk_0xDD90E0980BB277E2(0f);
	unk_0x684D46085CBC939C(1);
	unk_0x5A1DDA7C7C1FAEA9(0f);
	unk_0x84BED6C7E8B0DD06(1);
	unk_0x88E94C2B463D2CE0(0);
	if (unk_0x6DEB8F88FFE09057("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x7C1793252FA472B6("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x509383441597090D(&Global_36884))
	{
		if (unk_0x6DEB8F88FFE09057(&Global_36884))
		{
			unk_0x7C1793252FA472B6(&Global_36884);
		}
	}
	if (unk_0x0D2E3F017CBCB8A8(Global_36873))
	{
		if (unk_0xB9A03175F1C0EC4E(Global_36873))
		{
			unk_0x95CDEE1B0E45B05E(Global_36873, 0f);
			unk_0x8A33BD71F3FB5A6A(Global_36873, 1);
		}
	}
	if (unk_0xD7BD59EF8A498940())
	{
		unk_0x638B6A0DAE124D02(0);
	}
	if (bParam0)
	{
		if (unk_0x8E565AC3E8559D14() != -1 || unk_0x5AFA3A506B8EFE7E() != -1)
		{
			unk_0x5A58126D345E3A13();
		}
		else if (unk_0xC740F8182E7E9681())
		{
			unk_0x5A58126D345E3A13();
		}
	}
	Global_36879 = 0f;
	StringCopy(&Global_36880, "", 16);
	StringCopy(&Global_36884, "", 64);
	StringCopy(&Global_36900, "", 16);
	func_4();
}

void func_4()
{
	Global_36872 = 0;
	Global_36873 = 0;
	Global_36874 = 0;
	Global_36875 = 30000;
	Global_36876 = 0f;
	Global_36878 = 0f;
	Global_36877 = 0f;
	Global_36879 = 0f;
	StringCopy(&Global_36880, "", 16);
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
		if (!Global_36709[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36709[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0xA0081090911D13E5());
	iVar2 = func_8(unk_0xA0081090911D13E5());
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
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36709[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36709[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36709[iVar0 /*5*/].f_1)
		{
			return Global_36709[iVar0 /*5*/];
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
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36709[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xDF658EB6CA91DFBC();
	fVar1 = 1f;
	iVar2 = (Global_36874 - iVar0);
	if (iVar2 <= Global_36875)
	{
		if (Global_36874 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36875));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36683[iLocal_3 /*5*/] == 0)
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
	if (unk_0x912AD5A10E7633F0(Global_36683[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36683[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x71DF55A4DE7565D5("drunk"))
	{
		unk_0xE568CE38FF8C1318("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36709[iVar0 /*5*/] = func_15();
	Global_36709[iVar0 /*5*/].f_1 = Global_36683[iParam0 /*5*/].f_1;
	Global_36709[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36683[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x3CFCF109465A1DA6("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36681;
	Global_36681++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36709[iVar0 /*5*/] == -1)
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
	if (!Global_36683[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36683[iParam0 /*5*/].f_1 == unk_0xA0081090911D13E5())
		{
			Global_36904 = 0;
		}
	}
	Global_36683[iParam0 /*5*/] = 13;
	Global_36683[iParam0 /*5*/].f_1 = 0;
	Global_36683[iParam0 /*5*/].f_2 = 0;
	Global_36683[iParam0 /*5*/].f_3 = 0;
	Global_36683[iParam0 /*5*/].f_4 = 0;
	Global_36682 = (Global_36682 - 1);
	if (Global_36682 < 0)
	{
		Global_36682 = 0;
	}
}

void func_18()
{
	if (!Global_36790[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36790[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36790[iParam0 /*5*/] = -1;
	Global_36790[iParam0 /*5*/].f_1 = -1;
	Global_36790[iParam0 /*5*/].f_2 = 6;
	Global_36790[iParam0 /*5*/].f_3 = 0;
	Global_36790[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36790[iParam0 /*5*/].f_2;
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
	if (!Global_36709[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36709[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36709[iLocal_2 /*5*/]);
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
	Global_36709[iParam0 /*5*/] = -1;
	Global_36709[iParam0 /*5*/].f_1 = 0;
	Global_36709[iParam0 /*5*/].f_2 = -1;
	Global_36709[iParam0 /*5*/].f_3 = 0;
	Global_36709[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36709[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36790[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36790[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36790[iVar0 /*5*/])
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
	if (Global_36790[iLocal_1 /*5*/] == 1)
	{
		Global_36790[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36790[iVar0 /*5*/])
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
	unk_0x78C587487CD40B92();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36905 = 0;
	Global_36904 = 0;
	Global_36682 = 0;
	unk_0x0B555472F86DC785("drunk");
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

