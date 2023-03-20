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
	if (unk_0xAB964FCFAC3C767A(joaat("launcher_carwash")) > 1)
	{
		unk_0x01DFCA3621B68C4A();
	}
	if (unk_0x1995B52453EF6537())
	{
		unk_0xE3074BC832716971();
		unk_0x7E85CEE862B85A74(0);
	}
	else if (unk_0x2170E7BC25114A22(99))
	{
		func_70();
	}
	if (Global_2621550)
	{
		if (unk_0xAB964FCFAC3C767A(-949873222) == 0)
		{
			unk_0x1D072EB961765FED(-949873222);
			while (!unk_0x23B232D16F343B26(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0x01DFCA3621B68C4A();
	}
	if (func_69(unk_0xD5A676B97920D126()))
	{
	}
	func_63();
	while (true)
	{
		func_69(unk_0xD5A676B97920D126());
		if (func_62(unk_0xD5A676B97920D126(), Var2, 0) > (100f + 20f))
		{
			func_70();
		}
		bVar0 = false;
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			uVar1 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			bVar0 = (func_59(uVar1) || func_58(uVar1));
			bLocal_106 = unk_0xBFBE50989E4DA71C(uVar1);
			func_57(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40.f_0)
		{
			func_56(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_70();
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
			func_51(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_44(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_41(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0xC19959490984F18E() && uParam1->f_16 == 0))
						{
							func_40(uParam1, 6);
						}
						else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
						{
							func_40(uParam1, 8);
						}
						else if (bParam2)
						{
							func_40(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_40(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_40(uParam1, 1);
						}
						else if (func_25())
						{
							func_40(uParam1, 7);
						}
						else
						{
							func_40(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0x4214C5222DAB7698(2, 51);
			unk_0x2A29D86854DC4BC0(0, 101, 1);
			func_8();
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				func_40(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_40(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			if (Global_68127)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || func_4(unk_0xD5A676B97920D126(), 0) != -1)
				{
					func_40(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0xC19959490984F18E() && uParam1->f_16 == 0))
			{
				func_40(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_40(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
			}
			if (unk_0x6AAF285DC78E0304() || unk_0x1BDA0BA180A0719B())
			{
				return 0;
			}
			if (unk_0x1A77C0702D82B43D(unk_0xD5A676B97920D126()))
			{
				if ((unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126()) || unk_0x15F5AA1EE2118CAF(unk_0xD5A676B97920D126())) || unk_0xBCDAE5C8BF864002(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if ((unk_0x4256040252FFACC7(unk_0xD5A676B97920D126()) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0x03D369634BAB7D91(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xF1ADFD7CE0543530(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9D732A6420723BD3(unk_0xD5A676B97920D126()) || unk_0x13A15A61A159801A(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x3CEEA45E4779F6BD(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_40(uParam1, 9);
				}
				else
				{
					func_40(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_40(uParam1, 0);
				return 1;
			}
			unk_0x04890EB0282525A5(1);
			unk_0x7D132824755315B1(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 20f, 0);
			if (!unk_0xC55B9553B3EDADE9((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0x7FC35FCC666F974E((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0x4AAFD43C0AFB7A1A((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_69(unk_0xD5A676B97920D126()))
					{
						if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !Global_69697)
						{
							func_2(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0x05C27D3D38B3C689(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0);
						}
					}
					unk_0x4214C5222DAB7698(2, 51);
					unk_0x7FC35FCC666F974E((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x2A29D86854DC4BC0(0, 101, 1);
					unk_0x2A29D86854DC4BC0(0, 75, 1);
					unk_0x2A29D86854DC4BC0(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x0FBCFDA15A0FB2D5(250);
				}
				if (unk_0x4AAFD43C0AFB7A1A((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x7E3640C27B17457C())
						{
							if (func_69(unk_0xD5A676B97920D126()))
							{
								if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !Global_69697)
								{
									func_2(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0x05C27D3D38B3C689(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0);
								}
							}
							unk_0x4214C5222DAB7698(2, 51);
							unk_0x2A29D86854DC4BC0(0, 101, 1);
							unk_0x2A29D86854DC4BC0(0, 75, 1);
							unk_0x2A29D86854DC4BC0(0, 23, 1);
							func_8();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0x0446A34B5E23D747((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2A29D86854DC4BC0(0, 71, 1);
	unk_0x2A29D86854DC4BC0(0, 72, 1);
	unk_0x2A29D86854DC4BC0(0, 76, 1);
	unk_0x2A29D86854DC4BC0(0, 73, 1);
	unk_0x2A29D86854DC4BC0(0, 59, 1);
	unk_0x2A29D86854DC4BC0(0, 60, 1);
	if (bParam5)
	{
		unk_0x2A29D86854DC4BC0(0, 75, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2A29D86854DC4BC0(0, 69, 1);
		unk_0x2A29D86854DC4BC0(0, 70, 1);
		unk_0x2A29D86854DC4BC0(0, 68, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 74, 1);
	unk_0x2A29D86854DC4BC0(0, 86, 1);
	unk_0x2A29D86854DC4BC0(0, 81, 1);
	unk_0x2A29D86854DC4BC0(0, 82, 1);
	unk_0x2A29D86854DC4BC0(0, 138, 1);
	unk_0x2A29D86854DC4BC0(0, 136, 1);
	unk_0x2A29D86854DC4BC0(0, 114, 1);
	unk_0x2A29D86854DC4BC0(0, 107, 1);
	unk_0x2A29D86854DC4BC0(0, 110, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 87, 1);
	unk_0x2A29D86854DC4BC0(0, 88, 1);
	unk_0x2A29D86854DC4BC0(0, 113, 1);
	unk_0x2A29D86854DC4BC0(0, 115, 1);
	unk_0x2A29D86854DC4BC0(0, 116, 1);
	unk_0x2A29D86854DC4BC0(0, 117, 1);
	unk_0x2A29D86854DC4BC0(0, 118, 1);
	unk_0x2A29D86854DC4BC0(0, 119, 1);
	unk_0x2A29D86854DC4BC0(0, 131, 1);
	unk_0x2A29D86854DC4BC0(0, 132, 1);
	unk_0x2A29D86854DC4BC0(0, 123, 1);
	unk_0x2A29D86854DC4BC0(0, 126, 1);
	unk_0x2A29D86854DC4BC0(0, 129, 1);
	unk_0x2A29D86854DC4BC0(0, 130, 1);
	unk_0x2A29D86854DC4BC0(0, 133, 1);
	unk_0x2A29D86854DC4BC0(0, 134, 1);
	unk_0x6CE614A8ED95A6CF();
	func_3(iParam0);
	if ((unk_0x84A97C70FFDEC0C8() - Global_29) > 500)
	{
		unk_0xF351193474DA13BB(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x84A97C70FFDEC0C8();
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0xC3D3EC28F0EB3C6D(unk_0x78D3CDB884C74FEB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
		}
	}
}

int func_4(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (unk_0x6A0583ECFCCECC9B(iParam0, iParam1))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(iParam0, iParam1);
			if (unk_0x7887B64A08364778(uVar0))
			{
				if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
				{
					iVar1 = unk_0xB84CC33D90EA2EDD(unk_0xA0A4DA31DEDFAC4F(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x06F2E112EBC0C4FB(iVar0, iVar3, 0))
						{
							if (unk_0x98BE504E8B389665(iVar0, iVar3, 0) == iParam0)
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

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_35777 == iParam0;
}

int func_7()
{
	if (Global_100599)
	{
		return 1;
	}
	if (!func_6(14) && unk_0xAB964FCFAC3C767A(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_17151.f_6 = 1;
}

int func_9(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xD5A676B97920D126();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iVar3 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (func_69(iVar3))
		{
			Var0 = { unk_0xB73B9913DD4EE2AA(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0xF42BD66111346ACC(iVar4) };
	if (func_10(uParam0->f_12, Var0) > unk_0xD0FFB162F40A139C(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	var uVar0;
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		return unk_0xC74DA2993A57FB70(uVar0, 1119092736);
	}
	return unk_0xC74DA2993A57FB70(unk_0xD5A676B97920D126(), 1119092736);
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	if (unk_0xC55B9553B3EDADE9(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xA14FC57CB26C2B67())
	{
		unk_0x04890EB0282525A5(1);
		func_14(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(var uParam0, var uParam1)
{
	unk_0xA97D81951B964419(uParam0);
	unk_0xF99222307D7150A9(uParam1);
	unk_0x6F67ABEECD80675B(0, 1, 1, -1);
}

int func_15(var uParam0)
{
	if (unk_0xC55B9553B3EDADE9(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0xA14FC57CB26C2B67())
	{
		return 0;
	}
	if (unk_0xCC257DA11A122B5F(*uParam0, uParam0->f_14) || unk_0xCC257DA11A122B5F(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

var func_16(var uParam0)
{
	unk_0xB57C4257E4B22B1A(uParam0);
	return unk_0x39EEBD00DF395566(0);
}

var func_17(var uParam0, var uParam1)
{
	unk_0xB57C4257E4B22B1A(uParam0);
	unk_0xF99222307D7150A9(uParam1);
	return unk_0x39EEBD00DF395566(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			return 1;
		}
		if (func_4(unk_0xD5A676B97920D126(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(unk_0xD5A676B97920D126(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_19(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_20(struct<3> Param0)
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

bool func_21(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_22(var uParam0, var uParam1)
{
	if (unk_0xC55B9553B3EDADE9(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xA14FC57CB26C2B67())
	{
		unk_0x04890EB0282525A5(1);
		func_23(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(var uParam0)
{
	unk_0xA97D81951B964419(uParam0);
	unk_0x6F67ABEECD80675B(0, 1, 1, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		unk_0x04890EB0282525A5(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
	if (unk_0xF60B0BCAFB1D30FF(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !unk_0xA4DB44DF73EF4FE5(iVar0, 0);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (unk_0xA53003F5B0019FFC(iParam0, 0, 0) && unk_0xA53003F5B0019FFC(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xA53003F5B0019FFC(iParam0, 4, 0) && unk_0xA53003F5B0019FFC(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0xA53003F5B0019FFC(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xA53003F5B0019FFC(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xA53003F5B0019FFC(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xA53003F5B0019FFC(iParam0, 5, 0))
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

int func_27(int iParam0)
{
	if (func_28(iParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
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

int func_30()
{
	if (unk_0x1995B52453EF6537())
	{
		return func_37(unk_0xFB6B3EEFAB2DD12C());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_52992[iParam0];
}

int func_32()
{
	func_33();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_33()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_36(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_35(unk_0xD5A676B97920D126());
			if (func_34(iVar0) && (!func_6(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_34(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	var uVar0;
	
	uVar0 = func_38(iParam0);
	return uVar0;
}

int func_38(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return unk_0x3D62B5F6C60AB02A(-1);
		}
		else if (func_39(iParam0))
		{
			return Global_1589933[iParam0 /*601*/].f_202.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_41(var uParam0)
{
	func_69(unk_0xD5A676B97920D126());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
		if (func_4(unk_0xD5A676B97920D126(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_21(unk_0xD5A676B97920D126(), uParam0->f_1, uParam0->f_10);
}

bool func_42()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

bool func_43(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_50())
		{
			return 0;
		}
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (unk_0x1BDA0BA180A0719B())
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (Global_55812)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (func_45(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (func_48(iParam0))
	{
		return 1;
	}
	if (func_46(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_47(iParam0, 9);
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_48(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (Global_35777 == 15)
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_53(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_52(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_52(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
		unk_0xF9D271D16397C773(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_54(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_54(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var0 = { func_20(Param3 - Param0) };
	Var3 = { func_55(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0xF9D271D16397C773(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0xF9D271D16397C773(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0xF9D271D16397C773(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0xF9D271D16397C773(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_55(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_56(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_41(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (unk_0x84A97C70FFDEC0C8() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = unk_0x380EFB87C83418E5(Local_107[iParam0 /*3*/], Local_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0xEE7715D6C4A7B1F2(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0x7887B64A08364778(uVar1))
				{
					if (unk_0x8041FE602D4689B1(iVar1))
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
		uLocal_114[iParam0] = unk_0x84A97C70FFDEC0C8() + 250;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_58(int iParam0)
{
	if (!unk_0x1F4C5E9E5F24C698(unk_0xA0A4DA31DEDFAC4F(uParam0)))
	{
		return 1;
	}
	if (unk_0x4AFD1A95C0117800(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x4AFD1A95C0117800(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x4AFD1A95C0117800(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x4AFD1A95C0117800(iParam0, 3))
	{
		return 1;
	}
	if (unk_0xEF9CF6170A8C90B7(iParam0, 1))
	{
		if (unk_0x80F6A1A9BF0E38FD(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_28(uParam0))
	{
		return 0;
	}
	if (!unk_0xBFBE50989E4DA71C(uParam0))
	{
		return 1;
	}
	if (unk_0x455E34E5192D93DF(uParam0))
	{
		return 1;
	}
	if (!unk_0x1F4C5E9E5F24C698(unk_0xA0A4DA31DEDFAC4F(uParam0)))
	{
		return 1;
	}
	if (unk_0xF60B0BCAFB1D30FF(iParam0))
	{
		return 1;
	}
	if (func_60(iParam0))
	{
		return 1;
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var0, &Var3);
	if (unk_0xC3D3EC28F0EB3C6D((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0xC3D3EC28F0EB3C6D((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_69697)
	{
		if (!unk_0x4A478FA962FF575A(iParam0))
		{
			return 0;
		}
	}
	if (unk_0xEF9CF6170A8C90B7(iParam0, 1) && !unk_0xBFBE50989E4DA71C(iParam0))
	{
		return 1;
	}
	if (!unk_0xEF9CF6170A8C90B7(iParam0, 1) && !unk_0xBFBE50989E4DA71C(iParam0))
	{
		return 1;
	}
	if (unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("btype") || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("btype3"))
	{
		if (((((func_28(unk_0x98BE504E8B389665(iParam0, 3, 0)) || func_28(unk_0x98BE504E8B389665(iParam0, 4, 0))) || func_28(unk_0x98BE504E8B389665(iParam0, 5, 0))) || func_28(unk_0x98BE504E8B389665(iParam0, 6, 0))) || func_28(unk_0x98BE504E8B389665(iParam0, 7, 0))) || func_28(unk_0x98BE504E8B389665(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(uParam0);
	if (func_61(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0x90ECFFEFD5446B32(iParam0, 2))
		{
			return 1;
		}
		if (unk_0x90ECFFEFD5446B32(iParam0, 3) && unk_0x90ECFFEFD5446B32(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0x90ECFFEFD5446B32(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0x90ECFFEFD5446B32(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0xBFBE50989E4DA71C(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0x90ECFFEFD5446B32(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0x90ECFFEFD5446B32(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0x90ECFFEFD5446B32(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0x90ECFFEFD5446B32(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0x90ECFFEFD5446B32(iParam0, 3) && !unk_0x90ECFFEFD5446B32(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (!unk_0x1F4C5E9E5F24C698(iParam0))
	{
		return 1;
	}
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
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune4"):
		case joaat("dune5"):
			return 1;
		
		default:
	}
	return 0;
}

float func_62(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

void func_63()
{
	func_67(&(Local_40[0 /*24*/]), 1, "Carwash1", func_68(156), 15, "", 0, 4f);
	func_67(&(Local_40[1 /*24*/]), 1, "Carwash2", func_68(157), 15, "", 0, 4f);
	func_65(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_65(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_64(&uLocal_89, 0);
	Local_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_64(var uParam0, int iParam1)
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
	if (!Global_69697)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0xC0915CC8FE05A943() || unk_0x603D621ED5E06CB0())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0x59D60465DE87FE2F() || unk_0xF1A016B51831B87B())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_65(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_20(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_66(fParam4, 0f, 360f);
}

float func_66(float fParam0, float fParam1, float fParam2)
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

void func_67(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
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

Vector3 func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25497[iVar0 /*23*/][0 /*3*/];
}

bool func_69(int iParam0)
{
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	return !unk_0xB529B2A4B7C64D6D(iParam0, 0);
}

void func_70()
{
	func_71(&Local_40);
	func_24(&uLocal_89);
	unk_0x01DFCA3621B68C4A();
}

void func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_72(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_72(var uParam0)
{
	*uParam0 = 0;
}

