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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = -1;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<20> Local_130[32];
	struct<3> Local_771[32];
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894[4] = { 0, 0, 0, 0 };
	var uLocal_899[2] = { 0, 0 };
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	struct<8> Local_905 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	struct<8> Local_921 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939[4] = { 0, 0, 0, 0 };
	struct<35> Local_944 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_979[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	iLocal_121 = Global_262145.f_16845;
	iLocal_888 = unk_0x9FF6FFD9EB30D086();
	if (unk_0x591AF4C50B46E014())
	{
		if (func_821(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (!func_796(ScriptParam_0))
			{
				func_768(0, 1);
				func_701();
			}
		}
		else
		{
			func_701();
		}
	}
	else
	{
		func_768(0, 1);
		func_701();
	}
	while (true)
	{
		func_700();
		if (func_697(1))
		{
			func_768(0, 1);
			func_701();
		}
		if (func_689())
		{
			func_768(0, 1);
			func_701();
		}
		func_685();
		func_683();
		func_682();
		func_679();
		func_678();
		func_672();
		switch (func_671(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_670() == 1)
				{
					if (func_662())
					{
						func_661(unk_0x88641E5BC172153A(), 1);
					}
				}
				break;
			
			case 1:
				if (func_670() == 1)
				{
					func_50();
				}
				else if (func_670() == 3)
				{
					func_661(unk_0x88641E5BC172153A(), 3);
				}
				break;
			
			case 3:
				func_701();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			func_33();
			if (func_32())
			{
				func_768(0, 1);
				func_31(3);
			}
			switch (func_670())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_701();
					break;
				}
		}
	}
}

