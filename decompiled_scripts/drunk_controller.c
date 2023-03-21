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
	unk_0x330AFE43E1483B3F();
	if (unk_0xBCA819F9975BEDFA(32))
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
	if (Global_36878)
	{
		return 1;
	}
	if (unk_0x0F1BF24ED3B7ED40(Global_36879))
	{
		return 1;
	}
	if (unk_0x82F1A060D8F4583B(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36688 > 0)
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
	
	if (!Global_36878)
	{
		return;
	}
	iVar1 = unk_0x94E3E074F38DF86C();
	if (Global_36880 > iVar1 || Global_36880 == -1)
	{
		if (unk_0xE9E6B5364105A000())
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
		if (Global_36883 != Global_36884)
		{
			fVar6 = (Global_36884 - Global_36883);
			Global_36883 = (Global_36883 + (fVar6 * 0.1f));
			if (unk_0xE851F22ED3518011((Global_36883 - Global_36884)) < 0.01f)
			{
				Global_36883 = Global_36884;
			}
		}
		if (!unk_0x5D865887C1F6B69A())
		{
			unk_0x4037B8BAB7E279CF("DRUNK_SHAKE", ((Global_36883 * fVar3) * fVar5));
		}
		if ((unk_0x94E3E074F38DF86C() % 100) == 0)
		{
			if (fLocal_14 == -1f)
			{
				fLocal_14 = fVar3;
			}
			unk_0xB1C84F480C11C413(((Global_36883 * fVar3) * fVar5));
			unk_0x6BB28C952AFE4B00(((Global_36882 * fVar3) * fVar5));
			fLocal_14 = fVar3;
		}
		if (((Global_36882 * fVar3) * fVar5) < 1f)
		{
			unk_0x53C8D69A01C4E4AD(((Global_36882 * fVar3) * fVar5));
		}
		else
		{
			unk_0x53C8D69A01C4E4AD(1f);
		}
		if (!unk_0x4B4822665CC22060())
		{
			unk_0x6D88E5E936ADD868("DRUNK_SHAKE", (((Global_36883 * Global_36877) * fVar3) * fVar5));
		}
		unk_0x450C8FB521762758((((Global_36883 * Global_36877) * fVar3) * fVar5));
		if (unk_0x0F1BF24ED3B7ED40(Global_36879))
		{
			if (unk_0x0C1C2DD5505D4E04(Global_36879))
			{
				unk_0xB0655D4540B8DF38(Global_36879, ((Global_36883 * fVar3) * fVar5));
			}
		}
		if (!unk_0x9C88EB7B70229335(&Global_36906) && !unk_0x9C88EB7B70229335(&Global_36890))
		{
			unk_0x4A5D4AD0FE6ACF73(&Global_36890);
			StringCopy(&Global_36906, "", 16);
		}
		unk_0xEE7439C2B53B715A();
		if (Global_36885 > 0f)
		{
			if (fLocal_4 != Global_36885)
			{
				if (unk_0x2F149D71502DBBB8() != -1)
				{
				}
				else
				{
					unk_0x4ED7770DC3C5EC4E(&Global_36886, 15f);
					fLocal_4 = Global_36885;
				}
			}
			else
			{
				if (unk_0x2F149D71502DBBB8() != -1 && unk_0xAE38B3AA7D13F9CE() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0xC98DC0B52A9709C5(2);
				iVar7 = (Global_36880 - iVar1);
				if (iVar7 <= (Global_36881 / 2))
				{
					bVar8 = false;
					if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
					{
						if (unk_0x0E6DD0328435009E(unk_0x17B5CC8A8615737D()))
						{
							bVar8 = true;
						}
					}
					if (func_5(unk_0x17B5CC8A8615737D()))
					{
						Global_36880 += 1000;
					}
					else if (bVar8)
					{
						Global_36880 += 1000;
					}
					else if (unk_0x2F149D71502DBBB8() != -1)
					{
						Global_36880 += 1000;
					}
					else
					{
						if (unk_0xAE38B3AA7D13F9CE() != -1)
						{
							unk_0x4A4DD903571631E7((unk_0xBBDA792448DB5A89((Global_36881 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36885 = 0f;
						StringCopy(&Global_36886, "", 16);
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
	unk_0x6BB28C952AFE4B00(0f);
	unk_0x53C8D69A01C4E4AD(0f);
	unk_0xB1C84F480C11C413(0f);
	unk_0xF1C53F353A5EB55F(1);
	unk_0x450C8FB521762758(0f);
	unk_0xFD6E64AFF9352C00(1);
	unk_0xC98DC0B52A9709C5(0);
	if (unk_0x4E1850F5FF023071("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xB8CAC5F3774894A1("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x9C88EB7B70229335(&Global_36890))
	{
		if (unk_0x4E1850F5FF023071(&Global_36890))
		{
			unk_0xB8CAC5F3774894A1(&Global_36890);
		}
	}
	if (unk_0x0F1BF24ED3B7ED40(Global_36879))
	{
		if (unk_0x0C1C2DD5505D4E04(Global_36879))
		{
			unk_0xB0655D4540B8DF38(Global_36879, 0f);
			unk_0x6E850356BCA62F5C(Global_36879, 1);
		}
	}
	if (unk_0xE77D3AC9C1449801())
	{
		unk_0x011AE968D1EA959B(0);
	}
	if (bParam0)
	{
		if (unk_0xAE38B3AA7D13F9CE() != -1 || unk_0x2F149D71502DBBB8() != -1)
		{
			unk_0xC1AB7E5821CAB578();
		}
		else if (unk_0xE9E6B5364105A000())
		{
			unk_0xC1AB7E5821CAB578();
		}
	}
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
	StringCopy(&Global_36890, "", 64);
	StringCopy(&Global_36906, "", 16);
	func_4();
}

void func_4()
{
	Global_36878 = 0;
	Global_36879 = 0;
	Global_36880 = 0;
	Global_36881 = 30000;
	Global_36882 = 0f;
	Global_36884 = 0f;
	Global_36883 = 0f;
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
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
		if (!Global_36715[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36715[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0x17B5CC8A8615737D());
	iVar2 = func_8(unk_0x17B5CC8A8615737D());
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
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36715[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36715[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36715[iVar0 /*5*/].f_1)
		{
			return Global_36715[iVar0 /*5*/];
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
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36715[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x94E3E074F38DF86C();
	fVar1 = 1f;
	iVar2 = (Global_36880 - iVar0);
	if (iVar2 <= Global_36881)
	{
		if (Global_36880 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36881));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36689[iLocal_3 /*5*/] == 0)
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
	if (unk_0xA929B2923D14E2F8(Global_36689[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36689[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x32B1F051FF487881("drunk"))
	{
		unk_0xFCDDC89C28E82BB4("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36715[iVar0 /*5*/] = func_15();
	Global_36715[iVar0 /*5*/].f_1 = Global_36689[iParam0 /*5*/].f_1;
	Global_36715[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36689[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x07481837BFD9C1CD("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36687;
	Global_36687++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36715[iVar0 /*5*/] == -1)
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
	if (!Global_36689[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36689[iParam0 /*5*/].f_1 == unk_0x17B5CC8A8615737D())
		{
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688 = (Global_36688 - 1);
	if (Global_36688 < 0)
	{
		Global_36688 = 0;
	}
}

void func_18()
{
	if (!Global_36796[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36796[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36796[iParam0 /*5*/] = -1;
	Global_36796[iParam0 /*5*/].f_1 = -1;
	Global_36796[iParam0 /*5*/].f_2 = 6;
	Global_36796[iParam0 /*5*/].f_3 = 0;
	Global_36796[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36796[iParam0 /*5*/].f_2;
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
	if (!Global_36715[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36715[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36715[iLocal_2 /*5*/]);
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
	Global_36715[iParam0 /*5*/] = -1;
	Global_36715[iParam0 /*5*/].f_1 = 0;
	Global_36715[iParam0 /*5*/].f_2 = -1;
	Global_36715[iParam0 /*5*/].f_3 = 0;
	Global_36715[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36715[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36796[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/])
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
	if (Global_36796[iLocal_1 /*5*/] == 1)
	{
		Global_36796[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36796[iVar0 /*5*/])
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
	unk_0x921053BAF754303D();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36911 = 0;
	Global_36910 = 0;
	Global_36688 = 0;
	unk_0x414A9320CE716942("drunk");
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

