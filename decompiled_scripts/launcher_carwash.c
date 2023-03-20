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
	int iVar1;
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("launcher_carwash")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0x9243BAC96D64C050();
		unk_0xAA391C728106F7AF(false);
	}
	else if (unk_0xC968670BFACE42D9(99))
	{
		func_65();
	}
	if (Global_2621550)
	{
		if (unk_0x2C83A9DA6BFFC4F9(-949873222) == 0)
		{
			unk_0xD62A67D26D9653E6(-949873222);
			while (!unk_0x5F0F0C783EB16C04(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0x1090044AD1DA76FA();
	}
	if (func_64(unk_0xD80958FC74E988A6()))
	{
	}
	func_58();
	while (true)
	{
		func_64(unk_0xD80958FC74E988A6());
		if (func_57(unk_0xD80958FC74E988A6(), Var2, 0) > (100f + 20f))
		{
			func_65();
		}
		bVar0 = false;
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			bVar0 = (func_54(iVar1) || func_53(iVar1));
			bLocal_104 = unk_0x8AC862B0B32C5B80(iVar1);
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
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0xA33CDCCDA663159E() && uParam1->f_16 == 0))
						{
							func_39(uParam1, 6);
						}
						else if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
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
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
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
			unk_0xEDE476E5EE29EDB1(2, 51);
			unk_0xFE99B66D079CF6BC(0, 101, true);
			func_7();
			if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
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
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || func_3(unk_0xD80958FC74E988A6()) != -1)
				{
					func_39(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0xA33CDCCDA663159E() && uParam1->f_16 == 0))
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
			}
			if (unk_0xB0034A223497FFCB() || unk_0x5D511E3867C87139())
			{
				return 0;
			}
			if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				if ((unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6()) || unk_0xCEDABC5900A0BF97(unk_0xD80958FC74E988A6())) || unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if ((unk_0xE3B6097CC25AA69E(unk_0xD80958FC74E988A6()) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0x2A74E1D5F2F00EEC(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x53E8CB4F48BFE623(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xD125AE748725C6BC(unk_0xD80958FC74E988A6()) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x580417101DDB492F(2, 51) && uParam1->f_9 == 1)
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
			unk_0x8DFCED7A656F8802(true);
			unk_0x0A1CB9094635D1A6(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 20f, 0);
			if (!unk_0xCA042B6957743895((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0x6EB5F71AA68F2E8E((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0xE6CC9F3BA0FB9EF1((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_7();
					if (func_64(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !Global_68067)
						{
							func_2(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 2f, 1, 1056964608, 0, 1);
							unk_0x92B35082E0B42F66(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false);
						}
					}
					unk_0xEDE476E5EE29EDB1(2, 51);
					unk_0x6EB5F71AA68F2E8E((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0xFE99B66D079CF6BC(0, 101, true);
					unk_0xFE99B66D079CF6BC(0, 75, true);
					unk_0xFE99B66D079CF6BC(0, 23, true);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x891B5B39AC6302AF(250);
				}
				if (unk_0xE6CC9F3BA0FB9EF1((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0xB16FCE9DDC7BA182())
						{
							if (func_64(unk_0xD80958FC74E988A6()))
							{
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !Global_68067)
								{
									func_2(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 2f, 1, 1056964608, 0, 1);
									unk_0x92B35082E0B42F66(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false);
								}
							}
							unk_0xEDE476E5EE29EDB1(2, 51);
							unk_0xFE99B66D079CF6BC(0, 101, true);
							unk_0xFE99B66D079CF6BC(0, 75, true);
							unk_0xFE99B66D079CF6BC(0, 23, true);
							func_7();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0xC90D2DCACD56184C((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	if ((unk_0x9CD27B0045628463() - Global_28) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_28 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				if (!unk_0x5F9532F3B5CC2551(iVar0))
				{
					iVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x22AC59A870E6A669(iVar0, iVar3))
						{
							if (unk_0xBB40DD2270B65366(iVar0, iVar3) == iParam0)
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
	if (!func_5(14) && unk_0x2C83A9DA6BFFC4F9(joaat("director_mode")) > 0)
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
	
	iVar4 = unk_0xD80958FC74E988A6();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_10(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar3 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_64(iVar3))
		{
			Var0 = { unk_0xAFBD61CC738D9EB9(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0x0A794A5A57F8DF91(iVar4) };
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
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		return unk_0x5333F526F6AB19AA(iVar0, 90f);
	}
	return unk_0x5333F526F6AB19AA(unk_0xD80958FC74E988A6(), 90f);
}

int func_12(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x4D79439A6B55AC67())
	{
		unk_0x8DFCED7A656F8802(true);
		func_13(sParam1, iParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = iParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_13(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

int func_14(var uParam0)
{
	if (unk_0xCA042B6957743895(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0x4D79439A6B55AC67())
	{
		return 0;
	}
	if (unk_0x0C515FAB3FF9EA92(*uParam0, uParam0->f_14) || unk_0x0C515FAB3FF9EA92(uParam0->f_2, uParam0->f_14))
	{
		return func_16(uParam0->f_14, uParam0->f_15);
	}
	return func_15(uParam0->f_14);
}

bool func_15(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_16(char* sParam0, int iParam1)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_17(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_11 == 0)
	{
		return !func_20(unk_0xD80958FC74E988A6(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_18(uParam0->f_16, 2f) };
	return !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, false, true, 0);
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
	return unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iParam0, true), Param1) <= (fParam4 * fParam4);
}

int func_21(var uParam0, char* sParam1)
{
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x4D79439A6B55AC67())
	{
		unk_0x8DFCED7A656F8802(true);
		func_22(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_22(char* sParam0)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_23(var uParam0)
{
	if (func_14(uParam0))
	{
		unk_0x8DFCED7A656F8802(true);
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
	
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return 0;
	}
	iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
	if (unk_0x28D3FED7190D3A0B(iVar0))
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
	return !unk_0x4C241E39B23DF959(iVar0, false);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_26(iParam0))
	{
		iVar0 = 0;
		if (unk_0xBA291848A0815CA9(iParam0, 0, false) && unk_0xBA291848A0815CA9(iParam0, 1, false))
		{
			return 1;
		}
		if (unk_0xBA291848A0815CA9(iParam0, 4, false) && unk_0xBA291848A0815CA9(iParam0, 5, false))
		{
			return 1;
		}
		if (unk_0xBA291848A0815CA9(iParam0, 0, false))
		{
			iVar0++;
		}
		if (unk_0xBA291848A0815CA9(iParam0, 1, false))
		{
			iVar0++;
		}
		if (unk_0xBA291848A0815CA9(iParam0, 4, false))
		{
			iVar0++;
		}
		if (unk_0xBA291848A0815CA9(iParam0, 5, false))
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
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
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
	if (unk_0x10FAB35428CCC9D7())
	{
		return func_36(unk_0x4F8644AF03D0E0D6());
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
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_35(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_34(unk_0xD80958FC74E988A6());
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
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return unk_0xA40F9C2623F6A8B5(-1);
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
		return unk_0xA921AA820C25702F(Global_2421967.f_1, iParam0);
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
	func_64(unk_0xD80958FC74E988A6());
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
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
		if (func_3(unk_0xD80958FC74E988A6()) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, false, true, 0);
	}
	return func_20(unk_0xD80958FC74E988A6(), uParam0->f_1, uParam0->f_10);
}

bool func_41()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
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
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x5D511E3867C87139())
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
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
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
		unk_0x7FDFADE676AA3CB0(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
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
	unk_0x7FDFADE676AA3CB0(Var13[0 /*3*/], Var13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x7FDFADE676AA3CB0(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x7FDFADE676AA3CB0(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_50(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_40(&(Local_38[iParam0 /*24*/])))
	{
		Local_38[iParam0 /*24*/].f_8 = 0;
		iLocal_115[iParam0] = 0;
		return;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		Local_38[iParam0 /*24*/].f_8 = 0;
		iLocal_115[iParam0] = 0;
		return;
	}
	if (iLocal_115[iParam0] == 0)
	{
		if (unk_0x9CD27B0045628463() > uLocal_112[iParam0])
		{
			iLocal_115[iParam0] = unk_0xE6AC6C45FBE83004(Local_105[iParam0 /*3*/], Local_105[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 4);
		}
	}
	else
	{
		iVar0 = unk_0x3D87450E15D98694(iLocal_115[iParam0], &iVar8, &uVar2, &uVar5, &iVar1);
		if (iVar0 == 2)
		{
			Local_38[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0x7239B21A38F536BA(iVar1))
				{
					if (unk_0x6AC7003FA6E5575E(iVar1))
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
		uLocal_112[iParam0] = unk_0x9CD27B0045628463() + 250;
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
	if (!unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(iParam0)))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(iParam0, 1))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(iParam0, 2))
	{
		return 1;
	}
	if (unk_0xB8E181E559464527(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x52F357A30698BCCE(iParam0, true))
	{
		if (unk_0xF8C397922FC03F41(iParam0) == 6)
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
	
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (!unk_0x8AC862B0B32C5B80(iParam0))
	{
		return 1;
	}
	if (unk_0xE7CF3C4F9F489F0C(iParam0))
	{
		return 1;
	}
	if (!unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(iParam0)))
	{
		return 1;
	}
	if (unk_0x28D3FED7190D3A0B(iParam0))
	{
		return 1;
	}
	if (func_55(iParam0))
	{
		return 1;
	}
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(iParam0), &Var0, &Var3);
	if (unk_0x73D57CFFDD12C355((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0x73D57CFFDD12C355((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_68067)
	{
		if (!unk_0x01BF60A500E28887(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x52F357A30698BCCE(iParam0, true) && !unk_0x8AC862B0B32C5B80(iParam0))
	{
		return 1;
	}
	if (!unk_0x52F357A30698BCCE(iParam0, true) && !unk_0x8AC862B0B32C5B80(iParam0))
	{
		return 1;
	}
	if (unk_0x9F47B058362C84B5(iParam0) == joaat("btype"))
	{
		if (func_27(unk_0xBB40DD2270B65366(iParam0, 3)) || func_27(unk_0xBB40DD2270B65366(iParam0, 4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9F47B058362C84B5(iParam0);
	if (func_56(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0xD2E6822DBFD6C8BD(iParam0, 2))
		{
			return 1;
		}
		if (unk_0xD2E6822DBFD6C8BD(iParam0, 3) && unk_0xD2E6822DBFD6C8BD(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0xD2E6822DBFD6C8BD(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0xD2E6822DBFD6C8BD(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x8AC862B0B32C5B80(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0xD2E6822DBFD6C8BD(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0xD2E6822DBFD6C8BD(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0xD2E6822DBFD6C8BD(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0xD2E6822DBFD6C8BD(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0xD2E6822DBFD6C8BD(iParam0, 3) && !unk_0xD2E6822DBFD6C8BD(iParam0, 7))
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
	if (iParam0 == unk_0xD24D37CC275948CC("ratloader2"))
	{
		return 1;
	}
	if (!unk_0x7F6DB52EEFC96DF8(iParam0))
	{
		return 1;
	}
	if (unk_0xA7A866D21CD2329B() > 0)
	{
		if (iParam0 == unk_0xD24D37CC275948CC("bifta"))
		{
			return 1;
		}
		if (iParam0 == unk_0xD24D37CC275948CC("kalahari"))
		{
			return 1;
		}
	}
	return 0;
}

float func_57(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
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
	if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
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
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(iParam0);
}

void func_65()
{
	func_66(&Local_38);
	func_23(&uLocal_87);
	unk_0x1090044AD1DA76FA();
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

