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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	struct<24> Local_38[2];
	var uLocal_87 = 0;
	var uLocal_88 = 0;
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
	var uLocal_99 = -1;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	bool bLocal_104 = 0;
	struct<3> Local_105[2];
	var uLocal_112[2] = { 0, 0 };
	int iLocal_115[2] = { 0, 0 };
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x25531002BCF0D968(joaat("launcher_carwash")) > 1)
	{
		unk_0x883793591E631A3B();
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		unk_0x44E747EFAA4C6724();
		unk_0xB43679BBB30F1391(0);
	}
	else if (unk_0x7547D7CF93115D6D(99))
	{
		func_65();
	}
	if (Global_2621550)
	{
		if (unk_0x25531002BCF0D968(-949873222) == 0)
		{
			unk_0x9BDCCBFB569D44D3(-949873222);
			while (!unk_0xCF2008EE76BCB924(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0x883793591E631A3B();
	}
	if (func_64(unk_0x507DA4994C3D8EBD()))
	{
	}
	func_58();
	while (true)
	{
		func_64(unk_0x507DA4994C3D8EBD());
		if (func_57(unk_0x507DA4994C3D8EBD(), Var2, 0) > (100f + 20f))
		{
			func_65();
		}
		bVar0 = false;
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			uVar1 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			bVar0 = (func_54(uVar1) || func_53(uVar1));
			bLocal_104 = unk_0x7FA6B8D00E53690B(uVar1);
			func_52(bLocal_104);
		}
		iVar5 = 0;
		while (iVar5 < Local_38.f_0)
		{
			func_51(iVar5);
			iVar5++;
		}
		if (func_1(&Local_38, &uLocal_87, bVar0, 0, 1, 1424))
		{
			func_65();
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
			func_46(iParam0[iVar0 /*24*/]);
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
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x4E6BA6FF244D94A8() && uParam1->f_16 == 0))
						{
							func_39(uParam1, 6);
						}
						else if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
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
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
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
			unk_0x0756DDDAD8038AC9(2, 51);
			unk_0x500F4CA776CEBD0A(0, 101, 1);
			func_7();
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
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
			if (Global_66880)
			{
				return 0;
			}
			if (func_4(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) || func_3(unk_0x507DA4994C3D8EBD()) != -1)
				{
					func_39(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x4E6BA6FF244D94A8() && uParam1->f_16 == 0))
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
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
			}
			if (unk_0xBB02FD0C8166DE6D() || unk_0x82F85CC376273040())
			{
				return 0;
			}
			if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
			{
				if ((unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD()) || unk_0xA38092DB0A690D89(unk_0x507DA4994C3D8EBD())) || unk_0x5A0E95A7625C9784(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if ((unk_0xF9241A6D74AF80C7(unk_0x507DA4994C3D8EBD()) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0x08D60CA9F677F4AD(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x8BD202CCF931002E(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB0680605FE40CDC9(unk_0x507DA4994C3D8EBD()) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x58FC9C7DF8FE009B(2, 51) && uParam1->f_9 == 1)
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
			unk_0x4A4C1A1BC79EFE8F(1);
			unk_0x13196E39740F8C20(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 20f, 0);
			if (!unk_0x8FA72E132AAFA62F((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0x38797C3918FDD596((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0x4C903C3B660A5023((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_7();
					if (func_64(unk_0x507DA4994C3D8EBD()))
					{
						if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !Global_68067)
						{
							func_2(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 2f, 1, 1056964608, 0, 1);
							unk_0x229D259AC32C20C7(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0);
						}
					}
					unk_0x0756DDDAD8038AC9(2, 51);
					unk_0x38797C3918FDD596((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x500F4CA776CEBD0A(0, 101, 1);
					unk_0x500F4CA776CEBD0A(0, 75, 1);
					unk_0x500F4CA776CEBD0A(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x7C69A4879766A867(250);
				}
				if (unk_0x4C903C3B660A5023((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0xC2C705ED6124A7C2())
						{
							if (func_64(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !Global_68067)
								{
									func_2(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 2f, 1, 1056964608, 0, 1);
									unk_0x229D259AC32C20C7(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0);
								}
							}
							unk_0x0756DDDAD8038AC9(2, 51);
							unk_0x500F4CA776CEBD0A(0, 101, 1);
							unk_0x500F4CA776CEBD0A(0, 75, 1);
							unk_0x500F4CA776CEBD0A(0, 23, 1);
							func_7();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0xDD83BEFDE8CC91AD((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			uVar0 = unk_0x78AB10B64129B3D5(iParam0, 0);
			if (unk_0xFD68187442384158(uVar0))
			{
				if (!unk_0xE5D56342B0FF1D0D(iVar0))
				{
					iVar1 = unk_0x3D27599863364482(unk_0x26EA758C2A691D06(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xC51FBEBD87CFD69C(iVar0, iVar3))
						{
							if (unk_0xE634CB9EE7094537(iVar0, iVar3) == iParam0)
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
	return Global_34909 == iParam0;
}

int func_6()
{
	if (Global_96122)
	{
		return 1;
	}
	if (!func_5(14) && unk_0x25531002BCF0D968(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_7()
{
	Global_17098.f_6 = 1;
}

int func_8(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x507DA4994C3D8EBD();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_10(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		iVar3 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (func_64(iVar3))
		{
			Var0 = { unk_0xAD9A5677421290F3(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0xF260FCBA09D07146(iVar4) };
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
	
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		return unk_0x03F9C86DAF30C655(uVar0, 1119092736);
	}
	return unk_0x03F9C86DAF30C655(unk_0x507DA4994C3D8EBD(), 1119092736);
}

int func_12(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x8FA72E132AAFA62F(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0xBB51CB7A4D14453D())
	{
		unk_0x4A4C1A1BC79EFE8F(1);
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
	unk_0x1ACC22C365D06AAE(uParam0);
	unk_0x844339A27F0F1508(uParam1);
	unk_0x9F84D1B39B1E5B59(0, 1, 1, -1);
}

int func_14(var uParam0)
{
	if (unk_0x8FA72E132AAFA62F(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0xBB51CB7A4D14453D())
	{
		return 0;
	}
	if (unk_0xA858564DC37EED5E(*uParam0, uParam0->f_14) || unk_0xA858564DC37EED5E(uParam0->f_2, uParam0->f_14))
	{
		return func_16(uParam0->f_14, uParam0->f_15);
	}
	return func_15(uParam0->f_14);
}

var func_15(var uParam0)
{
	unk_0x74C587863BEFBDD0(uParam0);
	return unk_0x5D488553935013A9(0);
}

var func_16(var uParam0, var uParam1)
{
	unk_0x74C587863BEFBDD0(uParam0);
	unk_0x844339A27F0F1508(uParam1);
	return unk_0x5D488553935013A9(0);
}

bool func_17(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_11 == 0)
	{
		return !func_20(unk_0x507DA4994C3D8EBD(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_18(uParam0->f_16, 2f) };
	return !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
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
	return unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_21(var uParam0, var uParam1)
{
	if (unk_0x8FA72E132AAFA62F(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0xBB51CB7A4D14453D())
	{
		unk_0x4A4C1A1BC79EFE8F(1);
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
	unk_0x1ACC22C365D06AAE(uParam0);
	unk_0x9F84D1B39B1E5B59(0, 1, 1, -1);
}

void func_23(var uParam0)
{
	if (func_14(uParam0))
	{
		unk_0x4A4C1A1BC79EFE8F(1);
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
	
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (unk_0xEF57771119A32DB2(iVar0))
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
	return !unk_0xCA8794CE207FC6D5(iVar0, 0);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_26(iParam0))
	{
		iVar0 = 0;
		if (unk_0xEB461363EE450DCA(iParam0, 0, 0) && unk_0xEB461363EE450DCA(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xEB461363EE450DCA(iParam0, 4, 0) && unk_0xEB461363EE450DCA(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0xEB461363EE450DCA(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xEB461363EE450DCA(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xEB461363EE450DCA(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xEB461363EE450DCA(iParam0, 5, 0))
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
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
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
	if (unk_0xD95428C8AA1DBBF2())
	{
		return func_36(unk_0xAF65E5A58BE87D95());
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
	return Global_51747[iParam0];
}

int func_31()
{
	func_32();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_35(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_34(unk_0x507DA4994C3D8EBD());
			if (func_33(iVar0) && (!func_5(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_33(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return unk_0x5A1D7FBA416DF110(-1);
		}
		else if (func_38(iParam0))
		{
			return Global_1582048[iParam0 /*324*/].f_180.f_3;
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
		return unk_0x61D8FEAF64881CDA(Global_2421967.f_1, iParam0);
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
	func_64(unk_0x507DA4994C3D8EBD());
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
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			return 0;
		}
		if (func_3(unk_0x507DA4994C3D8EBD()) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_20(unk_0x507DA4994C3D8EBD(), uParam0->f_1, uParam0->f_10);
}

bool func_41()
{
	return unk_0xF976C624234A4AA8() <= Global_17236.f_5130 + 100;
}

bool func_42(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_45())
		{
			return 0;
		}
	}
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x82F85CC376273040())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (Global_54566)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	return 1;
}

void func_46(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_48(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_47(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_47(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
		unk_0x428FCEDAB4D8C227(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_49(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_49(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var3 = { func_50(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x428FCEDAB4D8C227(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x428FCEDAB4D8C227(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x428FCEDAB4D8C227(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x428FCEDAB4D8C227(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_50(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_51(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_40(&(Local_38[iParam0 /*24*/])))
	{
		Local_38[iParam0 /*24*/].f_8 = 0;
		iLocal_115[iParam0] = 0;
		return;
	}
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		Local_38[iParam0 /*24*/].f_8 = 0;
		iLocal_115[iParam0] = 0;
		return;
	}
	if (iLocal_115[iParam0] == 0)
	{
		if (unk_0xF976C624234A4AA8() > uLocal_112[iParam0])
		{
			iLocal_115[iParam0] = unk_0x08272E1A38E356C6(Local_105[iParam0 /*3*/], Local_105[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0xBFABF77FCEA8BA3F(iLocal_115[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_38[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0xFD68187442384158(uVar1))
				{
					if (unk_0x1BA544973A67E699(iVar1))
					{
						Local_38[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_115[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_115[iParam0] = 0;
		}
		uLocal_112[iParam0] = unk_0xF976C624234A4AA8() + 250;
	}
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_53(int iParam0)
{
	if (!unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(uParam0)))
	{
		return 1;
	}
	if (unk_0x81A4DE5D88AD9A2C(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x81A4DE5D88AD9A2C(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x81A4DE5D88AD9A2C(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x81A4DE5D88AD9A2C(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x850813D10502D655(iParam0, 1))
	{
		if (unk_0x92632E4A1274BB2C(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_27(uParam0))
	{
		return 0;
	}
	if (!unk_0x7FA6B8D00E53690B(uParam0))
	{
		return 1;
	}
	if (unk_0xA04CA7D6710299C3(uParam0))
	{
		return 1;
	}
	if (!unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(uParam0)))
	{
		return 1;
	}
	if (unk_0xEF57771119A32DB2(iParam0))
	{
		return 1;
	}
	if (func_55(iParam0))
	{
		return 1;
	}
	unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iParam0), &Var0, &Var3);
	if (unk_0x75E01E8585722F89((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0x75E01E8585722F89((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_68067)
	{
		if (!unk_0xFE0D96A75DA37EB0(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x850813D10502D655(iParam0, 1) && !unk_0x7FA6B8D00E53690B(iParam0))
	{
		return 1;
	}
	if (!unk_0x850813D10502D655(iParam0, 1) && !unk_0x7FA6B8D00E53690B(iParam0))
	{
		return 1;
	}
	if (unk_0x26EA758C2A691D06(iParam0) == joaat("btype"))
	{
		if (func_27(unk_0xE634CB9EE7094537(iParam0, 3)) || func_27(unk_0xE634CB9EE7094537(iParam0, 4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x26EA758C2A691D06(uParam0);
	if (func_56(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0x64D04C2170ADD5A9(iParam0, 2))
		{
			return 1;
		}
		if (unk_0x64D04C2170ADD5A9(iParam0, 3) && unk_0x64D04C2170ADD5A9(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0x64D04C2170ADD5A9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0x64D04C2170ADD5A9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x7FA6B8D00E53690B(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0x64D04C2170ADD5A9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0x64D04C2170ADD5A9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0x64D04C2170ADD5A9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0x64D04C2170ADD5A9(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0x64D04C2170ADD5A9(iParam0, 3) && !unk_0x64D04C2170ADD5A9(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
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
			return 1;
		
		default:
	}
	if (iParam0 == unk_0x3BA42EA02A10243D("ratloader2"))
	{
		return 1;
	}
	if (!unk_0x4658BA5921D40213(iParam0))
	{
		return 1;
	}
	if (unk_0x4FC8D240D0A0F8E5() > 0)
	{
		if (iParam0 == unk_0x3BA42EA02A10243D("bifta"))
		{
			return 1;
		}
		if (iParam0 == unk_0x3BA42EA02A10243D("kalahari"))
		{
			return 1;
		}
	}
	return 0;
}

float func_57(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
}

void func_58()
{
	func_62(&(Local_38[0 /*24*/]), 1, "Carwash1", func_63(155), 15, "", 0, 4f);
	func_62(&(Local_38[1 /*24*/]), 1, "Carwash2", func_63(156), 15, "", 0, 4f);
	func_60(&(Local_38[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_60(&(Local_38[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_59(&uLocal_87, 0);
	Local_105[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_105[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_59(var uParam0, int iParam1)
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
	if (!Global_68067)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x9763C0E44A644CB2() || unk_0xA09FDB4B3C001CAB())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0x2F4E1FF400251C08() || unk_0x5D64B4BDB6FCA4F0())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_60(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_19(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_61(fParam4, 0f, 360f);
}

float func_61(float fParam0, float fParam1, float fParam2)
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

void func_62(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
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

Vector3 func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_24745[iVar0 /*23*/][0 /*3*/];
}

bool func_64(int iParam0)
{
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	return !unk_0xE5D56342B0FF1D0D(iParam0);
}

void func_65()
{
	func_66(&Local_38);
	func_23(&uLocal_87);
	unk_0x883793591E631A3B();
}

void func_66(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_67(var uParam0)
{
	*uParam0 = 0;
}