void func_1()
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			unk_0xABE13CB17EB2BE02(&(Local_944.f_33), &(Local_944.f_34));
			break;
		
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!func_5(&(Local_944.f_5)))
				{
					func_4(&(Local_944.f_5), 0, 0);
				}
				else if (func_2(&(Local_944.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		
		case 6:
			func_31(3);
			break;
	}
}

int func_2(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return (1000 * Global_262145.f_16834);
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

void func_6()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_944.f_32, iVar1))
		{
			Var2 = { func_12(iVar1) };
			if (!func_11(Var2, 0f, 0f, 0f, 0))
			{
				if (!unk_0xD0BCF9877CD72A3F(Local_944.f_19[iVar1]))
				{
					if (func_8(&(uLocal_939[iVar1]), &(Local_944.f_19[iVar1]), Var2, 1))
					{
						unk_0xF6082E2ADA1C795B(&(Local_944.f_32), iVar1);
						if (!func_5(&uLocal_889))
						{
							func_4(&uLocal_889, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_889, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_944.f_32, iVar1))
			{
				unk_0x507FE690B1271947(&(Local_944.f_32), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_889);
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, var uParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (!func_10(Param2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (func_9(iVar0))
		{
			iVar1 = 0;
			unk_0xF6082E2ADA1C795B(&iVar1, 0);
			unk_0xF6082E2ADA1C795B(&iVar1, 1);
			unk_0xF6082E2ADA1C795B(&iVar1, 9);
			unk_0xF6082E2ADA1C795B(&iVar1, 4);
			*uParam0 = unk_0xE9AB9BA1F0DCD1BC(joaat("pickup_portable_crate_fixed_incar"), Param2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, iParam5, 1);
			*uParam1 = unk_0x71C810DFFC1DCEA6(*uParam0);
			return 1;
		}
	}
	return 0;
}

int func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

int func_10(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_12(int iParam0)
{
	switch (Local_944.f_31)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1378.065f, 3179.572f, 39.5194f;
				
				case 1:
					return 1386.56f, 3147.986f, 39.52f;
				
				case 2:
					return 1396.397f, 3111.702f, 39.5088f;
				
				case 3:
					return 1402.808f, 3087.676f, 39.5129f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1375.18f, -3033.337f, 12.9448f;
				
				case 1:
					return -1364.817f, -3015.949f, 12.9676f;
				
				case 2:
					return -1305.581f, -3048.433f, 12.9444f;
				
				case 3:
					return -1317.517f, -3067.379f, 12.9444f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2039.639f, 4749.277f, 40.013f;
				
				case 1:
					return 2028.618f, 4775.398f, 40.3574f;
				
				case 2:
					return 2134.54f, 4826.913f, 40.4972f;
				
				case 3:
					return 1936.858f, 4695.858f, 40.2577f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()
{
	switch (Local_944.f_31)
	{
		case 0:
			return 4;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_14(int iParam0)
{
	if (!unk_0x62E688B72E3C57B0())
	{
		return;
	}
	Local_944.f_14 = iParam0;
}

void func_15(int iParam0)
{
	if (!unk_0x62E688B72E3C57B0())
	{
		return;
	}
	unk_0xF6082E2ADA1C795B(&(Local_944.f_1), iParam0);
}

bool func_16()
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Local_944.f_1, iParam0);
}

void func_18()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (func_23() - func_22(&(Local_944.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_944.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (func_5(&(Local_944.f_9)))
			{
				func_7(&(Local_944.f_9));
			}
			if (!func_5(&(Local_944.f_7)))
			{
				func_4(&(Local_944.f_7), 0, 0);
				if (Local_944.f_4 > 0)
				{
					uVar2 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), (-1 * Local_944.f_4));
					func_20(&(Local_944.f_7), uVar2);
					Local_944.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_944.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_944.f_7)))
				{
					Local_944.f_4 = func_22(&(Local_944.f_7), 0, 0);
				}
			}
			else
			{
				Local_944.f_4 = 0;
			}
			if (func_5(&(Local_944.f_7)))
			{
				func_7(&(Local_944.f_7));
			}
			if (!func_5(&(Local_944.f_9)))
			{
				func_4(&(Local_944.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_944.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_944.f_9), (func_19() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

int func_19()
{
	return 600000;
}

void func_20(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

int func_21()
{
	return 20000;
}

int func_22(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0);
		}
		else
		{
			return unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), *uParam0);
		}
	}
	return unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0);
}

int func_23()
{
	return 180000;
}

var func_24()
{
	return (func_17(8) || func_17(9));
}

int func_25()
{
	return Local_944.f_14;
}

void func_26(int iParam0)
{
	if (!unk_0x62E688B72E3C57B0())
	{
		return;
	}
	Local_944.f_13 = iParam0;
}

int func_27()
{
	return Local_944.f_13;
}

bool func_28()
{
	if (!func_17(1))
	{
		if (func_30() > -1)
		{
			if (func_30() == 0)
			{
				Local_944.f_31 = 0;
			}
			else if (func_30() == 1)
			{
				Local_944.f_31 = 1;
			}
			else
			{
				Local_944.f_31 = 2;
			}
		}
		else
		{
			Local_944.f_31 = unk_0x895FB9FE885E36ED(0, 3);
		}
		if (Global_262145.f_16839)
		{
			if (Local_944.f_31 == 0)
			{
				if (!Global_262145.f_16840)
				{
					Local_944.f_31 = 1;
				}
				else
				{
					Local_944.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_16840)
		{
			if (Local_944.f_31 == 1)
			{
				if (!Global_262145.f_16841)
				{
					Local_944.f_31 = 2;
				}
				else
				{
					Local_944.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_16841)
		{
			if (Local_944.f_31 == 2)
			{
				if (!Global_262145.f_16840)
				{
					Local_944.f_31 = 0;
				}
				else
				{
					Local_944.f_31 = 1;
				}
			}
		}
		Local_944.f_15 = unk_0x0FFED3E94261A832();
		Local_944.f_16[0] = unk_0x0FFED3E94261A832();
		Local_944.f_24[0] = iLocal_121;
		Local_944.f_16[1] = func_29();
		Local_944.f_24[1] = iLocal_121;
		func_15(1);
	}
	return func_17(1);
}

int func_29()
{
	return -1;
}

int func_30()
{
	return Global_2497344.f_4828.f_150;
}

void func_31(int iParam0)
{
	Local_944.f_0 = iParam0;
}

int func_32()
{
	if (Global_2497344.f_4828.f_22)
	{
		Global_2497344.f_4828.f_22 = 0;
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	bVar2 = true;
	bVar3 = true;
	if (Local_944.f_0 != 3)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
			{
				iVar1 = unk_0xBA948A9E34D09E6E(iVar0);
				iVar13 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
				if (!func_47(iVar13, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_944.f_16[1] == func_29())
						{
							if (func_45(iVar13))
							{
								if (iVar13 != Local_944.f_15)
								{
									Local_944.f_16[1] = iVar13;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar13 == Local_944.f_16[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar13 == Local_944.f_16[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar13 == Local_944.f_16[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar13 == Local_944.f_16[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_944.f_2, iVar0))
							{
								iVar5++;
								unk_0xF6082E2ADA1C795B(&(Local_944.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(Local_944.f_2, iVar0))
						{
							unk_0x507FE690B1271947(&(Local_944.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_979[iVar0 /*6*/].f_3 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar7[iVar11] = (iVar7[iVar11] + Local_979[iVar0 /*6*/].f_3);
						}
						if (Local_979[iVar0 /*6*/].f_4 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar12 = (1 - iVar11);
							iVar7[iVar12] = (iVar7[iVar12] + Local_979[iVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (func_45(iVar13))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar10++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar10++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!func_5(&(Local_944.f_11)))
			{
				func_4(&(Local_944.f_11), 0, 0);
			}
			else if (func_2(&(Local_944.f_11), 10000, 0))
			{
				if (iVar10 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar16 = iVar7[1];
			iVar15 = (iLocal_121 - iVar16);
			Local_944.f_27[0] = iVar7[0];
			Local_944.f_27[1] = iVar7[1];
			if (Local_944.f_24[0] != iVar15)
			{
				iVar14 = 0;
				if (Local_944.f_24[0] < iVar15)
				{
					iVar14 = (iVar15 - Local_944.f_24[0]);
				}
				Local_944.f_24[0] = (iVar15 - iVar14);
			}
			iVar16 = iVar7[0];
			iVar15 = (iLocal_121 - iVar16);
			if (Local_944.f_24[1] != iVar15)
			{
				iVar14 = 0;
				if (Local_944.f_24[1] < iVar15)
				{
					iVar14 = (iVar15 - Local_944.f_24[1]);
				}
				Local_944.f_24[1] = (iVar15 - iVar14);
			}
			if (Local_944.f_27[0] >= iLocal_121)
			{
				Local_944.f_30 = 0;
			}
			else if (Local_944.f_27[1] >= iLocal_121)
			{
				Local_944.f_30 = 1;
			}
			if (iVar10 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_944.f_30 == -1)
			{
				if (Local_944.f_27[0] == Local_944.f_27[1])
				{
					Local_944.f_30 = 99;
				}
				else if (Local_944.f_27[0] > Local_944.f_27[1])
				{
					Local_944.f_30 = 0;
				}
				else
				{
					Local_944.f_30 = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_944.f_3 != iVar5)
	{
		Local_944.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_944.f_30 != -1)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)
{
	return func_36() == iParam0;
}

int func_36()
{
	return Local_944.f_15;
}

int func_37(int iParam0)
{
	return func_38(iParam0, func_36(), 0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	return func_39(iParam0, iParam1, bParam2, 1);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_29() && iParam0 != func_29())
	{
		if (!bParam2)
		{
			if (func_42(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_29())
		{
			if (iParam1 == Global_1622795[iParam0 /*431*/].f_11)
			{
				return func_40(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	if (func_41(iParam0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_29())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_29())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					if (Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	unk_0x507FE690B1271947(&(Local_944.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Local_979[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 != func_29())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_29())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_48(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312735;
}

void func_50()
{
	if (iLocal_884 > -1)
	{
		if ((!func_656() && !func_655()) && !func_654(179))
		{
			if (func_637(1))
			{
				switch (Local_979[iLocal_884 /*6*/].f_5)
				{
					case 0:
						if (!func_636(2))
						{
							func_615(179, 1, -1, 1);
							iLocal_903 = func_614(unk_0x0FFED3E94261A832());
							StringCopy(&Local_905, func_613(), 64);
							func_612(2);
						}
						if (!func_636(4))
						{
							func_571(-1, 0, 0, -1);
							func_612(4);
						}
						if (Local_944.f_13 > 0)
						{
							if (Local_944.f_13 > 1)
							{
								Local_979[iLocal_884 /*6*/].f_5 = 4;
							}
							else
							{
								Local_979[iLocal_884 /*6*/].f_5 = Local_944.f_13;
							}
						}
						break;
					
					case 1:
						func_529();
						func_528();
						func_505();
						func_488();
						if (Local_944.f_13 != 1)
						{
							if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
							{
								func_480(1);
								Local_979[iLocal_884 /*6*/].f_5 = Local_944.f_13;
							}
							else
							{
								func_473();
								Local_979[iLocal_884 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_529();
						func_472();
						unk_0x4E6996123FABDB93(0, 140, 1);
						unk_0x4E6996123FABDB93(0, 141, 1);
						unk_0x4E6996123FABDB93(0, 142, 1);
						unk_0x4E6996123FABDB93(0, 143, 1);
						unk_0x4E6996123FABDB93(0, 24, 1);
						unk_0x4E6996123FABDB93(0, 345, 1);
						unk_0x4E6996123FABDB93(0, 346, 1);
						unk_0x4E6996123FABDB93(0, 347, 1);
						if (func_44(unk_0x5C40D1D6A2650FC5(), 1) || func_44(unk_0x5C40D1D6A2650FC5(), 2))
						{
							if (!func_44(unk_0x5C40D1D6A2650FC5(), 6))
							{
								func_471(1);
							}
							func_488();
						}
						func_466();
						if (Local_944.f_13 != 2)
						{
							func_465(&uLocal_124);
							Local_979[iLocal_884 /*6*/].f_5 = Local_944.f_13;
						}
						break;
					
					case 3:
						if (func_5(&(Local_944.f_5)))
						{
							func_458((func_3() - func_22(&(Local_944.f_5), 0, 0)), func_25() != 0, &uLocal_122);
						}
						if (!func_636(3))
						{
							if (func_2(&(Local_944.f_5), 10000, 0))
							{
								func_457();
								func_612(3);
							}
						}
						if (func_25() == 0)
						{
							func_529();
							func_456();
							func_455();
							func_454();
							if (func_453())
							{
								if (Local_979[iLocal_884 /*6*/].f_5 == 3)
								{
									func_452();
								}
							}
							if (iLocal_884 > -1)
							{
								if (iLocal_884 == unk_0x88641E5BC172153A())
								{
									func_466();
									func_334(&(Global_1341327.f_529), &Global_1341327, 26, &(Global_1341327.f_1), &(Global_1341327.f_112), -1, 0);
								}
							}
						}
						if (Local_944.f_13 != 3)
						{
							Local_979[iLocal_884 /*6*/].f_5 = Local_944.f_13;
						}
						break;
					
					case 4:
						if (Local_944.f_13 > 4)
						{
							Local_979[iLocal_884 /*6*/].f_5 = Local_944.f_13;
						}
						break;
					
					case 5:
						func_473();
						func_75();
						break;
					
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()
{
	int iVar0;
	
	if (!func_636(5))
	{
		func_473();
		if (unk_0x591AF4C50B46E014())
		{
			if (func_44(unk_0x5C40D1D6A2650FC5(), 4))
			{
				func_74(4);
				func_72(1);
				unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
			}
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_892))
		{
			unk_0x789C84F1B8496AD0(&uLocal_892);
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_891))
		{
			unk_0x789C84F1B8496AD0(&uLocal_891);
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_893))
		{
			unk_0x789C84F1B8496AD0(&uLocal_893);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_894[iVar0]))
			{
				unk_0x789C84F1B8496AD0(&(uLocal_894[iVar0]));
			}
			iVar0++;
		}
		func_64();
		func_62();
		func_61();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		func_465(&uLocal_124);
		func_52();
		func_612(5);
	}
}

void func_52()
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_60())
		{
			func_59();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_62();
		func_58(8, 0, 0, 0, 0);
		Global_2404996.f_676.f_507 = iParam11;
		Global_2404996.f_676.f_510 = iParam3;
		Global_2404996.f_676.f_511 = iParam4;
		Global_2404996.f_676.f_508 = iParam5;
		Global_2404996.f_676.f_509 = iParam6;
		Global_2404996.f_676.f_512 = iParam7;
		Global_2404996.f_676.f_513 = iParam8;
		Global_2404996.f_676.f_514 = iParam9;
		Global_2404996.f_1709 = 1;
	}
	else
	{
		func_55();
	}
}

void func_55()
{
	if (func_60() && !func_57())
	{
		func_59();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_62();
		func_58(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_56()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

int func_57()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411638 = 0;
	}
	Global_2404996.f_479 = iParam0;
	Global_2404996.f_479.f_1 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_479.f_2 = iParam1;
	Global_2404996.f_479.f_3 = iParam2;
	Global_2404996.f_479.f_4 = iParam3;
	Global_2404996.f_479.f_5 = iParam4;
}

void func_59()
{
	if (func_57())
	{
		if (Global_2404996.f_676.f_515 == Global_2404996.f_1192.f_515)
		{
			return;
		}
	}
	if (!unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_1192), &(Global_2404996.f_676), 516);
		Global_2404996.f_485 = { Global_2404996.f_479 };
		Global_2404996.f_1708 = 1;
	}
}

int func_60()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_2404996.f_1711[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404996.f_1710 = 0;
}

void func_62()
{
	if (func_60() && !func_57())
	{
		func_59();
	}
	func_63();
	Global_2404996.f_676 = 0;
}

void func_63()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404996.f_676.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	
	if (!func_636(8))
	{
		func_612(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (unk_0x885F483F34E47503(iVar1))
			{
				if (iVar1 != unk_0x0FFED3E94261A832())
				{
					if (unk_0xAA4F14DA15DB0B51(uLocal_885, iVar0))
					{
						func_70(iVar1, 432, 0);
						func_65(iVar1, func_69(iLocal_904), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_65(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_67())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_66(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = uParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_66(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

int func_67()
{
	switch (func_68())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_68()
{
	return Global_25222;
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_67())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_574[iParam0]) || Global_2415029.f_574[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_71();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_71();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_71()
{
	Global_2415029.f_1002 = 1;
}

void func_72(bool bParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (!func_73())
		{
			if (func_821(unk_0x0FFED3E94261A832(), 1, 0))
			{
				unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 342, 0);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 122, 0);
			}
			unk_0x6D56F76C9BA92337(unk_0x0FFED3E94261A832(), 1f);
			unk_0xDC79B631D35E6B71(0);
			unk_0x337229861BC52CD5(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0x0E76FE9D6BA1007D(0, 0);
				}
			}
		}
		else
		{
			if (func_821(unk_0x0FFED3E94261A832(), 1, 1))
			{
				unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 342, 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 122, 1);
				unk_0x6D56F76C9BA92337(unk_0x0FFED3E94261A832(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x0E76FE9D6BA1007D(1, 0);
				}
			}
			unk_0xDC79B631D35E6B71(1);
			unk_0x337229861BC52CD5(0);
		}
	}
}

bool func_73()
{
	return Global_1312416;
}

void func_74(int iParam0)
{
	unk_0x507FE690B1271947(&(Local_979[unk_0x88641E5BC172153A() /*6*/].f_1), iParam0);
}

void func_75()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar19;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	if (!func_636(1))
	{
		if (func_25() != 0)
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (func_637(1))
				{
					if (((!func_656() && !func_655()) && !func_654(179)) && func_44(unk_0x5C40D1D6A2650FC5(), 1))
					{
						if (func_332())
						{
							iVar1 = func_34(unk_0x0FFED3E94261A832());
							iVar2 = Local_944.f_30;
							switch (func_25())
							{
								case 2:
									unk_0x7D53B6FFAEDA810A(1);
									break;
								
								case 3:
									unk_0x7D53B6FFAEDA810A(1);
									break;
								
								case 1:
									unk_0x7D53B6FFAEDA810A(1);
									if (Local_944.f_30 > -1)
									{
										if (Local_944.f_30 == 99)
										{
											func_330(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_905, iLocal_903, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_330(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_905, iLocal_903, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_330(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_905, iLocal_903, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_314(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2);
									}
									break;
								
								case 5:
									unk_0x7D53B6FFAEDA810A(1);
									func_314(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2);
									break;
								
								case 4:
									unk_0x7D53B6FFAEDA810A(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_330(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_905, iLocal_903, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_330(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_905, iLocal_903, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_330(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_905, iLocal_903, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar19 = unk_0x0FFED3E94261A832();
				func_312(1, iVar19);
				if (bVar0)
				{
				}
				func_116(179, bVar0, &Var3, 0);
				func_768(bVar0, 0);
				func_51();
				func_612(1);
			}
		}
	}
	if (func_77(&uLocal_868, 1, 0))
	{
		func_76(0);
	}
}

void func_76(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Local_979[unk_0x88641E5BC172153A() /*6*/].f_1), iParam0);
}

int func_77(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_115(29);
	if ((*uParam0 > 0 && !func_114()) && func_106(unk_0x0FFED3E94261A832()) != 0)
	{
		if (!func_103())
		{
			func_102();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_2(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 2);
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_101(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_2(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_91(iParam2);
				func_101(uParam0, 2);
			}
			break;
		
		case 2:
			func_91(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_78(func_79(0)))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				func_101(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
				func_101(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
			unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_78(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

char* func_79(int iParam0)
{
	if (((func_89(unk_0x0FFED3E94261A832()) || func_86(unk_0x0FFED3E94261A832())) || func_83()) || iParam0)
	{
		if (func_86(unk_0x0FFED3E94261A832()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_80(func_82()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_81(iParam0, 0);
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_82()
{
	return Global_1636589;
}

bool func_83()
{
	return (func_85() && func_45(func_84()));
}

int func_84()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

bool func_85()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

bool func_86(int iParam0)
{
	return func_81(func_87(iParam0), 0);
}

int func_87(int iParam0)
{
	if (func_88(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_88(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_89(int iParam0)
{
	return func_90(func_87(iParam0));
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148 && func_46(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_91(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0))
	{
		if ((((((((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_821(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0xF4EE9D6C8E60AE22()) && !func_100(unk_0x0FFED3E94261A832(), 22)) && func_106(unk_0x0FFED3E94261A832()) != 0) && !func_98(func_99())) && !func_89(unk_0x0FFED3E94261A832())) && !func_97(func_87(unk_0x0FFED3E94261A832())))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 1);
			func_96(func_79(iParam0), -1);
			func_92(1);
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 0);
		}
	}
}

void func_92(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_93(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_114())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_93(bool bParam0)
{
	return func_94(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_94(int iParam0, bool bParam1)
{
	return func_95(iParam0, bParam1, 1);
}

int func_95(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_46(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_29() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_96(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	var uVar0;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x35302CD5A5D37EED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	return 0;
}

bool func_100(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_102()
{
	Global_2456236 = 1;
}

int func_103()
{
	if (((((((func_87(unk_0x0FFED3E94261A832()) == 170 || func_87(unk_0x0FFED3E94261A832()) == 219) || func_87(unk_0x0FFED3E94261A832()) == 221) || func_87(unk_0x0FFED3E94261A832()) == 220) || func_87(unk_0x0FFED3E94261A832()) == 216) || func_87(unk_0x0FFED3E94261A832()) == 215) || func_87(unk_0x0FFED3E94261A832()) == 214) || func_87(unk_0x0FFED3E94261A832()) == 218)
	{
		return 1;
	}
	if (func_104(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_821(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_105(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
	}
	return -1;
}

int func_106(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_113(iParam0) && !func_112(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_111(iParam0);
	bVar3 = func_73();
	uVar4 = func_656();
	if ((bVar1 && (func_110(iParam0) || func_109(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_108(iParam0)) && !func_107(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2497344.f_4828.f_31 != iVar0)
	{
		Global_2497344.f_4828.f_31 = iVar0;
	}
	return iVar0;
}

bool func_107(int iParam0)
{
	return func_100(iParam0, 19);
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_100(iParam0, 9);
	}
	return 0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

bool func_111(int iParam0)
{
	return func_100(iParam0, 20);
}

bool func_112(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

bool func_114()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

void func_115(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

void func_116(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	func_310(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_16829);
		}
		else
		{
			iVar1 = (iVar1 + func_309(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_308(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16828);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_306(iParam0))
	{
		if (bParam1)
		{
			if (func_305(unk_0x0FFED3E94261A832()) > 0)
			{
				func_304();
			}
			else
			{
				func_303();
			}
		}
		else
		{
			func_302();
		}
	}
	func_286(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_283(iParam0, uParam2, &iVar0, &uVar5);
	func_243(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_84();
	if (iVar6 != func_29() && iParam0 != 148)
	{
		if (func_242(unk_0x0FFED3E94261A832(), 0))
		{
			if (!func_240(unk_0x0FFED3E94261A832(), iVar6, 1))
			{
				func_200(&iVar0, 1);
			}
		}
	}
	func_196(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1773254.f_10 = iVar1;
		func_195();
		func_149(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1773254.f_9 = iVar0;
		iVar11 = func_148();
		if (iVar11 != func_29())
		{
			func_147(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_146(1);
		if (iParam0 == 168)
		{
			if (!func_145())
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_144())
			{
				if (!func_145())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_145())
			{
				func_135(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2595364[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_134())
			{
				if (!func_145())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_145())
			{
				func_135(-856006867, iVar0, &iVar14, 0, 1, 0);
				Global_2595364[iVar14 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar14 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar14 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (func_145())
		{
			func_135(-856006867, iVar0, &iVar15, 0, 1, 0);
			Global_2595364[iVar15 /*76*/].f_8.f_54 = uVar9;
			Global_2595364[iVar15 /*76*/].f_8.f_55 = uVar10;
			Global_2595364[iVar15 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xD2924B7B97D1AE97(uVar9, uVar10, iVar0, bVar12);
		}
		func_133(iParam0, iVar0);
		if (func_132(iParam0))
		{
			if (func_131(iParam0) > -1)
			{
				func_130(func_131(iParam0), iVar0);
			}
		}
		Global_2456893 = iVar0;
		func_129(&Global_2455167, 0, 0);
	}
	if (func_108(unk_0x0FFED3E94261A832()) || func_111(unk_0x0FFED3E94261A832()))
	{
		func_118(iParam0);
	}
	if (func_90(iParam0))
	{
		Global_1773272.f_13 = iVar0;
		Global_1773272.f_14 = iVar1;
	}
	if (func_97(iParam0))
	{
		Global_1773325.f_13 = iVar0;
		Global_1773325.f_14 = iVar1;
	}
	if (func_117(iParam0))
	{
		Global_1773387.f_12 = iVar0;
		Global_1773387.f_13 = iVar1;
	}
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_118(int iParam0)
{
	if (func_128(unk_0x0FFED3E94261A832()) && func_144())
	{
		if (func_127(iParam0))
		{
			func_121(6303, -1);
		}
		else if (func_120(iParam0))
		{
			func_121(6305, -1);
		}
		else if (func_81(iParam0, 1))
		{
			func_121(6306, -1);
		}
		else if (func_119(iParam0))
		{
			func_121(6307, -1);
		}
	}
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_125(iParam0, func_126(iParam1), 0);
	iVar0++;
	if (!func_124(iParam0))
	{
		func_123(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_122(iParam0, iVar0, iParam1, 1);
	}
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_126(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_126(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_126(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_126(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_126(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_126(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_126(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_126(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_126(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_126(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_126(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_126(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_126(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_126(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_126(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_126(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_126(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_126(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_126(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_126(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_126(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_126(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_126(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_126(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_126(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_126(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_126(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_126(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_126(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_126(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_126(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_126(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_126(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_126(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_124(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_126(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_97, 14);
}

void func_129(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

void func_130(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2497344.f_271 = iParam0;
		if (iParam1 > Global_262145.f_5500)
		{
			iParam1 = Global_262145.f_5500;
		}
		Global_2497344.f_272 = iParam1;
		Global_2497344.f_273 = 0;
	}
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_133(int iParam0, int iParam1)
{
	if (func_128(unk_0x0FFED3E94261A832()) && func_144())
	{
		if (func_127(iParam0) && iParam1 > 0)
		{
			func_123(6304, (func_125(6304, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

bool func_134()
{
	return func_41(unk_0x0FFED3E94261A832());
}

void func_135(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_145())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_136(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_136(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_136(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_145())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_49()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_143(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_142(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_137(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_137(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_138(iParam0);
	}
}

void func_138(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_145())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_141(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_139(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_139(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_140(&(uParam0->f_8.f_3));
	func_140(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_142(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_143(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_145())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = uParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = uParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_144()
{
	return func_45(unk_0x0FFED3E94261A832());
}

int func_145()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

bool func_146(bool bParam0)
{
	return func_242(unk_0x0FFED3E94261A832(), bParam0);
}

void func_147(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1622795[iParam0 /*431*/].f_11.f_7[0];
	*uParam2 = Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_148()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

int func_149(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_150(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_160(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				iVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_156(unk_0x585F703DF3E83B6E(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_151(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_151(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_154(iParam0, 1) };
	if (iParam0 == func_153(unk_0x2A5EB8B0FE590B91()))
	{
		func_152(1);
	}
	func_156(Var0, iParam1, 0, sParam2, iParam3);
}

void func_152(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_153(int iParam0)
{
	return iParam0;
}

Vector3 func_154(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC30ED45C83B62BDA())
	{
		Var3 = { unk_0x7635C19924563670(2) };
	}
	if (iParam0 == func_155(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
	{
		Var0 = { unk_0x82D9CF397BA8C885(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		fVar6 = unk_0x6DAB28241B34DEED(iParam0);
		if (unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_155(int iParam0)
{
	return iParam0;
}

void func_156(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434604.f_1065[iVar0 /*30*/].f_6 == 0 || Global_2434604.f_1065[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434604.f_1065[iVar1 /*30*/] = { Param0 };
			Global_2434604.f_1065[iVar1 /*30*/].f_6 = 1;
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_159(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_158();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_157();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam6);
		}
	}
}

int func_157()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_158()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_159(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(unk_0x616AF251C179EE09(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_160(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_161(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_161(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_194(unk_0x0FFED3E94261A832()) || func_193(unk_0x0FFED3E94261A832()))
	{
		if (Global_262145.f_8301 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8301;
		}
	}
	else if (Global_262145.f_5551 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5551;
	}
	if (func_192(sParam2))
	{
	}
	if (func_191())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_189(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_188(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_185(0, &iVar1);
					break;
				
				case 3:
					func_185(1, &iVar1);
					break;
				
				case 1:
					func_181(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1779834)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_180(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_172((func_179(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_180(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_166(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_162((func_164(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_162((func_164(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_162(int iParam0)
{
	if (func_191())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_163(joaat("mpply_globalxp"), iParam0);
	}
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
}

int func_164(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_821(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_165(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_165(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_166(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_171(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_169(func_170(&Var0));
			if (iVar13 == 0)
			{
				func_168(&Global_1361887, iParam0);
				func_167(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_168(&Global_1361888, iParam0);
				func_167(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_168(&Global_1361889, iParam0);
				func_167(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_168(&Global_1361890, iParam0);
				func_167(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_168(&Global_1361891, iParam0);
				func_167(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_168(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_169(int iParam0)
{
	if (iParam0 == Global_1361882)
	{
		return 0;
	}
	else if (iParam0 == Global_1361883)
	{
		return 1;
	}
	else if (iParam0 == Global_1361884)
	{
		return 2;
	}
	else if (iParam0 == Global_1361885)
	{
		return 3;
	}
	else if (iParam0 == Global_1361886)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_170(var uParam0)
{
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return Global_2454636;
		}
	}
	return Global_2454636;
}

struct<13> func_171(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

void func_172(int iParam0, int iParam1, int iParam2)
{
	if (func_191())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_126(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_126(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_178(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_176(iParam0, 1);
		}
		func_122(635, iParam0, -1, 1);
		func_123(636, func_176(iParam0, 1), -1, 1, 0);
		Global_1362002[func_126(-1)] = iParam0;
		func_173(7, 0);
	}
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_175(iParam0, iParam1))
	{
		iVar0 = func_174();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_174()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_175(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_177(iParam0, 0);
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_178(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

int func_179(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_126(-1)];
			}
			else if (func_178(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_126(-1)];
	}
	return 0;
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_125(iParam0, func_126(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_124(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_122(iParam0, iVar0, iParam2, 1);
	}
}

void func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		iVar4 = unk_0xBA948A9E34D09E6E(iVar0);
		if (unk_0x9E8AB4FC19962A90(iVar4))
		{
			iVar5 = unk_0x2AFA21CE4322B48D(iVar4);
			if (unk_0x220AE8028FACE96A(iVar5) != -1)
			{
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_184(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_183(unk_0x0FFED3E94261A832(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_182(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_182(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_182(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_183(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_171(iParam0) };
		Global_2484585 = { func_171(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_185(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			iVar3 = iVar0;
			if (unk_0x9E8AB4FC19962A90(iVar3))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(iVar3);
				if (func_821(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_183(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_821(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_186(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_183(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_182(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_182(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_186(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_187(iParam0), func_187(iParam1));
	return 0f;
}

Vector3 func_187(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_182(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_189(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_179(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_179(unk_0x0FFED3E94261A832());
		}
	}
	if (func_190(8000, 0, 0) > 0)
	{
		if (func_190(8000, 0, 0) < (iParam0 + func_179(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_190(8000, 0, 0) - func_179(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_190(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_282038[iParam0];
}

int func_191()
{
	return 1;
}

int func_192(char* sParam0)
{
	if (unk_0x47988E04F8E2F0AD(sParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(sParam0, "") || unk_0x35302CD5A5D37EED(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_193(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_194(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_195()
{
	Global_2456235 = 1;
}

void func_196(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_199(7))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_197(iParam0);
	iVar2 = unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(Global_2497344.f_4828.f_80, unk_0x11ABC381A58DD5AB()));
	if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_19497)
		{
			iVar2 = Global_262145.f_19497;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_19477)
		{
			iVar2 = Global_262145.f_19477;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_19489)
		{
			iVar2 = Global_262145.f_19489;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17031)
		{
			iVar2 = Global_262145.f_17031;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17032)
		{
			iVar2 = Global_262145.f_17032;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17030)
		{
			iVar2 = Global_262145.f_17030;
		}
	}
	else if (func_127(iParam0))
	{
		if (iVar2 > Global_262145.f_17033)
		{
			iVar2 = Global_262145.f_17033;
		}
	}
	else if (func_81(iParam0, 0) || func_120(iParam0))
	{
		if (iVar2 > Global_262145.f_17034)
		{
			iVar2 = Global_262145.f_17034;
		}
	}
	else if (iVar2 > Global_262145.f_11047)
	{
		iVar2 = Global_262145.f_11047;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11138;
		
		case 152:
			return Global_262145.f_11173;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11161;
		
		case 157:
			return Global_262145.f_11128;
		
		case 159:
			return Global_262145.f_11111;
		
		case 164:
			return Global_262145.f_11151;
		
		case 160:
			return Global_262145.f_11201;
		
		case 162:
			return Global_262145.f_11221;
		
		case 163:
			return Global_262145.f_11186;
		
		case 154:
			return Global_262145.f_11256;
		
		case 155:
			return Global_262145.f_11246;
		
		case 153:
			return Global_262145.f_11210;
		
		case 170:
			return Global_262145.f_13547;
		
		case 171:
			return Global_262145.f_13606;
		
		case 172:
			return Global_262145.f_13624;
		
		case 173:
			return Global_262145.f_13565;
		
		case 166:
			return Global_262145.f_13580;
		
		case 167:
			return Global_262145.f_13671;
		
		case 169:
			return Global_262145.f_13643;
		
		case 168:
			return Global_262145.f_13636;
		
		case 179:
			return Global_262145.f_16913;
		
		case 180:
			return Global_262145.f_16692;
		
		case 182:
			return Global_262145.f_16692;
		
		case 183:
			return Global_262145.f_16692;
		
		case 185:
			return Global_262145.f_16692;
		
		case 186:
			return Global_262145.f_16692;
		
		case 189:
			return Global_262145.f_16913;
		
		case 190:
			return Global_262145.f_16568;
		
		case 191:
			return Global_262145.f_16659;
		
		case 192:
			return Global_262145.f_16453;
		
		case 193:
			return Global_262145.f_16913;
		
		case 194:
			return Global_262145.f_16913;
		
		case 195:
			return Global_262145.f_16692;
		
		case 197:
			return Global_262145.f_16692;
		
		case 198:
			return Global_262145.f_16692;
		
		case 199:
			return Global_262145.f_16913;
		
		case 200:
			return Global_262145.f_16913;
		
		case 201:
			return Global_262145.f_16913;
		
		case 205:
			return Global_262145.f_16913;
		
		case 207:
			return Global_262145.f_16692;
		
		case 208:
			return Global_262145.f_16692;
		
		case 209:
			return Global_262145.f_16692;
		
		case 210:
			return Global_262145.f_16913;
		
		case 211:
			return Global_262145.f_16913;
		
		case 214:
			return Global_262145.f_17709;
		
		case 215:
			return Global_262145.f_17711;
		
		case 216:
			return Global_262145.f_17713;
		
		case 217:
			return Global_262145.f_17715;
		
		case 218:
			return Global_262145.f_17717;
		
		case 219:
			return Global_262145.f_17719;
		
		case 220:
			return Global_262145.f_17721;
		
		case 221:
			return Global_262145.f_17723;
		
		case 225:
			if (func_146(0) || func_93(0))
			{
				return Global_262145.f_19499;
			}
			break;
		
		case 226:
			if (func_146(0) || func_93(0))
			{
				return Global_262145.f_19479;
			}
			break;
		
		case 227:
			if (func_146(0) || func_93(0))
			{
				return Global_262145.f_19491;
			}
			break;
	}
	return 0;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11137;
		
		case 152:
			return Global_262145.f_11172;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11160;
		
		case 157:
			return Global_262145.f_11127;
		
		case 159:
			return Global_262145.f_11110;
		
		case 164:
			return Global_262145.f_11150;
		
		case 160:
			return Global_262145.f_11200;
		
		case 162:
			return Global_262145.f_11220;
		
		case 163:
			return Global_262145.f_11185;
		
		case 154:
			return Global_262145.f_11255;
		
		case 155:
			return Global_262145.f_11245;
		
		case 153:
			return Global_262145.f_11209;
		
		case 170:
			return Global_262145.f_13546;
		
		case 171:
			return Global_262145.f_13605;
		
		case 172:
			return Global_262145.f_13623;
		
		case 173:
			return Global_262145.f_13564;
		
		case 166:
			return Global_262145.f_13579;
		
		case 179:
			return Global_262145.f_16912;
		
		case 180:
			return Global_262145.f_16691;
		
		case 182:
			return Global_262145.f_16691;
		
		case 183:
			return Global_262145.f_16691;
		
		case 185:
			return Global_262145.f_16691;
		
		case 186:
			return Global_262145.f_16691;
		
		case 189:
			return Global_262145.f_16912;
		
		case 193:
			return Global_262145.f_16912;
		
		case 194:
			return Global_262145.f_16912;
		
		case 195:
			return Global_262145.f_16691;
		
		case 197:
			return Global_262145.f_16691;
		
		case 198:
			return Global_262145.f_16691;
		
		case 199:
			return Global_262145.f_16912;
		
		case 200:
			return Global_262145.f_16912;
		
		case 201:
			return Global_262145.f_16912;
		
		case 205:
			return Global_262145.f_16912;
		
		case 207:
			return Global_262145.f_16691;
		
		case 208:
			return Global_262145.f_16691;
		
		case 209:
			return Global_262145.f_16691;
		
		case 210:
			return Global_262145.f_16912;
		
		case 211:
			return Global_262145.f_16912;
		
		case 190:
			if (!func_134())
			{
				return Global_262145.f_16567;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_134())
			{
				return Global_262145.f_16658;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_134())
			{
				return Global_262145.f_16452;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17708;
		
		case 215:
			return Global_262145.f_17710;
		
		case 216:
			return Global_262145.f_17712;
		
		case 217:
			return Global_262145.f_17714;
		
		case 218:
			return Global_262145.f_17716;
		
		case 219:
			return Global_262145.f_17718;
		
		case 220:
			return Global_262145.f_17720;
		
		case 221:
			return Global_262145.f_17722;
		
		case 225:
			if (func_93(0))
			{
				return Global_262145.f_19498;
			}
			break;
		
		case 226:
			if (func_93(0))
			{
				return Global_262145.f_19478;
			}
			break;
		
		case 227:
			if (func_93(0))
			{
				return Global_262145.f_19490;
			}
			break;
	}
	return 0;
}

bool func_199(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_134())
		{
			if (func_146(0))
			{
				if (!func_93(0))
				{
					if (unk_0x885F483F34E47503(func_148()))
					{
						if (func_239() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_239());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_237(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_206("GB_BCUT_TICK1", func_148(), iVar0, 0, 0, 1, 1);
						}
						func_205(20);
						func_201(func_148(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_821(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_204(iParam0);
		func_203(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_202(iParam0));
	}
}

var func_202(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_203(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_204(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

void func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_206(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(func_213(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_211(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_207(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_207(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_210() || !unk_0x1B154DE2D4606530()) || !func_47(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_208(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_209(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_210()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

var func_211(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_212(&cVar0);
}

var func_212(char[4] cParam0)
{
	return cParam0;
}

int func_213(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_235(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_235(unk_0x0FFED3E94261A832()) || (func_234() && func_233())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_232();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(iVar1))
			{
				if (unk_0xB0BB7458627D389F(iVar1) != -1)
				{
					if (func_821(unk_0xB0BB7458627D389F(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_230(iParam1, iParam0, 0);
							}
							else
							{
								return func_220(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_220(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_230(iParam1, iParam0, 0);
				}
				else
				{
					return func_214(0, -1, 0);
				}
			}
			else
			{
				return func_214(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_230(iParam1, iParam0, 0);
		}
		else
		{
			return func_220(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_220(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_214(bool bParam0, int iParam1, bool bParam2)
{
	return func_215(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_215(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_184(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_219(1);
				}
				else
				{
					return func_219(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_216(iVar0, iParam2, 1);
			}
			else
			{
				return func_216(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_219(1);
	}
	return func_219(0);
}

int func_216(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_218(iParam0, iParam1);
	if (func_217(Global_1638223.f_93532))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_184(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_219(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_220(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_227())
			{
				iVar3 = func_225(iParam0);
				if (!iVar3 == -1)
				{
					return func_223(iVar3);
				}
			}
			if ((func_222(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_184(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_219(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_221(1);
			}
			else
			{
				return func_215(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_219(1);
			}
			else
			{
				return func_215(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_225(iParam0);
	if (!iVar4 == -1)
	{
		return func_223(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_221(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_222(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

int func_223(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_224(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_224(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_225(int iParam0)
{
	if (!iParam0 == func_29())
	{
		if (func_242(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_226(iParam0)];
		}
	}
	return -1;
}

int func_226(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_29();
}

int func_227()
{
	if (func_229() || func_228())
	{
		return 1;
	}
	return 0;
}

var func_228()
{
	return Global_2445217.f_13;
}

var func_229()
{
	return Global_2445217.f_12;
}

int func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_227())
	{
		iVar1 = func_225(iParam1);
		if (!iVar1 == -1)
		{
			return func_223(iVar1);
		}
	}
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_215(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_231(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_231(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_232()
{
	return Global_2359301.f_2;
}

bool func_233()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_234()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

int func_235(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_236())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_236()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_238(1);
	}
	else
	{
		iVar1 = func_238(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_238(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_239()
{
	return Global_262145.f_11041;
}

int func_240(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_241(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_29())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_241(int iParam0, int iParam1)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_29())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_242(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_29();
}

void func_243(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_93(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_134())
		{
			iVar15 = unk_0x0FFED3E94261A832();
		}
		else
		{
			iVar15 = func_148();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_282(iVar15);
			iVar0 = (func_281(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_276(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19481));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19480));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x0FFED3E94261A832())
			{
				func_270(iVar16, iVar2);
				if (func_266(iVar16) >= Global_262145.f_19038 || iVar2 >= Global_262145.f_19038)
				{
					func_255(5);
				}
				iVar6 = func_254(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_19483);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_19482));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_205(108);
					}
					else
					{
						func_205(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x244673FE98A43CA3())
						{
							iVar19 = iVar18;
							if (unk_0x9E8AB4FC19962A90(iVar19))
							{
								iVar20 = unk_0x2AFA21CE4322B48D(iVar19);
								if (func_253(iVar20))
								{
									func_244(iVar20, 1, 3, 0);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_19484;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_19485;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1779842 = *iParam2;
					func_205(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_244(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_247(iParam0);
	if (bParam3)
	{
		func_246(iParam0, uVar0, iParam1, iParam2);
	}
	else
	{
		func_245(iParam0, uVar0, iParam1, iParam2);
	}
}

void func_245(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_204(iParam0);
	func_203(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_202(iParam0));
		}
	}
}

void func_246(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = func_204(iParam0);
	func_203(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_202(iParam0));
		}
	}
}

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_252();
	iVar0 = func_250(iParam0, iVar0);
	iVar1 = Global_1622795[func_148() /*431*/].f_11.f_316;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13507));
	if (iVar0 < func_249())
	{
		iVar0 = func_249();
	}
	if (iVar0 > func_248())
	{
		iVar0 = func_248();
	}
	return iVar0;
}

int func_248()
{
	return Global_262145.f_13508;
}

int func_249()
{
	return Global_262145.f_14683;
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_305(iParam0) * func_251());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_251()
{
	return Global_262145.f_14682;
}

var func_252()
{
	return Global_262145.f_11033;
}

int func_253(int iParam0)
{
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (iParam0 != unk_0x0FFED3E94261A832())
		{
			if (func_240(iParam0, unk_0x0FFED3E94261A832(), 0))
			{
				if (!func_100(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
		{
			iVar2 = unk_0x7C214DA899F05536(iVar0);
			if (!func_47(iVar2, 0) && !func_240(iVar2, unk_0x0FFED3E94261A832(), 1))
			{
				iVar1++;
			}
			else if (func_47(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19026)
			{
				if (func_258(Global_262145.f_19027))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19028)
			{
				if (func_258(Global_262145.f_19029))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19030)
			{
				if (func_258(Global_262145.f_19031))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19032)
			{
				if (func_258(Global_262145.f_19033))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19034)
			{
				if (func_258(Global_262145.f_19035))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19036)
			{
				if (func_258(Global_262145.f_19037))
				{
					func_256("CLOTHAWDSTRAP3", Global_262145.f_19038, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19039)
			{
				if (func_258(Global_262145.f_19040))
				{
					func_256("CLOTHAWDSTRAP5", Global_262145.f_19168, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19042)
			{
				if (func_258(Global_262145.f_19043))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19044)
			{
				if (func_258(Global_262145.f_19045))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19046)
			{
				if (func_258(Global_262145.f_19047))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19048)
			{
				if (func_258(Global_262145.f_19049))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19050)
			{
				if (func_258(Global_262145.f_19051))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19052)
			{
				if (func_258(Global_262145.f_19053))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19054)
			{
				if (func_258(Global_262145.f_19055))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19056)
			{
				if (func_258(Global_262145.f_19057))
				{
					func_257("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_256(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(iParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_207(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_257(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x95CE6D748899618C(iParam3);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
	}
	else
	{
		Global_2484572 = { func_171(unk_0x0FFED3E94261A832()) };
		if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
		{
			iVar1 = 0;
			if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2484502.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xCFCC273DCA662841(iVar2, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar1, 0, Global_2484502, unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), Global_1314009, Global_1314010, Global_1314011);
		}
		else
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
	}
	func_207(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_263(15417, -1, -1))
			{
				func_262(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_263(15418, -1, -1))
			{
				func_262(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_263(15425, -1, -1))
			{
				func_262(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_263(15405, -1, -1))
			{
				func_262(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_263(15393, -1, -1))
			{
				func_262(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_263(15409, -1, -1))
			{
				func_262(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_263(15396, -1, -1))
			{
				func_262(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_263(15412, -1, -1))
			{
				func_262(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_263(15403, -1, -1))
			{
				func_262(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_263(15389, -1, -1))
			{
				func_262(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_263(15398, -1, -1))
			{
				func_262(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_263(15400, -1, -1))
			{
				func_262(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_263(15408, -1, -1))
			{
				func_262(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_263(15411, -1, -1))
			{
				func_262(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_263(15397, -1, -1))
			{
				func_262(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_263(15413, -1, -1))
			{
				func_262(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_263(15391, -1, -1))
			{
				func_262(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_263(15388, -1, -1))
			{
				func_262(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_263(15401, -1, -1))
			{
				func_262(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_263(15394, -1, -1))
			{
				func_262(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_263(15406, -1, -1))
			{
				func_262(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_263(15395, -1, -1))
			{
				func_262(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_263(15410, -1, -1))
			{
				func_262(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_263(15407, -1, -1))
			{
				func_262(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_263(15414, -1, -1))
			{
				func_262(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_263(15415, -1, -1))
			{
				func_262(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_263(15399, -1, -1))
			{
				func_262(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_263(15404, -1, -1))
			{
				func_262(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_263(15392, -1, -1))
			{
				func_262(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_263(15390, -1, -1))
			{
				func_262(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_263(15402, -1, -1))
			{
				func_262(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_263(15416, -1, -1))
			{
				func_262(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_261(209, -1))
			{
				func_259(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_263(15426, -1, -1))
			{
				func_262(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_263(15422, -1, -1))
			{
				func_262(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_263(15423, -1, -1))
			{
				func_262(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_263(15421, -1, -1))
			{
				func_262(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_263(15427, -1, -1))
			{
				func_262(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_263(15419, -1, -1))
			{
				func_262(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_263(15420, -1, -1))
			{
				func_262(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_260())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_126(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_260()
{
	return 1;
	return 0;
}

int func_261(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_126(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_262(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_265(iParam0, iParam1);
	uVar2 = func_264(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_264(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = func_268(iParam0);
	return func_125(func_267(iVar0), -1, 0);
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3926;
		
		case 1:
			return 3927;
		
		case 2:
			return 3928;
		
		case 3:
			return 3929;
		
		case 4:
			return 3930;
		
		case 5:
			return 5431;
		
		default:
	}
	return 3926;
}

int func_268(int iParam0)
{
	int iVar0;
	
	if (func_269(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_269(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_270(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_268(iParam0);
	iVar1 = func_267(iVar0);
	iVar2 = (func_125(iVar1, -1, 0) + iParam1);
	func_123(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_273(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
			{
				iVar1 = func_267(iVar0);
				iVar3 = (iVar3 + func_125(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_272(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_271(9357, iVar5, -1, 1);
	}
}

var func_271(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x46377A59ACA37C91(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_275(iParam0, iParam1);
	uVar2 = func_274(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_275(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_280(iParam1);
	if (func_269(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15512;
				if (func_277(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15517);
				}
				if (func_277(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15522);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15511;
				if (func_277(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15516);
				}
				if (func_277(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15521);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15510;
				if (func_277(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15515);
				}
				if (func_277(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15520);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15508;
				if (func_277(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15513);
				}
				if (func_277(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15518);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15509;
				if (func_277(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15514);
				}
				if (func_277(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15519);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_19506;
				if (func_277(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_19508);
				}
				if (func_277(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_19507);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_277(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_279(iParam0, iParam1))
	{
		iVar0 = func_278(iParam0, iParam1);
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_278(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_269(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_269(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_269(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

void func_283(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_144())
			{
				Var0 = { func_285() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_276(unk_0x0FFED3E94261A832(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17142);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17141);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_254(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17132);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17131));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_205(86);
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (func_93(0))
			{
				Var15 = { func_284(func_148()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_276(func_148(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17142));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17141));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17181;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17182;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_284(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_185;
}

struct<2> func_285()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_185;
}

void func_286(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_41(unk_0x0FFED3E94261A832()))
		{
			if (bParam1)
			{
				func_301();
			}
			func_300();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(unk_0x0FFED3E94261A832()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_292(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_291(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_254(&uVar2);
					iVar4 = Global_262145.f_14693;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13902));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_205(44);
					}
				}
				func_289(*iParam3);
				func_288();
				Global_2497344.f_4828.f_192 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x244673FE98A43CA3())
				{
					iVar8 = iVar7;
					if (unk_0x9E8AB4FC19962A90(iVar8))
					{
						iVar9 = unk_0x2AFA21CE4322B48D(iVar8);
						if (func_253(iVar9))
						{
							func_244(iVar9, 1, 0, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(unk_0x0FFED3E94261A832()))
		{
			func_287();
		}
	}
}

void func_287()
{
	int iVar0;
	
	iVar0 = Global_2528811[func_49()];
	iVar0++;
	func_122(3652, iVar0, -1, 1);
}

void func_288()
{
	int iVar0;
	
	iVar0 = Global_2528817[func_49()];
	iVar0++;
	func_122(3651, iVar0, -1, 1);
}

void func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2528820[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_122(3653, iVar0, -1, 1);
	if (func_273(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_290(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_271(7666, iVar2, -1, 1);
	}
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14826;
			break;
		
		case 2:
			return Global_262145.f_14827;
			break;
		
		case 3:
			return Global_262145.f_14828;
			break;
		
		case 4:
			return Global_262145.f_14829;
			break;
		
		case 5:
			return Global_262145.f_14830;
			break;
		
		case 6:
			return Global_262145.f_14831;
			break;
		
		case 7:
			return Global_262145.f_14832;
			break;
		
		case 8:
			return Global_262145.f_14833;
			break;
		
		case 9:
			return Global_262145.f_14834;
			break;
		
		case 10:
			return Global_262145.f_14835;
			break;
		
		case 11:
			return Global_262145.f_14836;
			break;
		
		case 12:
			return Global_262145.f_14837;
			break;
		
		case 13:
			return Global_262145.f_14838;
			break;
		
		case 14:
			return Global_262145.f_14839;
			break;
		
		case 15:
			return Global_262145.f_14840;
			break;
		
		case 16:
			return Global_262145.f_14841;
			break;
		
		case 17:
			return Global_262145.f_14842;
			break;
		
		case 18:
			return Global_262145.f_14843;
			break;
		
		case 19:
			return Global_262145.f_14844;
			break;
		
		case 20:
			return Global_262145.f_14845;
			break;
		
		case 21:
			return Global_262145.f_14846;
			break;
		
		case 22:
			return Global_262145.f_14847;
			break;
		
		case 23:
			return Global_262145.f_14848;
			break;
		
		case 24:
			return Global_262145.f_14849;
			break;
	}
	return 0;
}

var func_291(int iParam0)
{
	if (iParam0 >= Global_262145.f_13880)
	{
		return Global_262145.f_13901;
	}
	else if (iParam0 >= Global_262145.f_13879)
	{
		return Global_262145.f_13900;
	}
	else if (iParam0 >= Global_262145.f_13878)
	{
		return Global_262145.f_13899;
	}
	else if (iParam0 >= Global_262145.f_13877)
	{
		return Global_262145.f_13898;
	}
	else if (iParam0 >= Global_262145.f_13876)
	{
		return Global_262145.f_13897;
	}
	else if (iParam0 >= Global_262145.f_13875)
	{
		return Global_262145.f_13896;
	}
	else if (iParam0 >= Global_262145.f_13874)
	{
		return Global_262145.f_13895;
	}
	else if (iParam0 >= Global_262145.f_13873)
	{
		return Global_262145.f_13894;
	}
	else if (iParam0 >= Global_262145.f_13872)
	{
		return Global_262145.f_13893;
	}
	else if (iParam0 >= Global_262145.f_13871)
	{
		return Global_262145.f_13892;
	}
	else if (iParam0 >= Global_262145.f_13870)
	{
		return Global_262145.f_13891;
	}
	else if (iParam0 >= Global_262145.f_13869)
	{
		return Global_262145.f_13890;
	}
	else if (iParam0 >= Global_262145.f_13868)
	{
		return Global_262145.f_13889;
	}
	else if (iParam0 >= Global_262145.f_13867)
	{
		return Global_262145.f_13888;
	}
	else if (iParam0 >= Global_262145.f_13866)
	{
		return Global_262145.f_13887;
	}
	else if (iParam0 >= Global_262145.f_13865)
	{
		return Global_262145.f_13886;
	}
	else if (iParam0 >= Global_262145.f_13864)
	{
		return Global_262145.f_13885;
	}
	else if (iParam0 >= Global_262145.f_13863)
	{
		return Global_262145.f_13884;
	}
	else if (iParam0 >= Global_262145.f_13862)
	{
		return Global_262145.f_13883;
	}
	else if (iParam0 >= Global_262145.f_13861)
	{
		return Global_262145.f_13882;
	}
	return Global_262145.f_13881;
}

int func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_299(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_298(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_297(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_293(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_293(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_297(unk_0x895FB9FE885E36ED(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_293(int iParam0)
{
	int iVar0;
	
	if (func_296(iParam0))
	{
		iVar0 = func_294(func_295(iParam0));
		return func_125(iVar0, -1, 0);
	}
	return 0;
}

int func_294(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3631;
	}
	else if (iParam0 == 1)
	{
		return 3632;
	}
	else if (iParam0 == 2)
	{
		return 3633;
	}
	else if (iParam0 == 3)
	{
		return 3634;
	}
	else if (iParam0 == 4)
	{
		return 3635;
	}
	return 3631;
}

int func_295(int iParam0)
{
	int iVar0;
	
	if (func_296(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_296(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_297(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14080;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14078;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14082;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14076;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14074;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14084;
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_296(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1774539[iVar0] == iParam1 && Global_1774546[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_299(int iParam0)
{
	int iVar0;
	
	if (func_296(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_300()
{
	int iVar0;
	
	iVar0 = Global_2528808[func_49()];
	iVar0++;
	Global_2528808[func_49()] = iVar0;
	func_122(3650, iVar0, -1, 1);
}

void func_301()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2528805[func_49()];
	iVar1 = Global_2528814[func_49()];
	iVar0++;
	iVar1++;
	Global_2528805[func_49()] = iVar0;
	Global_2528814[func_49()] = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_102 = iVar1;
	func_122(3648, iVar0, -1, 1);
	func_122(3649, iVar1, -1, 1);
}

void func_302()
{
	if (func_134())
	{
		Global_2445989.f_3066.f_134 = 0;
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
	}
}

void func_303()
{
	if (func_134())
	{
		if (Global_2445989.f_3066.f_134 < 10)
		{
			Global_2445989.f_3066.f_134++;
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

void func_304()
{
	if (func_134())
	{
		if (Global_2445989.f_3066.f_134 > 0)
		{
			Global_2445989.f_3066.f_134 = (Global_2445989.f_3066.f_134 - 1);
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

int func_305(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_27;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
			if (func_146(1) && !func_93(1))
			{
				if (func_307(func_148()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_307(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11158) * Global_262145.f_11163));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11113));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11135) * Global_262145.f_11139));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11148) * Global_262145.f_11152));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11170) * Global_262145.f_11175));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11332) * Global_262145.f_11333));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11338) * Global_262145.f_11339));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11336) * Global_262145.f_11337));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11330) * Global_262145.f_11331));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11334) * Global_262145.f_11335));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11328) * Global_262145.f_11329));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13603;
		
		case 172:
			return Global_262145.f_13619;
		
		case 173:
			return Global_262145.f_13562;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16836;
		
		case 180:
			return Global_262145.f_16712;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16720;
		
		case 185:
			return Global_262145.f_16729;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16924;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16941;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16789;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16972;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16850;
		
		case 205:
			return Global_262145.f_16959;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16817;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16954;
		
		case 211:
			return Global_262145.f_16918;
		
		case 214:
			return Global_262145.f_17458;
		
		case 215:
			return Global_262145.f_17468;
		
		case 216:
			return Global_262145.f_17478;
		
		case 217:
			return Global_262145.f_17487;
		
		case 218:
			return Global_262145.f_17496;
		
		case 219:
			return Global_262145.f_17512;
		
		default:
	}
	return 0;
}

int func_309(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11159) * Global_262145.f_11164));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11109) * Global_262145.f_11114));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11136) * Global_262145.f_11140));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11149) * Global_262145.f_11153));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11171) * Global_262145.f_11176));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11208) * Global_262145.f_11211));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11254) * Global_262145.f_11257));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11244) * Global_262145.f_11247));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11199) * Global_262145.f_11202));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11219) * Global_262145.f_11224));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11184) * Global_262145.f_11187));
		
		case 170:
			return Global_262145.f_13545;
		
		case 171:
			return Global_262145.f_13604;
		
		case 172:
			return Global_262145.f_13620;
		
		case 173:
			return Global_262145.f_13563;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15640;
		
		case 168:
			return Global_262145.f_15639;
		
		case 179:
			return Global_262145.f_16837;
		
		case 180:
			return Global_262145.f_16713;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16721;
		
		case 185:
			return Global_262145.f_16730;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16925;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16942;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16790;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16973;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16851;
		
		case 205:
			return Global_262145.f_16960;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16818;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16955;
		
		case 211:
			return Global_262145.f_16919;
		
		case 214:
			return Global_262145.f_17459;
		
		case 215:
			return Global_262145.f_17469;
		
		case 216:
			return Global_262145.f_17479;
		
		case 217:
			return Global_262145.f_17488;
		
		case 218:
			return Global_262145.f_17497;
		
		case 219:
			return Global_262145.f_17513;
		
		case 178:
			if (func_134())
			{
				return Global_262145.f_17336;
			}
			else if (bParam1)
			{
				return Global_262145.f_17337;
			}
			break;
		
		case 188:
			if (func_134())
			{
				return Global_262145.f_17420;
			}
			else if (bParam1)
			{
				return Global_262145.f_17421;
			}
			break;
		
		case 225:
			if (func_134() && !func_144())
			{
				if (func_307(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19494;
				}
				else
				{
					return Global_262145.f_19495;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_19496;
			}
			break;
		
		case 226:
			if (func_134() && !func_144())
			{
				if (func_307(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19474;
				}
				else
				{
					return Global_262145.f_19475;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_19476;
			}
			break;
		
		case 227:
			if (func_134() && !func_144())
			{
				if (func_307(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19486;
				}
				else
				{
					return Global_262145.f_19487;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_19488;
			}
			break;
	}
	return 0;
}

void func_310(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_311(iParam0))
	{
		if (!func_134())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11052;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_90(iParam0))
	{
		*uParam1 = (Global_262145.f_16690 / 100f);
		*uParam2 = (Global_262145.f_16690 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11051;
		*uParam2 = Global_262145.f_11050;
	}
	if (func_90(iParam0))
	{
		if (func_242(unk_0x0FFED3E94261A832(), 1))
		{
			*uParam1 = (Global_262145.f_16689 / 100f);
			*uParam2 = (Global_262145.f_16689 / 100f);
		}
	}
	else if (func_242(unk_0x0FFED3E94261A832(), 1))
	{
		*uParam1 = Global_262145.f_11049;
		*uParam2 = Global_262145.f_11048;
	}
	iVar0 = func_84();
	if (iVar0 != func_29())
	{
		if (func_240(unk_0x0FFED3E94261A832(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_312(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (unk_0x885F483F34E47503(iParam1))
		{
			if (iParam1 == unk_0x0FFED3E94261A832())
			{
				iVar0 = 1;
			}
			else if (func_313(iParam1, unk_0x0FFED3E94261A832()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_821(unk_0x0FFED3E94261A832(), 1, 1))
		{
			unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
			unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
			Global_2497344.f_4828.f_193 = unk_0xDA84A1E29323722E();
		}
	}
}

int func_313(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_226(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_226(iParam1);
		}
	}
	return 0;
}

int func_314(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_329(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_315(&Var0);
}

int func_315(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_328(uParam0, uParam0->f_16);
	func_325(uParam0);
	if (func_324(uParam0->f_1))
	{
		func_317();
		if (Global_2434604.f_2483[0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434604.f_2483[0 /*76*/].f_1 == 13 || Global_2434604.f_2483[0 /*76*/].f_1 == 53) || Global_2434604.f_2483[0 /*76*/].f_1 == 54) || Global_2434604.f_2483[0 /*76*/].f_1 == 58)
		{
			Global_2434604.f_2483[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434604.f_2483[iVar0 + 1 /*76*/] = { Global_2434604.f_2483[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434604.f_2483[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_317();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 1);
				Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_316(Global_2434604.f_2483[iVar0 /*76*/].f_1))
				{
					Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
					unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

void func_317()
{
	bool bVar0;
	
	if (Global_2434604.f_2790)
	{
		return;
	}
	if (!Global_70068)
	{
		Global_70068 = 1;
		bVar0 = true;
	}
	func_318();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_318()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_322(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_319(&(Global_2434604.f_2791.f_1));
}

void func_319(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x73F5E7B6BB964839(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x5018862FF5D9F844())
		{
			unk_0xD1FCC52F87A98873(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD426F7366505EADF(0);
			unk_0x8123397DC676E794();
		}
		unk_0x73F5E7B6BB964839(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x6F0F1C5EEC77F84A(0);
		uParam0->f_564 = 0;
	}
	if (!Global_70068)
	{
		if (!unk_0x859EE44BE17CBC0F(unk_0x8A41C463063AFC8E()))
		{
			if (!Global_70069)
			{
				if (unk_0xF4EE9D6C8E60AE22() && !func_321(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_320(0);
}

void func_320(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_321(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_322(var uParam0)
{
	func_323(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_323(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_324(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_325(var uParam0)
{
	if (func_327(uParam0->f_1))
	{
		uParam0->f_70 = func_326();
	}
}

int func_326()
{
	return 21;
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_328(var uParam0, int iParam1)
{
	if (func_327(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_29())
	{
		return;
	}
	if (func_316(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_213(iParam1, -2, 0, 0);
		}
	}
}

void func_329(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_29();
	uParam1->f_17 = func_29();
	uParam1->f_18 = func_29();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_330(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_331(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_331(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_329(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_69 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_70 = uParam12;
	unk_0xF6082E2ADA1C795B(&(Var0.f_67), 2);
	return func_315(&Var0);
}

int func_332()
{
	if ((func_821(unk_0x0FFED3E94261A832(), 1, 1) && !unk_0x9E5289F5D782437C()) && !func_333())
	{
		return 1;
	}
	return 0;
}

bool func_333()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

void func_334(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_451(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_449() || iParam2 == 26)
	{
		if (func_402(uParam1, iParam2, uParam3, Global_1574108, 0, func_447()))
		{
			func_401(1);
			if ((!func_400() && !func_399()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_398())
				{
					func_396();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_395(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_394(uParam1);
							if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
							{
								unk_0x507FE690B1271947(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 26)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_821(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_47(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_393(iVar35))
										{
											iVar44 = iVar35;
											if (func_41(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_392(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_391(unk_0x0FFED3E94261A832(), 0) && func_87(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_389())
							{
								if (func_821(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
								}
								else
								{
									iVar35 = func_29();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_388(iVar35) && func_383(iVar35, iParam2)) && func_821(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_378(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_171(iVar35) };
								iVar37 = func_372(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
								}
								Global_1574108++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_389())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_367(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_366(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_365(iVar35, 0);
								if (bVar34)
								{
									if (func_242(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_364(iParam5))
								{
									func_363(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_363(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xF6082E2ADA1C795B(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7C214DA899F05536(iVar52);
							if (func_821(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_29();
							}
							if (func_388(iVar35))
							{
								if (func_821(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_378(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_171(iVar35) };
									iVar37 = func_372(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_365(iVar35, 1);
									if (bVar34)
									{
										if (func_242(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_347(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_344(uParam3, uParam1);
						}
						func_7(&(uParam3->f_21));
						func_343();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_342(uParam3, uParam1);
							func_341(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_342(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_337(uParam3))
						{
							Global_1574291 = 1;
						}
						func_335(uParam3);
						if (Global_1574291 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574291 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA8AF99BD8D81CFB7(*uParam1))
					{
						unk_0xFF4C3B41848CE5CD(7);
						unk_0xED8A6509C85CF7A1(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xFF4C3B41848CE5CD(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_343();
			func_395(0);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 7);
			}
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 10))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xE98F6B2EFC674042();
}

void func_335(var uParam0)
{
	if (!func_5(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_2(&(uParam0->f_21), 250, 0))
	{
		func_7(&(uParam0->f_21));
		func_336(0);
	}
}

void func_336(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574291 != 2)
		{
			Global_1574291 = 2;
		}
	}
	else
	{
		switch (Global_1574291)
		{
			case 0:
				Global_1574291 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_337(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_29() && func_821(iVar15, 0, 1))
	{
		Var2 = { func_171(iVar15) };
		iVar1 = func_340(uParam0, uParam0->f_37);
		if (func_339(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_338(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_338(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_338(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_338(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_338(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_338(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_338(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_339(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_340(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_341(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xD1FCC52F87A98873(*uParam0, "COLLAPSE"))
	{
		unk_0xD426F7366505EADF(iParam1);
		unk_0x8123397DC676E794();
	}
	if (iParam2 == 1)
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x8123397DC676E794();
		}
	}
}

void func_342(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_343()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_344(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_29())
		{
			if (func_821(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_346(uParam0->f_38[iVar0 /*2*/], 0);
					func_345(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_345(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "SET_ICON"))
		{
			unk_0x4CECF13AF144A8F6(iParam1);
			unk_0x4CECF13AF144A8F6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4CECF13AF144A8F6(iParam3);
			}
			unk_0x8123397DC676E794();
		}
	}
}

int func_346(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_347(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_362() && iParam4 < func_361())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xD1FCC52F87A98873(*uParam2, sVar1))
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_360("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_360(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_360("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_360("");
			if (uParam3->f_108 == 6)
			{
				func_360("");
			}
			else
			{
				func_360(&sParam5);
			}
			func_352(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_351(uParam3))
			{
				func_350("DPAD_FRIEND");
			}
			else if (func_349(uParam3))
			{
				func_350("DPAD_FRIEND");
			}
			else if (func_348(uParam3))
			{
				func_350("DPAD_CREW");
			}
			else
			{
				func_350("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_348(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_349(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

void func_350(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_351(var uParam0)
{
	if (func_349(uParam0) && func_348(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_352(var uParam0, int iParam1)
{
	if (func_359(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_356(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_353())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_353()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_354() || func_229())
		{
			return 1;
		}
	}
	return 0;
}

int func_354()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_229();
	}
	return func_355(Global_1638223.f_93532);
}

int func_355(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_356(int iParam0)
{
	if ((func_821(iParam0, 0, 1) && func_357()) && func_94(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_357()
{
	if (func_113(unk_0x0FFED3E94261A832()) || func_358())
	{
		return 0;
	}
	return 1;
}

int func_358()
{
	switch (func_87(unk_0x0FFED3E94261A832()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_359(int iParam0)
{
	if (func_353())
	{
		if (func_821(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_821(iParam0, 0, 1) && func_357()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_360(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_361()
{
	int iVar0;
	
	if (Global_1574110)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_362()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_363(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_362() && iParam3 < func_361())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA8AF99BD8D81CFB7(*uParam1))
		{
			if (unk_0xD1FCC52F87A98873(*uParam1, sVar1))
			{
				unk_0x4CECF13AF144A8F6(iParam3);
				if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_360("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_350(sParam16);
				}
				else
				{
					func_360(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_360("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4CECF13AF144A8F6(iVar0);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(-1);
				}
				if (func_389())
				{
					func_360("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 5 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x58478145CAF8429C(sParam16)) && !unk_0x58478145CAF8429C(sParam17))
				{
					unk_0xADBDBA2DF8443753("FM_AE_TWO_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xD5DA3EC5EEC78358(sParam17);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 8 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
				{
					unk_0xADBDBA2DF8443753("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x31A1C6406BB66808(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xEA97619D8B89D387(iParam10);
					}
					unk_0xD5DA3EC5EEC78358(&(uParam2->f_104));
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xADBDBA2DF8443753("FM_AE_CASH");
					unk_0xF671F12DFCDA7746(iParam10, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xADBDBA2DF8443753("FM_AE_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
					else
					{
						unk_0xADBDBA2DF8443753("FM_NG_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
					{
						func_350(&(uParam2->f_104));
					}
					else
					{
						func_360("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xADBDBA2DF8443753("STRING");
					unk_0x365072D1FE8AEADE(iParam14, 6);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (fParam13 != -1f)
				{
					unk_0xADBDBA2DF8443753("NUMBER");
					unk_0x31A1C6406BB66808(fParam13, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (iParam10 != -1)
				{
					unk_0x4CECF13AF144A8F6(iParam10);
				}
				else
				{
					func_360("");
				}
				if (uParam2->f_108 == 6)
				{
					func_360("");
				}
				else
				{
					func_360(&sParam4);
				}
				func_352(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_360("");
					func_360("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_351(uParam2))
				{
					func_350("DPAD_FRIEND");
				}
				else if (func_349(uParam2))
				{
					func_350("DPAD_FRIEND");
				}
				else if (func_348(uParam2))
				{
					func_350("DPAD_CREW");
				}
				else
				{
					func_350("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_364(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_365(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_113(iParam0)) && !func_111(iParam0))
	{
		iVar0 = func_326();
	}
	iVar1 = func_225(iParam0);
	if (!iVar1 == -1)
	{
		return func_223(iVar1);
	}
	return iVar0;
}

char* func_366(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_367(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_371(iParam3))
	{
		*fParam1 = (func_368(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_364(iParam3))
	{
		*fParam1 = (func_368(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_368(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_370(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_369(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_369(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_370(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_372(int iParam0)
{
	int iVar0;
	
	iVar0 = func_375(iParam0);
	if (iVar0 == -1)
	{
		func_373(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_373(int iParam0, bool bParam1)
{
	if (!func_821(iParam0, 0, 1))
	{
		return;
	}
	if (func_375(iParam0) != -1)
	{
		return;
	}
	if (Global_1362964)
	{
		if (iParam0 == Global_1362964.f_1)
		{
			return;
		}
	}
	if (func_374(iParam0))
	{
		return;
	}
	if (Global_1363002 >= 32)
	{
		return;
	}
	Global_1362969[Global_1363002] = iParam0;
	Global_1363002++;
	if (bParam1)
	{
	}
}

int func_374(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363002)
	{
		if (Global_1362969[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_375(int iParam0)
{
	int iVar0;
	
	if (!func_821(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1362962 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362962)
	{
		if (Global_1362801[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA630F1AB10AC8C10(Global_1362801[iVar0 /*5*/].f_2) && unk_0x32291EA29B6FC538(Global_1362801[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_376(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_376(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1362962)
	{
		return;
	}
	if (unk_0xA630F1AB10AC8C10(Global_1362801[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1362801[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xCF8EC788EB8AB4DB(Global_1362801[iParam0 /*5*/].f_2), 64);
			unk_0xE6AF47B902DCABC1(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x1156FB73B5FB1CC5(Global_1362801[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1362962)
	{
		Global_1362801[iVar32 /*5*/] = { Global_1362801[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_377(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_377(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_378(int iParam0)
{
	struct<4> Var0;
	
	if (func_821(iParam0, 0, 1))
	{
		Global_2484572 = { func_171(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_339(Global_2484572))
			{
				if (!unk_0xE1BD9BCF6A9D6793(&Global_2484572))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE061CABF3B012AFB(0))
		{
			return Var0;
		}
		if (func_382(&Global_2484572))
		{
			Global_2484502 = { func_380(iParam0) };
			func_379(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_379(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_380(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_381(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_171(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_381(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_382(var uParam0)
{
	if (unk_0x72BFFF26648DA18C())
	{
		if (unk_0x591BB87E287F24DC() && unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_383(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_112(iParam0) || func_387(iParam0)) || func_386(iParam0))
		{
			return 0;
		}
	}
	if (!func_385(iParam0))
	{
		return 0;
	}
	if ((!func_384(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_393(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_384(int iParam0)
{
	if (func_821(iParam0, 0, 1))
	{
		if (func_821(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_385(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

bool func_386(int iParam0)
{
	if (func_112(iParam0))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

int func_388(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_47(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_389()
{
	switch (func_87(unk_0x0FFED3E94261A832()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_390(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_111(unk_0x0FFED3E94261A832()))
	{
		switch (func_87(unk_0x0FFED3E94261A832()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_390(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

int func_391(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_80(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_80(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

void func_392(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_821(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_393(iVar1))
				{
					if (func_240(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_393(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

void func_394(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_395(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1351505.f_2 == 0)
		{
			Global_1351505.f_2 = 1;
		}
	}
	else if (Global_1351505.f_2 == 1)
	{
		Global_1351505.f_2 = 0;
	}
}

void func_396()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_114())
		{
			func_397();
		}
	}
}

void func_397()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

int func_398()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_114())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_114())
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	if (func_114())
	{
		if (func_316(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_400()
{
	if (func_114())
	{
		if (func_327(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_401(int iParam0)
{
	if (Global_1351505.f_1 != Global_1351505)
	{
		Global_1351505.f_1 = Global_1351505;
	}
	if (Global_1351505 != iParam0)
	{
		Global_1351505 = iParam0;
	}
}

int func_402(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_446(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_445();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_444())
		{
			if (func_443() > 0 && Global_1574110)
			{
				unk_0x891A3238A7E50954();
				unk_0x11CA0D8AE0C37B1C(fVar7);
				unk_0x47BFFB0507046AE3(18);
				if (unk_0x6235C49EA2DBA22D())
				{
					unk_0x8816A672BCF9F877();
				}
				unk_0x47BFFB0507046AE3(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_429())
		{
			func_428(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_428(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_19)))
	{
		if (func_443() == 1)
		{
			func_427(bVar6, uParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_428(uParam0, uParam2, 0);
		}
	}
	if (func_5(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_2(&(uParam2->f_19), 10000, 0) || (func_443() == 0 && !bParam5))
		{
			func_428(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_426();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0x891A3238A7E50954();
				}
				unk_0x47BFFB0507046AE3(18);
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_426();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_427(bVar6, uParam0, 0))
				{
					func_394(uParam0);
					sVar4 = func_424(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_422(iParam1) };
					if (bParam4)
					{
						func_419(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_412(uParam0, func_416(uParam2), func_413(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_408(uParam0, func_410(uParam2), func_409(), -1);
					}
					else if (func_353())
					{
						uParam2->f_34 = Global_1574109;
						func_419(uParam0, sVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_419(uParam0, sVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_403(iParam1);
						func_419(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xF6082E2ADA1C795B(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				Global_1574108 = uParam3;
				Global_1574107 = 1;
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574109)
					{
						unk_0x507FE690B1271947(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_403(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_407())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 24:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 11:
		case 12:
		case 13:
		case 16:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 17;
			break;
		
		case 15:
			iVar0 = 18;
			break;
		
		case 17:
			if (func_406(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_405(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_404(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_404(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_405(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_406(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_407()
{
	return Global_1638223.f_1 == 0;
}

void func_408(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_350(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_350("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_409()
{
	switch (func_87(unk_0x0FFED3E94261A832()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_410(var uParam0)
{
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_87(unk_0x0FFED3E94261A832()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_83())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_93(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_93(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_411(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_412(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_350(sParam1);
		}
		else if (func_390(unk_0x0FFED3E94261A832()) == 133)
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT_C");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_350("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_413(var uParam0)
{
	int iVar0;
	
	iVar0 = func_390(unk_0x0FFED3E94261A832());
	if (func_415())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_414())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_414()
{
	if (func_390(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

bool func_415()
{
	return Global_1592329;
}

char* func_416(var uParam0)
{
	int iVar0;
	
	iVar0 = func_390(unk_0x0FFED3E94261A832());
	if (func_415())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_418() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_418() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_414())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_417() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_417()
{
	return Global_2497344.f_4753;
}

int func_418()
{
	if (func_390(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_419(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_360(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(sParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_350(sParam1);
		}
		if (func_444() && iParam6)
		{
			if (func_421())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xADBDBA2DF8443753("LBD_DPD_CNT");
			unk_0xEA97619D8B89D387(iVar0);
			unk_0xEA97619D8B89D387(iVar1);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_350(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_420(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_420(int iParam0)
{
	if (func_406(iParam0) || func_405(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_421()
{
	return Global_1574110;
}

struct<4> func_422(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_423(unk_0x0FFED3E94261A832()) || func_404(unk_0x0FFED3E94261A832()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 16:
		case 14:
		case 15:
		case 17:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1638223.f_30, 16);
			break;
	}
	if (func_353() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_423(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_424(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_353() || unk_0x58478145CAF8429C(uParam1)))
	{
		uVar0 = func_425();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x58478145CAF8429C(sParam1))
	{
		if (Global_1574309 == 1)
		{
			Global_1574309 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 24:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 17:
			case 13:
			case 16:
			case 14:
			case 12:
			case 11:
			case 15:
			case 18:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 20:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_425()
{
	if (unk_0xAB1E825659B8A5D6())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xD2843F73FBE0F430())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9149FCDCB650712D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x7A1C6EE905C175E6())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_426()
{
	Global_36716 = 1;
}

bool func_427(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_matchmaking_card");
	}
	return unk_0xA8AF99BD8D81CFB7(*uParam1);
}

void func_428(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_343();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_19)))
		{
			func_7(&(uParam1->f_19));
		}
	}
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0x73F5E7B6BB964839(uParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(uParam1->f_33, 0))
	{
		unk_0x507FE690B1271947(&(uParam1->f_33), 0);
	}
	unk_0x11CA0D8AE0C37B1C(0f);
}

int func_429()
{
	if (func_333())
	{
		return 0;
	}
	if (func_442())
	{
		return 0;
	}
	if (!func_440())
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (func_437(8, -1))
	{
		return 0;
	}
	if (func_443() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	else if (!func_433(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_432(1) || func_430(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_235(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (Global_1761104)
	{
		return 0;
	}
	if (func_199(0))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (Global_1345093)
	{
		return 0;
	}
	return 1;
}

int func_430(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_431(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x83F6A1E4E653AD75(0, 25) || unk_0x83F6A1E4E653AD75(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0x83F6A1E4E653AD75(0, 19) || (!bParam0 && unk_0xC20E8B2E17B46871(0, 19)))
	{
		return 1;
	}
	if (unk_0x5018862FF5D9F844())
	{
		if (((unk_0x83F6A1E4E653AD75(0, 166) || unk_0x83F6A1E4E653AD75(0, 167)) || unk_0x83F6A1E4E653AD75(0, 168)) || unk_0x83F6A1E4E653AD75(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xC20E8B2E17B46871(0, 166) || unk_0xC20E8B2E17B46871(0, 167)) || unk_0xC20E8B2E17B46871(0, 168)) || unk_0xC20E8B2E17B46871(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_431(int iParam0)
{
	int iVar0;
	
	if (unk_0xE71026F240213063())
	{
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			unk_0xE3B6C923999B844E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_432(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_433(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_434(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_434(int iParam0)
{
	return func_435(iParam0);
}

bool func_435(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

bool func_436()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_437(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

int func_438()
{
	if (func_439() == 0)
	{
		return 1;
	}
	return 0;
}

int func_439()
{
	return Global_1312466.f_18;
}

int func_440()
{
	if (func_441())
	{
		return 1;
	}
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 0;
	}
	if (unk_0xEF08C8E0C4679477() || unk_0x9AF3AC4F52023B45())
	{
		return 0;
	}
	if (unk_0x8F70BD179415A092())
	{
		return 0;
	}
	return 1;
}

bool func_441()
{
	return Global_1312438;
}

bool func_442()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

int func_443()
{
	return Global_1351508.f_68;
}

int func_444()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_445()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 25:
		case 26:
			return 1;
			break;
	}
	return 0;
}

int func_447()
{
	if (func_448(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_448(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_47(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

int func_449()
{
	if (func_447())
	{
		return 1;
	}
	if (func_386(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_415())
	{
		return 1;
	}
	if (func_113(unk_0x0FFED3E94261A832()))
	{
		switch (func_390(unk_0x0FFED3E94261A832()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_450(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_450(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_450(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_450(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

int func_451(int iParam0)
{
	if ((iParam0 == 26 && func_113(unk_0x0FFED3E94261A832())) && !func_111(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_88(unk_0x0FFED3E94261A832(), 0) && func_111(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_106(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_452()
{
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		func_472();
		unk_0x4E6996123FABDB93(0, 140, 1);
		unk_0x4E6996123FABDB93(0, 141, 1);
		unk_0x4E6996123FABDB93(0, 142, 1);
		unk_0x4E6996123FABDB93(0, 143, 1);
		unk_0x4E6996123FABDB93(0, 24, 1);
		unk_0x4E6996123FABDB93(0, 24, 1);
		unk_0x4E6996123FABDB93(0, 345, 1);
		unk_0x4E6996123FABDB93(0, 346, 1);
		unk_0x4E6996123FABDB93(0, 347, 1);
	}
}

bool func_453()
{
	return func_27() >= 2;
}

void func_454()
{
	func_53(3000, 3000);
}

void func_455()
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (((((unk_0x75DA10B1316E793A(iVar0) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("hydra")) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("savage")) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("buzzard")) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("insurgent")) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("valkyrie"))
		{
			unk_0x4E6996123FABDB93(0, 68, 1);
			unk_0x4E6996123FABDB93(0, 69, 1);
			unk_0x4E6996123FABDB93(0, 70, 1);
		}
	}
}

void func_456()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!unk_0xBDD3EABACAB97D09(uLocal_894[iVar0]))
		{
			if (unk_0xD0BCF9877CD72A3F(Local_944.f_19[iVar0]))
			{
				uLocal_894[iVar0] = unk_0x9E3A324AB806771E(unk_0xA210FA5BDB2E5744(Local_944.f_19[iVar0]));
				unk_0x9FD1808EF916E312(uLocal_894[iVar0], 351);
				unk_0xEB5D36079067EBA5(uLocal_894[iVar0], 2);
				unk_0xA6B842B66643C116(uLocal_894[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_457()
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4827), 1);
}

void func_458(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_111(unk_0x0FFED3E94261A832()))
	{
		return;
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_464(uParam2);
		return;
	}
	iVar0 = 40000;
	if (uParam2->f_1 > -1)
	{
		iVar0 = uParam2->f_1;
	}
	iVar1 = func_87(unk_0x0FFED3E94261A832());
	if (!unk_0xAA4F14DA15DB0B51(*uParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (unk_0x988197573BDAD49A(func_463(iVar1)))
			{
				unk_0xF6082E2ADA1C795B(uParam2, 0);
				unk_0xF6082E2ADA1C795B(uParam2, 1);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(*uParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xAA4F14DA15DB0B51(*uParam2, 2))
			{
				if (unk_0x8CF1128C350F1552(func_462(iVar1)))
				{
					unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 1);
					unk_0x6040865446FA4030(0);
					unk_0xF6082E2ADA1C795B(uParam2, 2);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(*uParam2, 3))
			{
				if (unk_0x988197573BDAD49A(func_461(iVar1)))
				{
					unk_0xF6082E2ADA1C795B(uParam2, 3);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(*uParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xAA4F14DA15DB0B51(*uParam2, 4))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
						unk_0xF6082E2ADA1C795B(uParam2, 4);
					}
					if (iParam0 <= 5000 && func_460(iVar1))
					{
						if (!unk_0xAA4F14DA15DB0B51(*uParam2, 8))
						{
							unk_0x08BE237DBCD9CBD9(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							unk_0xF6082E2ADA1C795B(uParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (unk_0x988197573BDAD49A(func_459(iVar1)))
						{
							unk_0x15AFDA4756FDF7EC(func_462(iVar1));
							unk_0x507FE690B1271947(uParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_459(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

char* func_461(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	return "FM_COUNTDOWN_30S";
}

char* func_462(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_463(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_464(var uParam0)
{
	int iVar0;
	
	iVar0 = func_87(unk_0x0FFED3E94261A832());
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 1))
	{
		if (!unk_0xAA4F14DA15DB0B51(*uParam0, 5))
		{
			if (unk_0xAA4F14DA15DB0B51(*uParam0, 2))
			{
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 4))
				{
					unk_0x6040865446FA4030(1);
					unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(*uParam0, 6))
			{
				if (unk_0x988197573BDAD49A(func_462(iVar0)))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 6);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(*uParam0, 6))
			{
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 7))
				{
					if (unk_0x988197573BDAD49A(func_459(iVar0)))
					{
						unk_0xF6082E2ADA1C795B(uParam0, 7);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 7))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 5);
				}
			}
		}
	}
}

void func_465(var uParam0)
{
	unk_0x73F5E7B6BB964839(uParam0);
	unk_0xC7B777B06F98C301("HUD_MINI_GAME_SOUNDSET");
}

void func_466()
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!func_44(unk_0x5C40D1D6A2650FC5(), 8))
		{
			if (func_469())
			{
				func_76(8);
				if (func_5(&uLocal_937))
				{
					func_7(&uLocal_937);
				}
			}
		}
		else if (!func_469())
		{
			func_74(8);
		}
		if (iLocal_888 >= 0)
		{
			if (func_469())
			{
				if (!unk_0xBB6A424DD700764B(iLocal_888))
				{
					unk_0xDC0343058D861402(iLocal_888);
				}
			}
		}
		if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
		{
			if (Local_979[iLocal_884 /*6*/].f_5 == 3)
			{
				if (Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_231 == 99)
				{
					if (!func_44(unk_0x5C40D1D6A2650FC5(), 8))
					{
						if (!func_5(&uLocal_937))
						{
							if (func_467())
							{
								unk_0x08BE237DBCD9CBD9(iLocal_888, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							}
							else
							{
								unk_0x08BE237DBCD9CBD9(iLocal_888, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							}
							func_4(&uLocal_937, 0, 0);
						}
						if (func_5(&uLocal_937))
						{
							if (!func_2(&uLocal_937, 10000, 0))
							{
							}
							else if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
							{
								iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
								unk_0x5E747C0F628B78E8(iVar0, 1, 0, -1);
								Local_979[unk_0x88641E5BC172153A() /*6*/].f_4++;
							}
							else
							{
								unk_0x67E5DE1657F60AC6(unk_0x2A5EB8B0FE590B91(), 0);
								Local_979[unk_0x88641E5BC172153A() /*6*/].f_4++;
							}
						}
					}
					if (!func_467())
					{
						func_472();
						unk_0x4E6996123FABDB93(0, 140, 1);
						unk_0x4E6996123FABDB93(0, 141, 1);
						unk_0x4E6996123FABDB93(0, 142, 1);
						unk_0x4E6996123FABDB93(0, 143, 1);
						unk_0x4E6996123FABDB93(0, 24, 1);
						unk_0x4E6996123FABDB93(0, 24, 1);
					}
				}
				else if (func_5(&uLocal_937))
				{
					func_7(&uLocal_937);
				}
			}
		}
	}
}

int func_467()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar1 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			iVar0 = unk_0xD3B21CE53AA7BE51(iVar1);
			if (func_468(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (unk_0x4BD9974FDDE2D1EC(iParam0) && !unk_0xB8B97965F826E07D(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_469()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	func_470(&Var0, &Var3, &uVar6);
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Var0, Var3, uVar6, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_470(var uParam0, var uParam1, var uParam2)
{
	switch (Local_944.f_31)
	{
		case 0:
			*uParam0 = { 1056.1f, 3042.89f, 30.78792f };
			*uParam1 = { 1727.083f, 3227.135f, 71.17491f };
			*uParam2 = 100f;
			break;
		
		case 1:
			*uParam0 = { -1689.147f, -2829.733f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		
		case 2:
			*uParam0 = { 1914.747f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.719f, 4826.836f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_471(bool bParam0)
{
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam0)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	unk_0x4E6996123FABDB93(0, 69, 1);
	unk_0x4E6996123FABDB93(0, 70, 1);
	unk_0x4E6996123FABDB93(0, 68, 1);
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
}

void func_472()
{
	unk_0x4E6996123FABDB93(0, 69, 1);
	unk_0x4E6996123FABDB93(0, 70, 1);
	unk_0x4E6996123FABDB93(0, 68, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 91, 1);
	unk_0x4E6996123FABDB93(0, 92, 1);
	unk_0x4E6996123FABDB93(0, 99, 1);
	unk_0x4E6996123FABDB93(0, 100, 1);
	unk_0x4E6996123FABDB93(0, 24, 1);
	unk_0x4E6996123FABDB93(0, 257, 1);
	unk_0x4E6996123FABDB93(0, 37, 1);
}

void func_473()
{
	if (!func_479())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_474();
}

void func_474()
{
	func_476();
	func_475(0);
}

void func_475(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x591AF4C50B46E014();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x11ABC381A58DD5AB();
		Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_476()
{
	if (!func_478())
	{
	}
	if (func_479())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_477();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_477()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			unk_0xEA97619D8B89D387(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_478()
{
	if (!func_479())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_477();
	return unk_0x0D3452E263E036CA();
}

int func_479()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

void func_480(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_34(unk_0x0FFED3E94261A832());
	if (bParam0)
	{
		iLocal_902 = unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91());
		unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), uLocal_899[iVar0]);
		func_72(0);
		func_483();
		func_481();
	}
}

void func_481()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x0FFED3E94261A832());
	func_61();
	switch (Local_944.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_482(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_482(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_482(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_482(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_482(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_482(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_482(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_482(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_482(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_482(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_482(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_482(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_482(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_482(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_482(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_482(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_482(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_482(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_482(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_482(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_482(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_482(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_482(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_482(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_482(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_482(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_482(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_482(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_482(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_482(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_482(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_482(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_482(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_482(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_482(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_482(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_482(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_482(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_482(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_482(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_482(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_482(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_482(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_482(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_482(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_482(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_482(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_482(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_482(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_482(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_482(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_482(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_482(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_482(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_482(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_482(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_482(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_482(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_482(struct<3> Param0, float fParam3)
{
	if (Global_2404996.f_1710 < 68)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404996.f_1711[Global_2404996.f_1710 /*4*/] = { Param0 };
		Global_2404996.f_1711[Global_2404996.f_1710 /*4*/].f_3 = fParam3;
		Global_2404996.f_1710++;
	}
}

void func_483()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x0FFED3E94261A832());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1);
	func_485(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0);
	switch (Local_944.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_484(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_484(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_484(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_484(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_484(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_484(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_484(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_484(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_484(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_484(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_484(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_484(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_484(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_484(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_484(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_484(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_484(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_484(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_484(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_484(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_484(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_484(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_484(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_484(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_484(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_484(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_484(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_484(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_484(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_484(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_484(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_484(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_484(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_484(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_484(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_484(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_484(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_484(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_484(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_484(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_484(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_484(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_484(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_484(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_484(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_484(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_484(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_484(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_484(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_484(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_484(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_484(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_484(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_484(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_484(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_484(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_484(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_484(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_484(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404996.f_1709)
	{
	}
	if (Global_2404996.f_676 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/] = { Param0 };
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_3 = fParam3;
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_4 = iParam4;
		Global_2404996.f_676++;
	}
}

void func_485(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0x818F50CBEC587879(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2404996.f_43.f_65 = bParam0;
	Global_2404996.f_43.f_67 = iParam1;
	Global_2404996.f_43.f_68 = bParam2;
	Global_2404996.f_43.f_172 = iParam3;
	Global_2404996.f_43.f_66 = iParam4;
	Global_2404996.f_43.f_174 = bParam5;
	Global_2404996.f_43.f_175 = bParam7;
	Global_2404996.f_43.f_178 = iParam6;
	Global_2404996.f_43.f_176 = iParam8;
	Global_2404996.f_43.f_177 = iParam9;
	if (!bParam0)
	{
		func_487();
	}
	if (bParam2)
	{
		uVar0 = func_486();
		if (unk_0x2137828D03306CAF(uVar0))
		{
			if (!unk_0x03322C3918511AA0(iVar0))
			{
				if (unk_0x3321AFCAE6E141D4(iVar0))
				{
					unk_0x216B434C1A609F5B(iVar0, 0, 1);
					bVar1 = true;
				}
			}
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0xDDB64A4460B8504C(iVar0, 1))
				{
					if (!unk_0x1979A7D1D0538188(iVar0))
					{
						unk_0x47ABF422A76CAA6A(unk_0xEDE67C014A25CEBB(iVar0));
					}
				}
			}
			if (bVar1)
			{
				unk_0xFECCD8AF38671477(&iVar0);
			}
			if (bParam5)
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					unk_0x3EACD080B21FFD9A(iVar0, 1);
				}
			}
			if (bParam7)
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					unk_0x11C8DD1ABA391722(iVar0, 0);
				}
			}
			if (iParam6 > -1)
			{
				unk_0xC2C096B78AB918EB(iVar0, iParam6, iParam6);
				unk_0x1225B25A5432A577(iVar0, iParam6, iParam6);
			}
		}
	}
}

var func_486()
{
	return Global_2404996.f_2452;
}

void func_487()
{
	struct<101> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var0.f_99 = -1;
	Global_2404996.f_43.f_69 = { Var0 };
	Global_2404996.f_43.f_170 = 0;
}

void func_488()
{
	if (!func_44(unk_0x5C40D1D6A2650FC5(), 1))
	{
		return;
	}
	if (!func_636(7))
	{
		func_504(&uLocal_124);
		func_612(7);
		unk_0xCF5A819ECA466C6C(func_503(func_34(unk_0x0FFED3E94261A832())), 50f, 1);
	}
	if (!func_44(unk_0x5C40D1D6A2650FC5(), 7))
	{
		if (func_502(&uLocal_124))
		{
			if (func_17(10))
			{
				if (func_489(&uLocal_124, 1, 0, 1))
				{
					func_76(7);
				}
			}
		}
	}
}

int func_489(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_502(uParam0))
	{
		if (!func_501(&(uParam0->f_3)))
		{
			func_499(&(uParam0->f_3));
		}
		unk_0xFF4C3B41848CE5CD(4);
		if (unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			unk_0x792C5262A7BE057A(*uParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = unk_0xF34EE736CF047844(func_496(&(uParam0->f_3)));
		iVar1 = unk_0xEF76CA199A0C9035((iVar0 - 3));
		bVar2 = false;
		if (func_495(uParam0->f_1, 4))
		{
			if (uParam0->f_2 >= 5)
			{
				if (!func_495(uParam0->f_1, 16))
				{
					unk_0x08BE237DBCD9CBD9(-1, "GO", "HUD_MINI_GAME_SOUNDSET", 0);
					func_493(&(uParam0->f_1), 16);
					unk_0x98E9C7B4D1FBF49A();
				}
			}
			else
			{
				uParam0->f_2++;
			}
		}
		if (!func_495(uParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_495(uParam0->f_1, 1))
			{
				func_493(&(uParam0->f_1), 1);
				unk_0x08BE237DBCD9CBD9(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_492(uParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_495(uParam0->f_1, 2))
			{
				func_493(&(uParam0->f_1), 2);
				unk_0x08BE237DBCD9CBD9(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_492(uParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_495(uParam0->f_1, 4))
			{
				func_493(&(uParam0->f_1), 4);
				unk_0x08BE237DBCD9CBD9(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_492(uParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_495(uParam0->f_1, 8))
			{
				func_493(&(uParam0->f_1), 8);
				unk_0x988197573BDAD49A("BIKER_JOUST_FIGHT");
				unk_0xF9C830438D0097FD(18, &uVar3, &uVar4, &uVar5, &uVar6);
				unk_0xD1FCC52F87A98873(*uParam0, "SET_MESSAGE");
				func_350("CNTDWN_GO");
				unk_0x4CECF13AF144A8F6(uVar3);
				unk_0x4CECF13AF144A8F6(uVar4);
				unk_0x4CECF13AF144A8F6(uVar5);
				unk_0xD426F7366505EADF(1);
				unk_0x8123397DC676E794();
				func_76(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_491()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				uParam0->f_1 = 0;
				func_490(&(uParam0->f_3));
			}
			unk_0x40F160C3038ECAF5("RACES_RADIO_MUTE_scene");
			unk_0xB0D390F8FEB78903("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0x244673FE98A43CA3())
			{
				if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar7)))
				{
					iVar8 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar7));
					if (iVar8 != unk_0x0FFED3E94261A832())
					{
						iVar9 = unk_0x1E199569E0295838(iVar8);
						if (unk_0xC4A39E4229BD3ABE(iVar9, 0))
						{
							iVar10 = unk_0x0C20E539D876C5B3(iVar9, 0);
							unk_0x35A5A8139089E07B(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_490(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_491()
{
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (unk_0x83F6A1E4E653AD75(0, 18) || unk_0x83F6A1E4E653AD75(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_492(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xF9C830438D0097FD(12, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xD1FCC52F87A98873(*uParam0, "SET_MESSAGE");
	unk_0xADBDBA2DF8443753("NUMBER");
	unk_0xEA97619D8B89D387(unk_0xEF76CA199A0C9035(iParam1));
	unk_0xF7D95CCE1364B5CE();
	unk_0x4CECF13AF144A8F6(uVar0);
	unk_0x4CECF13AF144A8F6(uVar1);
	unk_0x4CECF13AF144A8F6(uVar2);
	unk_0xD426F7366505EADF(1);
	unk_0x8123397DC676E794();
}

void func_493(var uParam0, int iParam1)
{
	func_494(uParam0, iParam1);
}

void func_494(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_495(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_496(var uParam0)
{
	if (func_501(uParam0))
	{
		if (func_498(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_497(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_497(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x591AF4C50B46E014())
	{
		iVar2 = unk_0x11ABC381A58DD5AB();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4()) / 1000f);
}

bool func_498(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 2);
}

void func_499(var uParam0)
{
	func_500(uParam0, 0f);
}

void func_500(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_497(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - fParam1);
	unk_0xF6082E2ADA1C795B(uParam0, 1);
	unk_0x507FE690B1271947(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_501(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 1);
}

int func_502(var uParam0)
{
	if (!unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_503(int iParam0)
{
	switch (Local_944.f_31)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				return -1004.147f, -3235.733f, 12.9444f;
			}
			return -1675.056f, -2848.475f, 12.9444f;
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				return 2141.719f, 4811.836f, 40.1823f;
			}
			return 1928.747f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_504(var uParam0)
{
	*uParam0 = unk_0x4D6D22510A2467D9("COUNTDOWN");
}

void func_505()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
		{
			func_74(1);
		}
		if (func_44(unk_0x5C40D1D6A2650FC5(), 2))
		{
			func_74(2);
		}
		return;
	}
	if (func_527() || func_524())
	{
		func_472();
		unk_0x4E6996123FABDB93(0, 140, 1);
		unk_0x4E6996123FABDB93(0, 141, 1);
		unk_0x4E6996123FABDB93(0, 142, 1);
		unk_0x4E6996123FABDB93(0, 143, 1);
		unk_0x4E6996123FABDB93(0, 24, 1);
		unk_0x4E6996123FABDB93(0, 345, 1);
		unk_0x4E6996123FABDB93(0, 346, 1);
		unk_0x4E6996123FABDB93(0, 347, 1);
	}
	if (func_527())
	{
		if (!func_44(unk_0x5C40D1D6A2650FC5(), 4))
		{
			func_76(4);
			unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 0);
			unk_0x337229861BC52CD5(0);
			unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
		}
		if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_523(2))
			{
				func_522(2);
			}
			if (!func_73())
			{
				if (func_523(3))
				{
					func_522(3);
				}
				iVar1 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
				iVar0 = unk_0xD3B21CE53AA7BE51(iVar1);
				if (func_468(iVar0))
				{
					unk_0x7D9656C226768A72(iVar1, 1);
					func_521(3);
					if (func_523(4))
					{
						func_522(4);
					}
					if (!func_44(unk_0x5C40D1D6A2650FC5(), 2))
					{
						func_76(2);
					}
					if (unk_0xAA4F14DA15DB0B51(Local_944.f_2, unk_0x88641E5BC172153A()))
					{
						if (!func_44(unk_0x5C40D1D6A2650FC5(), 1))
						{
							unk_0x988197573BDAD49A("BIKER_JOUST_START");
							func_76(1);
							func_519();
							unk_0x1DD91375B16781C1(1);
						}
						if (!func_518() || !func_517())
						{
							if (func_45(unk_0x0FFED3E94261A832()))
							{
								if (!func_518())
								{
									func_506(6);
								}
							}
							else
							{
								func_506(7);
							}
						}
						else
						{
							func_506(8);
						}
					}
				}
				else
				{
					if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
					{
						func_74(1);
					}
					if (func_44(unk_0x5C40D1D6A2650FC5(), 2))
					{
						func_74(2);
					}
					func_506(4);
				}
			}
			else
			{
				if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
				{
					func_74(1);
				}
				if (func_44(unk_0x5C40D1D6A2650FC5(), 2))
				{
					func_74(2);
				}
				if (func_44(unk_0x5C40D1D6A2650FC5(), 4))
				{
					func_74(4);
				}
				func_506(3);
			}
		}
		else
		{
			if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
			{
				func_74(1);
			}
			if (func_44(unk_0x5C40D1D6A2650FC5(), 2))
			{
				func_74(2);
			}
			func_506(2);
		}
	}
	else
	{
		if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
		{
			func_74(1);
		}
		if (func_44(unk_0x5C40D1D6A2650FC5(), 2))
		{
			func_74(2);
		}
		if (func_44(unk_0x5C40D1D6A2650FC5(), 4))
		{
			func_74(4);
			func_72(0);
			unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
		}
	}
}

void func_506(int iParam0)
{
	char cVar0[64];
	int iVar16;
	
	if (func_516())
	{
		if (!func_523(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_96("JST_PASSMD", -1);
					break;
				
				case 2:
					func_96("JST_NOBIKE", -1);
					break;
				
				case 5:
					break;
				
				case 6:
					func_96("JST_HRBOSS", -1);
					break;
				
				case 7:
					func_96("JST_HWBOSS", -1);
					break;
				
				case 8:
					func_96("JST_HTBOSS", -1);
					break;
				
				case 9:
					func_96("JST_KBIKE", -1);
					break;
				
				case 11:
					func_96("JST_OAREA", -1);
					break;
				
				case 12:
					func_96("JST_HSTART", -1);
					break;
				
				case 13:
					if (func_144())
					{
						func_515("JST_HTBLAUNCH", "JST_BLIP", iLocal_903, -1);
					}
					else
					{
						func_515("JST_HGNLNCH", "JST_BLIP", iLocal_903, -1);
					}
					break;
				
				case 14:
					func_515("JST_HGNLNCH", "JST_BLIP", iLocal_903, -1);
					break;
				
				case 10:
					func_515("JST_FIGHT", "HUNT_TARBLP", iLocal_904, -1);
					break;
				
				case 15:
					func_515("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&cVar0, func_509(func_36()), 64);
					iVar16 = func_614(func_36());
					func_508("JST_RVLLNCH", &cVar0, iVar16, "JST_BLIP", iLocal_903, -1);
					break;
				
				case 17:
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if (unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) != joaat("oppressor"))
						{
							func_96("JST_DOUB", -1);
						}
					}
					break;
				
				default:
					break;
			}
			func_92(1);
			func_507(iParam0);
		}
	}
}

void func_507(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&uLocal_876, iParam0);
}

void func_508(char* sParam0, char[4] cParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xCF6846167A5EFE98(cParam1);
	if (!iParam4 == 0)
	{
		unk_0x95CE6D748899618C(iParam4);
	}
	unk_0xD5DA3EC5EEC78358(sParam3);
	unk_0xED95966D04271FDA(0, 0, 0, iParam5);
}

char* func_509(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		uVar0 = func_514(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		uVar0 = func_512(iParam0, 0);
		return uVar0;
	}
	if (((func_100(iParam0, 28) || func_100(unk_0x0FFED3E94261A832(), 28)) || func_511(iParam0)) && !func_510(iParam0))
	{
		return func_512(iParam0, 0);
	}
	iVar1 = func_226(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_512(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		uVar0 = func_514(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar0))
		{
			return func_512(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_510(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_171(iParam0) };
	if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_171(iParam0) };
	if (unk_0x429A1F8C699BEE23() || unk_0x5018862FF5D9F844())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			return 0;
		}
	}
	else if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_512(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_94(iParam0, 1))
		{
			return func_513();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

var func_513()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

var func_514(var uParam0)
{
	return uParam0;
}

void func_515(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	unk_0xED95966D04271FDA(0, 0, 0, iParam3);
}

int func_516()
{
	if (((((!func_333() && !unk_0x9E5289F5D782437C()) && !unk_0x6B7E3D3B66456AA8()) && func_821(unk_0x0FFED3E94261A832(), 1, 1)) && !func_114()) && !unk_0x6235C49EA2DBA22D())
	{
		return 1;
	}
	return 0;
}

bool func_517()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(unk_0x0FFED3E94261A832());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_518()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(unk_0x0FFED3E94261A832()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_519()
{
	if (!func_520(unk_0x0FFED3E94261A832()))
	{
		func_115(25);
	}
}

bool func_520(int iParam0)
{
	return func_100(iParam0, 25);
}

void func_521(int iParam0)
{
	Global_2404996.f_43.f_300 = iParam0;
	unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), Global_2404996.f_43.f_300);
	if (Global_2404996.f_43.f_300 == 1)
	{
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 115, 1);
	}
	else
	{
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 115, 0);
	}
}

void func_522(int iParam0)
{
	unk_0x507FE690B1271947(&uLocal_876, iParam0);
}

bool func_523(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(uLocal_876, iParam0);
}

int func_524()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
	Var3 = { func_503(func_526(unk_0x0FFED3E94261A832())) };
	fVar6 = unk_0x4A2E6F541CD8C36E(Var0, Var3, 0);
	fVar7 = (func_525(func_526(unk_0x0FFED3E94261A832())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (unk_0x3FEF699D13BCC798((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

float func_525(int iParam0)
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_526(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_527()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
	Var3 = { func_503(func_34(unk_0x0FFED3E94261A832())) };
	fVar6 = unk_0x4A2E6F541CD8C36E(Var0, Var3, 0);
	fVar7 = (func_525(func_34(unk_0x0FFED3E94261A832())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (unk_0x3FEF699D13BCC798((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

void func_528()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	unk_0xF9C830438D0097FD(iLocal_903, &uVar0, &uVar1, &uVar2, &uVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_525(func_34(unk_0x0FFED3E94261A832()));
	Var7 = { func_503(func_34(unk_0x0FFED3E94261A832())) };
	Var7.f_2 = (Var7.f_2 - fVar5);
	unk_0x47C0431D5D179992(1, Var7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, uVar0, uVar1, uVar2, uVar3, 0, 0, 2, 0, 0, 0, 0);
}

void func_529()
{
	if (func_568())
	{
		func_562();
		func_561();
		func_548();
		func_531();
		func_530();
	}
	else
	{
		switch (func_106(unk_0x0FFED3E94261A832()))
		{
			case 0:
				func_473();
				break;
			
			case 1:
				func_562();
				break;
			
			case 2:
				func_530();
				break;
			
			case 3:
				func_562();
				func_561();
				func_548();
				func_530();
				func_531();
				break;
			}
	}
}

void func_530()
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
			{
				if (!func_523(10))
				{
					func_506(10);
				}
				else
				{
					func_506(15);
				}
				if (!func_523(17))
				{
					func_506(17);
				}
			}
		}
		else if (!func_44(unk_0x5C40D1D6A2650FC5(), 1))
		{
			func_506(12);
		}
		else
		{
			func_506(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_568())
		{
			if (unk_0x0FFED3E94261A832() == Local_944.f_16[0])
			{
				func_506(13);
			}
			else
			{
				func_506(14);
			}
		}
		else
		{
			func_506(16);
		}
	}
}

void func_531()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_937))
	{
		if (func_5(&(Local_944.f_5)))
		{
			iLocal_887 = (func_3() - func_22(&(Local_944.f_5), 0, 0));
			if (iLocal_887 < func_3())
			{
				if (iLocal_887 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_547();
				iVar2 = func_34(unk_0x0FFED3E94261A832());
				iVar3 = (1 - iVar2);
				iVar4 = func_614(unk_0x0FFED3E94261A832());
				iVar5 = Local_944.f_16[iVar3];
				if (Local_944.f_24[iVar2] > 0)
				{
					func_544(Local_944.f_27[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_121, 0, 0, 0, 0, 0, 255, 0, 0, 0);
				}
				else
				{
					func_544(Local_944.f_27[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_121, 0, 0, 0, 0, 0, 255, 0, 0, 0);
				}
				if (iVar5 != func_29())
				{
					if (unk_0x885F483F34E47503(iVar5))
					{
						if (!unk_0x58478145CAF8429C(&Local_921))
						{
							iVar4 = func_614(iVar5);
							func_544(Local_944.f_27[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_121, 0, 0, 0, 0, 0, 255, 0, 0, 0);
						}
					}
				}
				if (iLocal_887 > 0)
				{
					func_543(iLocal_887, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_543(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_532();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_937, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_821(unk_0x0FFED3E94261A832(), 1, 1))
		{
			func_547();
			func_543(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
		}
	}
}

void func_532()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_453())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (bVar0)
	{
		iVar2 = func_542();
		if (iVar2 > iLocal_881)
		{
			iVar2 = iLocal_881;
		}
		if (iVar3 != Local_944.f_3)
		{
			iVar3 = Local_944.f_3;
		}
		if ((iVar1 - func_22(&(Local_944.f_7), 0, 0)) >= 0)
		{
			func_541((iVar1 - func_22(&(Local_944.f_7), 0, 0)));
			func_533(iVar3, iVar2, (iVar1 - func_22(&(Local_944.f_7), 0, 0)), 1, func_540(-1));
		}
		else
		{
			func_533(iVar3, iVar2, 0, 1, func_540(-1));
		}
	}
}

void func_533(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_538(0) == 0)
	{
		return;
	}
	func_537();
	func_534(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_192(sParam4))
	{
		sVar0 = sParam4;
	}
	func_543(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_534(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_536(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_535(4, iVar0);
		Global_1353013.f_3098[iVar0] = iParam0;
		Global_1353013.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1353013.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1353013.f_3098.f_183[iVar0] = iParam3;
		Global_1353013.f_3098.f_216[iVar0] = iParam5;
		Global_1353013.f_3098.f_194[iVar0] = iParam4;
		Global_1353013.f_3098.f_227[iVar0] = iParam6;
		Global_1353013.f_3098.f_270[iVar0] = iParam7;
		Global_1353013.f_3098.f_281[iVar0] = iParam8;
		Global_1353013.f_3098.f_292[iVar0] = iParam9;
		Global_1353013.f_3098.f_303[iVar0] = iParam10;
		Global_1353013.f_3098.f_314[iVar0] = iParam11;
		Global_1353013.f_3098.f_325[iVar0] = iParam13;
		Global_1353013.f_3098.f_336[iVar0] = iParam14;
		Global_1353013.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x5018862FF5D9F844()) && iParam12)
		{
			Global_1353013.f_1088 = 1;
		}
	}
}

void func_535(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_536(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

void func_537()
{
	unk_0x47BFFB0507046AE3(8);
	unk_0x47BFFB0507046AE3(9);
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(7);
	Global_2456239 = 1;
}

int func_538(bool bParam0)
{
	if (func_539())
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_821(unk_0x0FFED3E94261A832(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_539()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 12);
}

char* func_540(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFABF5258A318B1DC();
	return "HUD_STARTING";
	if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_541(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0xBCA469D44FBFAC80())
	{
		Global_2497344.f_4666 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_4666, 1))
		{
			unk_0x08BE237DBCD9CBD9(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2497344.f_4666 = 0;
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4666), 1);
		}
	}
}

int func_542()
{
	return 16;
}

void func_543(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_536(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_535(7, iVar0);
		Global_1353013.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = iParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = iParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_544(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_536(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_535(6, iVar0);
		Global_1353013.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_3770.f_183[iVar0] = iParam3;
		Global_1353013.f_3770.f_172[iVar0] = iParam2;
		Global_1353013.f_3770.f_260[iVar0] = iParam4;
		Global_1353013.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1353013.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1353013.f_3770.f_443[iVar0] = iParam7;
		Global_1353013.f_3770.f_454[iVar0] = iParam8;
		Global_1353013.f_3770.f_497[iVar0] = iParam9;
		Global_1353013.f_3770.f_508[iVar0] = iParam10;
		Global_1353013.f_3770.f_205[iVar0] = iParam11;
		Global_1353013.f_3770.f_216[iVar0] = iParam12;
		Global_1353013.f_3770.f_227[iVar0] = uParam13;
		Global_1353013.f_3770.f_238[iVar0] = iParam14;
		Global_1353013.f_3770.f_249[iVar0] = iParam15;
		Global_1353013.f_3770.f_519[iVar0] = iParam16;
		Global_1353013.f_3770.f_530[iVar0] = iParam17;
		Global_1353013.f_3770.f_541[iVar0] = iParam18;
		Global_1353013.f_3770.f_552[iVar0] = iParam19;
		Global_1353013.f_3770.f_563[iVar0] = iParam20;
		Global_1353013.f_3770.f_574[iVar0] = iParam21;
		Global_1353013.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_546())
		{
			Global_1353013.f_1088 = 1;
		}
		if (unk_0x5018862FF5D9F844())
		{
			iVar2 = 0;
			unk_0xEB51D9D737FD6BC1(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1353013.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1353013.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1353013.f_1088 = 1;
			}
			if (func_545())
			{
				Global_1353013.f_1092 = 1;
			}
		}
	}
}

int func_545()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x5018862FF5D9F844())
	{
		unk_0xEB51D9D737FD6BC1(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_546()
{
	if ((unk_0xBC8CC6C19B70E1C4() == 8 || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

void func_547()
{
	Global_1353013.f_1088 = 1;
}

void func_548()
{
	if (iLocal_884 > -1)
	{
		if (func_44(unk_0xBA948A9E34D09E6E(iLocal_884), 1))
		{
			if (func_44(unk_0xBA948A9E34D09E6E(iLocal_884), 6))
			{
				if (func_469())
				{
					if (func_467())
					{
						if (!func_560("JST_OBJ_KILL"))
						{
							func_559("JST_OBJ_KILL", &Local_921, iLocal_904, 0);
						}
					}
					else
					{
						if (func_560("JST_OBJ_KILL"))
						{
							func_473();
						}
						if (!func_560("JST_FBIKE"))
						{
							func_556("JST_FBIKE", 0);
						}
						if (!func_44(unk_0x5C40D1D6A2650FC5(), 10))
						{
							func_76(10);
							func_555("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_467())
				{
					if (!func_560("JST_OBKAREA"))
					{
						func_556("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_560("JST_OBJ_KILL"))
					{
						func_473();
					}
					if (!func_560("JST_FBIKE"))
					{
						func_556("JST_FBIKE", 0);
					}
				}
			}
			else if (func_636(9))
			{
				if (func_467())
				{
					if (!func_560("JST_OBJ_CHARGE"))
					{
						func_559("JST_OBJ_CHARGE", &Local_921, iLocal_904, 0);
					}
				}
			}
		}
		else if (!func_527())
		{
			if (!func_560("JST_OGOAREA"))
			{
				func_549("JST_OGOAREA", "JST_START", iLocal_903, 0);
			}
		}
		else if (!func_467())
		{
			if (!func_560("JST_OBIKE"))
			{
				func_556("JST_OBIKE", 0);
			}
		}
	}
}

void func_549(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_550(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 19;
		Global_1312575.f_56 = iParam2;
	}
}

int func_550(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (func_554(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_474();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_553();
	func_552(bParam2);
	func_551();
	return 1;
}

void func_551()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_552(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_553()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

bool func_554(char* sParam0, char* sParam1)
{
	if (!func_479())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam1))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

void func_555(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_556(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_557(sParam0))
	{
		return;
	}
	func_474();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_553();
	func_552(bParam1);
	func_551();
}

bool func_557(char* sParam0)
{
	if (!func_479())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_558(uParam0);
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_558(char* sParam0)
{
	if (!func_479())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

void func_559(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_550(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 16;
		Global_1312575.f_56 = iParam2;
	}
}

int func_560(char* sParam0)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (!func_479())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x8A3FBC299F47ED6B(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	return func_557(sParam0);
}

void func_561()
{
}

void func_562()
{
	if (!func_453())
	{
		func_567();
	}
	else
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_892))
		{
			unk_0x789C84F1B8496AD0(&uLocal_892);
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_891))
		{
			unk_0x789C84F1B8496AD0(&uLocal_891);
		}
		if (iLocal_884 > -1)
		{
			if (func_44(unk_0xBA948A9E34D09E6E(iLocal_884), 1))
			{
				func_563();
			}
		}
	}
}

void func_563()
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	func_566(&Var0);
	if (!unk_0xBDD3EABACAB97D09(uLocal_893))
	{
		func_565(&uVar3, &uVar4, &uVar5);
		uLocal_893 = unk_0xB596588E74193C0F(Var0, uVar3, uVar4);
		unk_0x6ADE62529CA3CA15(uLocal_893, uVar5);
		func_564(&uLocal_893, 29);
		unk_0x7FF3A84437112BB2(uLocal_893, 180);
		unk_0xE1E81CBB89115254(uLocal_893, 0);
	}
}

void func_564(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		uVar0 = func_69(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, uVar0);
	}
}

void func_565(var uParam0, var uParam1, var uParam2)
{
	if (Local_944.f_31 == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_944.f_31 == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_944.f_31 == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_566(var uParam0)
{
	switch (Local_944.f_31)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		
		case 1:
			*uParam0 = { -1342.056f, -3041.475f, 10.9444f };
			break;
		
		case 2:
			*uParam0 = { 2039.747f, 4768.012f, 40.1674f };
			break;
	}
}

void func_567()
{
	if (!unk_0xBDD3EABACAB97D09(uLocal_892))
	{
		uLocal_892 = unk_0x9EDB165CAADCAB2C(func_503(func_34(unk_0x0FFED3E94261A832())));
		unk_0x9FD1808EF916E312(uLocal_892, 495);
		unk_0xA4F6216A8431C2E8(uLocal_892, 1);
		unk_0x43FC07DB1C2FA4B3(uLocal_892, 7000);
		unk_0xA6B842B66643C116(uLocal_892, "CELL_JOUST");
		unk_0x697F84823ACFF84C(uLocal_892, 9);
		Global_2497344.f_261 = 1;
		func_564(&uLocal_892, iLocal_903);
		if (!func_636(6))
		{
			unk_0x847E5C2DF89423C1();
			func_612(6);
		}
	}
	if (!unk_0xBDD3EABACAB97D09(uLocal_891))
	{
		uLocal_891 = unk_0x8CD099A04D5CA896(func_503(func_34(unk_0x0FFED3E94261A832())), (func_525(func_34(unk_0x0FFED3E94261A832())) / 2f));
		func_564(&uLocal_891, iLocal_903);
		unk_0x7FF3A84437112BB2(uLocal_891, 100);
		unk_0x0B584E556B01101F(uLocal_891, 1.4f);
		unk_0xE1E81CBB89115254(uLocal_891, 0);
	}
}

int func_568()
{
	if (func_570() || func_569())
	{
		return 1;
	}
	return 0;
}

int func_569()
{
	return func_37(unk_0x0FFED3E94261A832());
}

bool func_570()
{
	return func_35(unk_0x0FFED3E94261A832());
}

void func_571(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_87(unk_0x0FFED3E94261A832());
	if (iParam2 || func_90(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1773272 = iVar0;
		if (func_127(iVar0))
		{
			Global_1773272.f_1 = 4;
		}
		else if (func_611(iVar0))
		{
			Global_1773272.f_1 = 5;
		}
		else if (func_81(iVar0, 0))
		{
			Global_1773272.f_1 = 2;
			if (func_119(iVar0))
			{
				Global_1773272.f_1 = 3;
			}
		}
		else
		{
			Global_1773272.f_1 = 1;
		}
		if (func_148() != func_29())
		{
			Global_1773272.f_4 = func_610(func_148());
			Global_1773272.f_5 = func_609(func_148());
		}
		if (func_84() != func_29())
		{
			func_147(func_84(), &(Global_1773272.f_6), &(Global_1773272.f_7));
		}
		Global_1773272.f_9 = unk_0xDA84A1E29323722E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1773272.f_27 = 1;
			Global_1773272.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1773272.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1773272.f_40 = func_280(iParam1);
			Global_1773272.f_41 = func_608();
			Global_1773272.f_42 = func_281(unk_0x0FFED3E94261A832(), iParam1);
			Global_1773272.f_44 = func_607(unk_0x0FFED3E94261A832(), iParam1);
		}
	}
	else if (func_117(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1773387 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1773387 = iParam0 + 1;
		}
		else
		{
			Global_1773387 = func_606(unk_0x0FFED3E94261A832());
		}
		switch (iVar0)
		{
			case 225:
				if (func_605(unk_0x0FFED3E94261A832()) == 0)
				{
					Global_1773387.f_1 = 0;
				}
				else
				{
					Global_1773387.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1773387.f_1 = 2;
				break;
			
			case 227:
				Global_1773387.f_1 = 3;
				break;
		}
		Global_1773387.f_21 = 1;
		Global_1773387.f_22 = 1;
		if (func_148() != func_29())
		{
			Global_1773387.f_4 = func_610(func_148());
			Global_1773387.f_5 = func_609(func_148());
		}
		if (func_84() != func_29())
		{
			func_147(func_84(), &(Global_1773387.f_4), &(Global_1773387.f_5));
		}
		Global_1773387.f_8 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773387.f_20 = iParam0;
		}
	}
	else if (func_97(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1773325 = iVar0;
		Global_1773272.f_1 = 1;
		if (func_148() != func_29())
		{
			Global_1773325.f_4 = func_610(func_148());
			Global_1773325.f_5 = func_609(func_148());
		}
		if (func_84() != func_29())
		{
			func_147(func_84(), &(Global_1773325.f_6), &(Global_1773325.f_7));
		}
		Global_1773325.f_9 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773325.f_21 = iParam0;
		}
	}
	else
	{
		if (func_148() != func_29())
		{
			Global_1773254 = func_610(func_148());
			Global_1773254.f_1 = func_609(func_148());
		}
		Global_1773254.f_5 = unk_0xDA84A1E29323722E();
		Global_1773254.f_13 = func_604();
		Global_1773254.f_15 = 0;
		if (func_146(1))
		{
			if (func_84() == func_148())
			{
				Global_1773254.f_15 = 1;
			}
		}
		if (func_603())
		{
			Global_1773387.f_28 = 1;
		}
		if ((func_602() || func_601()) || func_600())
		{
			Global_1773387.f_30 = 1;
		}
		if (func_598(func_599(joaat("trailersmall2"))))
		{
			Global_1773387.f_32 = 1;
		}
		if (func_580(func_597(joaat("caddy"))))
		{
			Global_1773387.f_31 = 1;
		}
		if (func_579(unk_0x0FFED3E94261A832()) || func_578(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_29 = 1;
		}
		if (func_577(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_33 = 1;
			Global_1773387.f_34 = 1;
		}
		if (func_576(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_36 = 1;
		}
		if (func_575(0, unk_0x0FFED3E94261A832()) == 1)
		{
			Global_1773387.f_35 = 1;
		}
		if (func_574(unk_0x0FFED3E94261A832(), 3, &uVar1))
		{
			Global_1773387.f_37 = 1;
		}
		if (func_574(unk_0x0FFED3E94261A832(), 7, &uVar1))
		{
			Global_1773387.f_38 = 1;
		}
		if (func_573(unk_0x0FFED3E94261A832()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_572(unk_0x0FFED3E94261A832(), iVar2);
				if (func_277(unk_0x0FFED3E94261A832(), iVar3, 0))
				{
					Global_1773387.f_39 = 1;
				}
				if (func_277(unk_0x0FFED3E94261A832(), iVar3, 2))
				{
					Global_1773387.f_40 = 1;
				}
				if (func_277(unk_0x0FFED3E94261A832(), iVar3, 1))
				{
					Global_1773387.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_572(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_269(Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/]))
	{
		uVar0 = Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/];
	}
	return uVar0;
}

int func_573(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_574(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_575(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_575(int iParam0, int iParam1)
{
	if (iParam1 == func_29())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 0))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 3))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 6))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 9))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 12))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 15))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 18))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 21))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 1))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 4))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 7))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 10))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 13))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 16))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 19))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 22))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 2))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 5))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 8))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 11))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 14))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 17))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 20))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 23))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_576(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 7);
}

bool func_577(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 8);
}

bool func_578(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 11);
}

bool func_579(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 10);
}

int func_580(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_596(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_594(11));
		func_593(iVar1, &iVar0, 1);
		iVar2 = func_596(func_582(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_125(func_581(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_581(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1625;
				
				case 1:
					return 1632;
				
				case 2:
					return 1639;
				
				case 3:
					return 1646;
				
				case 4:
					return 1653;
				
				case 5:
					return 1660;
				
				case 6:
					return 1667;
				
				case 7:
					return 1674;
				
				case 8:
					return 1681;
				
				case 9:
					return 1688;
				
				case 10:
					return 1695;
				
				case 11:
					return 1701;
				
				case 12:
					return 1707;
				
				case 13:
					return 1713;
				
				case 14:
					return 1790;
				
				case 15:
					return 1797;
				
				case 16:
					return 1804;
				
				case 17:
					return 1811;
				
				case 18:
					return 1818;
				
				case 19:
					return 1825;
				
				case 20:
					return 1832;
				
				case 21:
					return 1839;
				
				case 22:
					return 1846;
				
				case 23:
					return 1853;
				
				case 24:
					return 1859;
				
				case 25:
					return 1865;
				
				case 26:
					return 2160;
				
				case 27:
					return 2167;
				
				case 28:
					return 2174;
				
				case 29:
					return 2181;
				
				case 30:
					return 2188;
				
				case 31:
					return 2195;
				
				case 32:
					return 2202;
				
				case 33:
					return 2209;
				
				case 34:
					return 2216;
				
				case 35:
					return 2223;
				
				case 36:
					return 2230;
				
				case 37:
					return 2236;
				
				case 38:
					return 2242;
				
				case 39:
					return 2813;
				
				case 40:
					return 2820;
				
				case 41:
					return 2827;
				
				case 42:
					return 2834;
				
				case 43:
					return 2841;
				
				case 44:
					return 2848;
				
				case 45:
					return 2855;
				
				case 46:
					return 2862;
				
				case 47:
					return 2869;
				
				case 48:
					return 2876;
				
				case 49:
					return 2883;
				
				case 50:
					return 2889;
				
				case 51:
					return 2895;
				
				case 52:
					return 2937;
				
				case 53:
					return 2944;
				
				case 54:
					return 2951;
				
				case 55:
					return 2958;
				
				case 56:
					return 2965;
				
				case 57:
					return 2972;
				
				case 58:
					return 2979;
				
				case 59:
					return 2986;
				
				case 60:
					return 2993;
				
				case 61:
					return 3000;
				
				case 62:
					return 3007;
				
				case 63:
					return 3013;
				
				case 64:
					return 3019;
				
				case 65:
					return 3220;
				
				case 66:
					return 3228;
				
				case 67:
					return 3236;
				
				case 68:
					return 3244;
				
				case 69:
					return 3252;
				
				case 70:
					return 3260;
				
				case 71:
					return 3268;
				
				case 72:
					return 3276;
				
				case 73:
					return 3284;
				
				case 74:
					return 3292;
				
				case 75:
					return 3300;
				
				case 76:
					return 3308;
				
				case 77:
					return 3316;
				
				case 78:
					return 3324;
				
				case joaat("mpsv_lp0_31"):
					return 3332;
				
				case 80:
					return 3340;
				
				case 81:
					return 3348;
				
				case 82:
					return 3356;
				
				case 83:
					return 3364;
				
				case 84:
					return 3372;
				
				case 85:
					return 3380;
				
				case 86:
					return 3387;
				
				case 87:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4006;
				
				case 89:
					return 4014;
				
				case 90:
					return 4022;
				
				case 91:
					return 4030;
				
				case 92:
					return 4038;
				
				case 93:
					return 4046;
				
				case 94:
					return 4054;
				
				case 95:
					return 4062;
				
				case 96:
					return 4070;
				
				case 97:
					return 4078;
				
				case 98:
					return 4086;
				
				case 99:
					return 4094;
				
				case 100:
					return 4102;
				
				case 101:
					return 4110;
				
				case 102:
					return 4118;
				
				case 103:
					return 4126;
				
				case 104:
					return 4134;
				
				case 105:
					return 4142;
				
				case 106:
					return 4150;
				
				case 107:
					return 4158;
				
				case 108:
					return 4166;
				
				case 109:
					return 4174;
				
				case 110:
					return 4182;
				
				case 111:
					return 4190;
				
				case 112:
					return 4198;
				
				case 113:
					return 4206;
				
				case 114:
					return 4214;
				
				case 115:
					return 4222;
				
				case 116:
					return 4230;
				
				case 117:
					return 4238;
				
				case 118:
					return 4246;
				
				case 119:
					return 4254;
				
				case 120:
					return 4262;
				
				case 121:
					return 4270;
				
				case 122:
					return 4278;
				
				case 123:
					return 4286;
				
				case 124:
					return 4294;
				
				case 125:
					return 4302;
				
				case 126:
					return 4310;
				
				case 127:
					return 4318;
				
				case 128:
					return 4326;
				
				case 129:
					return 4334;
				
				case 130:
					return 4342;
				
				case 131:
					return 4350;
				
				case 132:
					return 4358;
				
				case 133:
					return 4366;
				
				case 134:
					return 4374;
				
				case 135:
					return 4382;
				
				case 136:
					return 4390;
				
				case 137:
					return 4398;
				
				case 138:
					return 4406;
				
				case 139:
					return 4414;
				
				case 140:
					return 4422;
				
				case 141:
					return 4430;
				
				case 142:
					return 4438;
				
				case 143:
					return 4446;
				
				case 144:
					return 4454;
				
				case 145:
					return 4462;
				
				case 146:
					return 4470;
				
				case 147:
					return 4478;
				
				case 148:
					return 4486;
				
				case 149:
					return 4494;
				
				case 150:
					return 4502;
				
				case 151:
					return 4510;
				
				case 152:
					return 4518;
				
				case 153:
					return 4526;
				
				case 154:
					return 4534;
				
				case 155:
					return 4542;
				
				case 156:
					return 4550;
				
				case 157:
					return 4558;
				
				case 158:
					return 5451;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1791;
				
				case 15:
					return 1798;
				
				case 16:
					return 1805;
				
				case 17:
					return 1812;
				
				case 18:
					return 1819;
				
				case 19:
					return 1826;
				
				case 20:
					return 1833;
				
				case 21:
					return 1840;
				
				case 22:
					return 1847;
				
				case 23:
					return 1854;
				
				case 24:
					return 1860;
				
				case 25:
					return 1866;
				
				case 26:
					return 2161;
				
				case 27:
					return 2168;
				
				case 28:
					return 2175;
				
				case 29:
					return 2182;
				
				case 30:
					return 2189;
				
				case 31:
					return 2196;
				
				case 32:
					return 2203;
				
				case 33:
					return 2210;
				
				case 34:
					return 2217;
				
				case 35:
					return 2224;
				
				case 36:
					return 2231;
				
				case 37:
					return 2237;
				
				case 38:
					return 2243;
				
				case 39:
					return 2814;
				
				case 40:
					return 2821;
				
				case 41:
					return 2828;
				
				case 42:
					return 2835;
				
				case 43:
					return 2842;
				
				case 44:
					return 2849;
				
				case 45:
					return 2856;
				
				case 46:
					return 2863;
				
				case 47:
					return 2870;
				
				case 48:
					return 2877;
				
				case 49:
					return 2884;
				
				case 50:
					return 2890;
				
				case 51:
					return 2896;
				
				case 52:
					return 2938;
				
				case 53:
					return 2945;
				
				case 54:
					return 2952;
				
				case 55:
					return 2959;
				
				case 56:
					return 2966;
				
				case 57:
					return 2973;
				
				case 58:
					return 2980;
				
				case 59:
					return 2987;
				
				case 60:
					return 2994;
				
				case 61:
					return 3001;
				
				case 62:
					return 3008;
				
				case 63:
					return 3014;
				
				case 64:
					return 3020;
				
				case 65:
					return 3221;
				
				case 66:
					return 3229;
				
				case 67:
					return 3237;
				
				case 68:
					return 3245;
				
				case 69:
					return 3253;
				
				case 70:
					return 3261;
				
				case 71:
					return 3269;
				
				case 72:
					return 3277;
				
				case 73:
					return 3285;
				
				case 74:
					return 3293;
				
				case 75:
					return 3301;
				
				case 76:
					return 3309;
				
				case 77:
					return 3317;
				
				case 78:
					return 3325;
				
				case joaat("mpsv_lp0_31"):
					return 3333;
				
				case 80:
					return 3341;
				
				case 81:
					return 3349;
				
				case 82:
					return 3357;
				
				case 83:
					return 3365;
				
				case 84:
					return 3373;
				
				case 85:
					return 3381;
				
				case 86:
					return 3388;
				
				case 87:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4007;
				
				case 89:
					return 4015;
				
				case 90:
					return 4023;
				
				case 91:
					return 4031;
				
				case 92:
					return 4039;
				
				case 93:
					return 4047;
				
				case 94:
					return 4055;
				
				case 95:
					return 4063;
				
				case 96:
					return 4071;
				
				case 97:
					return 4079;
				
				case 98:
					return 4087;
				
				case 99:
					return 4095;
				
				case 100:
					return 4103;
				
				case 101:
					return 4111;
				
				case 102:
					return 4119;
				
				case 103:
					return 4127;
				
				case 104:
					return 4135;
				
				case 105:
					return 4143;
				
				case 106:
					return 4151;
				
				case 107:
					return 4159;
				
				case 108:
					return 4167;
				
				case 109:
					return 4175;
				
				case 110:
					return 4183;
				
				case 111:
					return 4191;
				
				case 112:
					return 4199;
				
				case 113:
					return 4207;
				
				case 114:
					return 4215;
				
				case 115:
					return 4223;
				
				case 116:
					return 4231;
				
				case 117:
					return 4239;
				
				case 118:
					return 4247;
				
				case 119:
					return 4255;
				
				case 120:
					return 4263;
				
				case 121:
					return 4271;
				
				case 122:
					return 4279;
				
				case 123:
					return 4287;
				
				case 124:
					return 4295;
				
				case 125:
					return 4303;
				
				case 126:
					return 4311;
				
				case 127:
					return 4319;
				
				case 128:
					return 4327;
				
				case 129:
					return 4335;
				
				case 130:
					return 4343;
				
				case 131:
					return 4351;
				
				case 132:
					return 4359;
				
				case 133:
					return 4367;
				
				case 134:
					return 4375;
				
				case 135:
					return 4383;
				
				case 136:
					return 4391;
				
				case 137:
					return 4399;
				
				case 138:
					return 4407;
				
				case 139:
					return 4415;
				
				case 140:
					return 4423;
				
				case 141:
					return 4431;
				
				case 142:
					return 4439;
				
				case 143:
					return 4447;
				
				case 144:
					return 4455;
				
				case 145:
					return 4463;
				
				case 146:
					return 4471;
				
				case 147:
					return 4479;
				
				case 148:
					return 4487;
				
				case 149:
					return 4495;
				
				case 150:
					return 4503;
				
				case 151:
					return 4511;
				
				case 152:
					return 4519;
				
				case 153:
					return 4527;
				
				case 154:
					return 4535;
				
				case 155:
					return 4543;
				
				case 156:
					return 4551;
				
				case 157:
					return 4559;
				
				case 158:
					return 5452;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("mpsv_lp0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4008;
				
				case 89:
					return 4016;
				
				case 90:
					return 4024;
				
				case 91:
					return 4032;
				
				case 92:
					return 4040;
				
				case 93:
					return 4048;
				
				case 94:
					return 4056;
				
				case 95:
					return 4064;
				
				case 96:
					return 4072;
				
				case 97:
					return 4080;
				
				case 98:
					return 4088;
				
				case 99:
					return 4096;
				
				case 100:
					return 4104;
				
				case 101:
					return 4112;
				
				case 102:
					return 4120;
				
				case 103:
					return 4128;
				
				case 104:
					return 4136;
				
				case 105:
					return 4144;
				
				case 106:
					return 4152;
				
				case 107:
					return 4160;
				
				case 108:
					return 4168;
				
				case 109:
					return 4176;
				
				case 110:
					return 4184;
				
				case 111:
					return 4192;
				
				case 112:
					return 4200;
				
				case 113:
					return 4208;
				
				case 114:
					return 4216;
				
				case 115:
					return 4224;
				
				case 116:
					return 4232;
				
				case 117:
					return 4240;
				
				case 118:
					return 4248;
				
				case 119:
					return 4256;
				
				case 120:
					return 4264;
				
				case 121:
					return 4272;
				
				case 122:
					return 4280;
				
				case 123:
					return 4288;
				
				case 124:
					return 4296;
				
				case 125:
					return 4304;
				
				case 126:
					return 4312;
				
				case 127:
					return 4320;
				
				case 128:
					return 4328;
				
				case 129:
					return 4336;
				
				case 130:
					return 4344;
				
				case 131:
					return 4352;
				
				case 132:
					return 4360;
				
				case 133:
					return 4368;
				
				case 134:
					return 4376;
				
				case 135:
					return 4384;
				
				case 136:
					return 4392;
				
				case 137:
					return 4400;
				
				case 138:
					return 4408;
				
				case 139:
					return 4416;
				
				case 140:
					return 4424;
				
				case 141:
					return 4432;
				
				case 142:
					return 4440;
				
				case 143:
					return 4448;
				
				case 144:
					return 4456;
				
				case 145:
					return 4464;
				
				case 146:
					return 4472;
				
				case 147:
					return 4480;
				
				case 148:
					return 4488;
				
				case 149:
					return 4496;
				
				case 150:
					return 4504;
				
				case 151:
					return 4512;
				
				case 152:
					return 4520;
				
				case 153:
					return 4528;
				
				case 154:
					return 4536;
				
				case 155:
					return 4544;
				
				case 156:
					return 4552;
				
				case 157:
					return 4560;
				
				case 158:
					return 5453;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("mpsv_lp0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4009;
				
				case 89:
					return 4017;
				
				case 90:
					return 4025;
				
				case 91:
					return 4033;
				
				case 92:
					return 4041;
				
				case 93:
					return 4049;
				
				case 94:
					return 4057;
				
				case 95:
					return 4065;
				
				case 96:
					return 4073;
				
				case 97:
					return 4081;
				
				case 98:
					return 4089;
				
				case 99:
					return 4097;
				
				case 100:
					return 4105;
				
				case 101:
					return 4113;
				
				case 102:
					return 4121;
				
				case 103:
					return 4129;
				
				case 104:
					return 4137;
				
				case 105:
					return 4145;
				
				case 106:
					return 4153;
				
				case 107:
					return 4161;
				
				case 108:
					return 4169;
				
				case 109:
					return 4177;
				
				case 110:
					return 4185;
				
				case 111:
					return 4193;
				
				case 112:
					return 4201;
				
				case 113:
					return 4209;
				
				case 114:
					return 4217;
				
				case 115:
					return 4225;
				
				case 116:
					return 4233;
				
				case 117:
					return 4241;
				
				case 118:
					return 4249;
				
				case 119:
					return 4257;
				
				case 120:
					return 4265;
				
				case 121:
					return 4273;
				
				case 122:
					return 4281;
				
				case 123:
					return 4289;
				
				case 124:
					return 4297;
				
				case 125:
					return 4305;
				
				case 126:
					return 4313;
				
				case 127:
					return 4321;
				
				case 128:
					return 4329;
				
				case 129:
					return 4337;
				
				case 130:
					return 4345;
				
				case 131:
					return 4353;
				
				case 132:
					return 4361;
				
				case 133:
					return 4369;
				
				case 134:
					return 4377;
				
				case 135:
					return 4385;
				
				case 136:
					return 4393;
				
				case 137:
					return 4401;
				
				case 138:
					return 4409;
				
				case 139:
					return 4417;
				
				case 140:
					return 4425;
				
				case 141:
					return 4433;
				
				case 142:
					return 4441;
				
				case 143:
					return 4449;
				
				case 144:
					return 4457;
				
				case 145:
					return 4465;
				
				case 146:
					return 4473;
				
				case 147:
					return 4481;
				
				case 148:
					return 4489;
				
				case 149:
					return 4497;
				
				case 150:
					return 4505;
				
				case 151:
					return 4513;
				
				case 152:
					return 4521;
				
				case 153:
					return 4529;
				
				case 154:
					return 4537;
				
				case 155:
					return 4545;
				
				case 156:
					return 4553;
				
				case 157:
					return 4561;
				
				case 158:
					return 5454;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 13:
					return 1719;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 6019;
				
				case 1:
					return 6020;
				
				case 2:
					return 6021;
				
				case 3:
					return 6022;
				
				case 4:
					return 6023;
				
				case 5:
					return 6024;
				
				case 6:
					return 6025;
				
				case 7:
					return 6026;
				
				case 8:
					return 6027;
				
				case 9:
					return 6028;
				
				case 10:
					return 6029;
				
				case 11:
					return 6030;
				
				case 12:
					return 6031;
				
				case 13:
					return 6032;
				
				case 14:
					return 6033;
				
				case 15:
					return 6034;
				
				case 16:
					return 6035;
				
				case 17:
					return 6036;
				
				case 18:
					return 6037;
				
				case 19:
					return 6038;
				
				case 20:
					return 6039;
				
				case 21:
					return 6040;
				
				case 22:
					return 6041;
				
				case 23:
					return 6042;
				
				case 24:
					return 6043;
				
				case 25:
					return 6044;
				
				case 26:
					return 2249;
				
				case 27:
					return 2250;
				
				case 28:
					return 2251;
				
				case 29:
					return 2252;
				
				case 30:
					return 2253;
				
				case 31:
					return 2254;
				
				case 32:
					return 2255;
				
				case 33:
					return 2256;
				
				case 34:
					return 2257;
				
				case 35:
					return 2258;
				
				case 36:
					return 2259;
				
				case 37:
					return 2260;
				
				case 38:
					return 2261;
				
				case 39:
					return 2901;
				
				case 40:
					return 2902;
				
				case 41:
					return 2903;
				
				case 42:
					return 2904;
				
				case 43:
					return 2905;
				
				case 44:
					return 2906;
				
				case 45:
					return 2907;
				
				case 46:
					return 2908;
				
				case 47:
					return 2909;
				
				case 48:
					return 2910;
				
				case 49:
					return 2911;
				
				case 50:
					return 2912;
				
				case 51:
					return 2913;
				
				case 52:
					return 3025;
				
				case 53:
					return 3026;
				
				case 54:
					return 3027;
				
				case 55:
					return 3028;
				
				case 56:
					return 3029;
				
				case 57:
					return 3030;
				
				case 58:
					return 3031;
				
				case 59:
					return 3032;
				
				case 60:
					return 3033;
				
				case 61:
					return 3034;
				
				case 62:
					return 3035;
				
				case 63:
					return 3036;
				
				case 64:
					return 3037;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			break;
	}
	return 1625;
}

int func_582(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 159)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iParam0 >= func_594(iVar0) && iParam0 < func_583(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_583(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_592(iParam0);
		return func_591(iVar0);
	}
	return (func_584(iParam0, -1) * iParam0 + 1);
}

int func_584(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_587(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_586(iParam1))
			{
				return 0;
			}
			else if (func_585(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049460[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_585(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_587(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_588(unk_0x0FFED3E94261A832(), 0);
	}
	if (bParam1)
	{
		if (func_588(unk_0x0FFED3E94261A832(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_588(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_29())
	{
		if (!func_590(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_589(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

int func_589(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 9);
	}
	return 0;
}

int func_590(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 2);
	}
	return 0;
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_592(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_593(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_8827)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1770284[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_594(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_592(iParam0);
		return func_595(iVar0);
	}
	return (func_584(iParam0, -1) * iParam0);
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_596(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_262145.f_15534)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_592(iParam0);
		if (iVar1 == 0 && func_125(5368, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1362008[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2528770[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 12)
		{
			return 0;
		}
		return Global_2528699[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_597(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_598(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_593(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_125(func_581(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_599(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_600()
{
	return func_125(5355, -1, 0) != 0;
}

bool func_601()
{
	return func_125(3803, -1, 0) != 0;
}

bool func_602()
{
	return func_125(3208, -1, 0) != 0;
}

bool func_603()
{
	return func_125(5354, -1, 0) != 0;
}

int func_604()
{
	int iVar0;
	
	iVar0 = func_148();
	if (iVar0 != func_29())
	{
		return Global_1622795[iVar0 /*431*/].f_11.f_92;
	}
	return 0;
}

int func_605(int iParam0)
{
	if (func_88(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_173;
	}
	return -1;
}

int func_606(int iParam0)
{
	if (func_87(iParam0) == 225 || func_87(iParam0) == 226)
	{
		return func_605(iParam0);
	}
	return -1;
}

int func_607(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_269(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_608()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_279(unk_0x0FFED3E94261A832(), iVar0))
		{
			unk_0xF6082E2ADA1C795B(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_609(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_610(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_611(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

void func_612(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&uLocal_875, iParam0);
}

char* func_613()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_226(unk_0x0FFED3E94261A832());
	if (iVar0 != func_29())
	{
		if (iVar0 != unk_0x0FFED3E94261A832())
		{
			if (((func_100(iVar0, 28) || func_100(unk_0x0FFED3E94261A832(), 28)) || func_511(iVar0)) && !func_510(iVar0))
			{
				return func_512(iVar0, 0);
			}
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_512(iVar0, 0);
			}
		}
		uVar1 = func_514(&(Global_1622795[iVar0 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar1))
		{
			return func_512(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_614(int iParam0)
{
	int iVar0;
	
	iVar0 = func_225(iParam0);
	if (iVar0 != -1)
	{
		return func_223(iVar0);
	}
	return 1;
}

void func_615(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != iParam0)
	{
		func_635(-1);
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = iParam0;
		if (func_30() != -1)
		{
			func_634(-1);
		}
		if (func_633() != -1)
		{
			func_632(-1);
		}
		func_631(iParam2);
		func_629(iParam0);
		if (!func_628(iParam0))
		{
			fVar0 = func_627(iParam0);
			if (fVar0 != 1f)
			{
				func_626(fVar0);
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
			}
		}
		if (!func_625(iParam0) || iParam3)
		{
			if (func_624(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xE0125DCD8DB3EFC3(0);
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
			}
			else if (unk_0xA0F7964BC7FD74A9() < 5)
			{
				unk_0xFBC4596E19752537(1f);
				unk_0xE0125DCD8DB3EFC3(5);
			}
		}
		if (func_73())
		{
			func_115(27);
		}
		if (bParam1)
		{
			if (!func_656())
			{
				func_622(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4)) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 0))
			{
				func_205(6);
			}
			func_621();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
		}
		if (func_113(unk_0x0FFED3E94261A832()) && func_108(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
		}
		func_617();
		if (func_616(iParam0))
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 6);
		}
	}
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_617()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_620();
	iVar2 = func_226(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (func_240(iVar1, iVar2, 1) || func_618(iVar1, unk_0x0FFED3E94261A832()))
			{
				unk_0x8D82B526E9E8D0BD(unk_0x0FFED3E94261A832(), iVar1, uVar3);
				unk_0x8D82B526E9E8D0BD(iVar1, unk_0x0FFED3E94261A832(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_618(int iParam0, int iParam1)
{
	if (func_242(iParam0, 1) && func_242(iParam1, 1))
	{
		return (func_619(iParam0) == func_226(iParam1) || func_619(iParam1) == func_226(iParam0));
	}
	return 0;
}

int func_619(int iParam0)
{
	if (func_242(iParam0, 1))
	{
		return Global_1622795[func_226(iParam0) /*431*/].f_11.f_351;
	}
	return func_29();
}

int func_620()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148();
	if (iVar0 != func_29())
	{
		if (func_821(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar1 /*431*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_621()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 4);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 6))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 6);
	}
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 0);
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 2);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_544 = 0;
	if (Global_2497344.f_4478 > 0)
	{
		unk_0xE0125DCD8DB3EFC3(Global_2497344.f_4478);
	}
	Global_2497344.f_4477 = 0;
}

void func_622(int iParam0)
{
	if (func_623() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_623()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_624(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_626(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_67())
	{
		return;
	}
	fVar0 = (Global_2497344.f_4823 - fParam0);
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && unk_0x3FEF699D13BCC798(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2497344.f_4823 = fParam0;
	Global_2497344.f_4824 = unk_0xFF09208EC90C94CB();
}

float func_627(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_628(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_125(3766, -1, 0);
	iVar1 = func_630(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		func_123(3766, iVar0, -1, 1, 0);
	}
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_631(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (Global_1622795[iVar0 /*431*/].f_11.f_173 != iParam0)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_173 = iParam0;
	}
}

void func_632(int iParam0)
{
	if (Global_2497344.f_4828.f_151 != iParam0)
	{
		Global_2497344.f_4828.f_151 = iParam0;
	}
}

int func_633()
{
	return Global_2497344.f_4828.f_151;
}

void func_634(int iParam0)
{
	if (Global_2497344.f_4828.f_150 != iParam0)
	{
		Global_2497344.f_4828.f_150 = iParam0;
	}
}

void func_635(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_31 = iParam0;
}

bool func_636(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(uLocal_875, iParam0);
}

int func_637(bool bParam0)
{
	if (func_653(unk_0x0FFED3E94261A832(), 21))
	{
		return 0;
	}
	if (unk_0x1CF28DE85743D98B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x45A42C7863C1A2B9())
		{
			return 0;
		}
	}
	if (func_652(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_651())
	{
		return 0;
	}
	if (func_442())
	{
		return 0;
	}
	if (func_650())
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_434(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_438())
	{
		return 0;
	}
	if (func_653(unk_0x0FFED3E94261A832(), 0) || func_653(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_653(unk_0x0FFED3E94261A832(), 12) || func_653(unk_0x0FFED3E94261A832(), 14)) || func_653(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_649(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		if (!func_643())
		{
			return 0;
		}
	}
	if (func_642())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_641(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_640())
	{
		return 0;
	}
	if (func_639(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (func_638(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_638(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_639(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_640()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0)
{
	if (!func_821(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

bool func_642()
{
	return Global_91829.f_310 > 0;
}

int func_643()
{
	int iVar0;
	
	iVar0 = func_87(unk_0x0FFED3E94261A832());
	if (((func_586(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15) || func_648(unk_0x0FFED3E94261A832())) || func_647(unk_0x0FFED3E94261A832())) || func_646(unk_0x0FFED3E94261A832()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_645(unk_0x0FFED3E94261A832()))
	{
		if (func_127(iVar0) || func_611(iVar0))
		{
			return 1;
		}
	}
	if (func_104(unk_0x0FFED3E94261A832()))
	{
		if (func_611(iVar0))
		{
			return 1;
		}
	}
	if (func_644(unk_0x0FFED3E94261A832()))
	{
		if (func_117(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_644(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_821(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_105(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_645(int iParam0)
{
	if (func_585(Global_1592456[iParam0 /*635*/].f_259.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_646(int iParam0)
{
	if (func_587(Global_1592456[iParam0 /*635*/].f_259.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_647(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_821(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_105(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_648(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_821(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_105(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_649(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1592456[iParam0 /*635*/].f_259.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_648(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_104(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_647(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_644(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_650()
{
	return Global_1312852;
}

bool func_651()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_652(int iParam0)
{
	if (func_433(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_653(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_654(int iParam0)
{
	if (!func_134() && !func_242(unk_0x0FFED3E94261A832(), 1))
	{
		if (!func_108(unk_0x0FFED3E94261A832()))
		{
			if (func_656())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_655()
{
	return 0;
}

int func_656()
{
	if ((func_100(unk_0x0FFED3E94261A832(), 21) || func_100(unk_0x0FFED3E94261A832(), 22)) || func_660())
	{
		return 1;
	}
	if (func_657())
	{
		func_115(22);
		return 1;
	}
	return 0;
}

int func_657()
{
	if (func_88(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_73() && !func_659()) || func_653(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_658(27);
		}
	}
	return 0;
}

void func_658(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

bool func_659()
{
	return Global_1312416.f_1;
}

bool func_660()
{
	return func_261(289, -1);
}

void func_661(int iParam0, int iParam1)
{
	Local_979[iParam0 /*6*/] = iParam1;
}

bool func_662()
{
	if (!func_44(unk_0x5C40D1D6A2650FC5(), 3))
	{
		if (func_17(1))
		{
			func_664("JCMcBpPl9UWmcdOYFza0Tg");
			func_664("jDF4fBBUqG9ZuI9TR7mw");
			func_76(3);
			func_663();
		}
	}
	return func_44(unk_0x5C40D1D6A2650FC5(), 3);
}

void func_663()
{
	Global_1770670 = 1;
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 0))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 0);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 0);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 1))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 1);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 1);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 5))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 5);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 5);
	}
	if (unk_0x5D03CCED0E46E032(-355737150))
	{
		unk_0x6ADA8071E27ECAB6(-355737150, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-580979506))
	{
		unk_0x6ADA8071E27ECAB6(-580979506, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1426452475))
	{
		unk_0x6ADA8071E27ECAB6(-1426452475, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(745417724))
	{
		unk_0x6ADA8071E27ECAB6(745417724, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1305304906))
	{
		unk_0x6ADA8071E27ECAB6(-1305304906, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1543175077))
	{
		unk_0x6ADA8071E27ECAB6(-1543175077, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-811770997))
	{
		unk_0x6ADA8071E27ECAB6(-811770997, 0, 0, 0);
	}
}

void func_664(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_665(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0xF6082E2ADA1C795B(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_665(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_667(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_666(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_666(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_667(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794643.f_98389[iVar13 /*13*/];
		
		case 62:
			return Global_907640.f_18805[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_667(var uParam0)
{
	int iVar0;
	
	if (unk_0x58478145CAF8429C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_669(uParam0->f_1))
	{
		if (func_668(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xAA4F14DA15DB0B51(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_794643.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x35302CD5A5D37EED(&(Global_794643.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_907640.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x35302CD5A5D37EED(&(Global_907640.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x0FFED3E94261A832())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_950886.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_950886.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_668(var uParam0)
{
	if (Global_2398052)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_2398052.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_669(int iParam0)
{
	return iParam0 == 9999;
}

int func_670()
{
	return Local_944.f_0;
}

int func_671(int iParam0)
{
	return Local_979[iParam0 /*6*/];
}

void func_672()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		switch (iVar1)
		{
			case 171:
				unk_0xD9298AF91B40C8C4(1, iVar0, &uVar2, 2);
				break;
			
			case 182:
				func_673(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_673(int iParam0)
{
	struct<10> Var0;
	var uVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 10))
	{
		if (unk_0x2137828D03306CAF(Var0.f_0))
		{
			if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
			{
				uVar10 = unk_0xC3A7AD90290CA72E(Var0.f_0);
				if (unk_0xDB61DD81432BD145(uVar10))
				{
					iVar11 = unk_0xB0BB7458627D389F(iVar10);
					if (unk_0x76BCE6C7B20502DA(iVar11))
					{
						if (Var0.f_3)
						{
							if (unk_0x2137828D03306CAF(Var0.f_1))
							{
								if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
								{
									iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
									if (unk_0xDB61DD81432BD145(iVar10))
									{
										iVar12 = unk_0xB0BB7458627D389F(iVar10);
										if (iVar12 == unk_0x0FFED3E94261A832())
										{
											if (func_467())
											{
												if (func_469())
												{
													if (!func_313(iVar12, iVar11) && func_676(iVar12))
													{
														if (func_674(Var0))
														{
															if (func_45(iVar11))
															{
																Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 = (Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 + (Global_262145.f_16843 * Global_262145.f_16844));
															}
															else
															{
																Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 = (Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 + (Global_262145.f_16842 * Global_262145.f_16844));
															}
														}
														else if (func_45(iVar11))
														{
															Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 = (Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 + Global_262145.f_16843);
														}
														else
														{
															Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 = (Local_979[unk_0x88641E5BC172153A() /*6*/].f_3 + Global_262145.f_16842);
														}
													}
													else if (iVar12 == iVar11 || !func_313(iVar12, iVar11))
													{
														if (func_674(Var0))
														{
															Local_979[unk_0x88641E5BC172153A() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_506(11);
												}
											}
											else
											{
												func_506(9);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_674(struct<10> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x2137828D03306CAF(unk_0xC3A7AD90290CA72E(Param0.f_1)) && !unk_0xA9A04898798AE9E6(unk_0xC3A7AD90290CA72E(Param0.f_1), 0))
	{
		if (func_675(unk_0xC3A7AD90290CA72E(Param0.f_1)))
		{
			iVar0 = unk_0x568EC5FF4FE2D410(Param0.f_4);
			iVar1 = Param0.f_4;
			iVar2 = unk_0x4A59BABA027A11CE(iVar1);
			if (((Param0.f_9 || iVar1 == joaat("weapon_unarmed")) || iVar2 == joaat("GROUP_MELEE")) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_675(int iParam0)
{
	int iVar0;
	
	if (unk_0xC6E131A80E016CB3(iParam0))
	{
		return 1;
	}
	if (unk_0xC4A39E4229BD3ABE(iParam0, 1))
	{
		iVar0 = unk_0x0C20E539D876C5B3(iParam0, 1);
		if ((((unk_0xD3B21CE53AA7BE51(iVar0) == joaat("chimera") || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("blazer")) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("blazer2")) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("blazer3")) || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_676(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x4325D353D7D27B34(iParam0);
	if (unk_0xC4A39E4229BD3ABE(unk_0x1E199569E0295838(iParam0), 0))
	{
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x1E199569E0295838(iParam0), 0);
		iVar1 = func_677(iVar0);
		if (func_313(iVar1, iParam0) || iVar1 == iParam0)
		{
			unk_0x4325D353D7D27B34(iParam0);
			unk_0x4325D353D7D27B34(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_677(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (!unk_0x457D9E478E06E354(iParam0, -1, 0))
		{
			iVar0 = unk_0x8F8E5C33266ED978(iParam0, -1, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar0))
			{
				iVar1 = unk_0xB0BB7458627D389F(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_821(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_678()
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_636(9))
		{
			iVar0 = (1 - func_34(unk_0x0FFED3E94261A832()));
			if (Local_944.f_16[1] != Local_944.f_16[0])
			{
				if (Local_944.f_16[iVar0] != func_29())
				{
					StringCopy(&Local_921, func_509(Local_944.f_16[iVar0]), 64);
					iLocal_904 = func_614(Local_944.f_16[iVar0]);
					func_612(9);
				}
			}
		}
	}
}

void func_679()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3398A98B716FCD6A(unk_0x2A5EB8B0FE590B91()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (unk_0x885F483F34E47503(iVar1))
			{
				if (!unk_0xAA4F14DA15DB0B51(uLocal_883, iVar0))
				{
					unk_0x0D718959E866D008(iVar1, 0);
					unk_0xF6082E2ADA1C795B(&iLocal_883, iVar0);
				}
				else if (!unk_0x76BCE6C7B20502DA(iVar1))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (!unk_0xAA4F14DA15DB0B51(uLocal_882, iVar0))
							{
								if (((!func_681(unk_0x2A5EB8B0FE590B91(), unk_0x1E199569E0295838(iVar1)) && !func_680(unk_0x1E199569E0295838(iVar1))) && !func_313(unk_0x0FFED3E94261A832(), iVar1)) && (func_527() || func_524()))
								{
									unk_0x0D718959E866D008(iVar1, 1);
									unk_0xF6082E2ADA1C795B(&iLocal_882, iVar0);
								}
							}
							else if (func_681(unk_0x2A5EB8B0FE590B91(), unk_0x1E199569E0295838(iVar1)))
							{
								unk_0x0D718959E866D008(iVar1, 0);
								unk_0x507FE690B1271947(&iLocal_882, iVar0);
							}
							else if (func_680(unk_0x1E199569E0295838(iVar1)))
							{
								unk_0x0D718959E866D008(iVar1, 0);
								unk_0x507FE690B1271947(&iLocal_882, iVar0);
							}
							else if (func_313(unk_0x0FFED3E94261A832(), iVar1))
							{
								unk_0x0D718959E866D008(iVar1, 0);
								unk_0x507FE690B1271947(&iLocal_882, iVar0);
							}
							else if (!func_527() && !func_524())
							{
								unk_0x0D718959E866D008(iVar1, 0);
								unk_0x507FE690B1271947(&iLocal_882, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(unk_0x5C40D1D6A2650FC5(), 1))
				{
					if (Local_979[iLocal_884 /*6*/].f_5 >= 2)
					{
						if (!func_44(unk_0x675E1E93DBDAF30B(iVar1), 1))
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_882, iVar0))
							{
								if (!(unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1))))
								{
									if (!func_681(unk_0x2A5EB8B0FE590B91(), unk_0x1E199569E0295838(iVar1)) && !func_680(unk_0x1E199569E0295838(iVar1)))
									{
										unk_0x0D718959E866D008(iVar1, 1);
										unk_0xF6082E2ADA1C795B(&iLocal_882, iVar0);
									}
								}
							}
							else if (!(unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1))))
							{
								if (func_681(unk_0x2A5EB8B0FE590B91(), unk_0x1E199569E0295838(iVar1)) || func_680(unk_0x1E199569E0295838(iVar1)))
								{
									unk_0x0D718959E866D008(iVar1, 0);
									unk_0x507FE690B1271947(&iLocal_882, iVar0);
								}
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(iLocal_882, iVar0))
						{
							if (func_44(unk_0x675E1E93DBDAF30B(iVar1), 1))
							{
								unk_0x0D718959E866D008(iVar1, 0);
								unk_0x507FE690B1271947(&iLocal_882, iVar0);
							}
						}
					}
				}
				else
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_882, iVar0))
					{
						if (func_44(unk_0x675E1E93DBDAF30B(iVar1), 1))
						{
							unk_0x0D718959E866D008(iVar1, 1);
							unk_0xF6082E2ADA1C795B(&iLocal_882, iVar0);
						}
					}
					if (!func_44(unk_0x675E1E93DBDAF30B(iVar1), 1))
					{
						if (unk_0xAA4F14DA15DB0B51(iLocal_882, iVar0))
						{
							unk_0x0D718959E866D008(iVar1, 0);
							unk_0x507FE690B1271947(&iLocal_882, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xB1C4356ECEE878FE(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (unk_0x76BCE6C7B20502DA(iVar1))
			{
				iVar2 = unk_0x1E199569E0295838(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_681(iParam0, iVar2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_681(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0xC4A39E4229BD3ABE(iParam0, 0) || !unk_0xC4A39E4229BD3ABE(iParam1, 0))
	{
		return 0;
	}
	return unk_0x0C20E539D876C5B3(iParam0, 0) == unk_0x0C20E539D876C5B3(iParam1, 0);
}

void func_682()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x7C214DA899F05536(iLocal_886);
	iVar2 = func_34(unk_0x0FFED3E94261A832());
	if (unk_0x885F483F34E47503(iVar1))
	{
		if (unk_0x76BCE6C7B20502DA(iVar1))
		{
			iVar0 = unk_0x675E1E93DBDAF30B(iVar1);
			if (iLocal_884 > -1)
			{
				if (func_44(unk_0xBA948A9E34D09E6E(iLocal_884), 1))
				{
					if (func_636(9))
					{
						if (iVar0 != unk_0x5C40D1D6A2650FC5())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!unk_0xAA4F14DA15DB0B51(iLocal_885, iLocal_886))
										{
											func_70(iVar1, 432, 1);
											func_65(iVar1, func_69(iLocal_904), 1);
											unk_0xF6082E2ADA1C795B(&iLocal_885, iLocal_886);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(iLocal_885, iLocal_886))
		{
			func_70(iVar1, 432, 0);
			func_65(iVar1, func_69(iLocal_904), 0);
			unk_0x507FE690B1271947(&iLocal_885, iLocal_886);
		}
	}
	iLocal_886++;
	if (iLocal_886 >= 32)
	{
		iLocal_886 = 0;
	}
}

void func_683()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar20;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Local_771[iVar1 /*3*/] = func_29();
		Local_771[iVar1 /*3*/].f_1 = -1;
		Local_771[iVar1 /*3*/].f_2 = uVar3;
		unk_0x507FE690B1271947(&uLocal_878, iVar1);
		unk_0x507FE690B1271947(&uLocal_880, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		Local_130[iVar0 /*20*/] = func_684();
		Local_130[iVar0 /*20*/].f_1 = -1;
		unk_0x507FE690B1271947(&uLocal_879, iVar0);
		Local_130[iVar0 /*20*/].f_2 = { Var4 };
		Local_130[iVar0 /*20*/].f_18 = 0;
		Local_130[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar20 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(iVar0))
		{
			Local_130[iVar0 /*20*/] = iVar0;
			unk_0xF6082E2ADA1C795B(&uLocal_879, iVar0);
			iVar2 = unk_0x2AFA21CE4322B48D(Local_130[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_821(iVar2, 0, 1))
			{
				iVar20++;
				Local_771[iVar1 /*3*/] = iVar2;
				Local_130[iVar0 /*20*/].f_1 = iVar1;
				Local_771[iVar1 /*3*/].f_1 = iVar0;
				Local_771[iVar1 /*3*/].f_2 = unk_0x1E199569E0295838(iVar2);
				StringCopy(&(Local_130[iVar0 /*20*/].f_2), unk_0x4325D353D7D27B34(iVar2), 64);
				unk_0xF6082E2ADA1C795B(&uLocal_878, iVar1);
				if (unk_0xA9A04898798AE9E6(Local_771[iVar1 /*3*/].f_2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uLocal_880, iVar1);
				}
				if (func_45(Local_771[iVar1 /*3*/]))
				{
					Local_130[iVar0 /*20*/].f_18 = 1;
				}
				else if (func_94(Local_771[iVar1 /*3*/], 0))
				{
					Local_130[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_884 == iVar0)
				{
					if (unk_0xC4A39E4229BD3ABE(Local_771[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_130[iVar0 /*20*/].f_18)
				{
					if (!unk_0xAA4F14DA15DB0B51(uLocal_880, iVar1) && !unk_0xAA4F14DA15DB0B51(iLocal_880, unk_0x0FFED3E94261A832()))
					{
					}
				}
				else if (Local_130[iVar0 /*20*/].f_19)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_881 != iVar20)
	{
		iLocal_881 = iVar20;
	}
}

int func_684()
{
	return -1;
}

void func_685()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iLocal_884 = -1;
	if (unk_0xAA4F14DA15DB0B51(uLocal_878, unk_0x0FFED3E94261A832()))
	{
		if (unk_0xAA4F14DA15DB0B51(uLocal_879, unk_0x88641E5BC172153A()))
		{
			if (!func_235(unk_0x0FFED3E94261A832()))
			{
				iLocal_884 = unk_0x88641E5BC172153A();
			}
			else if (func_233() && !func_688())
			{
				uVar0 = func_686();
				if (unk_0xDB61DD81432BD145(uVar0))
				{
					iVar1 = unk_0xB0BB7458627D389F(iVar0);
					if (unk_0x76BCE6C7B20502DA(iVar1))
					{
						iVar2 = unk_0x675E1E93DBDAF30B(iVar1);
						iLocal_884 = iVar2;
					}
				}
			}
		}
	}
}

var func_686()
{
	if (unk_0x2137828D03306CAF(func_687()))
	{
		return func_687();
	}
	return func_232();
}

var func_687()
{
	return Global_2359301.f_3;
}

bool func_688()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 11);
}

int func_689()
{
	var uVar0;
	
	func_694(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_693())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_692())
	{
		return 1;
	}
	if (func_691(157))
	{
		if (!func_690())
		{
			return 1;
		}
	}
	if (func_691(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_67() != 0)
	{
		if (unk_0x09952BA662A7629B(func_67()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_690()
{
	return Global_2445217.f_578;
}

int func_691(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_692()
{
	return Global_2454709;
}

bool func_693()
{
	return Global_2445217.f_573;
}

void func_694(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_695(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_695(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_821(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_696(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_696(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_697(bool bParam0)
{
	if (func_698(1))
	{
		return 1;
	}
	if (Global_2497344.f_4828.f_23)
	{
		Global_2497344.f_4828.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_84() == func_29() || !func_821(func_84(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_698(bool bParam0)
{
	bool bVar0;
	
	if (!func_146(1))
	{
		bVar0 = false;
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 != func_29())
		{
			if (func_821(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, 0, 1))
			{
				if ((Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 4 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 8) || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_699(func_87(unk_0x0FFED3E94261A832())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_205(31);
				if (func_90(func_87(unk_0x0FFED3E94261A832())))
				{
					func_205(81);
				}
				if (unk_0x885F483F34E47503(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
				{
					Global_1621379 = func_213(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, -2, 0, 0);
					if (!func_45(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
					{
						func_205(88);
					}
				}
				else
				{
					Global_1621379 = 1;
				}
				Global_1621363 = { Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_700()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_701()
{
	var uVar0;
	int iVar1;
	
	if (!func_767(&uLocal_122))
	{
		unk_0x988197573BDAD49A("BIKER_MP_MUSIC_STOP");
	}
	unk_0x1DD91375B16781C1(0);
	func_464(&uLocal_122);
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == uLocal_899[0] || unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == uLocal_899[1])
		{
			unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_902);
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (func_44(unk_0x5C40D1D6A2650FC5(), 9))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			func_74(9);
		}
	}
	func_51();
	Global_2497344.f_261 = 0;
	func_765(Global_1773254, -1, -1, -1, -1);
	func_705(1, 0);
	func_704();
	func_473();
	func_61();
	if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
	{
		uVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
		iVar1 = unk_0xD3B21CE53AA7BE51(uVar0);
		if (func_468(iVar1))
		{
			unk_0x7D9656C226768A72(iVar0, 0);
		}
	}
	func_521(0);
	func_703();
	func_702();
	unk_0xA232817B0B36F2E5();
}

void func_702()
{
	unk_0x28BD561DA3E207B1(uLocal_899[0]);
	unk_0x28BD561DA3E207B1(uLocal_899[1]);
}

void func_703()
{
	if (Global_1770670)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 0))
		{
			unk_0x507FE690B1271947(&Global_2505107, 0);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 1))
		{
			unk_0x507FE690B1271947(&Global_2505107, 1);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 5))
		{
			unk_0x507FE690B1271947(&Global_2505107, 5);
		}
		if (unk_0x5D03CCED0E46E032(-355737150))
		{
			unk_0x6ADA8071E27ECAB6(-355737150, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-580979506))
		{
			unk_0x6ADA8071E27ECAB6(-580979506, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1426452475))
		{
			unk_0x6ADA8071E27ECAB6(-1426452475, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(745417724))
		{
			unk_0x6ADA8071E27ECAB6(745417724, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1305304906))
		{
			unk_0x6ADA8071E27ECAB6(-1305304906, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1543175077))
		{
			unk_0x6ADA8071E27ECAB6(-1543175077, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-811770997))
		{
			unk_0x6ADA8071E27ECAB6(-811770997, 1, 0, 0);
		}
		Global_1770671 = 0;
	}
	Global_1770670 = 0;
}

void func_704()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573830 = { Var0 };
	Global_1573830.f_13 = func_29();
	if (unk_0xAA4F14DA15DB0B51(Global_1573334, 3))
	{
		unk_0x507FE690B1271947(&Global_1573334, 3);
	}
}

void func_705(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1341327.f_1.f_108 != 0)
	{
		Global_1341327.f_1.f_108 = 0;
	}
	Global_1341327.f_1.f_109 = -1;
	Global_1341327.f_1.f_110 = -1;
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 167 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 168)
	{
		func_763();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 4);
	}
	if ((func_144() && iParam1 != 0) && Global_262145.f_15531)
	{
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 190 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192)
		{
			func_747(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 0);
			if (func_746(iParam1))
			{
				func_747(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 164 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 208)
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = -1;
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_113(unk_0x0FFED3E94261A832()))
		{
			func_622(0);
		}
	}
	else if (func_744(unk_0x0FFED3E94261A832()) != -1)
	{
		func_635(-1);
	}
	func_743(func_29());
	if (func_199(16))
	{
		func_742(16);
	}
	func_738(0);
	func_631(-1);
	func_704();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_737(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_735(iVar1);
		iVar1++;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
	{
		unk_0xFBC4596E19752537(1f);
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 5))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 5);
	}
	iVar2 = func_99();
	if ((func_80(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_734(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_127(iVar2))
	{
		func_730(-1, 1);
	}
	else if (((func_98(iVar2) || func_729(iVar2)) || func_728(iVar2)) || func_117(iVar2))
	{
	}
	else
	{
		func_730(-1, 1);
	}
	func_658(19);
	func_658(20);
	func_658(21);
	func_658(22);
	func_658(27);
	func_742(3);
	func_742(4);
	func_742(7);
	func_727();
	if (func_108(unk_0x0FFED3E94261A832()))
	{
		func_726(0);
	}
	func_658(29);
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_29();
	if (Global_2497344.f_4828.f_23 != 0)
	{
		Global_2497344.f_4828.f_23 = 0;
	}
	if (bParam0)
	{
		func_719();
	}
	if (!func_113(unk_0x0FFED3E94261A832()))
	{
		func_718();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 6))
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 6);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 7))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 7);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 8))
	{
		func_717("IMPEXP_SELFDES", 0);
		func_708("IMPEXP_SELFDES");
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 8);
	}
	func_706(iVar2, 0);
}

void func_706(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
		{
			unk_0xB0D390F8FEB78903(func_707(iParam0));
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
	{
		unk_0x40F160C3038ECAF5(func_707(iParam0));
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 9);
	}
}

char* func_707(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_708(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_710();
					Global_103236.f_13922[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_709(iVar0))
					{
					}
					else
					{
						Global_103236.f_13922[iVar0 /*104*/].f_24 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_28 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xA216C26603EB04E7(Global_103236.f_13922[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_709(int iParam0)
{
	if ((Global_103236.f_13922[iParam0 /*104*/].f_99[0] == 1 || Global_103236.f_13922[iParam0 /*104*/].f_99[1] == 1) || Global_103236.f_13922[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_710()
{
	if (func_716(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_711();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_711()
{
	func_712();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_712()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_715(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_714(unk_0x2A5EB8B0FE590B91());
			if (func_713(iVar0) && (!func_716(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_713(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_713(int iParam0)
{
	return iParam0 < 3;
}

int func_714(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_715(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_715(int iParam0)
{
	if (func_713(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_716(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_717(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_103236.f_13922[iVar0 /*104*/].f_24 = 1;
				if (Global_103236.f_13922[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_103236.f_13832[0 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_103236.f_13832[1 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_103236.f_13832[2 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_103236.f_13832[3 /*20*/].f_17 = 0;
					}
					Global_103236.f_13922[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_103236.f_13922[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_718()
{
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && Global_2497344.f_4823 < 1f)
		{
			return;
		}
	}
	Global_2497344.f_4824 = -1;
	Global_2497344.f_4823 = 1f;
}

void func_719()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_724();
	func_720(1, 1);
	func_52();
}

void func_720(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_43), &Global_2408866, 314);
	}
	else
	{
		Global_2404996.f_43 = { Global_2408866 };
		Global_2404996.f_43.f_49 = { Global_2408866.f_49 };
		Global_2404996.f_43.f_52 = Global_2408866.f_52;
		Global_2404996.f_43.f_53 = Global_2408866.f_53;
	}
	if (bParam0)
	{
		func_723();
	}
	func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_722(0);
	func_721();
}

void func_721()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_722(bool bParam0)
{
	if (bParam0)
	{
		Global_2404996.f_675 = 0;
	}
	else
	{
		Global_2404996.f_675 = 1;
	}
}

void func_723()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_724()
{
	func_725();
	Global_2404996.f_2053 = 0;
}

void func_725()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404996.f_2054[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_726(bool bParam0)
{
	if (bParam0)
	{
		if (!func_100(unk_0x0FFED3E94261A832(), 9))
		{
			if (func_106(unk_0x0FFED3E94261A832()) != 0)
			{
				func_115(9);
			}
		}
	}
	else if (func_100(unk_0x0FFED3E94261A832(), 9))
	{
		func_658(9);
	}
}

void func_727()
{
	if (func_520(unk_0x0FFED3E94261A832()))
	{
		func_658(25);
	}
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_729(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_730(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_99();
	}
	if (iParam0 > 0)
	{
		if (func_148() != func_29())
		{
			if (func_733(unk_0x0FFED3E94261A832()) == unk_0x0FFED3E94261A832())
			{
				Global_2484845.f_93[func_732(iParam0)] = 1;
			}
		}
		iVar0 = func_732(159);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(157);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(148);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(164);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(142);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(152);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(166);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(170);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(173);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(179);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(200);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(201);
		if (func_731(iVar0, Global_262145.f_11258, bParam1))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(182);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(183);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(185);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(186);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(180);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(195);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(197);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(198);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(207);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(208);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(209);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(214);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(215);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(216);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(217);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(218);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(219);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(220);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(221);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_731(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_100(unk_0x0FFED3E94261A832(), 19) && !func_100(unk_0x0FFED3E94261A832(), 20)) && !func_100(unk_0x0FFED3E94261A832(), 9))
		{
			return 0;
		}
	}
	if (Global_2484845.f_93[iParam0] == 1 && func_5(&(Global_2484845[iParam0 /*2*/])))
	{
		if (func_22(&(Global_2484845[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2484845.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_733(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_34;
}

void func_734(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_99();
	}
	if (iParam0 > 0)
	{
		if (func_148() != func_29())
		{
			Global_2484845.f_93[func_732(iParam0)] = 1;
		}
		iVar0 = func_732(155);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(163);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(160);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(153);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(162);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(154);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(171);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(172);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(199);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(194);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(193);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(210);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(205);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(189);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_732(211);
		if (func_731(iVar0, Global_262145.f_11259, 0))
		{
			func_7(&(Global_2484845[iVar0 /*2*/]));
			func_4(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_735(int iParam0)
{
	if (!func_11(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/], func_736(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/] = { func_736() };
	}
	if (!func_11(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/], func_736(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/] = { func_736() };
	}
}

Vector3 func_736()
{
	struct<3> Var0;
	
	return Var0;
}

void func_737(int iParam0)
{
	if (!func_11(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/], func_736(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/] = { func_736() };
	}
	if (!func_11(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/], func_736(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/] = { func_736() };
	}
}

void func_738(bool bParam0)
{
	if (bParam0)
	{
		if (!func_741(unk_0x0FFED3E94261A832(), 14))
		{
			func_740(14);
		}
	}
	else if (func_741(unk_0x0FFED3E94261A832(), 14))
	{
		func_739(14);
	}
}

void func_739(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

void func_740(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

bool func_741(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_5, iParam1);
}

void func_742(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_743(int iParam0)
{
	if (func_41(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x0FFED3E94261A832() != iParam0)
		{
			if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 != iParam0)
			{
				Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_744(int iParam0)
{
	if (func_745(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_31;
	}
	return -1;
}

int func_745(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_31 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_746(int iParam0)
{
	return func_280(iParam0) == 5;
}

void func_747(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_279(iParam0, iParam1) && func_762(iParam0, iParam1))
	{
		iVar0 = func_278(iParam0, iParam1);
		func_750(iVar0, bParam2, bParam3);
		func_748(iVar0, 1);
	}
}

void func_748(int iParam0, int iParam1)
{
	func_262(func_749(iParam0), iParam1, -1, 1);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_6 = iParam1;
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

void func_750(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_572(unk_0x0FFED3E94261A832(), iParam0);
	if (!bParam1)
	{
		func_761(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2484769[iParam0];
		iVar0 = func_760(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1774683 = -1;
		}
		func_759(iParam0, 0, bParam2);
	}
	else if (func_757(iParam0, bParam2))
	{
		iVar0 = func_756(iVar2, 0);
		iVar3 = func_607(unk_0x0FFED3E94261A832(), iVar2);
		iVar4 = func_755(iVar2, bParam2);
		iVar5 = func_756(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_746(iVar2) && func_754(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_761(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_753(unk_0x0FFED3E94261A832(), iVar2) > 0)
		{
			func_752(iParam0, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 - (func_755(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_756(iVar2, bParam2) / func_753(unk_0x0FFED3E94261A832(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_746(iVar2) && func_754(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_751(unk_0x0FFED3E94261A832(), iVar2, iVar0, bParam2);
}

void func_751(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_269(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1592456[iParam0 /*635*/].f_259.f_226 = iParam2;
				}
				else
				{
					Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_752(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_753(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_269(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_754(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_269(iParam1) && func_746(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_755(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_280(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15502;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15507;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15501;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15506;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15500;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15505;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15498;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15503;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15499;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15504;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_19520;
				if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19521;
				}
			}
			else
			{
				uVar0 = Global_262145.f_19504;
				if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19505;
				}
			}
			break;
	}
	return uVar0;
}

int func_756(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_280(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15483;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15492);
			}
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15497);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15484;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15491);
			}
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15496);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15485;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15490);
			}
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15495);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15486;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15488);
			}
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15493);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15487;
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15489);
			}
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15494);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_19517;
			}
			else
			{
				iVar0 = Global_262145.f_19501;
			}
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19518);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19502);
				}
			}
			if (func_277(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19519);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19503);
				}
			}
			if (func_754(unk_0x0FFED3E94261A832(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_757(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_263(15384, -1, -1);
	}
	return func_263(func_758(iParam0), -1, -1);
}

int func_758(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_759(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_262(15384, iParam1, -1, 1);
		return;
	}
	func_262(func_758(iParam0), iParam1, -1, 1);
}

int func_760(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2484769[iParam0];
	iVar1 = func_572(unk_0x0FFED3E94261A832(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2484776;
	}
	if (func_746(iVar1))
	{
		if (func_754(unk_0x0FFED3E94261A832(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_761(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2484776 = iParam1;
		return;
	}
	Global_2484769[iParam0] = iParam1;
}

int func_762(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_279(iParam0, iParam1))
	{
		iVar0 = func_278(iParam0, iParam1);
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_763()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 28);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 29);
	func_764(24);
}

void func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

void func_765(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)
{
	var uVar0;
	struct<15> Var1;
	struct<19> Var16;
	struct<19> Var35;
	struct<16> Var54;
	struct<17> Var70;
	struct<15> Var87;
	struct<17> Var102;
	struct<17> Var119;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x35302CD5A5D37EED(uVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			unk_0x68DA16ED4A85EC0C(&Var1);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1773254.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			unk_0x288282AB79D7963A(&Var16);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1773254.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			unk_0x49FE32435D5D31AC(&Var35);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1773254.f_14;
			Var54.f_15 = iParam14;
			unk_0x3A83B9A28696FB1A(&Var54);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1773254.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			unk_0x173FAFD79DE99046(&Var70);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1773254.f_14;
			unk_0x8CDCA6199359A8D8(&Var87);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (unk_0xBBDA792448DB5A89(iParam14) / unk_0xBBDA792448DB5A89(iParam15));
			Var102.f_16 = iParam16;
			unk_0xE692681C736B95D3(&Var102);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1773254.f_14;
			unk_0x3155A2D90F6106B6(&Var119);
		}
	}
	func_766();
}

void func_766()
{
	struct<18> Var0;
	
	Global_1773254 = { Var0 };
}

bool func_767(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 0);
}

void func_768(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_636(0))
	{
		uVar1 = func_795(func_25(), bParam0, bVar0, bParam1);
		Global_1773254.f_2 = Local_944.f_33;
		Global_1773254.f_3 = Local_944.f_34;
		func_769(bParam0, uVar1, 0, 0, -1, -1, -1, -1);
		func_612(0);
	}
}

void func_769(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_87(unk_0x0FFED3E94261A832());
	if (func_90(iVar0))
	{
		Global_1773272.f_2 = func_794();
		Global_1773272.f_3 = func_793();
		Global_1773272.f_50 = iParam4;
		Global_1773272.f_51 = iParam5;
		Global_1773272.f_10 = unk_0xDA84A1E29323722E();
		Global_1773272.f_20 = (Global_1773272.f_10 - Global_1773272.f_9);
		Global_1773272.f_12 = uParam1;
		Global_1773272.f_19 = func_789(iVar0, bParam0, func_792(bParam3));
		if (bParam0)
		{
			Global_1773272.f_11 = 1;
		}
		else
		{
			Global_1773272.f_11 = 0;
		}
		if ((func_108(unk_0x0FFED3E94261A832()) || func_107(unk_0x0FFED3E94261A832())) || func_111(unk_0x0FFED3E94261A832()))
		{
			Global_1773272.f_8 = 1;
		}
		else
		{
			Global_1773272.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1773272.f_43 = 0;
			Global_1773272.f_45 = func_607(func_148(), iParam2);
			Global_1773272.f_47 = iParam7;
			Global_1773272.f_46 = iParam6;
			Global_1773272.f_52 = func_788(func_148(), iParam2);
		}
		func_786(iVar0);
	}
	else if (func_97(iVar0))
	{
		Global_1773325.f_2 = func_794();
		Global_1773325.f_3 = func_793();
		Global_1773325.f_10 = unk_0xDA84A1E29323722E();
		Global_1773325.f_19 = (Global_1773325.f_10 - Global_1773325.f_9);
		Global_1773325.f_12 = uParam1;
		if (bParam0)
		{
			Global_1773325.f_11 = 1;
		}
		else
		{
			Global_1773325.f_11 = 0;
		}
		if ((func_108(unk_0x0FFED3E94261A832()) || func_107(unk_0x0FFED3E94261A832())) || func_111(unk_0x0FFED3E94261A832()))
		{
			Global_1773325.f_8 = 1;
		}
		else
		{
			Global_1773325.f_8 = 0;
		}
		func_784(iVar0);
	}
	else if (func_117(iVar0))
	{
		Global_1773387.f_2 = func_794();
		Global_1773387.f_3 = func_793();
		Global_1773387.f_9 = unk_0xDA84A1E29323722E();
		Global_1773387.f_18 = (Global_1773387.f_9 - Global_1773387.f_8);
		Global_1773387.f_11 = uParam1;
		Global_1773387.f_7 = func_782();
		Global_1773387.f_42 = func_780(func_49(), 5);
		iVar1 = unk_0x0FFED3E94261A832();
		iVar2 = func_282(iVar1);
		Global_1773387.f_28 = iVar2;
		Global_1773387.f_29 = func_779((func_579(iVar1) || func_578(iVar1)));
		Global_1773387.f_30 = func_779(func_778(iVar1));
		Global_1773387.f_32 = func_779(func_576(iVar1));
		Global_1773387.f_33 = func_779(func_577(iVar1));
		Global_1773387.f_34 = func_779(func_777(iVar1));
		Global_1773387.f_35 = func_779(func_575(0, iVar1) == 1);
		Global_1773387.f_36 = func_779(func_776(iVar1));
		Global_1773387.f_37 = func_779(func_775(iVar1));
		Global_1773387.f_38 = func_779(func_774(iVar1));
		Global_1773387.f_39 = func_779(func_277(iVar1, iVar2, 0));
		Global_1773387.f_40 = func_779(func_277(iVar1, iVar2, 2));
		Global_1773387.f_41 = func_779(func_277(iVar1, iVar2, 1));
		if (func_773(iVar1))
		{
			Global_1773387.f_31 = 2;
		}
		else if (func_772(iVar1))
		{
			Global_1773387.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1773387.f_10 = 1;
		}
		else
		{
			Global_1773387.f_10 = 0;
		}
		if ((func_108(unk_0x0FFED3E94261A832()) || func_107(unk_0x0FFED3E94261A832())) || func_111(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_6 = 1;
		}
		else
		{
			Global_1773387.f_6 = 0;
		}
		Global_1773387.f_21 = -2;
		Global_1773387.f_22 = -2;
		func_770(iVar0);
	}
	else
	{
		Global_1773254.f_6 = unk_0xDA84A1E29323722E();
		if (bParam0)
		{
			Global_1773254.f_7 = 1;
		}
		else
		{
			Global_1773254.f_7 = 0;
		}
		Global_1773254.f_8 = uParam1;
		if (Global_1773254.f_4 == 0)
		{
			if ((func_108(unk_0x0FFED3E94261A832()) || func_107(unk_0x0FFED3E94261A832())) || func_111(unk_0x0FFED3E94261A832()))
			{
				Global_1773254.f_4 = 1;
			}
		}
	}
}

void func_770(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1773387);
	func_771();
}

void func_771()
{
	struct<43> Var0;
	
	Global_1773387 = { Var0 };
	Global_1773387.f_23 = 0;
	Global_1773387.f_24 = 0;
	Global_1773387.f_16 = 0;
}

bool func_772(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 12);
}

bool func_773(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 13);
}

int func_774(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 12) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 13)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_775(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_776(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (((((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 3) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 4)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 5)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_777(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 6) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 7)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_778(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 9);
}

int func_779(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_780(int iParam0, int iParam1)
{
	return func_125(func_781(iParam1), iParam0, 0);
}

int func_781(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

int func_782()
{
	int iVar0;
	
	if (func_144())
	{
		return 4;
	}
	else if (func_134())
	{
		if (func_307(unk_0x0FFED3E94261A832()))
		{
			return 8;
		}
		return 6;
	}
	if (func_93(1))
	{
		iVar0 = func_783(unk_0x0FFED3E94261A832());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_146(1))
	{
		if (func_307(func_148()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_783(int iParam0)
{
	if (func_242(iParam0, 1))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_318;
	}
	return -1;
}

void func_784(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x76C73F892FF4A48A(&Global_1773325);
	func_785();
}

void func_785()
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1773325 = { Var0 };
	Global_1773325.f_24 = 0;
	Global_1773325.f_25 = 0;
	Global_1773325.f_17 = 0;
}

void func_786(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xEA5062924BF2F0F6(&Global_1773272);
	func_787();
}

void func_787()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1773272 = { Var0 };
	Global_1773272.f_29 = 0;
	Global_1773272.f_30 = 0;
	Global_1773272.f_17 = 0;
}

int func_788(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_277(iParam0, iParam1, 2);
	bVar1 = func_277(iParam0, iParam1, 1);
	bVar2 = func_277(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_789(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_127(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 19;
	}
	else if (func_611(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_81(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16227;
			iVar1 = 20;
		}
	}
	else if (func_90(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xEE4C451D799A4C78(func_610(func_148()), func_609(func_148()), func_794(), func_793(), iVar1, iVar0);
	}
	func_791(iVar0);
	func_790(iVar0);
	return iVar0;
}

void func_790(int iParam0)
{
	int iVar0;
	
	iVar0 = func_125(3943, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_357 = iVar0;
	func_123(3943, iVar0, -1, 1, 0);
}

void func_791(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	Global_1622795[iVar0 /*431*/].f_11.f_356 = (Global_1622795[iVar0 /*431*/].f_11.f_356 + iParam0);
	if (Global_1622795[iVar0 /*431*/].f_11.f_356 < -9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
	else if (Global_1622795[iVar0 /*431*/].f_11.f_356 > 9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
}

int func_792(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_108(unk_0x0FFED3E94261A832()) || func_111(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_793()
{
	if (Global_1773254.f_3 != 0)
	{
		return Global_1773254.f_3;
	}
	return -1;
}

int func_794()
{
	if (Global_1773254.f_2 != 0)
	{
		return Global_1773254.f_2;
	}
	return -1;
}

int func_795(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_796(struct<21> Param0)
{
	func_819(func_820(Param0.f_0), Param0);
	func_816(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_944, 35);
	unk_0xA5929B03CD847BE8(&Local_979, 193);
	unk_0xAC09235E2065C253(0);
	func_799(0, 0);
	func_797();
	return 1;
}

void func_797()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xEE8231F61ED038B0("relJoust0", &(uLocal_899[0]));
	unk_0xEE8231F61ED038B0("relJoust1", &(uLocal_899[1]));
	iVar0 = unk_0xAEF0E480E33587E6(unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar1], uLocal_899[iVar2]);
			unk_0x3A8EFBE4AB457FE2(1, uLocal_899[iVar2], Global_1574695[iVar1]);
			unk_0x3A8EFBE4AB457FE2(iVar0, uLocal_899[iVar2], joaat("COP"));
			unk_0x3A8EFBE4AB457FE2(iVar0, joaat("COP"), uLocal_899[iVar2]);
			unk_0x3A8EFBE4AB457FE2(1, uLocal_899[iVar2], Global_1574739[5]);
			unk_0x3A8EFBE4AB457FE2(1, Global_1574739[5], uLocal_899[iVar2]);
			unk_0x3A8EFBE4AB457FE2(1, uLocal_899[iVar2], Global_1574728);
			unk_0x3A8EFBE4AB457FE2(1, Global_1574728, uLocal_899[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	unk_0x3A8EFBE4AB457FE2(5, uLocal_899[0], uLocal_899[1]);
	unk_0x3A8EFBE4AB457FE2(5, uLocal_899[1], uLocal_899[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		unk_0x3A8EFBE4AB457FE2(5, 2017343592, uLocal_899[iVar2]);
		func_798(&(uLocal_899[iVar2]));
		iVar2++;
	}
}

void func_798(var uParam0)
{
	unk_0x3A8EFBE4AB457FE2(1, -1865950624, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, -1865950624);
	unk_0x3A8EFBE4AB457FE2(1, 296331235, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, 296331235);
	unk_0x3A8EFBE4AB457FE2(1, 1166638144, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, 1166638144);
	unk_0x3A8EFBE4AB457FE2(1, 2037579709, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, 2037579709);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, 2017343592);
	unk_0x3A8EFBE4AB457FE2(1, -1821475077, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, -1821475077);
	unk_0x3A8EFBE4AB457FE2(1, 1782292358, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, 1782292358);
	unk_0x3A8EFBE4AB457FE2(1, -1033021910, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, -1033021910);
	unk_0x3A8EFBE4AB457FE2(1, -1285976420, *uParam0);
	unk_0x3A8EFBE4AB457FE2(1, *uParam0, -1285976420);
}

void func_799(int iParam0, int iParam1)
{
	func_815();
	func_803(1);
	if ((iParam0 != 0 && unk_0x885F483F34E47503(iParam1)) && func_802(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF6082E2ADA1C795B(&Global_1773240, 0);
				break;
			}
	}
	if (!func_134() && !func_242(unk_0x0FFED3E94261A832(), 1))
	{
		if (func_660())
		{
			func_801(3);
		}
	}
	func_801(4);
	if (func_146(0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_148();
	}
	if (func_90(iParam0))
	{
		func_787();
		Global_1773272.f_18 = func_783(func_84());
	}
	else if (func_97(func_744(unk_0x0FFED3E94261A832())))
	{
		func_785();
		Global_1773325.f_18 = func_783(func_84());
	}
	func_800();
}

void func_800()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1341327.f_529[iVar0 /*49*/].f_1 = func_29();
		Global_1341327.f_529[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

void func_801(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_27), iParam0);
}

int func_802(int iParam0, bool bParam1)
{
	return func_240(unk_0x0FFED3E94261A832(), iParam0, bParam1);
}

void func_803(bool bParam0)
{
	int iVar0;
	
	func_764(33);
	func_764(34);
	func_764(35);
	func_764(36);
	func_764(37);
	func_764(38);
	func_764(39);
	func_764(40);
	func_764(43);
	func_764(41);
	func_764(54);
	func_764(42);
	func_764(47);
	func_814(23);
	func_814(24);
	func_764(92);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 2);
	func_813();
	func_805();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_804(3))
	{
		func_814(3);
	}
	else if (func_804(4))
	{
		func_814(4);
	}
	else if (func_804(5))
	{
		func_814(5);
	}
	else if (func_804(6))
	{
		func_814(6);
	}
	else if (func_804(7))
	{
		func_814(7);
	}
	else if (((((((((((((((((func_804(0) || func_804(1)) || func_804(2)) || func_804(8)) || func_804(9)) || func_804(10)) || func_804(11)) || func_804(12)) || func_804(13)) || func_804(14)) || func_804(15)) || func_804(16)) || func_804(17)) || func_804(18)) || func_804(19)) || func_804(20)) || func_804(21)) || func_804(22))
	{
		func_814(8);
		func_814(0);
		func_814(1);
		func_814(2);
		func_814(9);
		func_814(10);
		func_814(11);
		func_814(12);
		func_814(13);
		func_814(14);
		func_814(15);
		func_814(16);
		func_814(17);
		func_814(18);
		func_814(19);
		func_814(20);
		func_814(21);
		func_814(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_804(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_12[iVar0], iVar1);
}

void func_805()
{
	if (func_812())
	{
		func_811(0);
		func_811(1);
		func_811(2);
		func_811(3);
		func_811(4);
		func_811(5);
		func_811(6);
		func_811(7);
		func_811(8);
		func_811(9);
		func_811(10);
		func_811(11);
		func_811(12);
		if (func_810(13))
		{
			if (func_807(func_808(), 3))
			{
				func_806(func_808(), 3);
			}
			func_811(13);
		}
	}
}

void func_806(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_807(int iParam0, int iParam1)
{
	if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_808()
{
	if (func_809())
	{
		Global_103236.f_27831[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

int func_809()
{
	int iVar0;
	
	iVar0 = func_226(unk_0x0FFED3E94261A832());
	if (((iVar0 != unk_0x0FFED3E94261A832() && iVar0 != func_29()) && unk_0x885F483F34E47503(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_810(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_17[iVar0], iVar1);
}

void func_811(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

int func_812()
{
	if ((((((((((((func_810(0) || func_810(1)) || func_810(2)) || func_810(3)) || func_810(4)) || func_810(5)) || func_810(6)) || func_810(7)) || func_810(8)) || func_810(9)) || func_810(10)) || func_810(11)) || func_810(12))
	{
		return 1;
	}
	return 0;
}

void func_813()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2497344.f_4828.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_814(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_12[iVar0]), iVar1);
}

void func_815()
{
	struct<14> Var0;
	
	Global_1773254 = { Var0 };
	Global_1773254.f_14 = 0;
	Global_1773254.f_15 = 0;
}

int func_816(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_818();
			}
			else
			{
				return 0;
			}
		}
		if (!func_817())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_818();
					}
					else
					{
						return 0;
					}
				}
				if (func_693())
				{
					if (!bParam2)
					{
						func_818();
					}
					else
					{
						return 0;
					}
				}
				if (func_691(155))
				{
					if (!bParam2)
					{
						func_818();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_818();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_818();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_818();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_817()
{
	return Global_1312829;
}

void func_818()
{
	unk_0xA232817B0B36F2E5();
}

void func_819(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_818();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 109:
			return 32;
		
		case 110:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

int func_821(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

