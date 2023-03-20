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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = 0;
	struct<3> Local_107[2];
	var uLocal_114[2] = { 0, 0 };
	int iLocal_117[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	var uVar1;
	struct<3> Var2;
	int iVar5;
	
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
	iLocal_17 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xB1A77D5C890711F9(joaat("launcher_carwash")) > 1)
	{
		unk_0x2F798BA2098FDADE();
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		unk_0x69BC3CC82D2BC993();
		unk_0x2A1F1A3180086B2E(0);
	}
	else if (unk_0x4B4BD87E3D30C50D(99))
	{
		func_69();
	}
	if (Global_2621550)
	{
		if (unk_0xB1A77D5C890711F9(-949873222) == 0)
		{
			unk_0xB83075ADFF6A3A01(-949873222);
			while (!unk_0xCFA460CFA5E219DE(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0x2F798BA2098FDADE();
	}
	if (func_68(unk_0x77F050A399DB77ED()))
	{
	}
	func_62();
	while (true)
	{
		func_68(unk_0x77F050A399DB77ED());
		if (func_61(unk_0x77F050A399DB77ED(), Var2, 0) > (100f + 20f))
		{
			func_69();
		}
		bVar0 = false;
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			uVar1 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			bVar0 = (func_58(uVar1) || func_57(uVar1));
			bLocal_106 = unk_0x301CF213B3CB7FE4(uVar1);
			func_56(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40.f_0)
		{
			func_55(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_69();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_50(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_43(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_40(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x21DB261DC1511E40() && uParam1->f_16 == 0))
						{
							func_39(uParam1, 6);
						}
						else if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
						{
							func_39(uParam1, 8);
						}
						else if (bParam2)
						{
							func_39(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_39(uParam1, 2);
						}
						else if (func_29() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_39(uParam1, 1);
						}
						else if (func_24())
						{
							func_39(uParam1, 7);
						}
						else
						{
							func_39(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_23(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_6);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_12(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || func_29() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_1);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_3);
			}
			if ((func_17(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_5);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_4);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_11())
				{
					func_21(uParam1, uParam1->f_7);
				}
				else
				{
					func_21(uParam1, uParam1->f_8);
				}
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || func_8(iParam0[uParam1->f_12 /*24*/]))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0xE494527A450B8456(2, 51);
			unk_0x6E20845D23D3DFD4(0, 101, 1);
			func_7();
			if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
			{
				func_39(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_39(uParam1, 2);
				return 0;
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			if (Global_67968)
			{
				return 0;
			}
			if (func_4(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || func_3(unk_0x77F050A399DB77ED(), 0) != -1)
				{
					func_39(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x21DB261DC1511E40() && uParam1->f_16 == 0))
			{
				func_39(uParam1, 6);
				return 0;
			}
			if (func_24())
			{
				func_39(uParam1, 7);
				return 0;
			}
			if (func_29() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_39(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_12(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
			}
			if (unk_0x4F297F09162EFB5D() || unk_0x01206DF9425C08CA())
			{
				return 0;
			}
			if (unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()))
			{
				if ((unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED()) || unk_0xDA04659F89FF1D4A(unk_0x77F050A399DB77ED())) || unk_0xD993B9D8A7A80B4F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if ((unk_0x256BC2C8AC8ACE89(unk_0x77F050A399DB77ED()) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x7124E7048E26B0FA(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x9D0ECC9F59697B03(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xFEFE6C2D03E7A996(unk_0x77F050A399DB77ED()) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x618071F6827C232E(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_8(iParam0[uParam1->f_12 /*24*/]))
				{
					func_39(uParam1, 9);
				}
				else
				{
					func_39(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_23(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_39(uParam1, 0);
				return 1;
			}
			unk_0x4ACCE973F9C3CA3B(1);
			unk_0x2D170B30FD0AB4FC(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 20f, 0);
			if (!unk_0x0AAC2160036975D9((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0x507887ECD0989471((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0xF93DA38375EB3977((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_7();
					if (func_68(unk_0x77F050A399DB77ED()))
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !Global_69317)
						{
							func_2(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0x2C5F5E306C098BDB(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0);
						}
					}
					unk_0xE494527A450B8456(2, 51);
					unk_0x507887ECD0989471((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x6E20845D23D3DFD4(0, 101, 1);
					unk_0x6E20845D23D3DFD4(0, 75, 1);
					unk_0x6E20845D23D3DFD4(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x16AA81661A0624FB(250);
				}
				if (unk_0xF93DA38375EB3977((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x2CC731F9E664299E())
						{
							if (func_68(unk_0x77F050A399DB77ED()))
							{
								if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !Global_69317)
								{
									func_2(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0x2C5F5E306C098BDB(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0);
								}
							}
							unk_0xE494527A450B8456(2, 51);
							unk_0x6E20845D23D3DFD4(0, 101, 1);
							unk_0x6E20845D23D3DFD4(0, 75, 1);
							unk_0x6E20845D23D3DFD4(0, 23, 1);
							func_7();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0x2C85BCB989483284((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x6E20845D23D3DFD4(0, 71, 1);
	unk_0x6E20845D23D3DFD4(0, 72, 1);
	unk_0x6E20845D23D3DFD4(0, 76, 1);
	unk_0x6E20845D23D3DFD4(0, 73, 1);
	unk_0x6E20845D23D3DFD4(0, 59, 1);
	unk_0x6E20845D23D3DFD4(0, 60, 1);
	if (bParam5)
	{
		unk_0x6E20845D23D3DFD4(0, 75, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x6E20845D23D3DFD4(0, 69, 1);
		unk_0x6E20845D23D3DFD4(0, 70, 1);
		unk_0x6E20845D23D3DFD4(0, 68, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 74, 1);
	unk_0x6E20845D23D3DFD4(0, 86, 1);
	unk_0x6E20845D23D3DFD4(0, 81, 1);
	unk_0x6E20845D23D3DFD4(0, 82, 1);
	unk_0x6E20845D23D3DFD4(0, 138, 1);
	unk_0x6E20845D23D3DFD4(0, 136, 1);
	unk_0x6E20845D23D3DFD4(0, 114, 1);
	unk_0x6E20845D23D3DFD4(0, 107, 1);
	unk_0x6E20845D23D3DFD4(0, 110, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 87, 1);
	unk_0x6E20845D23D3DFD4(0, 88, 1);
	unk_0x6E20845D23D3DFD4(0, 113, 1);
	unk_0x6E20845D23D3DFD4(0, 115, 1);
	unk_0x6E20845D23D3DFD4(0, 116, 1);
	unk_0x6E20845D23D3DFD4(0, 117, 1);
	unk_0x6E20845D23D3DFD4(0, 118, 1);
	unk_0x6E20845D23D3DFD4(0, 119, 1);
	unk_0x6E20845D23D3DFD4(0, 131, 1);
	unk_0x6E20845D23D3DFD4(0, 132, 1);
	unk_0x6E20845D23D3DFD4(0, 123, 1);
	unk_0x6E20845D23D3DFD4(0, 126, 1);
	unk_0x6E20845D23D3DFD4(0, 129, 1);
	unk_0x6E20845D23D3DFD4(0, 130, 1);
	unk_0x6E20845D23D3DFD4(0, 133, 1);
	unk_0x6E20845D23D3DFD4(0, 134, 1);
	unk_0xC6CCD4555A546BC0();
	if ((unk_0x3EAC9995EC220C5A() - Global_29) > 500)
	{
		unk_0x29666BB73419DB0E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3EAC9995EC220C5A();
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0x092B928D30C0282D(unk_0x2AA05370067DC5AC(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		if (unk_0xB42592B9FFEB5EDE(iParam0, iParam1))
		{
			uVar0 = unk_0xF8D66A34AF0C53A5(iParam0, iParam1);
			if (unk_0x1F2158D615BC4B25(uVar0))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
				{
					iVar1 = unk_0xFCD89114F33612D0(unk_0xDF1398076E26B0E4(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x9A2BADF8B8CE0E2A(iVar0, iVar3))
						{
							if (unk_0x07A8845F7F106A38(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_4(bool bParam0)
{
	if (bParam0)
	{
		if (func_6())
		{
			return 1;
		}
	}
	if (func_5(14))
	{
		return 1;
	}
	return 0;
}

bool func_5(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_6()
{
	if (Global_98197)
	{
		return 1;
	}
	if (!func_5(14) && unk_0xB1A77D5C890711F9(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_7()
{
	Global_17118.f_6 = 1;
}

int func_8(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x77F050A399DB77ED();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_10(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		iVar3 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (func_68(iVar3))
		{
			Var0 = { unk_0x5F8CECBE07C70F34(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0x0417D4198AF0722D(iVar4) };
	if (func_9(uParam0->f_12, Var0) > unk_0xD0FFB162F40A139C(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_9(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

int func_10(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	var uVar0;
	
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		return unk_0x6BCD73ABAC0921B2(uVar0, 1119092736);
	}
	return unk_0x6BCD73ABAC0921B2(unk_0x77F050A399DB77ED(), 1119092736);
}

int func_12(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x0AAC2160036975D9(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x8E9825258F5C145C())
	{
		unk_0x4ACCE973F9C3CA3B(1);
		func_13(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_13(var uParam0, var uParam1)
{
	unk_0xE6F728F2901F2AEE(uParam0);
	unk_0xA50C1D6E503AA51E(uParam1);
	unk_0xF34A1D3B3034CC8A(0, 1, 1, -1);
}

int func_14(var uParam0)
{
	if (unk_0x0AAC2160036975D9(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0x8E9825258F5C145C())
	{
		return 0;
	}
	if (unk_0x35D1CAD6ADAB6491(*uParam0, uParam0->f_14) || unk_0x35D1CAD6ADAB6491(uParam0->f_2, uParam0->f_14))
	{
		return func_16(uParam0->f_14, uParam0->f_15);
	}
	return func_15(uParam0->f_14);
}

var func_15(var uParam0)
{
	unk_0xBA89110203C50939(uParam0);
	return unk_0x62881E3F5F311834(0);
}

var func_16(var uParam0, var uParam1)
{
	unk_0xBA89110203C50939(uParam0);
	unk_0xA50C1D6E503AA51E(uParam1);
	return unk_0x62881E3F5F311834(0);
}

bool func_17(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			return 1;
		}
		if (func_3(unk_0x77F050A399DB77ED(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_20(unk_0x77F050A399DB77ED(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_18(uParam0->f_16, 2f) };
	return !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_18(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_19(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_19(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_20(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_21(var uParam0, var uParam1)
{
	if (unk_0x0AAC2160036975D9(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x8E9825258F5C145C())
	{
		unk_0x4ACCE973F9C3CA3B(1);
		func_22(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_22(var uParam0)
{
	unk_0xE6F728F2901F2AEE(uParam0);
	unk_0xF34A1D3B3034CC8A(0, 1, 1, -1);
}

void func_23(var uParam0)
{
	if (func_14(uParam0))
	{
		unk_0x4ACCE973F9C3CA3B(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_24()
{
	int iVar0;
	
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
	if (unk_0x01CB02EE3F3F9481(iVar0))
	{
		return 1;
	}
	if (func_28(iVar0))
	{
		return 1;
	}
	if (func_25(iVar0, 3))
	{
		return 1;
	}
	return !unk_0x968EA16107097324(iVar0, 0);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_26(iParam0))
	{
		iVar0 = 0;
		if (unk_0x60E2C281E1F936F4(iParam0, 0, 0) && unk_0x60E2C281E1F936F4(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x60E2C281E1F936F4(iParam0, 4, 0) && unk_0x60E2C281E1F936F4(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0x60E2C281E1F936F4(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0x60E2C281E1F936F4(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0x60E2C281E1F936F4(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0x60E2C281E1F936F4(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	if (func_27(iParam0))
	{
		if (unk_0x968EA16107097324(iParam0, 0))
		{
			if (!unk_0x01CB02EE3F3F9481(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			return 1;
		}
		else if (!unk_0x968EA16107097324(iParam0, 0))
		{
			if (!unk_0x01CB02EE3F3F9481(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	if (unk_0x4C779B19E6DDCDA2())
	{
		return func_36(unk_0x8ACD527A7E574590());
	}
	switch (func_31())
	{
		case 2:
			return func_30(2);
		
		case 0:
			return func_30(0);
		
		case 1:
			return func_30(1);
		
		default:
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_52834[iParam0];
}

int func_31()
{
	func_32();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_32()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_35(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_34(unk_0x77F050A399DB77ED());
			if (func_33(iVar0) && (!func_5(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_33(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = func_37(iParam0);
	return uVar0;
}

int func_37(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return unk_0xC4C42E35A88DDB16(-1);
		}
		else if (func_38(iParam0))
		{
			return Global_1586488[iParam0 /*408*/].f_192.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_2426494.f_1, iParam0);
	}
	return 1;
}

void func_39(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_23(uParam0);
}

bool func_40(var uParam0)
{
	func_68(unk_0x77F050A399DB77ED());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			return 0;
		}
		if (func_3(unk_0x77F050A399DB77ED(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_20(unk_0x77F050A399DB77ED(), uParam0->f_1, uParam0->f_10);
}

bool func_41()
{
	return unk_0x3EAC9995EC220C5A() <= Global_17257.f_5745 + 100;
}

bool func_42(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_49())
		{
			return 0;
		}
	}
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (unk_0x01206DF9425C08CA())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (Global_55653)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_44(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	if (func_47(iParam0))
	{
		return 1;
	}
	if (func_45(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_46(iParam0, 9);
	}
	return 0;
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_8.f_4, iParam1);
}

int func_47(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_1608060[iVar0 /*106*/].f_1, 0);
	}
	return 0;
}

int func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	return 1;
}

void func_50(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_52(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_51(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_51(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar1 = (360f / unk_0xBBDA792448DB5A89(iParam8));
	Var2 = { Param0 };
	Var5 = { Param0 };
	fVar8 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (unk_0x0BADBFA3B172435F((fVar8 - fVar1)) * fParam3));
	Var2.f_1 = (Var2.f_1 + (unk_0xD0FFB162F40A139C((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		Var5 = { Param0 };
		Var5.f_0 = (Var5.f_0 + (unk_0x0BADBFA3B172435F(fVar8) * fParam3));
		Var5.f_1 = (Var5.f_1 + (unk_0xD0FFB162F40A139C(fVar8) * fParam3));
		unk_0x6C91B546289344DD(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_53(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_53(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { func_19(Param3 - Param0) };
	Var3 = { func_54(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x6C91B546289344DD(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6C91B546289344DD(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x6C91B546289344DD(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6C91B546289344DD(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_54(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_55(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_40(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (unk_0x3EAC9995EC220C5A() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = unk_0x4D5946E59CDCA8C1(Local_107[iParam0 /*3*/], Local_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0x8DF1E9C686542134(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0x1F2158D615BC4B25(uVar1))
				{
					if (unk_0xDD21A3DB256904E7(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = unk_0x3EAC9995EC220C5A() + 250;
	}
}

void func_56(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_57(int iParam0)
{
	if (!unk_0xAEA8A39798337671(unk_0xDF1398076E26B0E4(uParam0)))
	{
		return 1;
	}
	if (unk_0x66CDC04ACFCBEA94(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x66CDC04ACFCBEA94(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x66CDC04ACFCBEA94(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x66CDC04ACFCBEA94(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x5265771D79F24A99(iParam0, 1))
	{
		if (unk_0x362684AE59B8BD46(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_27(uParam0))
	{
		return 0;
	}
	if (!unk_0x301CF213B3CB7FE4(uParam0))
	{
		return 1;
	}
	if (unk_0x0F3BABBA4CB4778D(uParam0))
	{
		return 1;
	}
	if (!unk_0xAEA8A39798337671(unk_0xDF1398076E26B0E4(uParam0)))
	{
		return 1;
	}
	if (unk_0x01CB02EE3F3F9481(iParam0))
	{
		return 1;
	}
	if (func_59(iParam0))
	{
		return 1;
	}
	unk_0x2C8CA5222767F3E4(unk_0xDF1398076E26B0E4(iParam0), &Var0, &Var3);
	if (unk_0x092B928D30C0282D((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0x092B928D30C0282D((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_69317)
	{
		if (!unk_0xE8BD4B74271ABDCC(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x5265771D79F24A99(iParam0, 1) && !unk_0x301CF213B3CB7FE4(iParam0))
	{
		return 1;
	}
	if (!unk_0x5265771D79F24A99(iParam0, 1) && !unk_0x301CF213B3CB7FE4(iParam0))
	{
		return 1;
	}
	if (unk_0xDF1398076E26B0E4(iParam0) == joaat("btype") || unk_0xDF1398076E26B0E4(iParam0) == joaat("btype3"))
	{
		if (((((func_27(unk_0x07A8845F7F106A38(iParam0, 3)) || func_27(unk_0x07A8845F7F106A38(iParam0, 4))) || func_27(unk_0x07A8845F7F106A38(iParam0, 5))) || func_27(unk_0x07A8845F7F106A38(iParam0, 6))) || func_27(unk_0x07A8845F7F106A38(iParam0, 7))) || func_27(unk_0x07A8845F7F106A38(iParam0, 8)))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xDF1398076E26B0E4(uParam0);
	if (func_60(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0x3F119D3637D9EFD9(iParam0, 2))
		{
			return 1;
		}
		if (unk_0x3F119D3637D9EFD9(iParam0, 3) && unk_0x3F119D3637D9EFD9(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0x3F119D3637D9EFD9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0x3F119D3637D9EFD9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x301CF213B3CB7FE4(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0x3F119D3637D9EFD9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0x3F119D3637D9EFD9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0x3F119D3637D9EFD9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0x3F119D3637D9EFD9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0x3F119D3637D9EFD9(iParam0, 3) && !unk_0x3F119D3637D9EFD9(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
			return 1;
		
		default:
	}
	if (iParam0 == unk_0x39BD4614CF899227("ratloader2"))
	{
		return 1;
	}
	if (!unk_0xAEA8A39798337671(iParam0))
	{
		return 1;
	}
	if (unk_0x1FB97E894B0A4FC6() > 0)
	{
		if (iParam0 == unk_0x39BD4614CF899227("bifta"))
		{
			return 1;
		}
		if (iParam0 == unk_0x39BD4614CF899227("kalahari"))
		{
			return 1;
		}
	}
	return 0;
}

float func_61(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Param1, iParam4);
}

void func_62()
{
	func_66(&(Local_40[0 /*24*/]), 1, "Carwash1", func_67(156), 15, "", 0, 4f);
	func_66(&(Local_40[1 /*24*/]), 1, "Carwash2", func_67(157), 15, "", 0, 4f);
	func_64(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_64(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_63(&uLocal_89, 0);
	Local_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_63(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_69317)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0xF10A9EEADE6FD3EB() || unk_0xA24A81C5933F1B29())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0x48318B6DD4499562() || unk_0xBB3DCD23C363D187())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_64(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_19(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_65(fParam4, 0f, 360f);
}

float func_65(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_66(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25424[iVar0 /*23*/][0 /*3*/];
}

bool func_68(int iParam0)
{
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	return !unk_0x0B6E83A9A7ED3EBA(iParam0);
}

void func_69()
{
	func_70(&Local_40);
	func_23(&uLocal_89);
	unk_0x2F798BA2098FDADE();
}

void func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_71(var uParam0)
{
	*uParam0 = 0;
}

