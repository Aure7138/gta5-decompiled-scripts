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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = -1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<20> Local_107[32];
	struct<3> Local_748[32];
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	var uLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871[4] = { 0, 0, 0, 0 };
	var uLocal_876[2] = { 0, 0 };
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	struct<8> Local_882 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	struct<8> Local_898 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916[4] = { 0, 0, 0, 0 };
	struct<35> Local_921 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_956[32];
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_98 = Global_262145.f_17438;
	iLocal_865 = unk_0x2D524E0AFDB169D5();
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_885(unk_0x8CFC7D6E1DA5D304(), 0, 1))
		{
			if (!func_850(ScriptParam_0))
			{
				func_809(0, 1);
				func_743();
			}
		}
		else
		{
			func_743();
		}
	}
	else
	{
		func_809(0, 1);
		func_743();
	}
	while (true)
	{
		func_742();
		if (func_739(1))
		{
			func_809(0, 1);
			func_743();
		}
		if (func_731())
		{
			func_809(0, 1);
			func_743();
		}
		func_727();
		func_725();
		func_724();
		func_721();
		func_720();
		func_714();
		switch (func_713(unk_0xA651DA0BC9FD8FA4()))
		{
			case 0:
				if (func_712() == 1)
				{
					if (func_704())
					{
						func_703(unk_0xA651DA0BC9FD8FA4(), 1);
					}
				}
				break;
			
			case 1:
				if (func_712() == 1)
				{
					func_50();
				}
				else if (func_712() == 3)
				{
					func_703(unk_0xA651DA0BC9FD8FA4(), 3);
				}
				break;
			
			case 3:
				func_743();
				break;
		}
		if (unk_0xF67B871D7588B9D9())
		{
			func_33();
			if (func_32())
			{
				func_809(0, 1);
				func_31(3);
			}
			switch (func_712())
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
					func_743();
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
			unk_0x991913908B585B67(&(Local_921.f_33), &(Local_921.f_34));
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
				if (!func_5(&(Local_921.f_5)))
				{
					func_4(&(Local_921.f_5), 0, 0);
				}
				else if (func_2(&(Local_921.f_5), func_3(), 0))
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
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return (1000 * Global_262145.f_17427);
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
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
		if (!unk_0xB03A1684359C50A1(Local_921.f_32, iVar1))
		{
			Var2 = { func_12(iVar1) };
			if (!func_11(Var2, 0f, 0f, 0f, 0))
			{
				if (!unk_0x5AD42783360AB57E(Local_921.f_19[iVar1]))
				{
					if (func_8(&(uLocal_916[iVar1]), &(Local_921.f_19[iVar1]), Var2, 1))
					{
						unk_0xD2A9C3F486236CC5(&(Local_921.f_32), iVar1);
						if (!func_5(&uLocal_866))
						{
							func_4(&uLocal_866, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_866, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (unk_0xB03A1684359C50A1(Local_921.f_32, iVar1))
			{
				unk_0x62148293B793073B(&(Local_921.f_32), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_866);
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
			unk_0xD2A9C3F486236CC5(&iVar1, 0);
			unk_0xD2A9C3F486236CC5(&iVar1, 1);
			unk_0xD2A9C3F486236CC5(&iVar1, 9);
			unk_0xD2A9C3F486236CC5(&iVar1, 4);
			*uParam0 = unk_0xCEE0CA4013E48409(joaat("pickup_portable_crate_fixed_incar"), Param2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, iParam5, 1);
			*uParam1 = unk_0xCCFE4A4520579FB7(*uParam0);
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
	unk_0x9016574B77A748EE(iParam0);
	return unk_0xEDFE27D1AEA0EA7F(iParam0);
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
	switch (Local_921.f_31)
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
	switch (Local_921.f_31)
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
	if (!unk_0xF67B871D7588B9D9())
	{
		return;
	}
	Local_921.f_14 = iParam0;
}

void func_15(int iParam0)
{
	if (!unk_0xF67B871D7588B9D9())
	{
		return;
	}
	unk_0xD2A9C3F486236CC5(&(Local_921.f_1), iParam0);
}

bool func_16()
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)
{
	return unk_0xB03A1684359C50A1(Local_921.f_1, iParam0);
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
			if (func_23() - func_22(&(Local_921.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_921.f_7));
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
			if (func_5(&(Local_921.f_9)))
			{
				func_7(&(Local_921.f_9));
			}
			if (!func_5(&(Local_921.f_7)))
			{
				func_4(&(Local_921.f_7), 0, 0);
				if (Local_921.f_4 > 0)
				{
					uVar2 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), (-1 * Local_921.f_4));
					func_20(&(Local_921.f_7), uVar2);
					Local_921.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_921.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_921.f_7)))
				{
					Local_921.f_4 = func_22(&(Local_921.f_7), 0, 0);
				}
			}
			else
			{
				Local_921.f_4 = 0;
			}
			if (func_5(&(Local_921.f_7)))
			{
				func_7(&(Local_921.f_7));
			}
			if (!func_5(&(Local_921.f_9)))
			{
				func_4(&(Local_921.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_921.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_921.f_9), (func_19() - 30000), 0))
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
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0);
		}
		else
		{
			return unk_0xB34837A3BB15AB69(unk_0x5E1037C28AA2B562(), *uParam0);
		}
	}
	return unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0);
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
	return Local_921.f_14;
}

void func_26(int iParam0)
{
	if (!unk_0xF67B871D7588B9D9())
	{
		return;
	}
	Local_921.f_13 = iParam0;
}

int func_27()
{
	return Local_921.f_13;
}

bool func_28()
{
	if (!func_17(1))
	{
		if (func_30() > -1)
		{
			if (func_30() == 0)
			{
				Local_921.f_31 = 0;
			}
			else if (func_30() == 1)
			{
				Local_921.f_31 = 1;
			}
			else
			{
				Local_921.f_31 = 2;
			}
		}
		else
		{
			Local_921.f_31 = unk_0x61E9B3BFA06B017B(0, 3);
		}
		if (Global_262145.f_17432)
		{
			if (Local_921.f_31 == 0)
			{
				if (!Global_262145.f_17433)
				{
					Local_921.f_31 = 1;
				}
				else
				{
					Local_921.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_17433)
		{
			if (Local_921.f_31 == 1)
			{
				if (!Global_262145.f_17434)
				{
					Local_921.f_31 = 2;
				}
				else
				{
					Local_921.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_17434)
		{
			if (Local_921.f_31 == 2)
			{
				if (!Global_262145.f_17433)
				{
					Local_921.f_31 = 0;
				}
				else
				{
					Local_921.f_31 = 1;
				}
			}
		}
		Local_921.f_15 = unk_0x8CFC7D6E1DA5D304();
		Local_921.f_16[0] = unk_0x8CFC7D6E1DA5D304();
		Local_921.f_24[0] = iLocal_98;
		Local_921.f_16[1] = func_29();
		Local_921.f_24[1] = iLocal_98;
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
	return Global_2512581.f_4878.f_157;
}

void func_31(int iParam0)
{
	Local_921.f_0 = iParam0;
}

int func_32()
{
	if (Global_2512581.f_4878.f_29)
	{
		Global_2512581.f_4878.f_29 = 0;
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
	if (Local_921.f_0 != 3)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF02902C16AF3CA92())
		{
			if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar0)))
			{
				iVar1 = unk_0xF4E7C3C6384793AA(iVar0);
				iVar13 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iVar0));
				if (!func_47(iVar13, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_921.f_16[1] == func_29())
						{
							if (func_45(iVar13))
							{
								if (iVar13 != Local_921.f_15)
								{
									Local_921.f_16[1] = iVar13;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar13 == Local_921.f_16[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar13 == Local_921.f_16[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar13 == Local_921.f_16[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar13 == Local_921.f_16[1])
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
							if (!unk_0xB03A1684359C50A1(Local_921.f_2, iVar0))
							{
								iVar5++;
								unk_0xD2A9C3F486236CC5(&(Local_921.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (unk_0xB03A1684359C50A1(Local_921.f_2, iVar0))
						{
							unk_0x62148293B793073B(&(Local_921.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_956[iVar0 /*6*/].f_3 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar7[iVar11] = (iVar7[iVar11] + Local_956[iVar0 /*6*/].f_3);
						}
						if (Local_956[iVar0 /*6*/].f_4 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar12 = (1 - iVar11);
							iVar7[iVar12] = (iVar7[iVar12] + Local_956[iVar0 /*6*/].f_4);
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
			if (!func_5(&(Local_921.f_11)))
			{
				func_4(&(Local_921.f_11), 0, 0);
			}
			else if (func_2(&(Local_921.f_11), 10000, 0))
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
			iVar15 = (iLocal_98 - iVar16);
			Local_921.f_27[0] = iVar7[0];
			Local_921.f_27[1] = iVar7[1];
			if (Local_921.f_24[0] != iVar15)
			{
				iVar14 = 0;
				if (Local_921.f_24[0] < iVar15)
				{
					iVar14 = (iVar15 - Local_921.f_24[0]);
				}
				Local_921.f_24[0] = (iVar15 - iVar14);
			}
			iVar16 = iVar7[0];
			iVar15 = (iLocal_98 - iVar16);
			if (Local_921.f_24[1] != iVar15)
			{
				iVar14 = 0;
				if (Local_921.f_24[1] < iVar15)
				{
					iVar14 = (iVar15 - Local_921.f_24[1]);
				}
				Local_921.f_24[1] = (iVar15 - iVar14);
			}
			if (Local_921.f_27[0] >= iLocal_98)
			{
				Local_921.f_30 = 0;
			}
			else if (Local_921.f_27[1] >= iLocal_98)
			{
				Local_921.f_30 = 1;
			}
			if (iVar10 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_921.f_30 == -1)
			{
				if (Local_921.f_27[0] == Local_921.f_27[1])
				{
					Local_921.f_30 = 99;
				}
				else if (Local_921.f_27[0] > Local_921.f_27[1])
				{
					Local_921.f_30 = 0;
				}
				else
				{
					Local_921.f_30 = 1;
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
	if (Local_921.f_3 != iVar5)
	{
		Local_921.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_921.f_30 != -1)
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
	return Local_921.f_15;
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
		if (Global_1627460[iParam0 /*530*/].f_11 != func_29())
		{
			if (iParam1 == Global_1627460[iParam0 /*530*/].f_11)
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
		return Global_1627460[iParam0 /*530*/].f_11.f_409 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_29())
		{
			return Global_1627460[iParam0 /*530*/].f_11 == iParam0;
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
			if (Global_1627460[iParam0 /*530*/].f_11 != func_29())
			{
				if (Global_1627460[iParam0 /*530*/].f_11 == iParam0)
				{
					if (Global_1627460[iParam0 /*530*/].f_11.f_409 == iParam2)
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
	unk_0x62148293B793073B(&(Local_921.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Local_956[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 != func_29())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_29())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 == iParam0 && Global_1627460[iParam0 /*530*/].f_11.f_409 == iParam1)
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
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_48(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312736;
}

void func_50()
{
	if (iLocal_861 > -1)
	{
		if ((!func_698() && !func_697()) && !func_696(179))
		{
			if (func_675(1, 1, 1))
			{
				switch (Local_956[iLocal_861 /*6*/].f_5)
				{
					case 0:
						if (!func_674(2))
						{
							func_653(179, 1, -1, 0);
							iLocal_880 = func_652(unk_0x8CFC7D6E1DA5D304());
							StringCopy(&Local_882, func_651(), 64);
							func_650(2);
						}
						if (!func_674(4))
						{
							func_598(-1, 0, 0, -1, 0);
							func_650(4);
						}
						if (Local_921.f_13 > 0)
						{
							if (Local_921.f_13 > 1)
							{
								Local_956[iLocal_861 /*6*/].f_5 = 4;
							}
							else
							{
								Local_956[iLocal_861 /*6*/].f_5 = Local_921.f_13;
							}
						}
						break;
					
					case 1:
						func_556();
						func_555();
						func_532();
						func_515();
						if (Local_921.f_13 != 1)
						{
							if (func_44(unk_0x85D34259F4F52150(), 1))
							{
								func_506(1);
								Local_956[iLocal_861 /*6*/].f_5 = Local_921.f_13;
							}
							else
							{
								func_499();
								Local_956[iLocal_861 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_556();
						func_498();
						unk_0x9C7EE7DE7041A3F4(0, 140, 1);
						unk_0x9C7EE7DE7041A3F4(0, 141, 1);
						unk_0x9C7EE7DE7041A3F4(0, 142, 1);
						unk_0x9C7EE7DE7041A3F4(0, 143, 1);
						unk_0x9C7EE7DE7041A3F4(0, 24, 1);
						unk_0x9C7EE7DE7041A3F4(0, 345, 1);
						unk_0x9C7EE7DE7041A3F4(0, 346, 1);
						unk_0x9C7EE7DE7041A3F4(0, 347, 1);
						if (func_44(unk_0x85D34259F4F52150(), 1) || func_44(unk_0x85D34259F4F52150(), 2))
						{
							if (!func_44(unk_0x85D34259F4F52150(), 6))
							{
								func_497(1);
							}
							func_515();
						}
						func_492();
						if (Local_921.f_13 != 2)
						{
							func_491(&uLocal_101);
							Local_956[iLocal_861 /*6*/].f_5 = Local_921.f_13;
						}
						break;
					
					case 3:
						if (func_5(&(Local_921.f_5)))
						{
							func_484((func_3() - func_22(&(Local_921.f_5), 0, 0)), func_25() != 0, &uLocal_99);
						}
						if (!func_674(3))
						{
							if (func_2(&(Local_921.f_5), 10000, 0))
							{
								func_483();
								func_650(3);
							}
						}
						if (func_25() == 0)
						{
							func_556();
							func_482();
							func_481();
							func_480();
							if (func_479())
							{
								if (Local_956[iLocal_861 /*6*/].f_5 == 3)
								{
									func_478();
								}
							}
							if (iLocal_861 > -1)
							{
								if (iLocal_861 == unk_0xA651DA0BC9FD8FA4())
								{
									func_492();
									func_360(&(Global_1347470.f_532), &Global_1347470, 26, &(Global_1347470.f_1), &(Global_1347470.f_115), -1, 0);
								}
							}
						}
						if (Local_921.f_13 != 3)
						{
							Local_956[iLocal_861 /*6*/].f_5 = Local_921.f_13;
						}
						break;
					
					case 4:
						if (Local_921.f_13 > 4)
						{
							Local_956[iLocal_861 /*6*/].f_5 = Local_921.f_13;
						}
						break;
					
					case 5:
						func_499();
						func_80();
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
	
	if (!func_674(5))
	{
		func_499();
		if (unk_0x44243F2E2F58B8E3())
		{
			if (func_44(unk_0x85D34259F4F52150(), 4))
			{
				func_79(4);
				func_77(1);
				unk_0x343E01BBD8361D5F(unk_0x18F7BE9ACB7D08F4(), 1);
			}
		}
		if (unk_0xE769D9B5158D0F11(uLocal_869))
		{
			unk_0x40D517D991458154(&uLocal_869);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_868))
		{
			unk_0x40D517D991458154(&uLocal_868);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_870))
		{
			unk_0x40D517D991458154(&uLocal_870);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (unk_0xE769D9B5158D0F11(uLocal_871[iVar0]))
			{
				unk_0x40D517D991458154(&(uLocal_871[iVar0]));
			}
			iVar0++;
		}
		func_69();
		func_67();
		func_66();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		func_491(&uLocal_101);
		func_52();
		func_650(5);
	}
}

void func_52()
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_65())
		{
			func_64();
		}
		Global_2405047.f_686.f_515 = unk_0xBCF9D020FA9C313D();
		Global_2405047.f_686.f_504 = iParam1;
		Global_2405047.f_686.f_505 = iParam2;
		Global_2405047.f_686.f_506 = iParam10;
		func_67();
		func_58(8, 0, 0, 0, 0);
		Global_2405047.f_686.f_507 = iParam11;
		Global_2405047.f_686.f_510 = iParam3;
		Global_2405047.f_686.f_511 = iParam4;
		Global_2405047.f_686.f_508 = iParam5;
		Global_2405047.f_686.f_509 = iParam6;
		Global_2405047.f_686.f_512 = iParam7;
		Global_2405047.f_686.f_513 = iParam8;
		Global_2405047.f_686.f_514 = iParam9;
		Global_2405047.f_1719 = 1;
	}
	else
	{
		func_55();
	}
}

void func_55()
{
	if (func_65() && !func_57())
	{
		func_64();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_67();
		func_58(0, 0, 0, 0, 0);
		Global_2405047.f_1719 = 0;
		Global_2405047.f_1718 = 0;
	}
}

void func_56()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_686), &(Global_2405047.f_1202), 516);
	Global_2405047.f_482 = { Global_2405047.f_488 };
	if (unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515)
	{
		Global_2405047.f_1718 = 0;
	}
}

int func_57()
{
	if ((Global_2405047.f_1718 && !unk_0xBCF9D020FA9C313D() == Global_2405047.f_1202.f_515) && unk_0x19B3A29FD53C54A6(Global_2405047.f_1202.f_515))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436169.f_1777.f_690.f_16 != func_29())
	{
		if (unk_0xB03A1684359C50A1(Global_2422724[Global_2436169.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_59())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412202 = 0;
	}
	Global_2405047.f_482 = iParam0;
	Global_2405047.f_482.f_1 = unk_0xBCF9D020FA9C313D();
	Global_2405047.f_482.f_2 = iParam1;
	Global_2405047.f_482.f_3 = iParam2;
	Global_2405047.f_482.f_4 = iParam3;
	Global_2405047.f_482.f_5 = iParam4;
}

int func_59()
{
	if (((func_62(unk_0x8CFC7D6E1DA5D304()) == 229 || func_62(unk_0x8CFC7D6E1DA5D304()) == 191) || func_61()) || func_60())
	{
		return 0;
	}
	return 1;
}

var func_60()
{
	return Global_1574303;
}

int func_61()
{
	if (Global_1646129 == 6)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (func_63(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_63(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_64()
{
	if (func_57())
	{
		if (Global_2405047.f_686.f_515 == Global_2405047.f_1202.f_515)
		{
			return;
		}
	}
	if (!unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515)
	{
		unk_0x5AE102D61A343DFA(&(Global_2405047.f_1202), &(Global_2405047.f_686), 516);
		Global_2405047.f_488 = { Global_2405047.f_482 };
		Global_2405047.f_1718 = 1;
	}
}

int func_65()
{
	if ((Global_2405047.f_1719 && !unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515) && unk_0x19B3A29FD53C54A6(Global_2405047.f_686.f_515))
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405047.f_1721[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405047.f_1720 = 0;
}

void func_67()
{
	if (func_65() && !func_57())
	{
		func_64();
	}
	func_68();
	Global_2405047.f_686 = 0;
}

void func_68()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_686.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_69()
{
	int iVar0;
	int iVar1;
	
	if (!func_674(8))
	{
		func_650(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x3479F6F64A48251C(iVar0);
			if (unk_0x4AF13BCD120BCDBC(iVar1))
			{
				if (iVar1 != unk_0x8CFC7D6E1DA5D304())
				{
					if (unk_0xB03A1684359C50A1(uLocal_862, iVar0))
					{
						func_75(iVar1, 432, 0);
						func_70(iVar1, func_74(iLocal_881), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_70(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_72())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_71(iParam0))
	{
		if (bParam2)
		{
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_386), iVar0);
			Global_2415594.f_611[iParam0] = unk_0xBCF9D020FA9C313D();
			Global_2415594.f_446[iVar0] = uParam1;
		}
		else
		{
			unk_0x62148293B793073B(&(Global_2415594.f_386), iVar0);
			Global_2415594.f_611[iParam0] = -1;
		}
	}
}

int func_71(int iParam0)
{
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_611[iParam0]) || Global_2415594.f_611[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	switch (func_73())
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

int func_73()
{
	return Global_25233;
}

int func_74(int iParam0)
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
	unk_0x954894782056D6CB(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_72())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_578[iParam0]) || Global_2415594.f_578[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		if (bParam2)
		{
			if (!unk_0xB03A1684359C50A1(Global_2415594.f_385, iVar0))
			{
				func_76();
			}
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_385), iVar0);
			Global_2415594.f_413[iVar0] = uVar1;
			Global_2415594.f_578[iParam0] = unk_0xBCF9D020FA9C313D();
		}
		else
		{
			if (unk_0xB03A1684359C50A1(Global_2415594.f_385, iVar0))
			{
				func_76();
			}
			unk_0x62148293B793073B(&(Global_2415594.f_385), iVar0);
			Global_2415594.f_578[iParam0] = -1;
		}
	}
}

void func_76()
{
	Global_2415594.f_1009 = 1;
}

void func_77(bool bParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		if (!func_78())
		{
			if (func_885(unk_0x8CFC7D6E1DA5D304(), 1, 0))
			{
				unk_0x343E01BBD8361D5F(unk_0x18F7BE9ACB7D08F4(), 1);
				unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 342, 0);
				unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 122, 0);
			}
			unk_0x4F21F1AA949FF307(unk_0x8CFC7D6E1DA5D304(), 1f);
			unk_0x2A7F03D35CF4074F(0);
			unk_0x734FF04BC149973A(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xD8E549525585AC1D(0, 0);
				}
			}
		}
		else
		{
			if (func_885(unk_0x8CFC7D6E1DA5D304(), 1, 1))
			{
				unk_0x343E01BBD8361D5F(unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
				unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 342, 1);
				unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 122, 1);
				unk_0x4F21F1AA949FF307(unk_0x8CFC7D6E1DA5D304(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xD8E549525585AC1D(1, 0);
				}
			}
			unk_0x2A7F03D35CF4074F(1);
			unk_0x734FF04BC149973A(0);
		}
	}
}

bool func_78()
{
	return Global_1312416;
}

void func_79(int iParam0)
{
	unk_0x62148293B793073B(&(Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), iParam0);
}

void func_80()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar20;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	if (!func_674(1))
	{
		if (func_25() != 0)
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (func_675(1, 1, 1))
				{
					if (((!func_698() && !func_697()) && !func_696(179)) && func_44(unk_0x85D34259F4F52150(), 1))
					{
						if (func_358())
						{
							iVar1 = func_34(unk_0x8CFC7D6E1DA5D304());
							iVar2 = Local_921.f_30;
							switch (func_25())
							{
								case 2:
									unk_0xEFF1F12403847394(1);
									break;
								
								case 3:
									unk_0xEFF1F12403847394(1);
									break;
								
								case 1:
									unk_0xEFF1F12403847394(1);
									if (Local_921.f_30 > -1)
									{
										if (Local_921.f_30 == 99)
										{
											func_356(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_356(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_356(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_340(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2);
									}
									break;
								
								case 5:
									unk_0xEFF1F12403847394(1);
									func_340(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2);
									break;
								
								case 4:
									unk_0xEFF1F12403847394(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_356(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_356(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_356(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar20 = unk_0x8CFC7D6E1DA5D304();
				func_338(1, iVar20);
				if (bVar0)
				{
				}
				func_119(179, bVar0, &Var3, 0);
				func_809(bVar0, 0);
				func_51();
				func_650(1);
			}
		}
	}
	if (func_82(&uLocal_845, 1, 0))
	{
		func_81(0);
	}
}

void func_81(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), iParam0);
}

int func_82(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_118(29);
	if ((*uParam0 > 0 && !func_117()) && func_109(unk_0x8CFC7D6E1DA5D304()) != 0)
	{
		if (!func_106())
		{
			func_105();
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
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 2);
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4553), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_104(uParam0, 1);
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
				func_94(iParam2);
				func_104(uParam0, 2);
			}
			break;
		
		case 2:
			func_94(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_83(func_84(0)))
				{
					unk_0xEFF1F12403847394(1);
				}
				func_104(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				unk_0x62148293B793073B(&(Global_2512581.f_4553), 1);
				unk_0x62148293B793073B(&(Global_1806998.f_3), 2);
				func_104(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x62148293B793073B(&(Global_2512581.f_4553), 1);
			unk_0x62148293B793073B(&(Global_1806998.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_83(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

char* func_84(int iParam0)
{
	if (((func_92(unk_0x8CFC7D6E1DA5D304()) || func_91(unk_0x8CFC7D6E1DA5D304())) || func_88()) || iParam0)
	{
		if (func_91(unk_0x8CFC7D6E1DA5D304()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_85(func_87()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_85(int iParam0)
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
	return func_86(iParam0, 0);
	return 0;
}

int func_86(int iParam0, int iParam1)
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

int func_87()
{
	return Global_1644422;
}

bool func_88()
{
	return (func_90() && func_45(func_89()));
}

int func_89()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_35;
}

bool func_90()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148;
}

bool func_91(int iParam0)
{
	return func_86(func_62(iParam0), 0);
}

bool func_92(int iParam0)
{
	return func_93(func_62(iParam0));
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148 && func_46(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_35, 1))
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

void func_94(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 0))
	{
		if ((((((((((!unk_0x834A29018EBFDCB3() && !unk_0xB03A1684359C50A1(Global_2512581.f_778, 2)) && func_885(unk_0x8CFC7D6E1DA5D304(), 1, 1)) && !Global_68213) && !Global_53082) && !unk_0xEC0ECEF2AF3FDA8D()) && !func_103(unk_0x8CFC7D6E1DA5D304(), 22)) && func_109(unk_0x8CFC7D6E1DA5D304()) != 0) && !func_101(func_102())) && !func_92(unk_0x8CFC7D6E1DA5D304())) && !func_100(func_62(unk_0x8CFC7D6E1DA5D304())))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4553), 1);
			func_99(func_84(iParam0), -1);
			func_95(1);
			unk_0x62148293B793073B(&(Global_2512581.f_4553), 0);
		}
	}
}

void func_95(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_96(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_117())
	{
		unk_0x929C3CBA660376D5(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_96(bool bParam0)
{
	return func_97(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

bool func_97(int iParam0, bool bParam1)
{
	return func_98(iParam0, bParam1, 1);
}

int func_98(int iParam0, bool bParam1, int iParam2)
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
	iVar0 = Global_1627460[iParam0 /*530*/].f_11;
	if (iVar0 != func_29() && Global_1627460[iVar0 /*530*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_99(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam1);
}

int func_100(int iParam0)
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

int func_101(int iParam0)
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

int func_102()
{
	var uVar0;
	
	uVar0 = unk_0xFCA64981FEF7C913();
	if (unk_0x9D39145AD645E383(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x9D39145AD645E383(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

bool func_103(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_11.f_4, iParam1);
}

void func_104(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_105()
{
	Global_2458315 = 1;
}

int func_106()
{
	if (((((((func_62(unk_0x8CFC7D6E1DA5D304()) == 170 || func_62(unk_0x8CFC7D6E1DA5D304()) == 219) || func_62(unk_0x8CFC7D6E1DA5D304()) == 221) || func_62(unk_0x8CFC7D6E1DA5D304()) == 220) || func_62(unk_0x8CFC7D6E1DA5D304()) == 216) || func_62(unk_0x8CFC7D6E1DA5D304()) == 215) || func_62(unk_0x8CFC7D6E1DA5D304()) == 214) || func_62(unk_0x8CFC7D6E1DA5D304()) == 218)
	{
		return 1;
	}
	if (func_107(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_885(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_108(Global_2422724[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_108(int iParam0)
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
		case 98:
		case 99:
		case 100:
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
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

int func_109(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_116(iParam0) && !func_115(iParam0)) && !unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 8));
	bVar2 = func_114(iParam0);
	bVar3 = func_78();
	uVar4 = func_698();
	if ((bVar1 && (func_113(iParam0) || func_112(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_111(iParam0)) && !func_110(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512581.f_4878.f_38 != iVar0)
	{
		Global_2512581.f_4878.f_38 = iVar0;
	}
	return iVar0;
}

bool func_110(int iParam0)
{
	return func_103(iParam0, 19);
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_103(iParam0, 9);
	}
	return 0;
}

int func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 0);
	}
	return 0;
}

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 7);
	}
	return 0;
}

bool func_114(int iParam0)
{
	return func_103(iParam0, 20);
}

bool func_115(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 2);
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/] != -1;
	}
	return 0;
}

bool func_117()
{
	return Global_2436169.f_2591[0 /*79*/].f_1 != 0;
}

void func_118(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_4), iParam0);
}

void func_119(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	func_336(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17422);
		}
		else
		{
			iVar1 = (iVar1 + func_335(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_334(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17421);
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
	if (func_332(iParam0))
	{
		if (bParam1)
		{
			if (func_331(unk_0x8CFC7D6E1DA5D304()) > 0)
			{
				func_330();
			}
			else
			{
				func_329();
			}
		}
		else
		{
			func_328();
		}
	}
	func_312(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_310(iParam0, uParam2, &iVar0, &iVar5);
	func_287(iParam0, uParam2, &iVar0, &iVar5);
	func_261(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	if (iParam0 == 168)
	{
		Global_2512581.f_4878.f_200 = uVar4;
	}
	else
	{
		Global_2512581.f_4878.f_200 = iVar5;
	}
	iVar8 = func_89();
	if (iVar8 != func_29() && iParam0 != 148)
	{
		if (func_260(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			if (!func_258(unk_0x8CFC7D6E1DA5D304(), iVar8, 1))
			{
				func_218(&iVar0, 1);
			}
		}
	}
	func_213(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1807007.f_10 = iVar1;
		func_212();
		func_162(0, unk_0x18F7BE9ACB7D08F4(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1807007.f_9 = iVar0;
		iVar13 = func_161();
		if (iVar13 != func_29())
		{
			func_160(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_159(1);
		if (iParam0 == 168)
		{
			if (!func_158())
			{
				unk_0x7B213E5E67819D11(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_157())
			{
				if (!func_158())
				{
					Var15 = { func_156() };
					unk_0xFDC39FD70DC0CBBD(iVar0, unk_0x6E987D62C8535B6E(func_155(Var15.f_0)), func_154(Var15.f_0), iVar5);
				}
			}
			else if (func_158())
			{
				func_145(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4261865[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B213E5E67819D11(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_144())
			{
				if (!func_158())
				{
					unk_0xFDC39FD70DC0CBBD(iVar0, unk_0x6E987D62C8535B6E(func_155(func_143(unk_0x8CFC7D6E1DA5D304()))), 5, iVar5);
				}
			}
			else if (func_158())
			{
				func_145(-856006867, iVar0, &iVar18, 0, 1, 0);
				Global_4261865[iVar18 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar18 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar18 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B213E5E67819D11(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_144())
			{
				if (!func_158())
				{
					iVar19 = func_139(uParam2->f_16, iVar5);
					iVar20 = iVar0;
					if (iVar19 > 0)
					{
						iVar20 = (iVar20 - iVar19);
					}
					if (iVar7 > 0)
					{
						iVar20 = (iVar20 - iVar7);
					}
					unk_0x338E61993E6352F0(iVar20, iVar5, iVar7, iVar19, uParam2->f_16);
				}
			}
			else if (func_158())
			{
				func_145(463142405, iVar0, &iVar21, 0, 1, 0);
				Global_4261865[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B23758A5E790821(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_158())
			{
				func_145(1407278493, iVar0, &iVar22, 0, 1, 0);
				Global_4261865[iVar22 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar22 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar22 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iVar0);
			}
		}
		else if (func_158())
		{
			func_145(-856006867, iVar0, &iVar23, 0, 1, 0);
			Global_4261865[iVar23 /*80*/].f_8.f_54 = uVar11;
			Global_4261865[iVar23 /*80*/].f_8.f_55 = uVar12;
			Global_4261865[iVar23 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			unk_0xA57DCB671F3ED089(uVar11, uVar12, iVar0, bVar14);
		}
		func_138(iParam0, iVar0);
		if (func_137(iParam0))
		{
			if (func_136(iParam0) > -1)
			{
				func_135(func_136(iParam0), iVar0);
			}
		}
		Global_2458972 = iVar0;
		func_134(&Global_2457240, 0, 0);
	}
	if (func_111(unk_0x8CFC7D6E1DA5D304()) || func_114(unk_0x8CFC7D6E1DA5D304()))
	{
		func_123(iParam0);
	}
	if (func_93(iParam0))
	{
		Global_1807025.f_13 = iVar0;
		Global_1807025.f_14 = iVar1;
	}
	if (func_100(iParam0))
	{
		Global_1807078.f_13 = iVar0;
		Global_1807078.f_14 = iVar1;
	}
	if (func_122(iParam0))
	{
		Global_1807140.f_12 = iVar0;
		Global_1807140.f_13 = iVar1;
	}
	if (func_121(iParam0))
	{
		Global_1807183.f_12 = iVar0;
		Global_1807183.f_13 = iVar1;
	}
	if (func_120(iParam0))
	{
		Global_1807236.f_12 = iVar0;
		Global_1807236.f_13 = iVar1;
	}
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_122(int iParam0)
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

void func_123(int iParam0)
{
	if (func_133(unk_0x8CFC7D6E1DA5D304()) && func_157())
	{
		if (func_132(iParam0))
		{
			func_126(7180, -1);
		}
		else if (func_125(iParam0))
		{
			func_126(7182, -1);
		}
		else if (func_86(iParam0, 1))
		{
			func_126(7183, -1);
		}
		else if (func_124(iParam0))
		{
			func_126(7184, -1);
		}
	}
}

int func_124(int iParam0)
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

int func_125(int iParam0)
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

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_131(iParam1), 0);
	iVar0++;
	if (!func_129(iParam0))
	{
		func_128(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_127(iParam0, iVar0, iParam1, 1);
	}
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2522855[iParam0 /*3*/][func_131(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1367820[func_131(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1367826[func_131(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1367832[func_131(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1367838[func_131(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1367796[func_131(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1367802[func_131(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1367808[func_131(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1367814[func_131(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1367772[func_131(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1367778[func_131(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1367784[func_131(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1367790[func_131(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1367844[func_131(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1367850[func_131(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1367856[func_131(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1367862[func_131(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1367868[func_131(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1367874[func_131(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1367880[func_131(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2548958[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2548958[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2548958[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2548958[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 7050:
			Global_2549041[func_131(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1367886[func_131(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1367892[func_131(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1367898[func_131(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1367904[func_131(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2548998[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2548998[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2548998[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2548998[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2548998[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549044[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549044[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549044[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549044[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549044[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549060[0 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549060[1 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549060[2 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549060[3 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549060[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2548998[5 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2548958[4 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549076[func_131(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549085[func_131(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549079[func_131(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549088[func_131(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549082[func_131(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549091[func_131(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549094[func_131(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2548998[6 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2548958[5 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2548998[7 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2548958[6 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2548998[8 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2548958[7 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2548998[9 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2548958[8 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2548998[10 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2548958[9 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2548998[11 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2548958[10 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2548998[12 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2548958[11 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2548998[13 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2548958[12 /*3*/][func_131(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_131(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
}

int func_129(int iParam0)
{
	if (Global_1367753)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7050:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_132(int iParam0)
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

bool func_133(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_101, 14);
}

void func_134(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE92FCF3C05C2EF1D();
		}
		else
		{
			*uParam0 = unk_0x5E1037C28AA2B562();
		}
	}
	else
	{
		*uParam0 = unk_0x5AFB8ED811F05E4D();
	}
	uParam0->f_1 = 1;
}

void func_135(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2512581.f_272 = iParam0;
		if (iParam1 > Global_262145.f_5821)
		{
			iParam1 = Global_262145.f_5821;
		}
		Global_2512581.f_273 = iParam1;
		Global_2512581.f_274 = 0;
	}
}

int func_136(int iParam0)
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

int func_137(int iParam0)
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

void func_138(int iParam0, int iParam1)
{
	if (func_133(unk_0x8CFC7D6E1DA5D304()) && func_157())
	{
		if (func_132(iParam0) && iParam1 > 0)
		{
			func_128(7181, (func_130(7181, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_139(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_142(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_140(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_140(int iParam0, int iParam1)
{
	return (func_141(iParam0) * iParam1);
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21374;
		
		case 0:
			return Global_262145.f_21375;
		
		case 1:
			return Global_262145.f_21376;
		
		case 2:
			return Global_262145.f_21377;
		
		case 3:
			return Global_262145.f_21378;
		
		case 4:
			return Global_262145.f_21379;
		
		case 5:
			return Global_262145.f_21380;
		
		case 6:
			return Global_262145.f_21381;
		
		case 7:
			return Global_262145.f_21382;
		
		default:
	}
	return 0;
}

float func_142(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21384);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21386;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21383);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21386;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21383);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_143(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_266.f_160[5 /*12*/];
}

bool func_144()
{
	return func_41(unk_0x8CFC7D6E1DA5D304());
}

void func_145(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_158())
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_146(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_146(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_146(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_158())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_49()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x0F88B7BAE118271A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE91076F2B8E481C8(iVar4))
		{
			*uParam0 = func_153(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_152(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_147(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_147(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_148(iParam0);
	}
}

void func_148(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_158())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_151(iParam0))
		{
			if (!bVar0)
			{
				unk_0x03E9246EC94148C2();
			}
		}
		else if (!bVar0)
		{
			unk_0xE5D55D650EDFDBAD(Global_4261865[iParam0 /*80*/]);
		}
		func_149(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_149(var uParam0)
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
	func_150(&(uParam0->f_8.f_3));
	func_150(&(uParam0->f_8.f_16));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_150(var uParam0)
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

int func_151(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_152(int iParam0, var uParam1)
{
	Global_2459106 = uParam1;
	Global_2459105 = iParam0;
}

int func_153(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_158())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = uParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = uParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x756DE011CEDBBD7E();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_154(int iParam0)
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

char* func_155(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_156()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_188;
}

bool func_157()
{
	return func_45(unk_0x8CFC7D6E1DA5D304());
}

int func_158()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

bool func_159(bool bParam0)
{
	return func_260(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

void func_160(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1627460[iParam0 /*530*/].f_11.f_8[0];
	*uParam2 = Global_1627460[iParam0 /*530*/].f_11.f_8[1];
}

int func_161()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
}

int func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_163(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_163(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_173(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x31F12808DC47A9E5(iParam1))
		{
			if (unk_0xB6C2454233C8F532(iParam1))
			{
				iVar1 = unk_0x6DE4035D8BAB73B4(iParam1);
				func_169(unk_0x433176BD83D09D7E(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_164(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_164(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_167(iParam0, 1) };
	if (iParam0 == func_166(unk_0x18F7BE9ACB7D08F4()))
	{
		func_165(1);
	}
	func_169(Var0, iParam1, 0, sParam2, iParam3);
}

void func_165(int iParam0)
{
	Global_2436169.f_1774 = iParam0;
}

int func_166(int iParam0)
{
	return iParam0;
}

Vector3 func_167(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xF662B8CF03C92579())
	{
		Var3 = { unk_0xF4A8F5CF2EF6A586(2) };
	}
	if (iParam0 == func_168(unk_0x18F7BE9ACB7D08F4()) && unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
	{
		Var0 = { unk_0x0AF3D0AB54EA2104(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		fVar6 = unk_0x93FDA3BF59E7B77F(iParam0);
		if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x0D8E51F437C55570(unk_0x4F69FBD64CDF125B(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xA89DC5E1C1F12DBF(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_168(int iParam0)
{
	return iParam0;
}

void func_169(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436169.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436169.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436169.f_1173[iVar1 /*30*/] = { Param0 };
			Global_2436169.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436169.f_1173[iVar1 /*30*/].f_4 = func_172(Global_2436169.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436169.f_1173[iVar1 /*30*/].f_7 = unk_0xE92FCF3C05C2EF1D();
			Global_2436169.f_1173[iVar1 /*30*/].f_3 = iParam3;
			Global_2436169.f_1173[iVar1 /*30*/].f_8 = iParam4;
			Global_2436169.f_1173[iVar1 /*30*/].f_9 = func_171();
			Global_2436169.f_1173[iVar1 /*30*/].f_10 = func_170();
			StringCopy(&(Global_2436169.f_1173[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2436169.f_1173[iVar1 /*30*/].f_26 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), iParam6);
		}
	}
}

int func_170()
{
	if (Global_2436169.f_1774)
	{
		Global_2436169.f_1774 = 0;
		return 1;
	}
	Global_2436169.f_1774 = 0;
	return 0;
}

var func_171()
{
	var uVar0;
	
	uVar0 = Global_2436169.f_1776;
	Global_2436169.f_1776 = 1;
	return uVar0;
}

float func_172(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x15EE504466B7BBD3(unk_0x1F977C2BDC83C388(), Param0, 1);
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

var func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_174(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_174(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_211(unk_0x8CFC7D6E1DA5D304()) || func_210(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_262145.f_8803 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8803;
		}
	}
	else if (func_207() || func_206(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_262145.f_21821 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_21821;
		}
	}
	else if (Global_262145.f_5872 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5872;
	}
	if (func_205(sParam2))
	{
	}
	if (func_204())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_202(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_201(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_198(0, &iVar1);
					break;
				
				case 3:
					func_198(1, &iVar1);
					break;
				
				case 1:
					func_194(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1816884)
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
			func_193(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_185((func_192(unk_0x8CFC7D6E1DA5D304()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x8BB8B0A092C2FA7B(iVar1, iParam8, iParam9);
				if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_2 != -1)
				{
					func_193(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_179(iVar1);
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
				func_175((func_177(unk_0x8CFC7D6E1DA5D304()) + iVar1));
			}
			else
			{
				func_175((func_177(unk_0x8CFC7D6E1DA5D304()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_175(int iParam0)
{
	if (func_204())
	{
		Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_5 = iParam0;
		func_176(joaat("mpply_globalxp"), iParam0);
	}
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, 1);
	}
}

int func_177(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_885(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x8CFC7D6E1DA5D304())
			{
				return func_178(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595681[iParam0 /*678*/].f_211.f_5;
			}
		}
		else
		{
			return func_178(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD194C635833AC189(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_179(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_184(unk_0x8CFC7D6E1DA5D304()) };
	if (unk_0xE906D9FB40E35957())
	{
		if (unk_0x9FDA5C5DFB3FE364(&Var0))
		{
			iVar13 = func_182(func_183(&Var0));
			if (iVar13 == 0)
			{
				func_181(&Global_1367759, iParam0);
				func_180(joaat("mpply_crew_local_xp_0"), Global_1367759);
			}
			else if (iVar13 == 1)
			{
				func_181(&Global_1367760, iParam0);
				func_180(joaat("mpply_crew_local_xp_1"), Global_1367760);
			}
			else if (iVar13 == 2)
			{
				func_181(&Global_1367761, iParam0);
				func_180(joaat("mpply_crew_local_xp_2"), Global_1367761);
			}
			else if (iVar13 == 3)
			{
				func_181(&Global_1367762, iParam0);
				func_180(joaat("mpply_crew_local_xp_3"), Global_1367762);
			}
			else if (iVar13 == 4)
			{
				func_181(&Global_1367763, iParam0);
				func_180(joaat("mpply_crew_local_xp_4"), Global_1367763);
			}
		}
	}
}

void func_180(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1367754 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1367757 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1367758 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1367759 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1367760 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1367761 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1367762 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1367763 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1367764 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1367765 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1367766 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1367767 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1367768 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1367769 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1367770 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_182(int iParam0)
{
	if (iParam0 == Global_1367754)
	{
		return 0;
	}
	else if (iParam0 == Global_1367755)
	{
		return 1;
	}
	else if (iParam0 == Global_1367756)
	{
		return 2;
	}
	else if (iParam0 == Global_1367757)
	{
		return 3;
	}
	else if (iParam0 == Global_1367758)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_183(var uParam0)
{
	if (unk_0xE906D9FB40E35957())
	{
		if (unk_0x9FDA5C5DFB3FE364(uParam0))
		{
			return Global_2456709;
		}
	}
	return Global_2456709;
}

struct<13> func_184(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	if (func_204())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8771 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1367874[func_131(-1)])
				{
					unk_0x8BB8B0A092C2FA7B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1367874[func_131(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8770 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x8BB8B0A092C2FA7B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8770 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x8BB8B0A092C2FA7B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_191(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_1 = iParam0;
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_6 = func_189(iParam0, 1);
		}
		func_127(636, iParam0, -1, 1);
		func_128(637, func_189(iParam0, 1), -1, 1, 0);
		Global_1367874[func_131(-1)] = iParam0;
		func_186(7, 0);
	}
}

void func_186(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_188(iParam0, iParam1))
	{
		iVar0 = func_187();
		Global_2456686[iVar0] = iParam0;
	}
}

int func_187()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456686[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_188(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_190(iParam0, 0);
}

int func_190(int iParam0, int iParam1)
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
		if (Global_284737[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_284737[iVar3] < iParam0)
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

int func_191(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_2436169.f_1, iParam0);
	}
	return 1;
}

int func_192(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x8CFC7D6E1DA5D304())
			{
				return Global_1367874[func_131(-1)];
			}
			else if (func_191(iParam0))
			{
				return Global_1595681[iParam0 /*678*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1367874[func_131(-1)];
	}
	return 0;
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_131(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_129(iParam0))
	{
		func_128(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_127(iParam0, iVar0, iParam2, 1);
	}
}

void func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
	iVar0 = 0;
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		iVar4 = unk_0xF4E7C3C6384793AA(iVar0);
		if (unk_0x0CA6AB9C192005B8(iVar4))
		{
			iVar5 = unk_0x8A0B92A0286253B3(iVar4);
			if (unk_0x1BE7B010C9B9841E(iVar5) != -1)
			{
				if (unk_0x1BE7B010C9B9841E(iVar5) == iVar1 || func_197(unk_0x1BE7B010C9B9841E(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x8CFC7D6E1DA5D304())
					{
						if (func_196(unk_0x8CFC7D6E1DA5D304(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_195(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_195(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_195(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_196(int iParam0, int iParam1)
{
	if (unk_0xE906D9FB40E35957())
	{
		Global_2491936 = { func_184(iParam0) };
		Global_2491949 = { func_184(iParam1) };
		if (unk_0x9FDA5C5DFB3FE364(&Global_2491936))
		{
			if (unk_0x9FDA5C5DFB3FE364(&Global_2491949))
			{
				unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936);
				unk_0x4AEF279CFD4A57C6(&Global_2491901, 35, &Global_2491949);
				if (Global_2491866 == Global_2491901)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_197(int iParam0, int iParam1, int iParam2)
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
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 0);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 1);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 2);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 4);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 5);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 6);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 8);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 9);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 10);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 12);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 13);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 14);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_198(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xF02902C16AF3CA92())
		{
			iVar3 = iVar0;
			if (unk_0x0CA6AB9C192005B8(iVar3))
			{
				iVar4 = unk_0x8A0B92A0286253B3(iVar3);
				if (func_885(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x8CFC7D6E1DA5D304())
					{
						iVar1++;
						if (func_196(unk_0x8CFC7D6E1DA5D304(), iVar4))
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
			if (func_885(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x8CFC7D6E1DA5D304())
				{
					if (func_199(unk_0x8CFC7D6E1DA5D304(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_196(unk_0x8CFC7D6E1DA5D304(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_195(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_195(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_199(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_200(iParam0), func_200(iParam1));
	return 0f;
}

Vector3 func_200(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (unk_0xC7F65B9C83B8BF29() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_195(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_202(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x18DD02B781D4AD2F(iParam0) > func_192(unk_0x8CFC7D6E1DA5D304()))
		{
			iParam0 = -func_192(unk_0x8CFC7D6E1DA5D304());
		}
	}
	if (func_203(8000, 0, 0) > 0)
	{
		if (func_203(8000, 0, 0) < (iParam0 + func_192(unk_0x8CFC7D6E1DA5D304())))
		{
			iParam0 = (func_203(8000, 0, 0) - func_192(unk_0x8CFC7D6E1DA5D304()));
		}
	}
	return iParam0;
}

int func_203(int iParam0, bool bParam1, int iParam2)
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
	return Global_284737[iParam0];
}

int func_204()
{
	return 1;
}

int func_205(char* sParam0)
{
	if (unk_0xE0C4A595CD61B7F2(sParam0))
	{
		return 1;
	}
	else if (unk_0x9D39145AD645E383(sParam0, "") || unk_0x9D39145AD645E383(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	return func_120(func_62(iParam0));
}

bool func_207()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return func_209();
	}
	return func_208(Global_1646129.f_116948);
}

int func_208(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4995[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_209()
{
	return Global_2447128.f_16;
}

bool func_210(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

bool func_211(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

void func_212()
{
	Global_2458314 = 1;
}

void func_213(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_217(7))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	iVar1 = func_215(iParam0);
	iVar2 = unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(Global_2512581.f_4878.f_87, unk_0xE92FCF3C05C2EF1D()));
	if (func_214(iParam0) != -1)
	{
		if (iVar2 > func_214(iParam0))
		{
			iVar2 = func_214(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11554)
	{
		iVar2 = Global_262145.f_11554;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_214(int iParam0)
{
	if (func_86(iParam0, 0) || func_125(iParam0))
	{
		return Global_262145.f_17627;
	}
	if (func_132(iParam0))
	{
		return Global_262145.f_17626;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17623;
		
		case 191:
			return Global_262145.f_17625;
		
		case 190:
			return Global_262145.f_17624;
		
		case 227:
			return Global_262145.f_20112;
		
		case 226:
			return Global_262145.f_20100;
		
		case 225:
			return Global_262145.f_20120;
		
		case 230:
			return Global_262145.f_21371;
		
		case 229:
			return Global_262145.f_21275;
		
		case 233:
			return Global_262145.f_21826;
		
		default:
	}
	return -1;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11645;
		
		case 152:
			return Global_262145.f_11680;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11668;
		
		case 157:
			return Global_262145.f_11635;
		
		case 159:
			return Global_262145.f_11618;
		
		case 164:
			return Global_262145.f_11658;
		
		case 160:
			return Global_262145.f_11708;
		
		case 162:
			return Global_262145.f_11728;
		
		case 163:
			return Global_262145.f_11693;
		
		case 154:
			return Global_262145.f_11763;
		
		case 155:
			return Global_262145.f_11753;
		
		case 153:
			return Global_262145.f_11717;
		
		case 170:
			return Global_262145.f_14140;
		
		case 171:
			return Global_262145.f_14199;
		
		case 172:
			return Global_262145.f_14217;
		
		case 173:
			return Global_262145.f_14158;
		
		case 166:
			return Global_262145.f_14173;
		
		case 167:
			return Global_262145.f_14264;
		
		case 169:
			return Global_262145.f_14236;
		
		case 168:
			return Global_262145.f_14229;
		
		case 179:
			return Global_262145.f_17506;
		
		case 180:
			return Global_262145.f_17285;
		
		case 182:
			return Global_262145.f_17285;
		
		case 183:
			return Global_262145.f_17285;
		
		case 185:
			return Global_262145.f_17285;
		
		case 186:
			return Global_262145.f_17285;
		
		case 189:
			return Global_262145.f_17506;
		
		case 190:
			return Global_262145.f_17161;
		
		case 191:
			return Global_262145.f_17252;
		
		case 192:
			return Global_262145.f_17046;
		
		case 193:
			return Global_262145.f_17506;
		
		case 194:
			return Global_262145.f_17506;
		
		case 195:
			return Global_262145.f_17285;
		
		case 197:
			return Global_262145.f_17285;
		
		case 198:
			return Global_262145.f_17285;
		
		case 199:
			return Global_262145.f_17506;
		
		case 200:
			return Global_262145.f_17506;
		
		case 201:
			return Global_262145.f_17506;
		
		case 205:
			return Global_262145.f_17506;
		
		case 207:
			return Global_262145.f_17285;
		
		case 208:
			return Global_262145.f_17285;
		
		case 209:
			return Global_262145.f_17285;
		
		case 210:
			return Global_262145.f_17506;
		
		case 211:
			return Global_262145.f_17506;
		
		case 214:
			return Global_262145.f_18321;
		
		case 215:
			return Global_262145.f_18323;
		
		case 216:
			return Global_262145.f_18325;
		
		case 217:
			return Global_262145.f_18327;
		
		case 218:
			return Global_262145.f_18329;
		
		case 219:
			return Global_262145.f_18331;
		
		case 220:
			return Global_262145.f_18333;
		
		case 221:
			return Global_262145.f_18335;
		
		case 225:
			if (func_159(0) || func_96(0))
			{
				return Global_262145.f_20122;
			}
			break;
		
		case 226:
			if (func_159(0) || func_96(0))
			{
				return Global_262145.f_20102;
			}
			break;
		
		case 227:
			if (func_159(0) || func_96(0))
			{
				return Global_262145.f_20114;
			}
			break;
		
		case 229:
			if (func_159(0) || func_96(0))
			{
				return Global_262145.f_21277;
			}
			break;
		
		case 230:
			if (func_159(0) || func_96(0))
			{
				return Global_262145.f_21373;
			}
			break;
		
		case 233:
			if (func_159(0) || func_96(0))
			{
				return Global_262145.f_21825;
			}
			break;
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11644;
		
		case 152:
			return Global_262145.f_11679;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11667;
		
		case 157:
			return Global_262145.f_11634;
		
		case 159:
			return Global_262145.f_11617;
		
		case 164:
			return Global_262145.f_11657;
		
		case 160:
			return Global_262145.f_11707;
		
		case 162:
			return Global_262145.f_11727;
		
		case 163:
			return Global_262145.f_11692;
		
		case 154:
			return Global_262145.f_11762;
		
		case 155:
			return Global_262145.f_11752;
		
		case 153:
			return Global_262145.f_11716;
		
		case 170:
			return Global_262145.f_14139;
		
		case 171:
			return Global_262145.f_14198;
		
		case 172:
			return Global_262145.f_14216;
		
		case 173:
			return Global_262145.f_14157;
		
		case 166:
			return Global_262145.f_14172;
		
		case 179:
			return Global_262145.f_17505;
		
		case 180:
			return Global_262145.f_17284;
		
		case 182:
			return Global_262145.f_17284;
		
		case 183:
			return Global_262145.f_17284;
		
		case 185:
			return Global_262145.f_17284;
		
		case 186:
			return Global_262145.f_17284;
		
		case 189:
			return Global_262145.f_17505;
		
		case 193:
			return Global_262145.f_17505;
		
		case 194:
			return Global_262145.f_17505;
		
		case 195:
			return Global_262145.f_17284;
		
		case 197:
			return Global_262145.f_17284;
		
		case 198:
			return Global_262145.f_17284;
		
		case 199:
			return Global_262145.f_17505;
		
		case 200:
			return Global_262145.f_17505;
		
		case 201:
			return Global_262145.f_17505;
		
		case 205:
			return Global_262145.f_17505;
		
		case 207:
			return Global_262145.f_17284;
		
		case 208:
			return Global_262145.f_17284;
		
		case 209:
			return Global_262145.f_17284;
		
		case 210:
			return Global_262145.f_17505;
		
		case 211:
			return Global_262145.f_17505;
		
		case 190:
			if (!func_144())
			{
				return Global_262145.f_17160;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_144())
			{
				return Global_262145.f_17251;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_144())
			{
				return Global_262145.f_17045;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18320;
		
		case 215:
			return Global_262145.f_18322;
		
		case 216:
			return Global_262145.f_18324;
		
		case 217:
			return Global_262145.f_18326;
		
		case 218:
			return Global_262145.f_18328;
		
		case 219:
			return Global_262145.f_18330;
		
		case 220:
			return Global_262145.f_18332;
		
		case 221:
			return Global_262145.f_18334;
		
		case 225:
			if (func_96(0))
			{
				return Global_262145.f_20121;
			}
			break;
		
		case 226:
			if (func_96(0))
			{
				return Global_262145.f_20101;
			}
			break;
		
		case 227:
			if (func_96(0))
			{
				return Global_262145.f_20113;
			}
			break;
		
		case 229:
			if (func_96(0))
			{
				return Global_262145.f_21276;
			}
			break;
		
		case 230:
			if (func_96(0))
			{
				return Global_262145.f_21372;
			}
			break;
		
		case 233:
			if (func_96(0))
			{
				return Global_262145.f_21827;
			}
			break;
	}
	return 0;
}

bool func_217(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_34, iParam0);
}

void func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_144())
		{
			if (func_159(0))
			{
				if (!func_96(0))
				{
					if (unk_0x4AF13BCD120BCDBC(func_161()))
					{
						if (func_257() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_257());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_255(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_224("GB_BCUT_TICK1", func_161(), iVar0, 0, 0, 1, 1);
						}
						func_223(20);
						func_219(func_161(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_885(iParam0, 0, 1))
	{
		Var0.f_0 = 2146699483;
		Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_222(iParam0);
		func_221(&(Var0.f_6), &(Var0.f_7));
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 8, func_220(iParam0));
	}
}

var func_220(int iParam0)
{
	var uVar0;
	
	unk_0xD2A9C3F486236CC5(&uVar0, iParam0);
	return uVar0;
}

void func_221(var uParam0, var uParam1)
{
	*uParam0 = Global_1644422.f_9;
	*uParam1 = Global_1644422.f_10;
}

var func_222(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_469;
}

void func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4878.f_7[iVar0]), iVar1);
}

int func_224(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		if (unk_0xFAFFA408239A026B(&Var1))
		{
		}
		unk_0x55E6536147AC42E6(sParam0);
		unk_0x70A9E4720D71C2D5(func_231(iParam1, -2, 1, 0));
		unk_0xB4179F7E88F4C4BF(func_229(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x70A9E4720D71C2D5(iParam3);
		}
		unk_0x3A12001DBF78DC62(iParam2);
		iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		func_225(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_225(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_228() || !unk_0x13C2BC1B63ABBCD5()) || !func_47(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		return;
	}
	iVar0 = func_226(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1803650.f_5[iVar0 /*53*/] = iParam0;
		Global_1803650.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1803650.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1803650.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1803650.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1803650.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1803650.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1803650 - 1))
	{
		if (iParam0 > Global_1803650.f_5[iVar0 /*53*/].f_1)
		{
			func_227(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1803650++;
	if (Global_1803650 > 5)
	{
		Global_1803650 = 5;
		return Global_1803650;
	}
	return (Global_1803650 - 1);
}

void func_227(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1803650.f_5[iVar0 /*53*/] = { Global_1803650.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_228()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

var func_229(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_230(&cVar0);
}

var func_230(char[4] cParam0)
{
	return cParam0;
}

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_253(iParam0))
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
		iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1646129.f_112025[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_253(unk_0x8CFC7D6E1DA5D304()) || (func_252() && func_251())) && !unk_0xB03A1684359C50A1(Global_2512581.f_4556, 31))
	{
		uVar1 = func_250();
		if (unk_0x31F12808DC47A9E5(uVar1))
		{
			if (unk_0xEE1E09882FA264CA(iVar1))
			{
				if (unk_0xD3287DCBDBC58316(iVar1) != -1)
				{
					if (func_885(unk_0xD3287DCBDBC58316(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
						{
							if (Global_1646129.f_112025[iParam1] != -1)
							{
								return func_248(iParam1, iParam0, 0);
							}
							else
							{
								return func_238(iParam0, unk_0xD3287DCBDBC58316(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_238(iParam0, unk_0xD3287DCBDBC58316(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
			{
				if (Global_1646129.f_112025[iParam1] != -1)
				{
					return func_248(iParam1, iParam0, 0);
				}
				else
				{
					return func_232(0, -1, 0);
				}
			}
			else
			{
				return func_232(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
	{
		if (Global_1646129.f_112025[iParam1] != -1)
		{
			return func_248(iParam1, iParam0, 0);
		}
		else
		{
			return func_238(iParam0, unk_0x8CFC7D6E1DA5D304(), iParam1, bParam2, bParam3);
		}
	}
	return func_238(iParam0, unk_0x8CFC7D6E1DA5D304(), iParam1, bParam2, bParam3);
}

int func_232(bool bParam0, int iParam1, bool bParam2)
{
	return func_233(unk_0x8CFC7D6E1DA5D304(), bParam0, iParam1, bParam2);
}

int func_233(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4AF13BCD120BCDBC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_197(iVar0, iParam2, 0) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_237(1);
				}
				else
				{
					return func_237(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xB03A1684359C50A1(Global_1646129.f_4, 20))
			{
				return func_234(iVar0, iParam2, 1);
			}
			else
			{
				return func_234(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_237(1);
	}
	return func_237(0);
}

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_236(iParam0, iParam1);
	if (func_235(Global_1646129.f_116948))
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

int func_235(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
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
			if (!func_197(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_237(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_238(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595681[iVar2 /*678*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_245(1))
			{
				iVar3 = func_243(iParam0);
				if (!iVar3 == -1)
				{
					return func_241(iVar3);
				}
			}
			if ((func_240(iParam1, iParam0, iVar0, 0) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18)) || ((func_197(unk_0x1BE7B010C9B9841E(iParam1), unk_0x1BE7B010C9B9841E(iParam0), 0) && unk_0xB03A1684359C50A1(Global_1646129.f_15, 23)) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18)))
			{
				return func_237(1);
			}
			else if (unk_0xB03A1684359C50A1(Global_1646129.f_15, 26))
			{
				return func_239(1);
			}
			else
			{
				return func_233(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574308 || Global_1574299) || Global_1595681[iParam0 /*678*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574308 == 1 && Global_1574318 == 0))
			{
				return func_237(1);
			}
			else
			{
				return func_233(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574303 && Global_1573838.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_243(iParam0);
	if (!iVar4 == -1)
	{
		return func_241(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_239(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_240(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && unk_0x1BE7B010C9B9841E(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == unk_0x1BE7B010C9B9841E(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
	}
	return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
}

int func_241(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_242(iParam0);
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

var func_242(int iParam0)
{
	return Global_2416788.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_243(int iParam0)
{
	if (!iParam0 == func_29())
	{
		if (func_260(iParam0, 1))
		{
			return Global_2416788.f_2071.f_11[func_244(iParam0)];
		}
	}
	return -1;
}

int func_244(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1627460[iParam0 /*530*/].f_11;
	}
	return func_29();
}

int func_245(int iParam0)
{
	if ((func_247() || func_246()) || (func_209() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_246()
{
	return Global_2447128.f_15;
}

var func_247()
{
	return Global_2447128.f_14;
}

int func_248(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980512.f_12[iParam0];
	if (func_245(1))
	{
		iVar2 = func_243(iParam1);
		if (!iVar2 == -1)
		{
			return func_241(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xB03A1684359C50A1(Global_1646129.f_97[iParam0 /*9938*/].f_5106[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_29())
	{
		if (Global_1646129.f_112025[iParam0] != -1 && Global_1646129.f_112025[iParam0] <= 4)
		{
			if (Global_1646129.f_112025[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_1646129.f_112025[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_1646129.f_112025[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_1646129.f_112025[iParam0] == 4)
			{
				if (unk_0xB03A1684359C50A1(Global_1646129.f_15, 29))
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
				iVar0 = Global_1646129.f_112025[iParam0];
			}
		}
		else
		{
			iVar0 = func_233(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xB03A1684359C50A1(Global_1646129.f_21, 13))
		{
			iVar0 = func_249(iParam0);
		}
		if (unk_0xB03A1684359C50A1(Global_1646129.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_249(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1646129.f_138651;
			break;
		
		case 1:
			iVar0 = Global_1646129.f_138652;
			break;
		
		case 2:
			iVar0 = Global_1646129.f_138653;
			break;
		
		case 3:
			iVar0 = Global_1646129.f_138654;
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

var func_250()
{
	return Global_2359302.f_2;
}

bool func_251()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 4);
}

bool func_252()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

int func_253(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_254())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

void func_255(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_256(1);
	}
	else
	{
		iVar1 = func_256(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_256(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11549;
}

int func_257()
{
	return Global_262145.f_11548;
}

int func_258(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_259(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627460[iParam0 /*530*/].f_11 != func_29())
		{
			return iParam1 == Global_1627460[iParam0 /*530*/].f_11;
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 != func_29())
			{
				if (Global_1627460[iParam0 /*530*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_260(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_1627460[iParam0 /*530*/].f_11 != func_29();
}

void func_261(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_96(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_144())
		{
			iVar15 = unk_0x8CFC7D6E1DA5D304();
		}
		else
		{
			iVar15 = func_161();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_285(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_276(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
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
			iVar2 = func_140(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_139(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_275(*iParam2) > 0)
			{
				if (iVar15 == unk_0x8CFC7D6E1DA5D304())
				{
					func_274("SMTICK_RONCUT", func_275(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_275(*iParam2));
			}
			if (iVar15 == unk_0x8CFC7D6E1DA5D304())
			{
				func_272(iVar2, iVar9);
				iVar6 = func_271(&uVar5);
				iVar7 = Global_262145.f_21390;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21389));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_223(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF02902C16AF3CA92())
						{
							iVar19 = iVar18;
							if (unk_0x0CA6AB9C192005B8(iVar19))
							{
								iVar20 = unk_0x8A0B92A0286253B3(iVar19);
								if (func_270(iVar20))
								{
									func_262(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21323;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21324;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1816892 = *iParam2;
					func_223(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_262(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_264(iParam0);
	func_263(iParam0, uVar0, iParam1, iParam2);
}

void func_263(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = -1933172934;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_222(iParam0);
	func_221(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			unk_0xDC8B8CF2FBDF3387(1, &Var0, 8, func_220(iParam0));
		}
	}
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_269();
	iVar0 = func_267(iParam0, iVar0);
	iVar1 = Global_1627460[func_161() /*530*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14100));
	if (iVar0 < func_266())
	{
		iVar0 = func_266();
	}
	if (iVar0 > func_265())
	{
		iVar0 = func_265();
	}
	return iVar0;
}

int func_265()
{
	return Global_262145.f_14101;
}

int func_266()
{
	return Global_262145.f_15276;
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_331(iParam0) * func_268());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_268()
{
	return Global_262145.f_15275;
}

var func_269()
{
	return Global_262145.f_11540;
}

int func_270(int iParam0)
{
	if (unk_0x4AF13BCD120BCDBC(iParam0))
	{
		if (iParam0 != unk_0x8CFC7D6E1DA5D304())
		{
			if (func_258(iParam0, unk_0x8CFC7D6E1DA5D304(), 0))
			{
				if (!func_103(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_271(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(iVar0)))
		{
			iVar2 = unk_0x3479F6F64A48251C(iVar0);
			if (!func_47(iVar2, 0) && !func_258(iVar2, unk_0x8CFC7D6E1DA5D304(), 1))
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

void func_272(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_273(iParam0, 6099);
	}
	if (iParam1 > 0)
	{
		func_273(iParam1, 6100);
	}
}

void func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_130(iParam1, -1, 0);
	func_128(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_274(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x55E6536147AC42E6(sParam0);
	unk_0x3A12001DBF78DC62(iParam1);
	iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
	func_225(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_275(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21357);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_21358))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21358);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_283())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_285(unk_0x8CFC7D6E1DA5D304());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_278(func_279(func_282(iVar0), -1, -1));
		if (func_277(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_281(iParam0, iParam1);
	uVar2 = func_280(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x76DEA399E0EAFF3A(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_280(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_283()
{
	return func_284() != 0;
}

int func_284()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_241;
}

int func_285(int iParam0)
{
	if (iParam0 != func_29() && func_286(iParam0))
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_241.f_3;
	}
	return 0;
}

int func_286(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_241 != 0;
	}
	return 0;
}

void func_287(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_96(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_144())
		{
			iVar15 = unk_0x8CFC7D6E1DA5D304();
		}
		else
		{
			iVar15 = func_161();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_143(iVar15);
			iVar0 = (func_309(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_305(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20104));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20103));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x8CFC7D6E1DA5D304())
			{
				func_302(iVar16, iVar2);
				if (func_298(iVar16) >= Global_262145.f_19652 || iVar2 >= Global_262145.f_19652)
				{
					func_288(5);
				}
				iVar6 = func_271(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_20106);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_20105));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_223(108);
					}
					else
					{
						func_223(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF02902C16AF3CA92())
						{
							iVar19 = iVar18;
							if (unk_0x0CA6AB9C192005B8(iVar19))
							{
								iVar20 = unk_0x8A0B92A0286253B3(iVar19);
								if (func_270(iVar20))
								{
									func_262(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20107;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20108;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1816892 = *iParam2;
					func_223(112);
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

void func_288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19640)
			{
				if (func_290(Global_262145.f_19641))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19642)
			{
				if (func_290(Global_262145.f_19643))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19644)
			{
				if (func_290(Global_262145.f_19645))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19646)
			{
				if (func_290(Global_262145.f_19647))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19648)
			{
				if (func_290(Global_262145.f_19649))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19650)
			{
				if (func_290(Global_262145.f_19651))
				{
					func_274("CLOTHAWDSTRAP3", Global_262145.f_19652, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19653)
			{
				if (func_290(Global_262145.f_19654))
				{
					func_274("CLOTHAWDSTRAP5", Global_262145.f_19786, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19656)
			{
				if (func_290(Global_262145.f_19657))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19658)
			{
				if (func_290(Global_262145.f_19659))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19660)
			{
				if (func_290(Global_262145.f_19661))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19662)
			{
				if (func_290(Global_262145.f_19663))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19664)
			{
				if (func_290(Global_262145.f_19665))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19666)
			{
				if (func_290(Global_262145.f_19667))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19668)
			{
				if (func_290(Global_262145.f_19669))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19670)
			{
				if (func_290(Global_262145.f_19671))
				{
					func_289("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_289(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x55E6536147AC42E6(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam3);
	}
	unk_0xBEFD1ED9B6BE5127(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
	}
	else
	{
		Global_2491936 = { func_184(unk_0x8CFC7D6E1DA5D304()) };
		if (unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936))
		{
			iVar1 = 0;
			if (unk_0x9D39145AD645E383(&(Global_2491866.f_22), "Leader") && Global_2491866.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2491866.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x014CE29AD141E6E1(iVar2, unk_0x0574C6B9D1D311D7(&Global_2491866, 35), &(Global_2491866.f_17), Global_2491866.f_30, iVar1, 0, Global_2491866, unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		}
	}
	func_225(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_295(15417, -1, -1))
			{
				func_294(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_295(15418, -1, -1))
			{
				func_294(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_295(15425, -1, -1))
			{
				func_294(15425, 1, -1, 1);
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
			if (!func_295(15405, -1, -1))
			{
				func_294(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_295(15393, -1, -1))
			{
				func_294(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_295(15409, -1, -1))
			{
				func_294(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_295(15396, -1, -1))
			{
				func_294(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_295(15412, -1, -1))
			{
				func_294(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_295(15403, -1, -1))
			{
				func_294(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_295(15389, -1, -1))
			{
				func_294(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_295(15398, -1, -1))
			{
				func_294(15398, 1, -1, 1);
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
			if (!func_295(15400, -1, -1))
			{
				func_294(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_295(15408, -1, -1))
			{
				func_294(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_295(15411, -1, -1))
			{
				func_294(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_295(15397, -1, -1))
			{
				func_294(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_295(15413, -1, -1))
			{
				func_294(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_295(15391, -1, -1))
			{
				func_294(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_295(15388, -1, -1))
			{
				func_294(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_295(15401, -1, -1))
			{
				func_294(15401, 1, -1, 1);
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
			if (!func_295(15394, -1, -1))
			{
				func_294(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_295(15406, -1, -1))
			{
				func_294(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_295(15395, -1, -1))
			{
				func_294(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_295(15410, -1, -1))
			{
				func_294(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_295(15407, -1, -1))
			{
				func_294(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_295(15414, -1, -1))
			{
				func_294(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_295(15415, -1, -1))
			{
				func_294(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_295(15399, -1, -1))
			{
				func_294(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_295(15404, -1, -1))
			{
				func_294(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_295(15392, -1, -1))
			{
				func_294(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_295(15390, -1, -1))
			{
				func_294(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_295(15402, -1, -1))
			{
				func_294(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_295(15416, -1, -1))
			{
				func_294(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_293(209, -1))
			{
				func_291(209, 1, -1, 1);
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
			if (!func_295(15426, -1, -1))
			{
				func_294(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_295(15422, -1, -1))
			{
				func_294(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_295(15423, -1, -1))
			{
				func_294(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_295(15421, -1, -1))
			{
				func_294(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_295(15427, -1, -1))
			{
				func_294(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_295(15419, -1, -1))
			{
				func_294(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_295(15420, -1, -1))
			{
				func_294(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_292())
	{
		iVar0 = Global_2547154[iParam0 /*3*/][func_131(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0F1BF2DD8A1C0A68(iVar0, iParam1, iParam3);
		}
	}
}

int func_292()
{
	return 1;
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_294(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_295(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_297(iParam0, iParam1);
	uVar2 = func_296(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_298(int iParam0)
{
	int iVar0;
	
	iVar0 = func_300(iParam0);
	return func_130(func_299(iVar0), -1, 0);
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3934;
		
		case 1:
			return 3935;
		
		case 2:
			return 3936;
		
		case 3:
			return 3937;
		
		case 4:
			return 3938;
		
		case 5:
			return 5439;
		
		default:
	}
	return 3934;
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (func_301(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_301(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_300(iParam0);
	iVar1 = func_299(iVar0);
	iVar2 = (func_130(iVar1, -1, 0) + iParam1);
	func_128(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_279(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iVar0 /*12*/] != 0)
			{
				iVar1 = func_299(iVar0);
				iVar3 = (iVar3 + func_130(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_304(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_303(9357, iVar5, -1, 1);
	}
}

var func_303(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xBE55308715B43107(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_304(int iParam0)
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

int func_305(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_154(iParam1);
	if (func_301(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16105;
				if (func_306(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16110);
				}
				if (func_306(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16115);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16104;
				if (func_306(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16109);
				}
				if (func_306(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16114);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16103;
				if (func_306(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16108);
				}
				if (func_306(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16113);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16101;
				if (func_306(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16106);
				}
				if (func_306(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16111);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16102;
				if (func_306(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16107);
				}
				if (func_306(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16112);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20129;
				if (func_306(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20131);
				}
				if (func_306(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20130);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_306(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_308(iParam0, iParam1))
	{
		iVar0 = func_307(iParam0, iParam1);
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_307(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_301(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_308(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_301(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_301(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_310(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_157())
			{
				Var0 = { func_156() };
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
				iVar7 = func_305(unk_0x8CFC7D6E1DA5D304(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17735);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17734);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_271(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17725);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17724));
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
					func_223(86);
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (func_96(0))
			{
				Var15 = { func_311(func_161()) };
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
				iVar22 = func_305(func_161(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17735));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17734));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17774;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17775;
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

struct<2> func_311(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_188;
}

void func_312(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_41(unk_0x8CFC7D6E1DA5D304()))
		{
			if (bParam1)
			{
				func_327();
			}
			func_326();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(unk_0x8CFC7D6E1DA5D304()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_318(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_317(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_271(&uVar2);
					iVar4 = Global_262145.f_15286;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_14495));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_223(44);
					}
				}
				func_315(*iParam3);
				func_314();
				Global_2512581.f_4878.f_199 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xF02902C16AF3CA92())
				{
					iVar8 = iVar7;
					if (unk_0x0CA6AB9C192005B8(iVar8))
					{
						iVar9 = unk_0x8A0B92A0286253B3(iVar8);
						if (func_270(iVar9))
						{
							func_262(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(unk_0x8CFC7D6E1DA5D304()))
		{
			func_313();
		}
	}
}

void func_313()
{
	int iVar0;
	
	iVar0 = Global_2549082[func_49()];
	iVar0++;
	func_127(3656, iVar0, -1, 1);
}

void func_314()
{
	int iVar0;
	
	iVar0 = Global_2549088[func_49()];
	iVar0++;
	func_127(3655, iVar0, -1, 1);
}

void func_315(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2549091[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_127(3657, iVar0, -1, 1);
	if (func_279(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_316(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_303(7666, iVar2, -1, 1);
	}
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15419;
			break;
		
		case 2:
			return Global_262145.f_15420;
			break;
		
		case 3:
			return Global_262145.f_15421;
			break;
		
		case 4:
			return Global_262145.f_15422;
			break;
		
		case 5:
			return Global_262145.f_15423;
			break;
		
		case 6:
			return Global_262145.f_15424;
			break;
		
		case 7:
			return Global_262145.f_15425;
			break;
		
		case 8:
			return Global_262145.f_15426;
			break;
		
		case 9:
			return Global_262145.f_15427;
			break;
		
		case 10:
			return Global_262145.f_15428;
			break;
		
		case 11:
			return Global_262145.f_15429;
			break;
		
		case 12:
			return Global_262145.f_15430;
			break;
		
		case 13:
			return Global_262145.f_15431;
			break;
		
		case 14:
			return Global_262145.f_15432;
			break;
		
		case 15:
			return Global_262145.f_15433;
			break;
		
		case 16:
			return Global_262145.f_15434;
			break;
		
		case 17:
			return Global_262145.f_15435;
			break;
		
		case 18:
			return Global_262145.f_15436;
			break;
		
		case 19:
			return Global_262145.f_15437;
			break;
		
		case 20:
			return Global_262145.f_15438;
			break;
		
		case 21:
			return Global_262145.f_15439;
			break;
		
		case 22:
			return Global_262145.f_15440;
			break;
		
		case 23:
			return Global_262145.f_15441;
			break;
		
		case 24:
			return Global_262145.f_15442;
			break;
	}
	return 0;
}

var func_317(int iParam0)
{
	if (iParam0 >= Global_262145.f_14473)
	{
		return Global_262145.f_14494;
	}
	else if (iParam0 >= Global_262145.f_14472)
	{
		return Global_262145.f_14493;
	}
	else if (iParam0 >= Global_262145.f_14471)
	{
		return Global_262145.f_14492;
	}
	else if (iParam0 >= Global_262145.f_14470)
	{
		return Global_262145.f_14491;
	}
	else if (iParam0 >= Global_262145.f_14469)
	{
		return Global_262145.f_14490;
	}
	else if (iParam0 >= Global_262145.f_14468)
	{
		return Global_262145.f_14489;
	}
	else if (iParam0 >= Global_262145.f_14467)
	{
		return Global_262145.f_14488;
	}
	else if (iParam0 >= Global_262145.f_14466)
	{
		return Global_262145.f_14487;
	}
	else if (iParam0 >= Global_262145.f_14465)
	{
		return Global_262145.f_14486;
	}
	else if (iParam0 >= Global_262145.f_14464)
	{
		return Global_262145.f_14485;
	}
	else if (iParam0 >= Global_262145.f_14463)
	{
		return Global_262145.f_14484;
	}
	else if (iParam0 >= Global_262145.f_14462)
	{
		return Global_262145.f_14483;
	}
	else if (iParam0 >= Global_262145.f_14461)
	{
		return Global_262145.f_14482;
	}
	else if (iParam0 >= Global_262145.f_14460)
	{
		return Global_262145.f_14481;
	}
	else if (iParam0 >= Global_262145.f_14459)
	{
		return Global_262145.f_14480;
	}
	else if (iParam0 >= Global_262145.f_14458)
	{
		return Global_262145.f_14479;
	}
	else if (iParam0 >= Global_262145.f_14457)
	{
		return Global_262145.f_14478;
	}
	else if (iParam0 >= Global_262145.f_14456)
	{
		return Global_262145.f_14477;
	}
	else if (iParam0 >= Global_262145.f_14455)
	{
		return Global_262145.f_14476;
	}
	else if (iParam0 >= Global_262145.f_14454)
	{
		return Global_262145.f_14475;
	}
	return Global_262145.f_14474;
}

int func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_325(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_324(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_323(iVar3));
				iVar1++;
			}
			iVar2 = (iVar2 + 1);
		}
		if (iVar1 < func_319(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_319(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_323(unk_0x61E9B3BFA06B017B(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_319(int iParam0)
{
	int iVar0;
	
	if (func_322(iParam0))
	{
		iVar0 = func_320(func_321(iParam0));
		return func_130(iVar0, -1, 0);
	}
	return 0;
}

int func_320(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3635;
	}
	else if (iParam0 == 1)
	{
		return 3636;
	}
	else if (iParam0 == 2)
	{
		return 3637;
	}
	else if (iParam0 == 3)
	{
		return 3638;
	}
	else if (iParam0 == 4)
	{
		return 3639;
	}
	return 3635;
}

int func_321(int iParam0)
{
	int iVar0;
	
	if (func_322(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_322(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_323(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14673;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14671;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14675;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14669;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14667;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14677;
	}
	return 0;
}

int func_324(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_322(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1808393[iVar0] == iParam1 && Global_1808400[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_325(int iParam0)
{
	int iVar0;
	
	if (func_322(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_326()
{
	int iVar0;
	
	iVar0 = Global_2549079[func_49()];
	iVar0++;
	Global_2549079[func_49()] = iVar0;
	func_127(3654, iVar0, -1, 1);
}

void func_327()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2549076[func_49()];
	iVar1 = Global_2549085[func_49()];
	iVar0++;
	iVar1++;
	Global_2549076[func_49()] = iVar0;
	Global_2549085[func_49()] = iVar1;
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_106 = iVar1;
	func_127(3652, iVar0, -1, 1);
	func_127(3653, iVar1, -1, 1);
}

void func_328()
{
	if (func_144())
	{
		Global_2447908.f_3066.f_134 = 0;
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
	}
}

void func_329()
{
	if (func_144())
	{
		if (Global_2447908.f_3066.f_134 < 10)
		{
			Global_2447908.f_3066.f_134++;
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
		}
	}
}

void func_330()
{
	if (func_144())
	{
		if (Global_2447908.f_3066.f_134 > 0)
		{
			Global_2447908.f_3066.f_134 = (Global_2447908.f_3066.f_134 - 1);
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
		}
	}
}

int func_331(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_28;
}

int func_332(int iParam0)
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
		case 229:
		case 230:
		case 233:
			if (func_159(1) && !func_96(1))
			{
				if (func_333(func_161()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_333(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 26);
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11665) * Global_262145.f_11670));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11615) * Global_262145.f_11620));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11642) * Global_262145.f_11646));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11655) * Global_262145.f_11659));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11677) * Global_262145.f_11682));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11839) * Global_262145.f_11840));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11845) * Global_262145.f_11846));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11843) * Global_262145.f_11844));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11837) * Global_262145.f_11838));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11841) * Global_262145.f_11842));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11835) * Global_262145.f_11836));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14196;
		
		case 172:
			return Global_262145.f_14212;
		
		case 173:
			return Global_262145.f_14155;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17429;
		
		case 180:
			return Global_262145.f_17305;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17313;
		
		case 185:
			return Global_262145.f_17322;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17517;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17534;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17382;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17565;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17443;
		
		case 205:
			return Global_262145.f_17552;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17410;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17547;
		
		case 211:
			return Global_262145.f_17511;
		
		case 214:
			return Global_262145.f_18070;
		
		case 215:
			return Global_262145.f_18080;
		
		case 216:
			return Global_262145.f_18090;
		
		case 217:
			return Global_262145.f_18099;
		
		case 218:
			return Global_262145.f_18108;
		
		case 219:
			return Global_262145.f_18124;
		
		default:
	}
	return 0;
}

int func_335(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11666) * Global_262145.f_11671));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11616) * Global_262145.f_11621));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11643) * Global_262145.f_11647));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11656) * Global_262145.f_11660));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11678) * Global_262145.f_11683));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11715) * Global_262145.f_11718));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11761) * Global_262145.f_11764));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11751) * Global_262145.f_11754));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11706) * Global_262145.f_11709));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11726) * Global_262145.f_11731));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11691) * Global_262145.f_11694));
		
		case 170:
			return Global_262145.f_14138;
		
		case 171:
			return Global_262145.f_14197;
		
		case 172:
			return Global_262145.f_14213;
		
		case 173:
			return Global_262145.f_14156;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16233;
		
		case 168:
			return Global_262145.f_16232;
		
		case 179:
			return Global_262145.f_17430;
		
		case 180:
			return Global_262145.f_17306;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17314;
		
		case 185:
			return Global_262145.f_17323;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17518;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17535;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17383;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17566;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17444;
		
		case 205:
			return Global_262145.f_17553;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17411;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17548;
		
		case 211:
			return Global_262145.f_17512;
		
		case 214:
			return Global_262145.f_18071;
		
		case 215:
			return Global_262145.f_18081;
		
		case 216:
			return Global_262145.f_18091;
		
		case 217:
			return Global_262145.f_18100;
		
		case 218:
			return Global_262145.f_18109;
		
		case 219:
			return Global_262145.f_18125;
		
		case 178:
			if (func_144())
			{
				return Global_262145.f_17948;
			}
			else if (bParam1)
			{
				return Global_262145.f_17949;
			}
			break;
		
		case 188:
			if (func_144())
			{
				return Global_262145.f_18032;
			}
			else if (bParam1)
			{
				return Global_262145.f_18033;
			}
			break;
		
		case 225:
			if (func_144() && !func_157())
			{
				if (func_333(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20117;
				}
				else
				{
					return Global_262145.f_20118;
				}
			}
			else if (func_157())
			{
				return Global_262145.f_20119;
			}
			break;
		
		case 226:
			if (func_144() && !func_157())
			{
				if (func_333(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20097;
				}
				else
				{
					return Global_262145.f_20098;
				}
			}
			else if (func_157())
			{
				return Global_262145.f_20099;
			}
			break;
		
		case 227:
			if (func_144() && !func_157())
			{
				if (func_333(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20109;
				}
				else
				{
					return Global_262145.f_20110;
				}
			}
			else if (func_157())
			{
				return Global_262145.f_20111;
			}
			break;
		
		case 229:
			if (func_144() && !func_157())
			{
				if (func_333(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21272;
				}
				else
				{
					return Global_262145.f_21273;
				}
			}
			else if (func_157())
			{
				return Global_262145.f_21274;
			}
			break;
		
		case 230:
			if (func_144() && !func_157())
			{
				if (func_333(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21368;
				}
				else
				{
					return Global_262145.f_21369;
				}
			}
			else if (func_157())
			{
				return Global_262145.f_21370;
			}
			break;
		
		case 233:
			if (func_144() && !func_157())
			{
				if (func_333(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21823;
				}
				else
				{
					return Global_262145.f_21824;
				}
			}
			else if (func_157())
			{
				return Global_262145.f_21822;
			}
			break;
	}
	return 0;
}

void func_336(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_337(iParam0))
	{
		if (!func_144())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11559;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_93(iParam0))
	{
		*uParam1 = (Global_262145.f_17283 / 100f);
		*uParam2 = (Global_262145.f_17283 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11558;
		*uParam2 = Global_262145.f_11557;
	}
	if (func_93(iParam0))
	{
		if (func_260(unk_0x8CFC7D6E1DA5D304(), 1))
		{
			*uParam1 = (Global_262145.f_17282 / 100f);
			*uParam2 = (Global_262145.f_17282 / 100f);
		}
	}
	else if (func_260(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		*uParam1 = Global_262145.f_11556;
		*uParam2 = Global_262145.f_11555;
	}
	iVar0 = func_89();
	if (iVar0 != func_29())
	{
		if (func_258(unk_0x8CFC7D6E1DA5D304(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_337(int iParam0)
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

void func_338(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (unk_0x4AF13BCD120BCDBC(iParam1))
		{
			if (iParam1 == unk_0x8CFC7D6E1DA5D304())
			{
				iVar0 = 1;
			}
			else if (func_339(iParam1, unk_0x8CFC7D6E1DA5D304()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_885(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 0);
			unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
			Global_2512581.f_4878.f_201 = unk_0xE6E19D6A1FC25165();
		}
	}
}

int func_339(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_244(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_244(iParam1);
		}
	}
	return 0;
}

int func_340(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_355(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_341(&Var0);
}

int func_341(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436169.f_2909)
		{
			return 0;
		}
	}
	func_354(uParam0, uParam0->f_16);
	func_351(uParam0);
	if (func_209())
	{
		func_351(uParam0);
	}
	if (func_350(uParam0->f_1))
	{
		func_343();
		if (Global_2436169.f_2591[0 /*79*/].f_2 == 0)
		{
			Global_2436169.f_2591[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436169.f_2591[0 /*79*/].f_1 == 13 || Global_2436169.f_2591[0 /*79*/].f_1 == 53) || Global_2436169.f_2591[0 /*79*/].f_1 == 54) || Global_2436169.f_2591[0 /*79*/].f_1 == 58)
		{
			Global_2436169.f_2591[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436169.f_2591[iVar0 + 1 /*79*/] = { Global_2436169.f_2591[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436169.f_2591[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436169.f_2591[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436169.f_2591[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_343();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 1);
				Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_342(Global_2436169.f_2591[iVar0 /*79*/].f_1))
				{
					Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
					unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_342(int iParam0)
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

void func_343()
{
	bool bVar0;
	
	if (Global_2436169.f_2910)
	{
		return;
	}
	if (!Global_71120)
	{
		Global_71120 = 1;
		bVar0 = true;
	}
	func_344();
	if (bVar0)
	{
		Global_71120 = 0;
	}
}

void func_344()
{
	Global_2436169.f_2911 = 0;
	Global_2436169.f_2911.f_578 = 0;
	func_348(&(Global_2436169.f_2911.f_1));
	Global_2436169.f_2911.f_1.f_1 = 0;
	func_345(&(Global_2436169.f_2911.f_1));
}

void func_345(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xEBE532BFFE618875(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD6F1BD29497A51C8(0);
			unk_0xE2B30EB9B14EEAB2();
		}
		unk_0xEBE532BFFE618875(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x3B82047F26E2CEDB(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71120)
	{
		if (!unk_0xA43E30AC0AF7BE76(unk_0x0A91D180DDC7A1B8()))
		{
			if (!Global_71121)
			{
				if (unk_0xEC0ECEF2AF3FDA8D() && !func_347(0))
				{
					unk_0x8359CF51370FC969(800);
				}
			}
		}
	}
	func_346(0);
}

void func_346(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

bool func_347(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_348(var uParam0)
{
	func_349(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_349(var uParam0)
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

int func_350(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_351(var uParam0)
{
	if (func_353(uParam0->f_1))
	{
		uParam0->f_71 = func_352();
	}
}

int func_352()
{
	return 21;
}

int func_353(int iParam0)
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

void func_354(var uParam0, int iParam1)
{
	if (func_353(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_29() || !func_885(iParam1, 0, 1))
	{
		return;
	}
	if (func_342(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_231(iParam1, -2, 0, 0);
		}
	}
}

void func_355(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_29();
	uParam1->f_17 = func_29();
	uParam1->f_18 = func_29();
	uParam1->f_19 = func_29();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

int func_356(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_357(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_357(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_355(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_24), sParam3, 64);
	StringCopy(&(Var0.f_56), sParam8, 16);
	Var0.f_72 = uParam4;
	Var0.f_70 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_71 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_70 = iParam14;
	}
	unk_0xD2A9C3F486236CC5(&(Var0.f_68), 2);
	return func_341(&Var0);
}

int func_358()
{
	if ((func_885(unk_0x8CFC7D6E1DA5D304(), 1, 1) && !unk_0xC83C302702976DCB()) && !func_359())
	{
		return 1;
	}
	return 0;
}

bool func_359()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

void func_360(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	struct<2> Var57;
	
	if (func_477(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_475() || iParam2 == 26)
	{
		if (func_428(uParam1, iParam2, uParam3, Global_1574119, 0, func_473()))
		{
			func_427(1);
			if ((!func_426() && !func_425()) || unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1))
			{
				if (func_424())
				{
					func_422();
				}
				else
				{
					unk_0x09EF2EB55114981C(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_421(1);
						Global_1574119 = 0;
						iVar54 = -1;
						if (Global_1574304 != 1)
						{
							func_420(uParam1);
							if (unk_0xB03A1684359C50A1(uParam3->f_33, 7))
							{
								unk_0x62148293B793073B(&(uParam3->f_33), 7);
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
								if (func_885(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar35 = unk_0x3479F6F64A48251C(iVar52);
									if (!func_47(iVar35, 0))
									{
										if ((func_419(iVar35) || Global_2422724[iVar35 /*420*/].f_251 != -1) || func_418(iVar35))
										{
											iVar44 = iVar35;
											if (func_41(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_417(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_416(unk_0x8CFC7D6E1DA5D304(), 0) && func_62(unk_0x8CFC7D6E1DA5D304()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_414())
							{
								if (func_885(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar35 = unk_0x3479F6F64A48251C(iVar52);
								}
								else
								{
									iVar35 = func_29();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_413(iVar35) && func_409(iVar35, iParam2)) && func_885(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1595681[iVar44 /*678*/].f_211.f_6;
								Var38 = { func_404(iVar35) };
								if (iVar35 == unk_0x8CFC7D6E1DA5D304())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x3E8AA4B2B7764D27(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_184(iVar35) };
								iVar37 = func_398(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x18EA682CBBDF668A(iVar37);
								}
								Global_1574119++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_414())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_393(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_392(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_391(iVar35, 0);
								if (bVar34)
								{
									if (func_260(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_390(iParam5))
								{
									func_389(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_389(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xD2A9C3F486236CC5(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x3479F6F64A48251C(iVar52);
							if (func_885(iVar35, 0, 1) && !unk_0xB03A1684359C50A1(iVar49, iVar35))
							{
								iVar35 = unk_0x3479F6F64A48251C(iVar52);
							}
							else
							{
								iVar35 = func_29();
							}
							if (func_413(iVar35))
							{
								if (func_885(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1595681[iVar44 /*678*/].f_211.f_6;
									Var38 = { func_404(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_184(iVar35) };
									iVar37 = func_398(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x18EA682CBBDF668A(iVar37);
									}
									Global_1574119++;
									iVar51 = func_391(iVar35, 1);
									if (bVar34)
									{
										if (func_260(iVar35, 1))
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
									func_373(iVar35, unk_0x3E8AA4B2B7764D27(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xB03A1684359C50A1(uParam3->f_33, 11))
						{
							func_370(uParam3, uParam1);
						}
						func_7(&(uParam3->f_21));
						func_369();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xB03A1684359C50A1(uParam3->f_33, 7))
						{
							func_368(uParam3, uParam1);
							func_367(uParam1, 0, 1);
							unk_0xD2A9C3F486236CC5(&(uParam3->f_33), 7);
						}
						func_368(uParam3, uParam1);
						if (!unk_0xB03A1684359C50A1(uParam3->f_33, 11))
						{
							unk_0xD2A9C3F486236CC5(&(uParam3->f_33), 11);
						}
						if (func_363(uParam3))
						{
							Global_1574304 = 1;
						}
						func_361(uParam3);
						if (Global_1574304 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574304 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x5C716BBF766E1C70(*uParam1))
					{
						unk_0x31B38BBC4423BEAF(7);
						unk_0xC1C40A3B8772D9BA(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x31B38BBC4423BEAF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_369();
			func_421(0);
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 7))
			{
				unk_0x62148293B793073B(&(uParam3->f_33), 7);
			}
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 10))
			{
				unk_0x62148293B793073B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x3E233EDF605C23C0();
}

void func_361(var uParam0)
{
	if (!func_5(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_2(&(uParam0->f_21), 250, 0))
	{
		func_7(&(uParam0->f_21));
		func_362(0);
	}
}

void func_362(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574304 != 2)
		{
			Global_1574304 = 2;
		}
	}
	else
	{
		switch (Global_1574304)
		{
			case 0:
				Global_1574304 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_363(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x3479F6F64A48251C(uParam0->f_37);
	if (iVar15 != func_29() && func_885(iVar15, 0, 1))
	{
		Var2 = { func_184(iVar15) };
		iVar1 = func_366(uParam0, uParam0->f_37);
		if (func_365(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (unk_0x81EF0A52B5429304(&Var2))
						{
							iVar16 = 1;
							func_364(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x09D29DA94049CC42(&Var2))
					{
						iVar16 = 1;
						func_364(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (!unk_0x81EF0A52B5429304(&Var2))
						{
							iVar16 = 1;
							func_364(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_364(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (!unk_0x09D29DA94049CC42(&Var2))
						{
							iVar16 = 1;
							func_364(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x09D29DA94049CC42(&Var2))
					{
						iVar16 = 1;
						func_364(uParam0, iVar0, 0);
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

void func_364(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_365(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

var func_366(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_367(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x76F4FB5EFF5BDED5(*uParam0, "COLLAPSE"))
	{
		unk_0xD6F1BD29497A51C8(iParam1);
		unk_0xE2B30EB9B14EEAB2();
	}
	if (iParam2 == 1)
	{
		if (unk_0x76F4FB5EFF5BDED5(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

void func_368(var uParam0, var uParam1)
{
	if (!unk_0xB03A1684359C50A1(uParam0->f_33, 10))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam1, "SET_HIGHLIGHT");
		unk_0x22DD5585E00B80C3(uParam0->f_35);
		unk_0xE2B30EB9B14EEAB2();
		unk_0xD2A9C3F486236CC5(&(uParam0->f_33), 10);
	}
}

void func_369()
{
	if (Global_1574304 != 0)
	{
		Global_1574304 = 0;
	}
}

void func_370(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3479F6F64A48251C(iVar0);
		if (iVar2 != func_29())
		{
			if (func_885(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_372(uParam0->f_38[iVar0 /*2*/], 0);
					func_371(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595681[iVar0 /*678*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_371(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		if (unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_ICON"))
		{
			unk_0x22DD5585E00B80C3(iParam1);
			unk_0x22DD5585E00B80C3(iParam2);
			if (iParam2 == 65)
			{
				unk_0x22DD5585E00B80C3(iParam3);
			}
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

int func_372(int iParam0, bool bParam1)
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

void func_373(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_388() && iParam4 < func_387())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574121)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574304 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x76F4FB5EFF5BDED5(*uParam2, sVar1))
		{
			unk_0x22DD5585E00B80C3(iParam4);
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_386("");
			}
			else
			{
				unk_0x22DD5585E00B80C3(iParam10);
			}
			func_386(sParam1);
			unk_0x22DD5585E00B80C3(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_386("");
			}
			else
			{
				unk_0x22DD5585E00B80C3(65);
			}
			unk_0x22DD5585E00B80C3(-1);
			func_386("");
			if (uParam3->f_108 == 6)
			{
				func_386("");
			}
			else
			{
				func_386(&sParam5);
			}
			func_378(uParam3, iParam0);
			unk_0x27FAC60D3B3FE57C(sParam9);
			unk_0x27FAC60D3B3FE57C(sParam9);
			if (func_377(uParam3))
			{
				func_376("DPAD_FRIEND");
			}
			else if (func_375(uParam3))
			{
				func_376("DPAD_FRIEND");
			}
			else if (func_374(uParam3))
			{
				func_376("DPAD_CREW");
			}
			else
			{
				func_376("");
			}
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

bool func_374(var uParam0)
{
	return unk_0xB03A1684359C50A1(uParam0->f_33, 6);
}

bool func_375(var uParam0)
{
	return unk_0xB03A1684359C50A1(uParam0->f_33, 5);
}

void func_376(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

int func_377(var uParam0)
{
	if (func_375(uParam0) && func_374(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_378(var uParam0, int iParam1)
{
	if (func_385(iParam1))
	{
		unk_0x22DD5585E00B80C3(121);
	}
	else if (func_382(iParam1))
	{
		unk_0x22DD5585E00B80C3(122);
	}
	else if (((unk_0xB03A1684359C50A1(Global_1646129.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xB03A1684359C50A1(Global_2422724[iParam1 /*420*/].f_419, 0))
	{
		unk_0x22DD5585E00B80C3(123);
	}
	else
	{
		if (func_379())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD6F1BD29497A51C8(uParam0->f_36);
	}
}

int func_379()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (func_380() || func_247())
		{
			return 1;
		}
	}
	return 0;
}

int func_380()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return func_247();
	}
	return func_381(Global_1646129.f_116948);
}

int func_381(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4977[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_382(int iParam0)
{
	if ((func_885(iParam0, 0, 1) && func_383()) && func_97(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_383()
{
	if (func_116(unk_0x8CFC7D6E1DA5D304()) || func_384())
	{
		return 0;
	}
	return 1;
}

int func_384()
{
	switch (func_62(unk_0x8CFC7D6E1DA5D304()))
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

int func_385(int iParam0)
{
	if (func_379())
	{
		if (func_885(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_885(iParam0, 0, 1) && func_383()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_386(char* sParam0)
{
	unk_0xC34A54899652DAAF(sParam0);
}

int func_387()
{
	int iVar0;
	
	if (Global_1574121)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_388()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574121)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_389(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_388() && iParam3 < func_387())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574121)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574304 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x5C716BBF766E1C70(*uParam1))
		{
			if (unk_0x76F4FB5EFF5BDED5(*uParam1, sVar1))
			{
				unk_0x22DD5585E00B80C3(iParam3);
				if (unk_0xB03A1684359C50A1(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_386("");
				}
				else
				{
					unk_0x22DD5585E00B80C3(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xFAFFA408239A026B(sParam16))
				{
					func_376(sParam16);
				}
				else
				{
					func_386(&(uParam2->f_1));
				}
				unk_0x22DD5585E00B80C3(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_386("");
				}
				else
				{
					unk_0x22DD5585E00B80C3(65);
				}
				if (iParam12 == 1)
				{
					unk_0x22DD5585E00B80C3(iVar0);
				}
				else
				{
					unk_0x22DD5585E00B80C3(-1);
				}
				if (func_414())
				{
					func_386("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_ONE_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 5 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_ONE_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 7 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_TWO_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 8 && !unk_0xFAFFA408239A026B(&(uParam2->f_104)))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0xEF512794542297CA(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3A12001DBF78DC62(iParam10);
					}
					unk_0xBEFD1ED9B6BE5127(&(uParam2->f_104));
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_CASH");
					unk_0x7F0713FD21BA55C9(iParam10, 1);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x0ECBA72FAFCEBA59("FM_AE_CASH");
						unk_0x7F0713FD21BA55C9(iParam10, 1);
						unk_0xC30401186AC91B01();
					}
					else
					{
						unk_0x0ECBA72FAFCEBA59("FM_NG_CASH");
						unk_0x7F0713FD21BA55C9(iParam10, 1);
						unk_0xC30401186AC91B01();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xFAFFA408239A026B(&(uParam2->f_104)))
					{
						func_376(&(uParam2->f_104));
					}
					else
					{
						func_386("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam14, 6);
					unk_0xC30401186AC91B01();
				}
				else if (fParam13 != -1f)
				{
					unk_0x0ECBA72FAFCEBA59("NUMBER");
					unk_0xEF512794542297CA(fParam13, 1);
					unk_0xC30401186AC91B01();
				}
				else if (iParam10 != -1)
				{
					unk_0x22DD5585E00B80C3(iParam10);
				}
				else
				{
					func_386("");
				}
				if (uParam2->f_108 == 6)
				{
					func_386("");
				}
				else
				{
					func_386(&sParam4);
				}
				func_378(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xFAFFA408239A026B(sParam8))
				{
					func_386("");
					func_386("");
				}
				else
				{
					unk_0x27FAC60D3B3FE57C(sParam8);
					unk_0x27FAC60D3B3FE57C(sParam8);
				}
				if (func_377(uParam2))
				{
					func_376("DPAD_FRIEND");
				}
				else if (func_375(uParam2))
				{
					func_376("DPAD_FRIEND");
				}
				else if (func_374(uParam2))
				{
					func_376("DPAD_CREW");
				}
				else
				{
					func_376("");
				}
				unk_0xE2B30EB9B14EEAB2();
			}
		}
	}
}

int func_390(int iParam0)
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

int func_391(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_116(iParam0)) && !func_114(iParam0))
	{
		iVar0 = func_352();
	}
	iVar1 = func_243(iParam0);
	if (!iVar1 == -1)
	{
		return func_241(iVar1);
	}
	return iVar0;
}

char* func_392(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x46DAE6F28FA8E185())
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
			if (unk_0x46DAE6F28FA8E185())
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

int func_393(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_397(iParam3))
	{
		*fParam1 = (func_394(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_390(iParam3))
	{
		*fParam1 = (func_394(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_394(int iParam0, int iParam1)
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
			if (unk_0x46DAE6F28FA8E185())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_396(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x46DAE6F28FA8E185())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_395(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_395(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_396(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_397(int iParam0)
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

int func_398(int iParam0)
{
	int iVar0;
	
	iVar0 = func_401(iParam0);
	if (iVar0 == -1)
	{
		func_399(iParam0, 1);
		return 0;
	}
	Global_1368675[iVar0 /*5*/].f_4 = 1;
	return Global_1368675[iVar0 /*5*/].f_2;
}

void func_399(int iParam0, bool bParam1)
{
	if (!func_885(iParam0, 0, 1))
	{
		return;
	}
	if (func_401(iParam0) != -1)
	{
		return;
	}
	if (Global_1368838)
	{
		if (iParam0 == Global_1368838.f_1)
		{
			return;
		}
	}
	if (func_400(iParam0))
	{
		return;
	}
	if (Global_1368876 >= 32)
	{
		return;
	}
	Global_1368843[Global_1368876] = iParam0;
	Global_1368876++;
	if (bParam1)
	{
	}
}

int func_400(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368876)
	{
		if (Global_1368843[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_401(int iParam0)
{
	int iVar0;
	
	if (!func_885(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1368836 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368836)
	{
		if (Global_1368675[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x474A54D9A9BD0D31(Global_1368675[iVar0 /*5*/].f_2) && unk_0x8A770CC4CC05DE07(Global_1368675[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_402(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_402(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1368836)
	{
		return;
	}
	if (unk_0x474A54D9A9BD0D31(Global_1368675[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1368675[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x18EA682CBBDF668A(Global_1368675[iParam0 /*5*/].f_2), 64);
			unk_0xBD17B901DFB6DC31(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x60E35C29E0313635(Global_1368675[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1368836)
	{
		Global_1368675[iVar32 /*5*/] = { Global_1368675[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_403(&(Global_1368675[iVar32 /*5*/]));
	Global_1368836 = (Global_1368836 - 1);
}

void func_403(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x44243F2E2F58B8E3())
	{
		uParam0->f_3 = unk_0xE92FCF3C05C2EF1D();
	}
}

struct<4> func_404(int iParam0)
{
	struct<4> Var0;
	
	if (func_885(iParam0, 0, 1))
	{
		Global_2491936 = { func_184(iParam0) };
		if (unk_0x929A0C5D6A986B4F())
		{
			if (func_365(Global_2491936))
			{
				if (!unk_0x3F46CD19F4C43D2A(&Global_2491936))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xC8543F17BC4C0591(0))
		{
			return Var0;
		}
		if (func_408(&Global_2491936))
		{
			Global_2491866 = { func_406(iParam0) };
			func_405(&Global_2491866, &Var0);
		}
	}
	return Var0;
}

void func_405(var uParam0, var uParam1)
{
	unk_0x14FE7512F6617D5D(uParam0, 35, uParam1);
}

struct<35> func_406(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_407(iParam0))
	{
		return Global_1312886[unk_0x8CFC7D6E1DA5D304() /*35*/];
	}
	Var0 = { func_184(iParam0) };
	unk_0x4AEF279CFD4A57C6(&Var13, 35, &Var0);
	return Var13;
}

int func_407(int iParam0)
{
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		return 1;
	}
	return 0;
}

int func_408(var uParam0)
{
	if (unk_0x60D6796E6B9FD3DB())
	{
		if (unk_0xE906D9FB40E35957() && unk_0x9FDA5C5DFB3FE364(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_115(iParam0) || func_412(iParam0)) || func_411(iParam0))
		{
			return 0;
		}
	}
	if (!func_410(iParam0))
	{
		return 0;
	}
	if ((!func_419(iParam0) && Global_2422724[iParam0 /*420*/].f_251 == -1) && !func_418(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_410(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_142, 22);
}

bool func_411(int iParam0)
{
	if (func_115(iParam0))
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 8);
}

int func_412(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 10) || unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 9));
	}
	return 0;
}

int func_413(int iParam0)
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
		if (unk_0xB03A1684359C50A1(Global_1595681[iVar0 /*678*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_414()
{
	switch (func_62(unk_0x8CFC7D6E1DA5D304()))
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
	switch (func_415(unk_0x8CFC7D6E1DA5D304()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_114(unk_0x8CFC7D6E1DA5D304()))
	{
		switch (func_62(unk_0x8CFC7D6E1DA5D304()))
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

int func_415(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/];
	}
	return -1;
}

int func_416(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 && func_85(Global_1627460[iParam0 /*530*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1)
	{
		if (func_85(Global_1627460[iParam0 /*530*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_885(unk_0x3479F6F64A48251C(iVar0), 0, 1))
		{
			iVar1 = unk_0x3479F6F64A48251C(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((func_419(iVar1) || Global_2422724[iVar1 /*420*/].f_251 != -1) || func_418(iVar1))
				{
					if (func_258(iVar1, iParam1, 0))
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

bool func_418(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196 != 0;
}

int func_419(int iParam0)
{
	if (func_885(iParam0, 0, 1))
	{
		if (func_885(unk_0x8CFC7D6E1DA5D304(), 0, 1))
		{
			if (unk_0xE392CC8A2777F819(iParam0, unk_0x8CFC7D6E1DA5D304()) || func_62(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_420(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x22DD5585E00B80C3(0);
		unk_0xE2B30EB9B14EEAB2();
	}
}

void func_421(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1357210.f_2 == 0)
		{
			Global_1357210.f_2 = 1;
		}
	}
	else if (Global_1357210.f_2 == 1)
	{
		Global_1357210.f_2 = 0;
	}
}

void func_422()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1))
	{
		if (func_117())
		{
			func_423();
		}
	}
}

void func_423()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436169.f_2591[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
			unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

int func_424()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 0) && func_117())
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1) && func_117())
	{
		return 1;
	}
	return 0;
}

int func_425()
{
	if (func_117())
	{
		if (func_342(Global_2436169.f_2591[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_426()
{
	if (func_117())
	{
		if (func_353(Global_2436169.f_2591[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_427(int iParam0)
{
	if (Global_1357210.f_1 != Global_1357210)
	{
		Global_1357210.f_1 = Global_1357210;
	}
	if (Global_1357210 != iParam0)
	{
		Global_1357210 = iParam0;
	}
}

int func_428(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_472(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_471();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_470())
		{
			if (func_469() > 0 && Global_1574121)
			{
				unk_0xA92183CDC960EFB2();
				unk_0x882C4E3F687152C5(fVar7);
				unk_0xE05212008FE9A018(18);
				if (unk_0x622E10ED992CEB95())
				{
					unk_0xCA68B0AB8A5AF85A();
				}
				unk_0xE05212008FE9A018(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_455())
		{
			func_454(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4556, 26))
	{
		func_454(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_19)))
	{
		if (func_469() == 1)
		{
			func_453(bVar6, uParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_454(uParam0, uParam2, 0);
		}
	}
	if (func_5(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x622E10ED992CEB95())
		{
			unk_0xCA68B0AB8A5AF85A();
		}
		unk_0xE05212008FE9A018(10);
		if (func_2(&(uParam2->f_19), 10000, 0) || (func_469() == 0 && !bParam5))
		{
			func_454(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_452();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0xA92183CDC960EFB2();
				}
				unk_0xE05212008FE9A018(18);
			}
			if (!unk_0xB03A1684359C50A1(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_452();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0xA92183CDC960EFB2();
					}
					unk_0xE05212008FE9A018(18);
				}
				unk_0x882C4E3F687152C5(fVar7);
				if (func_453(bVar6, uParam0, 0))
				{
					func_420(uParam0);
					sVar4 = func_450(iParam1, &(Global_1646129.f_116955), bParam4);
					Var0 = { func_448(iParam1) };
					if (bParam4)
					{
						func_445(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_438(uParam0, func_442(uParam2), func_439(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_434(uParam0, func_436(uParam2), func_435(), -1);
					}
					else if (func_379())
					{
						uParam2->f_34 = Global_1574120;
						func_445(uParam0, sVar4, &Var0, 1, -1, Global_1574120, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574120;
						func_445(uParam0, sVar4, "", 0, -1, Global_1574120, 1);
					}
					else
					{
						iVar8 = func_429(iParam1);
						func_445(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xD2A9C3F486236CC5(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xB03A1684359C50A1(uParam2->f_33, 0))
			{
				Global_1574119 = uParam3;
				Global_1574118 = 1;
				unk_0x882C4E3F687152C5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574120)
					{
						unk_0x62148293B793073B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_433())
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
			if (func_432(unk_0x8CFC7D6E1DA5D304()))
			{
				iVar0 = 20;
			}
			if (func_431(unk_0x8CFC7D6E1DA5D304()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_430(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar0 = 2;
	}
	if (func_207())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_430(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 4;
}

bool func_431(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

bool func_432(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

bool func_433()
{
	return Global_1646129.f_1 == 0;
}

void func_434(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (unk_0xFAFFA408239A026B(sParam2))
		{
			func_376(sParam1);
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		func_376("");
		if (iParam3 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam3);
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

char* func_435()
{
	switch (func_62(unk_0x8CFC7D6E1DA5D304()))
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

char* func_436(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
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
	switch (func_62(unk_0x8CFC7D6E1DA5D304()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
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
			if (func_88())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_96(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_96(1))
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
			if (func_437(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_437(int iParam0)
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

void func_438(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (unk_0xFAFFA408239A026B(sParam2))
		{
			func_376(sParam1);
		}
		else if (func_415(unk_0x8CFC7D6E1DA5D304()) == 133)
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT_C");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		func_376("");
		if (iParam3 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam3);
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

char* func_439(var uParam0)
{
	int iVar0;
	
	iVar0 = func_415(unk_0x8CFC7D6E1DA5D304());
	if (func_441())
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
			switch (func_440())
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

int func_440()
{
	if (func_415(unk_0x8CFC7D6E1DA5D304()) == 133)
	{
		return Global_2512581.f_4799;
	}
	return -1;
}

bool func_441()
{
	return Global_1595554;
}

char* func_442(var uParam0)
{
	int iVar0;
	
	iVar0 = func_415(unk_0x8CFC7D6E1DA5D304());
	if (func_441())
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
			if (func_444() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_444() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_440())
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
			if (func_443() == 1)
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

int func_443()
{
	return Global_2512581.f_4802;
}

int func_444()
{
	if (func_415(unk_0x8CFC7D6E1DA5D304()) == 132)
	{
		return Global_2512581.f_4797;
	}
	return -1;
}

void func_445(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_386(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x0ECBA72FAFCEBA59(sParam1);
			unk_0x3A12001DBF78DC62(iParam5);
			unk_0xC30401186AC91B01();
		}
		else
		{
			func_376(sParam1);
		}
		if (func_470() && iParam6)
		{
			if (func_447())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x0ECBA72FAFCEBA59("LBD_DPD_CNT");
			unk_0x3A12001DBF78DC62(iVar0);
			unk_0x3A12001DBF78DC62(iVar1);
			unk_0xC30401186AC91B01();
		}
		else
		{
			func_376(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam4);
			if (func_446(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0x22DD5585E00B80C3(166);
			}
			else if (func_209())
			{
				unk_0x22DD5585E00B80C3(220);
			}
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

int func_446(int iParam0)
{
	if (func_432(iParam0) || func_431(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_447()
{
	return Global_1574121;
}

struct<4> func_448(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_449(unk_0x8CFC7D6E1DA5D304()) || func_430(unk_0x8CFC7D6E1DA5D304()))
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
			StringIntConCat(&Var0, Global_1646129.f_33, 16);
			break;
	}
	if (func_379() && unk_0x13C2BC1B63ABBCD5())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1646129.f_33, 16);
	}
	return Var0;
}

bool func_449(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 5;
}

char* func_450(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_379() || unk_0xFAFFA408239A026B(uParam1)))
	{
		uVar0 = func_451();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574322 == 0)
		{
			Global_1574322 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xFAFFA408239A026B(sParam1))
	{
		if (Global_1574322 == 1)
		{
			Global_1574322 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574322 == 0)
		{
			Global_1574322 = 1;
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

char* func_451()
{
	if (unk_0x1F02F29AB756F2E5())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x1A236D41ABF3E7DB())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xF64E18195138BB4E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xE0662BA98BE124FF())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_452()
{
	Global_36763 = 1;
}

bool func_453(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("mp_matchmaking_card");
	}
	return unk_0x5C716BBF766E1C70(*uParam1);
}

void func_454(var uParam0, var uParam1, bool bParam2)
{
	unk_0x62148293B793073B(&(uParam1->f_33), 7);
	Global_1574119 = 0;
	func_369();
	Global_1574118 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_19)))
		{
			func_7(&(uParam1->f_19));
		}
	}
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0xEBE532BFFE618875(uParam0);
	}
	if (unk_0xB03A1684359C50A1(uParam1->f_33, 0))
	{
		unk_0x62148293B793073B(&(uParam1->f_33), 0);
	}
	unk_0x882C4E3F687152C5(0f);
}

int func_455()
{
	if (func_359())
	{
		return 0;
	}
	if (func_468())
	{
		return 0;
	}
	if (!func_466())
	{
		return 0;
	}
	if (!func_464())
	{
		return 0;
	}
	if (func_463(8, -1))
	{
		return 0;
	}
	if (func_469() == 2)
	{
		return 0;
	}
	if (Global_2512581.f_4511)
	{
		return 0;
	}
	if (func_462())
	{
		return 0;
	}
	else if (!func_459(unk_0x8CFC7D6E1DA5D304(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_458(1) || func_456(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (func_253(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (Global_1794814)
	{
		return 0;
	}
	if (Global_1794818)
	{
		return 0;
	}
	if (func_217(0))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350792)
	{
		return 0;
	}
	if ((Global_1818764.f_705.f_5 || Global_1821575.f_705.f_5) || Global_1817807.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_456(bool bParam0)
{
	if (unk_0x0A596203A8341362())
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_457(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x02EA7C5633421A0F(0, 25) || unk_0x02EA7C5633421A0F(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0x02EA7C5633421A0F(0, 19) || (!bParam0 && unk_0xBAEF57A3E716CC8D(0, 19)))
	{
		return 1;
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (((unk_0x02EA7C5633421A0F(0, 166) || unk_0x02EA7C5633421A0F(0, 167)) || unk_0x02EA7C5633421A0F(0, 168)) || unk_0x02EA7C5633421A0F(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xBAEF57A3E716CC8D(0, 166) || unk_0xBAEF57A3E716CC8D(0, 167)) || unk_0xBAEF57A3E716CC8D(0, 168)) || unk_0xBAEF57A3E716CC8D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)
{
	int iVar0;
	
	if (unk_0x0A88AA21DE172C4B())
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			unk_0x75CE6F8BEC2654E3(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_458(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_459(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595681[iParam0 /*678*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_460(int iParam0)
{
	return func_461(iParam0);
}

bool func_461(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_13.f_1, 0);
}

bool func_462()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196 != 0;
}

bool func_463(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

int func_464()
{
	if (func_465() == 0)
	{
		return 1;
	}
	return 0;
}

int func_465()
{
	return Global_1312466.f_18;
}

int func_466()
{
	if (func_467())
	{
		return 1;
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 0;
	}
	if (unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5())
	{
		return 0;
	}
	if (unk_0xC5B946266AEC83EB())
	{
		return 0;
	}
	return 1;
}

bool func_467()
{
	return Global_1312438;
}

bool func_468()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 5;
}

int func_469()
{
	return Global_1357213.f_68;
}

int func_470()
{
	if (Global_1574120 > 16)
	{
		return 1;
	}
	return 0;
}

float func_471()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x8A9A973E0D52B2FF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_472(int iParam0)
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

int func_473()
{
	if (func_474(unk_0x8CFC7D6E1DA5D304()))
	{
		return Global_1316731;
	}
	return 0;
}

int func_474(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_47(iParam0, 0))
		{
			return unk_0x8E5F52AEFF24A334(iParam0);
		}
	}
	return 0;
}

int func_475()
{
	if (func_473())
	{
		return 1;
	}
	if (func_411(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_441())
	{
		return 1;
	}
	if (func_116(unk_0x8CFC7D6E1DA5D304()))
	{
		switch (func_415(unk_0x8CFC7D6E1DA5D304()))
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
				if (!func_476(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_476(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_476(unk_0x8CFC7D6E1DA5D304()))
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

bool func_476(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 4);
}

int func_477(int iParam0)
{
	if ((iParam0 == 26 && func_116(unk_0x8CFC7D6E1DA5D304())) && !func_114(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_63(unk_0x8CFC7D6E1DA5D304(), 0) && func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			return 1;
		}
		if (func_109(unk_0x8CFC7D6E1DA5D304()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_478()
{
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		func_498();
		unk_0x9C7EE7DE7041A3F4(0, 140, 1);
		unk_0x9C7EE7DE7041A3F4(0, 141, 1);
		unk_0x9C7EE7DE7041A3F4(0, 142, 1);
		unk_0x9C7EE7DE7041A3F4(0, 143, 1);
		unk_0x9C7EE7DE7041A3F4(0, 24, 1);
		unk_0x9C7EE7DE7041A3F4(0, 24, 1);
		unk_0x9C7EE7DE7041A3F4(0, 345, 1);
		unk_0x9C7EE7DE7041A3F4(0, 346, 1);
		unk_0x9C7EE7DE7041A3F4(0, 347, 1);
	}
}

bool func_479()
{
	return func_27() >= 2;
}

void func_480()
{
	func_53(3000, 3000);
}

void func_481()
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (((((unk_0x245260905C77602B(iVar0) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("hydra")) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("savage")) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("buzzard")) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("insurgent")) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("valkyrie"))
		{
			unk_0x9C7EE7DE7041A3F4(0, 68, 1);
			unk_0x9C7EE7DE7041A3F4(0, 69, 1);
			unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		}
	}
}

void func_482()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!unk_0xE769D9B5158D0F11(uLocal_871[iVar0]))
		{
			if (unk_0x5AD42783360AB57E(Local_921.f_19[iVar0]))
			{
				uLocal_871[iVar0] = unk_0xA8EDC17CEEA40DFA(unk_0xC6442477EF1FCEE7(Local_921.f_19[iVar0]));
				unk_0xDC0EBFC7730AA226(uLocal_871[iVar0], 351);
				unk_0x71925FF3194E84CE(uLocal_871[iVar0], 2);
				unk_0x61C2EC67C90074E5(uLocal_871[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_483()
{
	unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4877), 1);
}

void func_484(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_114(unk_0x8CFC7D6E1DA5D304()))
	{
		return;
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_490(uParam2);
		return;
	}
	iVar1 = func_62(unk_0x8CFC7D6E1DA5D304());
	if (unk_0x9D39145AD645E383(func_489(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (uParam2->f_1 > -1)
	{
		iVar0 = uParam2->f_1;
	}
	if (!unk_0xB03A1684359C50A1(*uParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (unk_0x9BEA833CAF67289C(func_489(iVar1)))
			{
				unk_0xD2A9C3F486236CC5(uParam2, 0);
				unk_0xD2A9C3F486236CC5(uParam2, 1);
			}
		}
	}
	if (unk_0xB03A1684359C50A1(*uParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xB03A1684359C50A1(*uParam2, 2))
			{
				if (unk_0x6662DABCFF1B4AD5(func_488(iVar1)))
				{
					unk_0x9FC66CAE22E74E58("AllowScoreAndRadio", 1);
					unk_0x9A70D1B91A853FDD(0);
					unk_0xD2A9C3F486236CC5(uParam2, 2);
				}
			}
			if (!unk_0xB03A1684359C50A1(*uParam2, 3))
			{
				if (unk_0x9BEA833CAF67289C(func_487(iVar1)))
				{
					unk_0xD2A9C3F486236CC5(uParam2, 3);
				}
			}
			if (unk_0xB03A1684359C50A1(*uParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xB03A1684359C50A1(*uParam2, 4))
					{
						unk_0x9A70D1B91A853FDD(1);
						unk_0x9FC66CAE22E74E58("AllowScoreAndRadio", 0);
						unk_0xD2A9C3F486236CC5(uParam2, 4);
					}
					if (iParam0 <= 5000 && func_486(iVar1))
					{
						if (!unk_0xB03A1684359C50A1(*uParam2, 8))
						{
							unk_0x929C3CBA660376D5(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							unk_0xD2A9C3F486236CC5(uParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (unk_0x9BEA833CAF67289C(func_485(iVar1)))
						{
							unk_0x633C8E78F68C0DAE(func_488(iVar1));
							unk_0x62148293B793073B(uParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_485(int iParam0)
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
		case 229:
		case 230:
		case 233:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_486(int iParam0)
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

char* func_487(int iParam0)
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
		case 229:
		case 230:
		case 233:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	return "FM_COUNTDOWN_30S";
}

char* func_488(int iParam0)
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
		case 229:
		case 230:
		case 233:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_489(int iParam0)
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
		case 229:
		case 230:
		case 233:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_490(var uParam0)
{
	int iVar0;
	
	iVar0 = func_62(unk_0x8CFC7D6E1DA5D304());
	if (unk_0xB03A1684359C50A1(*uParam0, 1))
	{
		if (!unk_0xB03A1684359C50A1(*uParam0, 5))
		{
			if (unk_0xB03A1684359C50A1(*uParam0, 2))
			{
				if (!unk_0xB03A1684359C50A1(*uParam0, 4))
				{
					unk_0x9A70D1B91A853FDD(1);
					unk_0x9FC66CAE22E74E58("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0xB03A1684359C50A1(*uParam0, 6))
			{
				if (unk_0x9BEA833CAF67289C(func_488(iVar0)))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 6);
				}
			}
			if (unk_0xB03A1684359C50A1(*uParam0, 6))
			{
				if (!unk_0xB03A1684359C50A1(*uParam0, 7))
				{
					if (unk_0x9BEA833CAF67289C(func_485(iVar0)))
					{
						unk_0xD2A9C3F486236CC5(uParam0, 7);
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 7))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 5);
				}
			}
		}
	}
}

void func_491(var uParam0)
{
	unk_0xEBE532BFFE618875(uParam0);
	unk_0x2E46A60AC2DC5A3E("HUD_MINI_GAME_SOUNDSET");
}

void func_492()
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!func_44(unk_0x85D34259F4F52150(), 8))
		{
			if (func_495())
			{
				func_81(8);
				if (func_5(&uLocal_914))
				{
					func_7(&uLocal_914);
				}
			}
		}
		else if (!func_495())
		{
			func_79(8);
		}
		if (iLocal_865 >= 0)
		{
			if (func_495())
			{
				if (!unk_0x688DCBE66AEC44C4(iLocal_865))
				{
					unk_0xEF5B50EACBB40FA0(iLocal_865);
				}
			}
		}
		if (func_44(unk_0x85D34259F4F52150(), 1))
		{
			if (Local_956[iLocal_861 /*6*/].f_5 == 3)
			{
				if (Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_237 == 99)
				{
					if (!func_44(unk_0x85D34259F4F52150(), 8))
					{
						if (!func_5(&uLocal_914))
						{
							if (func_493())
							{
								unk_0x929C3CBA660376D5(iLocal_865, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							}
							else
							{
								unk_0x929C3CBA660376D5(iLocal_865, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							}
							func_4(&uLocal_914, 0, 0);
						}
						if (func_5(&uLocal_914))
						{
							if (!func_2(&uLocal_914, 10000, 0))
							{
							}
							else if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
							{
								iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
								unk_0x9386E31BEF1030F5(iVar0, 1, 0, -1);
								Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_4++;
							}
							else
							{
								unk_0x874004759C4BE8DC(unk_0x18F7BE9ACB7D08F4(), 0);
								Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_4++;
							}
						}
					}
					if (!func_493())
					{
						func_498();
						unk_0x9C7EE7DE7041A3F4(0, 140, 1);
						unk_0x9C7EE7DE7041A3F4(0, 141, 1);
						unk_0x9C7EE7DE7041A3F4(0, 142, 1);
						unk_0x9C7EE7DE7041A3F4(0, 143, 1);
						unk_0x9C7EE7DE7041A3F4(0, 24, 1);
						unk_0x9C7EE7DE7041A3F4(0, 24, 1);
					}
				}
				else if (func_5(&uLocal_914))
				{
					func_7(&uLocal_914);
				}
			}
		}
	}
}

int func_493()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar1 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			iVar0 = unk_0x4F69FBD64CDF125B(iVar1);
			if (func_494(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	if (unk_0x422717A3330EA45D(iParam0) && !unk_0x93CA7A248A4D402A(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_495()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	func_496(&Var0, &Var3, &uVar6);
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Var0, Var3, uVar6, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_496(var uParam0, var uParam1, var uParam2)
{
	switch (Local_921.f_31)
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

void func_497(bool bParam0)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam0)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	unk_0x9C7EE7DE7041A3F4(0, 69, 1);
	unk_0x9C7EE7DE7041A3F4(0, 70, 1);
	unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
}

void func_498()
{
	unk_0x9C7EE7DE7041A3F4(0, 69, 1);
	unk_0x9C7EE7DE7041A3F4(0, 70, 1);
	unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 91, 1);
	unk_0x9C7EE7DE7041A3F4(0, 92, 1);
	unk_0x9C7EE7DE7041A3F4(0, 99, 1);
	unk_0x9C7EE7DE7041A3F4(0, 100, 1);
	unk_0x9C7EE7DE7041A3F4(0, 24, 1);
	unk_0x9C7EE7DE7041A3F4(0, 257, 1);
	unk_0x9C7EE7DE7041A3F4(0, 37, 1);
}

void func_499()
{
	if (!func_505())
	{
		return;
	}
	if (!unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == Global_1312576.f_9)
	{
		return;
	}
	func_500();
}

void func_500()
{
	func_502();
	func_501(0);
}

void func_501(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x44243F2E2F58B8E3();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xE92FCF3C05C2EF1D();
		Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_502()
{
	if (!func_504())
	{
	}
	if (func_505())
	{
		unk_0xE444E45D40243E87(&(Global_1312576.f_12));
		func_503();
		unk_0xF1591A76844D3AC1();
	}
}

void func_503()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			unk_0x3A12001DBF78DC62(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_504()
{
	if (!func_505())
	{
		return 0;
	}
	unk_0x096CAD0A8332D384(&(Global_1312576.f_12));
	func_503();
	return unk_0x45CD208BAEE25DF4();
}

int func_505()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

void func_506(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_34(unk_0x8CFC7D6E1DA5D304());
	if (bParam0)
	{
		iLocal_879 = unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4());
		unk_0x641E77554763EF06(unk_0x18F7BE9ACB7D08F4(), uLocal_876[iVar0]);
		func_77(0);
		func_509();
		func_507();
	}
}

void func_507()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x8CFC7D6E1DA5D304());
	func_66();
	switch (Local_921.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_508(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_508(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_508(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_508(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_508(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_508(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_508(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_508(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_508(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_508(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_508(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_508(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_508(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_508(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_508(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_508(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_508(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_508(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_508(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_508(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_508(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_508(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_508(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_508(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_508(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_508(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_508(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_508(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_508(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_508(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_508(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_508(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_508(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_508(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_508(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_508(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_508(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_508(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_508(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_508(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_508(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_508(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_508(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_508(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_508(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_508(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_508(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_508(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_508(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_508(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_508(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_508(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_508(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_508(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_508(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_508(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_508(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_508(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_508(struct<3> Param0, float fParam3)
{
	if (Global_2405047.f_1720 < 101)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405047.f_1721[Global_2405047.f_1720 /*4*/] = { Param0 };
		Global_2405047.f_1721[Global_2405047.f_1720 /*4*/].f_3 = fParam3;
		Global_2405047.f_1720++;
	}
}

void func_509()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x8CFC7D6E1DA5D304());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1);
	func_511(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0, 0);
	switch (Local_921.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_510(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_510(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_510(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_510(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_510(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_510(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_510(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_510(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_510(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_510(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_510(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_510(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_510(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_510(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_510(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_510(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_510(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_510(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_510(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_510(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_510(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_510(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_510(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_510(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_510(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_510(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_510(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_510(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_510(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_510(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_510(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_510(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_510(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_510(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_510(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_510(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_510(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_510(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_510(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_510(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_510(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_510(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_510(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_510(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_510(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_510(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_510(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_510(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_510(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_510(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_510(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_510(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_510(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_510(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_510(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_510(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_510(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_510(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_510(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2405047.f_1719)
	{
	}
	if (Global_2405047.f_686 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405047.f_686.f_1[Global_2405047.f_686 /*5*/] = { Param0 };
		Global_2405047.f_686.f_1[Global_2405047.f_686 /*5*/].f_3 = fParam3;
		Global_2405047.f_686.f_1[Global_2405047.f_686 /*5*/].f_4 = iParam4;
		Global_2405047.f_686++;
	}
}

void func_511(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0xC542C0B6386400EF(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2405047.f_44.f_65 = bParam0;
	Global_2405047.f_44.f_67 = iParam1;
	Global_2405047.f_44.f_68 = bParam2;
	Global_2405047.f_44.f_172 = iParam3;
	Global_2405047.f_44.f_66 = iParam4;
	Global_2405047.f_44.f_174 = bParam5;
	Global_2405047.f_44.f_175 = bParam7;
	Global_2405047.f_44.f_179 = iParam6;
	Global_2405047.f_44.f_176 = iParam8;
	Global_2405047.f_44.f_177 = iParam9;
	Global_2405047.f_44.f_178 = bParam10;
	if (!bParam0)
	{
		func_514();
	}
	if (bParam2)
	{
		uVar0 = func_513();
		if (unk_0x31F12808DC47A9E5(uVar0))
		{
			if (!unk_0x90D1FDC9D31B7BE1(iVar0))
			{
				if (unk_0x84E7E48409E0DA9F(iVar0))
				{
					unk_0x337F2213526139E0(iVar0, 0, 1);
					bVar1 = true;
				}
			}
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0xE54DCC6B21FDC95A(iVar0, 1))
				{
					if (!unk_0x1800B99666D25740(iVar0))
					{
						unk_0xB9A913FE4C5AD71F(unk_0x565DEBE7A0FD63C3(iVar0));
					}
				}
			}
			if (unk_0x1800B99666D25740(iVar0))
			{
				if (bVar1)
				{
					unk_0x4F5FF3F3FDCAB15D(&iVar0);
				}
				if (bParam5)
				{
					if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
					{
						unk_0xF321DFA4C895508B(iVar0, 1);
					}
				}
				if (bParam7)
				{
					if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
					{
						unk_0x5D41CFDE94DA9F49(iVar0, 0);
					}
				}
				if (iParam6 > -1)
				{
					unk_0x62270578972B4C56(iVar0, iParam6, iParam6);
					unk_0xD7C3FB938E520431(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_512(iVar0);
				}
			}
		}
	}
}

void func_512(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x1800B99666D25740(iParam0))
		{
			if (Global_1817708 > -1)
			{
				if (unk_0x23E808B211571A22("GBMissionFire", 3))
				{
					if (!unk_0x788C6B35BB3FCF53(iParam0, "GBMissionFire"))
					{
						unk_0x3259E4661D22EB25(iParam0, "GBMissionFire", Global_1817708);
					}
				}
			}
		}
	}
}

var func_513()
{
	return Global_2405047.f_2628;
}

void func_514()
{
	struct<101> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var0.f_99 = -1;
	Global_2405047.f_44.f_69 = { Var0 };
	Global_2405047.f_44.f_170 = 0;
}

void func_515()
{
	if (!func_44(unk_0x85D34259F4F52150(), 1))
	{
		return;
	}
	if (!func_674(7))
	{
		func_531(&uLocal_101);
		func_650(7);
		unk_0x8DE1BAABD1480350(func_530(func_34(unk_0x8CFC7D6E1DA5D304())), 50f, 1);
	}
	if (!func_44(unk_0x85D34259F4F52150(), 7))
	{
		if (func_529(&uLocal_101))
		{
			if (func_17(10))
			{
				if (func_516(&uLocal_101, 1, 0, 1))
				{
					func_81(7);
				}
			}
		}
	}
}

int func_516(var uParam0, bool bParam1, int iParam2, bool bParam3)
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
	
	if (func_529(uParam0))
	{
		if (!func_528(&(uParam0->f_3)))
		{
			func_526(&(uParam0->f_3));
		}
		unk_0x31B38BBC4423BEAF(4);
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = unk_0xF34EE736CF047844(func_523(&(uParam0->f_3)));
		iVar1 = unk_0x18DD02B781D4AD2F((iVar0 - 3));
		bVar2 = false;
		if (func_522(uParam0->f_1, 4))
		{
			if (uParam0->f_2 >= 5)
			{
				if (!func_522(uParam0->f_1, 16))
				{
					unk_0x929C3CBA660376D5(-1, "GO", "HUD_MINI_GAME_SOUNDSET", 0);
					func_520(&(uParam0->f_1), 16);
					unk_0x9D88FD3554144E49();
				}
			}
			else
			{
				uParam0->f_2++;
			}
		}
		if (!func_522(uParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_522(uParam0->f_1, 1))
			{
				func_520(&(uParam0->f_1), 1);
				unk_0x929C3CBA660376D5(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_519(uParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_522(uParam0->f_1, 2))
			{
				func_520(&(uParam0->f_1), 2);
				unk_0x929C3CBA660376D5(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_519(uParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_522(uParam0->f_1, 4))
			{
				func_520(&(uParam0->f_1), 4);
				unk_0x929C3CBA660376D5(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_519(uParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_522(uParam0->f_1, 8))
			{
				func_520(&(uParam0->f_1), 8);
				unk_0x9BEA833CAF67289C("BIKER_JOUST_FIGHT");
				unk_0x954894782056D6CB(18, &uVar3, &uVar4, &uVar5, &uVar6);
				unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MESSAGE");
				func_376("CNTDWN_GO");
				unk_0x22DD5585E00B80C3(uVar3);
				unk_0x22DD5585E00B80C3(uVar4);
				unk_0x22DD5585E00B80C3(uVar5);
				unk_0xD6F1BD29497A51C8(1);
				unk_0xE2B30EB9B14EEAB2();
				func_81(6);
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
		if ((iParam2 && func_518()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				uParam0->f_1 = 0;
				func_517(&(uParam0->f_3));
			}
			unk_0xA11D9B06B99FE786("RACES_RADIO_MUTE_scene");
			unk_0x64D773F3BE6DC50A("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0xF02902C16AF3CA92())
			{
				if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar7)))
				{
					iVar8 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iVar7));
					if (iVar8 != unk_0x8CFC7D6E1DA5D304())
					{
						iVar9 = unk_0x6604E096142B4B55(iVar8);
						if (unk_0x657B649BA2AD3582(iVar9, 0))
						{
							iVar10 = unk_0x5AD687C3474F04B4(iVar9, 0);
							unk_0x39801E786EBB5201(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
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

void func_517(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_518()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0x02EA7C5633421A0F(0, 18) || unk_0x02EA7C5633421A0F(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_519(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x954894782056D6CB(12, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MESSAGE");
	unk_0x0ECBA72FAFCEBA59("NUMBER");
	unk_0x3A12001DBF78DC62(unk_0x18DD02B781D4AD2F(iParam1));
	unk_0xC30401186AC91B01();
	unk_0x22DD5585E00B80C3(uVar0);
	unk_0x22DD5585E00B80C3(uVar1);
	unk_0x22DD5585E00B80C3(uVar2);
	unk_0xD6F1BD29497A51C8(1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_520(var uParam0, int iParam1)
{
	func_521(uParam0, iParam1);
}

void func_521(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_522(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_523(var uParam0)
{
	if (func_528(uParam0))
	{
		if (func_525(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_524(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_524(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_525(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

void func_526(var uParam0)
{
	func_527(uParam0, 0f);
}

void func_527(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_524(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_528(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

int func_529(var uParam0)
{
	if (!unk_0x5C716BBF766E1C70(*uParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_530(int iParam0)
{
	switch (Local_921.f_31)
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

void func_531(var uParam0)
{
	*uParam0 = unk_0xBD7D7877C82BE42F("COUNTDOWN");
}

void func_532()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_44(unk_0x85D34259F4F52150(), 1))
		{
			func_79(1);
		}
		if (func_44(unk_0x85D34259F4F52150(), 2))
		{
			func_79(2);
		}
		return;
	}
	if (func_554() || func_551())
	{
		func_498();
		unk_0x9C7EE7DE7041A3F4(0, 140, 1);
		unk_0x9C7EE7DE7041A3F4(0, 141, 1);
		unk_0x9C7EE7DE7041A3F4(0, 142, 1);
		unk_0x9C7EE7DE7041A3F4(0, 143, 1);
		unk_0x9C7EE7DE7041A3F4(0, 24, 1);
		unk_0x9C7EE7DE7041A3F4(0, 345, 1);
		unk_0x9C7EE7DE7041A3F4(0, 346, 1);
		unk_0x9C7EE7DE7041A3F4(0, 347, 1);
	}
	if (func_554())
	{
		if (!func_44(unk_0x85D34259F4F52150(), 4))
		{
			func_81(4);
			unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 0);
			unk_0x734FF04BC149973A(0);
			unk_0x343E01BBD8361D5F(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_550(2))
			{
				func_549(2);
			}
			if (!func_78())
			{
				if (func_550(3))
				{
					func_549(3);
				}
				iVar1 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
				iVar0 = unk_0x4F69FBD64CDF125B(iVar1);
				if (func_494(iVar0))
				{
					unk_0xDCFE648D80E16920(iVar1, 1);
					func_548(3);
					if (func_550(4))
					{
						func_549(4);
					}
					if (!func_44(unk_0x85D34259F4F52150(), 2))
					{
						func_81(2);
					}
					if (unk_0xB03A1684359C50A1(Local_921.f_2, unk_0xA651DA0BC9FD8FA4()))
					{
						if (!func_44(unk_0x85D34259F4F52150(), 1))
						{
							unk_0x9BEA833CAF67289C("BIKER_JOUST_START");
							func_81(1);
							func_546();
							unk_0x74526DD63FA067F5(1);
						}
						if (!func_545() || !func_544())
						{
							if (func_45(unk_0x8CFC7D6E1DA5D304()))
							{
								if (!func_545())
								{
									func_533(6);
								}
							}
							else
							{
								func_533(7);
							}
						}
						else
						{
							func_533(8);
						}
					}
				}
				else
				{
					if (func_44(unk_0x85D34259F4F52150(), 1))
					{
						func_79(1);
					}
					if (func_44(unk_0x85D34259F4F52150(), 2))
					{
						func_79(2);
					}
					func_533(4);
				}
			}
			else
			{
				if (func_44(unk_0x85D34259F4F52150(), 1))
				{
					func_79(1);
				}
				if (func_44(unk_0x85D34259F4F52150(), 2))
				{
					func_79(2);
				}
				if (func_44(unk_0x85D34259F4F52150(), 4))
				{
					func_79(4);
				}
				func_533(3);
			}
		}
		else
		{
			if (func_44(unk_0x85D34259F4F52150(), 1))
			{
				func_79(1);
			}
			if (func_44(unk_0x85D34259F4F52150(), 2))
			{
				func_79(2);
			}
			func_533(2);
		}
	}
	else
	{
		if (func_44(unk_0x85D34259F4F52150(), 1))
		{
			func_79(1);
		}
		if (func_44(unk_0x85D34259F4F52150(), 2))
		{
			func_79(2);
		}
		if (func_44(unk_0x85D34259F4F52150(), 4))
		{
			func_79(4);
			func_77(0);
			unk_0x343E01BBD8361D5F(unk_0x18F7BE9ACB7D08F4(), 1);
		}
	}
}

void func_533(int iParam0)
{
	char cVar0[64];
	int iVar16;
	
	if (func_543())
	{
		if (!func_550(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_99("JST_PASSMD", -1);
					break;
				
				case 2:
					func_99("JST_NOBIKE", -1);
					break;
				
				case 5:
					break;
				
				case 6:
					func_99("JST_HRBOSS", -1);
					break;
				
				case 7:
					func_99("JST_HWBOSS", -1);
					break;
				
				case 8:
					func_99("JST_HTBOSS", -1);
					break;
				
				case 9:
					func_99("JST_KBIKE", -1);
					break;
				
				case 11:
					func_99("JST_OAREA", -1);
					break;
				
				case 12:
					func_99("JST_HSTART", -1);
					break;
				
				case 13:
					if (func_157())
					{
						func_542("JST_HTBLAUNCH", "JST_BLIP", iLocal_880, -1);
					}
					else
					{
						func_542("JST_HGNLNCH", "JST_BLIP", iLocal_880, -1);
					}
					break;
				
				case 14:
					func_542("JST_HGNLNCH", "JST_BLIP", iLocal_880, -1);
					break;
				
				case 10:
					func_542("JST_FIGHT", "HUNT_TARBLP", iLocal_881, -1);
					break;
				
				case 15:
					func_542("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&cVar0, func_536(func_36()), 64);
					iVar16 = func_652(func_36());
					func_535("JST_RVLLNCH", &cVar0, iVar16, "JST_BLIP", iLocal_880, -1);
					break;
				
				case 17:
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) != joaat("oppressor"))
						{
							func_99("JST_DOUB", -1);
						}
					}
					break;
				
				default:
					break;
			}
			func_95(1);
			func_534(iParam0);
		}
	}
}

void func_534(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&uLocal_853, iParam0);
}

void func_535(char* sParam0, char[4] cParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x2202872EA73499C3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam2);
	}
	unk_0xB4179F7E88F4C4BF(cParam1);
	if (!iParam4 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam4);
	}
	unk_0xBEFD1ED9B6BE5127(sParam3);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam5);
}

char* func_536(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		uVar0 = func_541(&(Global_1627460[iParam0 /*530*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1627460[iParam0 /*530*/].f_11.f_115 != Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_115)
	{
		uVar0 = func_539(iParam0, 0);
		return uVar0;
	}
	if (((func_103(iParam0, 28) || func_103(unk_0x8CFC7D6E1DA5D304(), 28)) || func_538(iParam0)) && !func_537(iParam0))
	{
		return func_539(iParam0, 0);
	}
	iVar1 = func_244(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != unk_0x8CFC7D6E1DA5D304())
		{
			if (!unk_0x929A0C5D6A986B4F() && !unk_0xFD22D3369BAD2674(0, -1, 1))
			{
				return func_539(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		uVar0 = func_541(&(Global_1627460[iVar1 /*530*/].f_11.f_99));
		if (unk_0xFAFFA408239A026B(uVar0))
		{
			return func_539(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_537(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_184(iParam0) };
	if (unk_0x929A0C5D6A986B4F())
	{
		if (unk_0xC8543F17BC4C0591(0))
		{
			if (unk_0x3F46CD19F4C43D2A(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_538(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_29())
	{
		Var0 = { func_184(iParam0) };
		if (unk_0x0A8A596EB9C068FA() || unk_0xC339C5C5B5E8BC5B())
		{
			if (unk_0xC8543F17BC4C0591(0))
			{
				return 0;
			}
		}
		else if (unk_0x929A0C5D6A986B4F())
		{
			if (unk_0xC8543F17BC4C0591(0))
			{
				if (unk_0x3F46CD19F4C43D2A(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_539(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_97(iParam0, 1))
		{
			return func_540();
		}
	}
	return unk_0xE883B8F5FA6A04DA("GB_REST_ACC");
}

var func_540()
{
	return unk_0xE883B8F5FA6A04DA("GB_REST_ACCM");
}

var func_541(var uParam0)
{
	return uParam0;
}

void func_542(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x2202872EA73499C3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam2);
	}
	unk_0xBEFD1ED9B6BE5127(sParam1);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam3);
}

int func_543()
{
	if (((((!func_359() && !unk_0xC83C302702976DCB()) && !unk_0x834A29018EBFDCB3()) && func_885(unk_0x8CFC7D6E1DA5D304(), 1, 1)) && !func_117()) && !unk_0x622E10ED992CEB95())
	{
		return 1;
	}
	return 0;
}

bool func_544()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(unk_0x8CFC7D6E1DA5D304());
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

bool func_545()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(unk_0x8CFC7D6E1DA5D304()));
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

void func_546()
{
	if (!func_547(unk_0x8CFC7D6E1DA5D304()))
	{
		func_118(25);
	}
}

bool func_547(int iParam0)
{
	return func_103(iParam0, 25);
}

void func_548(int iParam0)
{
	Global_2405047.f_44.f_301 = iParam0;
	unk_0xF5E25BA5F2D728A9(unk_0x18F7BE9ACB7D08F4(), Global_2405047.f_44.f_301);
	if (Global_2405047.f_44.f_301 == 1)
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 115, 1);
	}
	else
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 115, 0);
	}
}

void func_549(int iParam0)
{
	unk_0x62148293B793073B(&uLocal_853, iParam0);
}

bool func_550(int iParam0)
{
	return unk_0xB03A1684359C50A1(uLocal_853, iParam0);
}

int func_551()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
	Var3 = { func_530(func_553(unk_0x8CFC7D6E1DA5D304())) };
	fVar6 = unk_0x15EE504466B7BBD3(Var0, Var3, 0);
	fVar7 = (func_552(func_553(unk_0x8CFC7D6E1DA5D304())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (unk_0x36E1A96E1D63ED91((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

float func_552(int iParam0)
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_553(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_554()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
	Var3 = { func_530(func_34(unk_0x8CFC7D6E1DA5D304())) };
	fVar6 = unk_0x15EE504466B7BBD3(Var0, Var3, 0);
	fVar7 = (func_552(func_34(unk_0x8CFC7D6E1DA5D304())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (unk_0x36E1A96E1D63ED91((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

void func_555()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	unk_0x954894782056D6CB(iLocal_880, &uVar0, &uVar1, &uVar2, &uVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_552(func_34(unk_0x8CFC7D6E1DA5D304()));
	Var7 = { func_530(func_34(unk_0x8CFC7D6E1DA5D304())) };
	Var7.f_2 = (Var7.f_2 - fVar5);
	unk_0x90FEECC6315A95B3(1, Var7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, uVar0, uVar1, uVar2, uVar3, 0, 0, 2, 0, 0, 0, 0);
}

void func_556()
{
	if (func_595())
	{
		func_589();
		func_588();
		func_575();
		func_558();
		func_557();
	}
	else
	{
		switch (func_109(unk_0x8CFC7D6E1DA5D304()))
		{
			case 0:
				func_499();
				break;
			
			case 1:
				func_589();
				break;
			
			case 2:
				func_557();
				break;
			
			case 3:
				func_589();
				func_588();
				func_575();
				func_557();
				func_558();
				break;
			}
	}
}

void func_557()
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(unk_0x85D34259F4F52150(), 1))
			{
				if (!func_550(10))
				{
					func_533(10);
				}
				else
				{
					func_533(15);
				}
				if (!func_550(17))
				{
					func_533(17);
				}
			}
		}
		else if (!func_44(unk_0x85D34259F4F52150(), 1))
		{
			func_533(12);
		}
		else
		{
			func_533(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_595())
		{
			if (unk_0x8CFC7D6E1DA5D304() == Local_921.f_16[0])
			{
				func_533(13);
			}
			else
			{
				func_533(14);
			}
		}
		else
		{
			func_533(16);
		}
	}
}

void func_558()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_914))
	{
		if (func_5(&(Local_921.f_5)))
		{
			iLocal_864 = (func_3() - func_22(&(Local_921.f_5), 0, 0));
			if (iLocal_864 < func_3())
			{
				if (iLocal_864 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_574();
				iVar2 = func_34(unk_0x8CFC7D6E1DA5D304());
				iVar3 = (1 - iVar2);
				iVar4 = func_652(unk_0x8CFC7D6E1DA5D304());
				iVar5 = Local_921.f_16[iVar3];
				if (Local_921.f_24[iVar2] > 0)
				{
					func_571(Local_921.f_27[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_98, 0, 0, 0, 0, 0, 255, 0, 0, 0);
				}
				else
				{
					func_571(Local_921.f_27[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_98, 0, 0, 0, 0, 0, 255, 0, 0, 0);
				}
				if (iVar5 != func_29())
				{
					if (unk_0x4AF13BCD120BCDBC(iVar5))
					{
						if (!unk_0xFAFFA408239A026B(&Local_898))
						{
							iVar4 = func_652(iVar5);
							func_571(Local_921.f_27[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_98, 0, 0, 0, 0, 0, 255, 0, 0, 0);
						}
					}
				}
				if (iLocal_864 > 0)
				{
					func_570(iLocal_864, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_570(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_559();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_914, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_885(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			func_574();
			func_570(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
		}
	}
}

void func_559()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_479())
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
		iVar2 = func_569();
		if (iVar2 > iLocal_858)
		{
			iVar2 = iLocal_858;
		}
		if (iVar3 != Local_921.f_3)
		{
			iVar3 = Local_921.f_3;
		}
		if ((iVar1 - func_22(&(Local_921.f_7), 0, 0)) >= 0)
		{
			func_568((iVar1 - func_22(&(Local_921.f_7), 0, 0)));
			func_560(iVar3, iVar2, (iVar1 - func_22(&(Local_921.f_7), 0, 0)), 1, func_567(-1));
		}
		else
		{
			func_560(iVar3, iVar2, 0, 1, func_567(-1));
		}
	}
}

void func_560(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_565(0) == 0)
	{
		return;
	}
	func_564();
	func_561(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_205(sParam4))
	{
		sVar0 = sParam4;
	}
	func_570(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_561(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_563(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_562(4, iVar0);
		Global_1358718.f_3098[iVar0] = iParam0;
		Global_1358718.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1358718.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1358718.f_3098.f_183[iVar0] = iParam3;
		Global_1358718.f_3098.f_216[iVar0] = iParam5;
		Global_1358718.f_3098.f_194[iVar0] = iParam4;
		Global_1358718.f_3098.f_227[iVar0] = iParam6;
		Global_1358718.f_3098.f_270[iVar0] = iParam7;
		Global_1358718.f_3098.f_281[iVar0] = iParam8;
		Global_1358718.f_3098.f_292[iVar0] = iParam9;
		Global_1358718.f_3098.f_303[iVar0] = iParam10;
		Global_1358718.f_3098.f_314[iVar0] = iParam11;
		Global_1358718.f_3098.f_325[iVar0] = iParam13;
		Global_1358718.f_3098.f_336[iVar0] = iParam14;
		Global_1358718.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0xC339C5C5B5E8BC5B()) && iParam12)
		{
			Global_1358718.f_1088 = 1;
		}
	}
}

void func_562(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1358718.f_6097[iParam0]), iParam1);
}

bool func_563(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1358718.f_6097[iParam0], iParam1);
}

void func_564()
{
	unk_0xE05212008FE9A018(8);
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(6);
	unk_0xE05212008FE9A018(7);
	Global_2458318 = 1;
}

int func_565(bool bParam0)
{
	if (func_566())
	{
		return 0;
	}
	if (func_462())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_885(unk_0x8CFC7D6E1DA5D304(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_566()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 12);
}

char* func_567(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFCA64981FEF7C913();
	return "HUD_STARTING";
	if (unk_0x9D39145AD645E383(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "am_challenges"))
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
	else if (unk_0x9D39145AD645E383(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x9D39145AD645E383(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_568(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x64031EF2AE5F9603())
	{
		Global_2512581.f_4715 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xB03A1684359C50A1(Global_2512581.f_4715, 1))
		{
			unk_0x929C3CBA660376D5(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2512581.f_4715 = 0;
			unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4715), 1);
		}
	}
}

int func_569()
{
	return 16;
}

void func_570(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_563(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_562(7, iVar0);
		Global_1358718.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_4366.f_172[iVar0] = iParam2;
		Global_1358718.f_4366.f_216[iVar0] = iParam3;
		Global_1358718.f_4366.f_183[iVar0] = iParam4;
		Global_1358718.f_4366.f_194[iVar0] = iParam5;
		Global_1358718.f_4366.f_249[iVar0] = iParam6;
		Global_1358718.f_4366.f_260[iVar0] = iParam7;
		Global_1358718.f_4366.f_205[iVar0] = iParam8;
		Global_1358718.f_4366.f_314[iVar0] = iParam9;
		Global_1358718.f_4366.f_325[iVar0] = iParam10;
		Global_1358718.f_4366.f_357[iVar0] = iParam11;
		Global_1358718.f_4366.f_238[iVar0] = iParam12;
		Global_1358718.f_4366.f_271[iVar0] = iParam13;
		Global_1358718.f_4366.f_368[iVar0] = iParam14;
		Global_1358718.f_4366.f_379[iVar0] = iParam15;
		Global_1358718.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_571(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_563(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_562(6, iVar0);
		Global_1358718.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_3770.f_183[iVar0] = iParam3;
		Global_1358718.f_3770.f_172[iVar0] = iParam2;
		Global_1358718.f_3770.f_260[iVar0] = iParam4;
		Global_1358718.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1358718.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1358718.f_3770.f_443[iVar0] = iParam7;
		Global_1358718.f_3770.f_454[iVar0] = iParam8;
		Global_1358718.f_3770.f_497[iVar0] = iParam9;
		Global_1358718.f_3770.f_508[iVar0] = iParam10;
		Global_1358718.f_3770.f_205[iVar0] = iParam11;
		Global_1358718.f_3770.f_216[iVar0] = iParam12;
		Global_1358718.f_3770.f_227[iVar0] = uParam13;
		Global_1358718.f_3770.f_238[iVar0] = iParam14;
		Global_1358718.f_3770.f_249[iVar0] = iParam15;
		Global_1358718.f_3770.f_519[iVar0] = iParam16;
		Global_1358718.f_3770.f_530[iVar0] = iParam17;
		Global_1358718.f_3770.f_541[iVar0] = iParam18;
		Global_1358718.f_3770.f_552[iVar0] = iParam19;
		Global_1358718.f_3770.f_563[iVar0] = iParam20;
		Global_1358718.f_3770.f_574[iVar0] = iParam21;
		Global_1358718.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_573())
		{
			Global_1358718.f_1088 = 1;
		}
		if (unk_0xC339C5C5B5E8BC5B())
		{
			iVar2 = 0;
			unk_0xA320869CAE52B097(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1358718.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1358718.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1358718.f_1088 = 1;
			}
			if (func_572())
			{
				Global_1358718.f_1092 = 1;
			}
		}
	}
}

int func_572()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0xA320869CAE52B097(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_573()
{
	if (((unk_0xE7A981467BC975BA() == 8 || unk_0xE7A981467BC975BA() == 9) || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 12)
	{
		return 1;
	}
	return 0;
}

void func_574()
{
	Global_1358718.f_1088 = 1;
}

void func_575()
{
	if (iLocal_861 > -1)
	{
		if (func_44(unk_0xF4E7C3C6384793AA(iLocal_861), 1))
		{
			if (func_44(unk_0xF4E7C3C6384793AA(iLocal_861), 6))
			{
				if (func_495())
				{
					if (func_493())
					{
						if (!func_587("JST_OBJ_KILL"))
						{
							func_586("JST_OBJ_KILL", &Local_898, iLocal_881, 0);
						}
					}
					else
					{
						if (func_587("JST_OBJ_KILL"))
						{
							func_499();
						}
						if (!func_587("JST_FBIKE"))
						{
							func_583("JST_FBIKE", 0);
						}
						if (!func_44(unk_0x85D34259F4F52150(), 10))
						{
							func_81(10);
							func_582("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_493())
				{
					if (!func_587("JST_OBKAREA"))
					{
						func_583("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_587("JST_OBJ_KILL"))
					{
						func_499();
					}
					if (!func_587("JST_FBIKE"))
					{
						func_583("JST_FBIKE", 0);
					}
				}
			}
			else if (func_674(9))
			{
				if (func_493())
				{
					if (!func_587("JST_OBJ_CHARGE"))
					{
						func_586("JST_OBJ_CHARGE", &Local_898, iLocal_881, 0);
					}
				}
			}
		}
		else if (!func_554())
		{
			if (!func_587("JST_OGOAREA"))
			{
				func_576("JST_OGOAREA", "JST_START", iLocal_880, 0);
			}
		}
		else if (!func_493())
		{
			if (!func_587("JST_OBIKE"))
			{
				func_583("JST_OBIKE", 0);
			}
		}
	}
}

void func_576(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_577(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 19;
		Global_1312576.f_56 = iParam2;
	}
}

int func_577(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam1))
	{
		return 0;
	}
	if (func_581(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_500();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0xFCA64981FEF7C913(), 32);
	Global_1312576.f_9 = unk_0x6E987D62C8535B6E(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = uParam3;
	Global_1312576.f_56 = uParam3;
	func_580();
	func_579(bParam2);
	func_578();
	return 1;
}

void func_578()
{
	unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 1);
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x62148293B793073B(&(Global_1312576.f_59), 0);
}

void func_580()
{
	Global_1312576.f_10 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), 86400000);
	Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
}

bool func_581(char* sParam0, char* sParam1)
{
	if (!func_505())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(uParam1))
	{
		return 0;
	}
	if (!unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam1) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_16));
}

void func_582(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

void func_583(char* sParam0, bool bParam1)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return;
	}
	if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return;
	}
	if (func_584(sParam0))
	{
		return;
	}
	func_500();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0xFCA64981FEF7C913(), 32);
	Global_1312576.f_9 = unk_0x6E987D62C8535B6E(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_580();
	func_579(bParam1);
	func_578();
}

bool func_584(char* sParam0)
{
	if (!func_505())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_585(uParam0);
	}
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_12));
}

bool func_585(char* sParam0)
{
	if (!func_505())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_16));
}

void func_586(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_577(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 16;
		Global_1312576.f_56 = iParam2;
	}
}

int func_587(char* sParam0)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	if (!func_505())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (unk_0xA49B74E0C954F146(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return 0;
	}
	return func_584(sParam0);
}

void func_588()
{
}

void func_589()
{
	if (!func_479())
	{
		func_594();
	}
	else
	{
		if (unk_0xE769D9B5158D0F11(uLocal_869))
		{
			unk_0x40D517D991458154(&uLocal_869);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_868))
		{
			unk_0x40D517D991458154(&uLocal_868);
		}
		if (iLocal_861 > -1)
		{
			if (func_44(unk_0xF4E7C3C6384793AA(iLocal_861), 1))
			{
				func_590();
			}
		}
	}
}

void func_590()
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	func_593(&Var0);
	if (!unk_0xE769D9B5158D0F11(uLocal_870))
	{
		func_592(&uVar3, &uVar4, &uVar5);
		uLocal_870 = unk_0x99FD40BC37D784E9(Var0, uVar3, uVar4);
		unk_0xFA3D22639F5AA493(uLocal_870, uVar5);
		func_591(&uLocal_870, 29);
		unk_0x1DB03C7D3DC49006(uLocal_870, 180);
		unk_0x2E9500102925D891(uLocal_870, 0);
	}
}

void func_591(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		uVar0 = func_74(iParam1);
		unk_0x71925FF3194E84CE(*uParam0, uVar0);
	}
}

void func_592(var uParam0, var uParam1, var uParam2)
{
	if (Local_921.f_31 == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_921.f_31 == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_921.f_31 == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_593(var uParam0)
{
	switch (Local_921.f_31)
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

void func_594()
{
	if (!unk_0xE769D9B5158D0F11(uLocal_869))
	{
		uLocal_869 = unk_0x29F0B4D7EFF08BF6(func_530(func_34(unk_0x8CFC7D6E1DA5D304())));
		unk_0xDC0EBFC7730AA226(uLocal_869, 495);
		unk_0xC3BBD8D349129F55(uLocal_869, 1);
		unk_0xDAA61FC3AADFAE1D(uLocal_869, 7000);
		unk_0x61C2EC67C90074E5(uLocal_869, "CELL_JOUST");
		unk_0xF60CEE5003674AF0(uLocal_869, 9);
		Global_2512581.f_262 = 1;
		func_591(&uLocal_869, iLocal_880);
		if (!func_674(6))
		{
			unk_0x27F308A2D49D3A49();
			func_650(6);
		}
	}
	if (!unk_0xE769D9B5158D0F11(uLocal_868))
	{
		uLocal_868 = unk_0x84AF4787CCBC42EE(func_530(func_34(unk_0x8CFC7D6E1DA5D304())), (func_552(func_34(unk_0x8CFC7D6E1DA5D304())) / 2f));
		func_591(&uLocal_868, iLocal_880);
		unk_0x1DB03C7D3DC49006(uLocal_868, 100);
		unk_0x0590222010A36CE4(uLocal_868, 1.4f);
		unk_0x2E9500102925D891(uLocal_868, 0);
	}
}

int func_595()
{
	if (func_597() || func_596())
	{
		return 1;
	}
	return 0;
}

int func_596()
{
	return func_37(unk_0x8CFC7D6E1DA5D304());
}

bool func_597()
{
	return func_35(unk_0x8CFC7D6E1DA5D304());
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_62(unk_0x8CFC7D6E1DA5D304());
	if (iParam2 || func_93(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1807025 = iVar0;
		if (func_132(iVar0))
		{
			Global_1807025.f_1 = 4;
		}
		else if (func_649(iVar0))
		{
			Global_1807025.f_1 = 5;
		}
		else if (func_86(iVar0, 0))
		{
			Global_1807025.f_1 = 2;
			if (func_124(iVar0))
			{
				Global_1807025.f_1 = 3;
			}
		}
		else
		{
			Global_1807025.f_1 = 1;
		}
		if (func_161() != func_29())
		{
			Global_1807025.f_4 = func_648(func_161());
			Global_1807025.f_5 = func_647(func_161());
		}
		if (func_89() != func_29())
		{
			func_160(func_89(), &(Global_1807025.f_6), &(Global_1807025.f_7));
		}
		Global_1807025.f_9 = unk_0xE6E19D6A1FC25165();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1807025.f_27 = 1;
			Global_1807025.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1807025.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1807025.f_40 = func_154(iParam1);
			Global_1807025.f_41 = func_646();
			Global_1807025.f_42 = func_309(unk_0x8CFC7D6E1DA5D304(), iParam1);
			Global_1807025.f_44 = func_645(unk_0x8CFC7D6E1DA5D304(), iParam1);
		}
	}
	else if (func_122(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1807140 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1807140 = iParam0 + 1;
		}
		else
		{
			Global_1807140 = func_644(unk_0x8CFC7D6E1DA5D304());
		}
		switch (iVar0)
		{
			case 225:
				if (func_643(unk_0x8CFC7D6E1DA5D304()) == 0)
				{
					Global_1807140.f_1 = 0;
				}
				else
				{
					Global_1807140.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1807140.f_1 = 2;
				break;
			
			case 227:
				Global_1807140.f_1 = 3;
				break;
		}
		Global_1807140.f_21 = 1;
		Global_1807140.f_22 = 1;
		if (func_161() != func_29())
		{
			Global_1807140.f_4 = func_648(func_161());
			Global_1807140.f_5 = func_647(func_161());
		}
		if (func_89() != func_29())
		{
			func_160(func_89(), &(Global_1807140.f_4), &(Global_1807140.f_5));
		}
		Global_1807140.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807140.f_20 = iParam0;
		}
	}
	else if (func_100(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1807078 = iVar0;
		Global_1807025.f_1 = 1;
		if (func_161() != func_29())
		{
			Global_1807078.f_4 = func_648(func_161());
			Global_1807078.f_5 = func_647(func_161());
		}
		if (func_89() != func_29())
		{
			func_160(func_89(), &(Global_1807078.f_6), &(Global_1807078.f_7));
		}
		Global_1807078.f_9 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807078.f_21 = iParam0;
		}
	}
	else if (func_121(iVar0))
	{
		Global_1807183 = iVar0;
		Global_1807183.f_1 = iParam0;
		Global_1807183.f_21 = 1;
		Global_1807183.f_22 = 1;
		if (func_161() != func_29())
		{
			Global_1807183.f_4 = func_648(func_161());
			Global_1807183.f_5 = func_647(func_161());
		}
		if (func_89() != func_29())
		{
			func_160(func_89(), &(Global_1807183.f_4), &(Global_1807183.f_5));
		}
		Global_1807183.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807183.f_20 = iParam0;
		}
		Global_1807183.f_27 = func_641(func_49(), 5);
		Global_1807183.f_28 = func_640(func_286(unk_0x8CFC7D6E1DA5D304()));
		Global_1807183.f_29 = func_130(6090, -1, 0);
		Global_1807183.f_30 = func_130(6086, -1, 0);
		Global_1807183.f_31 = func_130(6087, -1, 0);
		Global_1807183.f_32 = func_130(6089, -1, 0);
		Global_1807183.f_33 = func_130(6088, -1, 0);
		Global_1807183.f_34 = func_130(6091, -1, 0);
		Global_1807183.f_7 = func_638();
		Global_1807183.f_51 = func_640(bParam4);
	}
	else if (func_120(iVar0))
	{
		Global_1807236 = iVar0;
		Global_1807236.f_1 = iParam0;
		Global_1807236.f_21 = 1;
		Global_1807236.f_22 = 1;
		if (func_161() != func_29())
		{
			Global_1807236.f_4 = func_648(func_161());
			Global_1807236.f_5 = func_647(func_161());
		}
		if (func_89() != func_29())
		{
			func_160(func_89(), &(Global_1807236.f_4), &(Global_1807236.f_5));
		}
		Global_1807236.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807236.f_20 = iParam0;
		}
		Global_1807236.f_24 = func_130(6140, -1, 0);
		Global_1807236.f_25 = func_130(6145, -1, 0);
		Global_1807236.f_26 = func_130(6146, -1, 0);
		Global_1807236.f_27 = func_640((((func_637() || func_636()) || func_635()) || func_634(unk_0x8CFC7D6E1DA5D304())));
		Global_1807236.f_28 = func_130(6147, -1, 0);
		Global_1807236.f_29 = func_640(func_633());
		Global_1807236.f_31 = 0;
		Global_1807236.f_30 = 0;
		Global_1807236.f_32 = 0;
		Global_1807236.f_33 = 0;
		Global_1807236.f_34 = 0;
		Global_1807236.f_16 = 0;
	}
	else
	{
		if (func_161() != func_29())
		{
			Global_1807007 = func_648(func_161());
			Global_1807007.f_1 = func_647(func_161());
		}
		Global_1807007.f_5 = unk_0xE6E19D6A1FC25165();
		Global_1807007.f_13 = func_632();
		Global_1807007.f_15 = 0;
		if (func_159(1))
		{
			if (func_89() == func_161())
			{
				Global_1807007.f_15 = 1;
			}
		}
		if (func_631())
		{
			Global_1807140.f_28 = 1;
		}
		if (((func_630() || func_629()) || func_628()) || func_627())
		{
			Global_1807140.f_30 = 1;
		}
		if (func_625(func_626(joaat("trailersmall2"))))
		{
			Global_1807140.f_32 = 1;
		}
		if (func_607(func_624(joaat("caddy"))))
		{
			Global_1807140.f_31 = 1;
		}
		if (func_606(unk_0x8CFC7D6E1DA5D304()) || func_605(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_29 = 1;
		}
		if (func_604(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_33 = 1;
			Global_1807140.f_34 = 1;
		}
		if (func_603(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_36 = 1;
		}
		if (func_602(0, unk_0x8CFC7D6E1DA5D304()) == 1)
		{
			Global_1807140.f_35 = 1;
		}
		if (func_601(unk_0x8CFC7D6E1DA5D304(), 3, &uVar1))
		{
			Global_1807140.f_37 = 1;
		}
		if (func_601(unk_0x8CFC7D6E1DA5D304(), 7, &uVar1))
		{
			Global_1807140.f_38 = 1;
		}
		if (func_600(unk_0x8CFC7D6E1DA5D304()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_599(unk_0x8CFC7D6E1DA5D304(), iVar2);
				if (func_306(unk_0x8CFC7D6E1DA5D304(), iVar3, 0))
				{
					Global_1807140.f_39 = 1;
				}
				if (func_306(unk_0x8CFC7D6E1DA5D304(), iVar3, 2))
				{
					Global_1807140.f_40 = 1;
				}
				if (func_306(unk_0x8CFC7D6E1DA5D304(), iVar3, 1))
				{
					Global_1807140.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_599(int iParam0, int iParam1)
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
	if (func_301(Global_1595681[iParam0 /*678*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595681[iParam0 /*678*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

int func_600(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_601(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_602(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_602(int iParam0, int iParam1)
{
	if (iParam1 == func_29())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 0))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 3))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 6))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 9))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 12))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 15))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 18))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 21))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 1))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 4))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 7))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 10))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 13))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 16))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 19))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 22))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 2))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 5))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 8))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 11))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 14))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 17))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 20))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 23))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_603(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 7);
}

bool func_604(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 8);
}

bool func_605(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 11);
}

bool func_606(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 10);
}

int func_607(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_623(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_621(11));
		func_620(iVar1, &iVar0, 1);
		iVar2 = func_623(func_609(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_130(func_608(4, iVar0), -1, 0);
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

int func_608(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
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
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6153;
				
				case 185:
					return 6160;
				
				case 186:
					return 6167;
				
				case 187:
					return 6174;
				
				case 188:
					return 6181;
				
				case 189:
					return 6188;
				
				case 190:
					return 6195;
				
				case 191:
					return 6202;
				
				case 192:
					return 6209;
				
				case 193:
					return 6216;
				
				default:
			}
			break;
		
		case 2:
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
					return 3321;
				
				case 78:
					return 3329;
				
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
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4111;
				
				case 101:
					return 4119;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4271;
				
				case 121:
					return 4279;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4431;
				
				case 141:
					return 4439;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6154;
				
				case 185:
					return 6161;
				
				case 186:
					return 6168;
				
				case 187:
					return 6175;
				
				case 188:
					return 6182;
				
				case 189:
					return 6189;
				
				case 190:
					return 6196;
				
				case 191:
					return 6203;
				
				case 192:
					return 6210;
				
				case 193:
					return 6217;
				
				default:
			}
			break;
		
		case 3:
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
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
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
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
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
					return 3322;
				
				case 78:
					return 3330;
				
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
					return 4016;
				
				case 89:
					return 4024;
				
				case 90:
					return 4032;
				
				case 91:
					return 4040;
				
				case 92:
					return 4048;
				
				case 93:
					return 4056;
				
				case 94:
					return 4064;
				
				case 95:
					return 4072;
				
				case 96:
					return 4080;
				
				case 97:
					return 4088;
				
				case 98:
					return 4096;
				
				case 99:
					return 4104;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4128;
				
				case 103:
					return 4136;
				
				case 104:
					return 4144;
				
				case 105:
					return 4152;
				
				case 106:
					return 4160;
				
				case 107:
					return 4168;
				
				case 108:
					return 4176;
				
				case 109:
					return 4184;
				
				case 110:
					return 4192;
				
				case 111:
					return 4200;
				
				case 112:
					return 4208;
				
				case 113:
					return 4216;
				
				case 114:
					return 4224;
				
				case 115:
					return 4232;
				
				case 116:
					return 4240;
				
				case 117:
					return 4248;
				
				case 118:
					return 4256;
				
				case 119:
					return 4264;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4288;
				
				case 123:
					return 4296;
				
				case 124:
					return 4304;
				
				case 125:
					return 4312;
				
				case 126:
					return 4320;
				
				case 127:
					return 4328;
				
				case 128:
					return 4336;
				
				case 129:
					return 4344;
				
				case 130:
					return 4352;
				
				case 131:
					return 4360;
				
				case 132:
					return 4368;
				
				case 133:
					return 4376;
				
				case 134:
					return 4384;
				
				case 135:
					return 4392;
				
				case 136:
					return 4400;
				
				case 137:
					return 4408;
				
				case 138:
					return 4416;
				
				case 139:
					return 4424;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4448;
				
				case 143:
					return 4456;
				
				case 144:
					return 4464;
				
				case 145:
					return 4472;
				
				case 146:
					return 4480;
				
				case 147:
					return 4488;
				
				case 148:
					return 4496;
				
				case 149:
					return 4504;
				
				case 150:
					return 4512;
				
				case 151:
					return 4520;
				
				case 152:
					return 4528;
				
				case 153:
					return 4536;
				
				case 154:
					return 4544;
				
				case 155:
					return 4552;
				
				case 156:
					return 4560;
				
				case 157:
					return 4568;
				
				case 158:
					return 5461;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6155;
				
				case 185:
					return 6162;
				
				case 186:
					return 6169;
				
				case 187:
					return 6176;
				
				case 188:
					return 6183;
				
				case 189:
					return 6190;
				
				case 190:
					return 6197;
				
				case 191:
					return 6204;
				
				case 192:
					return 6211;
				
				case 193:
					return 6218;
				
				default:
			}
			break;
		
		case 4:
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
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
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
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5911;
				
				case 160:
					return 5918;
				
				case 161:
					return 5925;
				
				case 162:
					return 5932;
				
				case 163:
					return 5939;
				
				case 164:
					return 5946;
				
				case 165:
					return 5953;
				
				case 166:
					return 5960;
				
				case 167:
					return 5967;
				
				case 168:
					return 5974;
				
				case 169:
					return 5981;
				
				case 170:
					return 5988;
				
				case 171:
					return 5995;
				
				case 172:
					return 6002;
				
				case 173:
					return 6009;
				
				case 174:
					return 6016;
				
				case 175:
					return 6023;
				
				case 176:
					return 6030;
				
				case 177:
					return 6037;
				
				case 178:
					return 6044;
				
				case 179:
					return 6051;
				
				case 180:
					return 6058;
				
				case 181:
					return 6065;
				
				case 182:
					return 6072;
				
				case 183:
					return 6079;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6156;
				
				case 185:
					return 6163;
				
				case 186:
					return 6170;
				
				case 187:
					return 6177;
				
				case 188:
					return 6184;
				
				case 189:
					return 6191;
				
				case 190:
					return 6198;
				
				case 191:
					return 6205;
				
				case 192:
					return 6212;
				
				case 193:
					return 6219;
				
				default:
			}
			break;
		
		case 5:
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
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
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
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 49:
					return 2891;
				
				case 50:
					return 2897;
				
				case 51:
					return 2903;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 62:
					return 3015;
				
				case 63:
					return 3021;
				
				case 64:
					return 3027;
				
				case 65:
					return 3228;
				
				case 66:
					return 3236;
				
				case 67:
					return 3244;
				
				case 68:
					return 3252;
				
				case 69:
					return 3260;
				
				case 70:
					return 3268;
				
				case 71:
					return 3276;
				
				case 72:
					return 3284;
				
				case 73:
					return 3292;
				
				case 74:
					return 3300;
				
				case 75:
					return 3308;
				
				case 76:
					return 3316;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case joaat("mpsv_lp0_31"):
					return 3340;
				
				case 80:
					return 3348;
				
				case 81:
					return 3356;
				
				case 82:
					return 3364;
				
				case 83:
					return 3372;
				
				case 84:
					return 3380;
				
				case 85:
					return 3388;
				
				case 86:
					return 3395;
				
				case 87:
					return 3402;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4018;
				
				case 89:
					return 4026;
				
				case 90:
					return 4034;
				
				case 91:
					return 4042;
				
				case 92:
					return 4050;
				
				case 93:
					return 4058;
				
				case 94:
					return 4066;
				
				case 95:
					return 4074;
				
				case 96:
					return 4082;
				
				case 97:
					return 4090;
				
				case 98:
					return 4098;
				
				case 99:
					return 4106;
				
				case 100:
					return 4114;
				
				case 101:
					return 4122;
				
				case 102:
					return 4130;
				
				case 103:
					return 4138;
				
				case 104:
					return 4146;
				
				case 105:
					return 4154;
				
				case 106:
					return 4162;
				
				case 107:
					return 4170;
				
				case 108:
					return 4178;
				
				case 109:
					return 4186;
				
				case 110:
					return 4194;
				
				case 111:
					return 4202;
				
				case 112:
					return 4210;
				
				case 113:
					return 4218;
				
				case 114:
					return 4226;
				
				case 115:
					return 4234;
				
				case 116:
					return 4242;
				
				case 117:
					return 4250;
				
				case 118:
					return 4258;
				
				case 119:
					return 4266;
				
				case 120:
					return 4274;
				
				case 121:
					return 4282;
				
				case 122:
					return 4290;
				
				case 123:
					return 4298;
				
				case 124:
					return 4306;
				
				case 125:
					return 4314;
				
				case 126:
					return 4322;
				
				case 127:
					return 4330;
				
				case 128:
					return 4338;
				
				case 129:
					return 4346;
				
				case 130:
					return 4354;
				
				case 131:
					return 4362;
				
				case 132:
					return 4370;
				
				case 133:
					return 4378;
				
				case 134:
					return 4386;
				
				case 135:
					return 4394;
				
				case 136:
					return 4402;
				
				case 137:
					return 4410;
				
				case 138:
					return 4418;
				
				case 139:
					return 4426;
				
				case 140:
					return 4434;
				
				case 141:
					return 4442;
				
				case 142:
					return 4450;
				
				case 143:
					return 4458;
				
				case 144:
					return 4466;
				
				case 145:
					return 4474;
				
				case 146:
					return 4482;
				
				case 147:
					return 4490;
				
				case 148:
					return 4498;
				
				case 149:
					return 4506;
				
				case 150:
					return 4514;
				
				case 151:
					return 4522;
				
				case 152:
					return 4530;
				
				case 153:
					return 4538;
				
				case 154:
					return 4546;
				
				case 155:
					return 4554;
				
				case 156:
					return 4562;
				
				case 157:
					return 4570;
				
				case 158:
					return 5463;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5912;
				
				case 160:
					return 5919;
				
				case 161:
					return 5926;
				
				case 162:
					return 5933;
				
				case 163:
					return 5940;
				
				case 164:
					return 5947;
				
				case 165:
					return 5954;
				
				case 166:
					return 5961;
				
				case 167:
					return 5968;
				
				case 168:
					return 5975;
				
				case 169:
					return 5982;
				
				case 170:
					return 5989;
				
				case 171:
					return 5996;
				
				case 172:
					return 6003;
				
				case 173:
					return 6010;
				
				case 174:
					return 6017;
				
				case 175:
					return 6024;
				
				case 176:
					return 6031;
				
				case 177:
					return 6038;
				
				case 178:
					return 6045;
				
				case 179:
					return 6052;
				
				case 180:
					return 6059;
				
				case 181:
					return 6066;
				
				case 182:
					return 6073;
				
				case 183:
					return 6080;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6157;
				
				case 185:
					return 6164;
				
				case 186:
					return 6171;
				
				case 187:
					return 6178;
				
				case 188:
					return 6185;
				
				case 189:
					return 6192;
				
				case 190:
					return 6199;
				
				case 191:
					return 6206;
				
				case 192:
					return 6213;
				
				case 193:
					return 6220;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2823;
				
				case 40:
					return 2830;
				
				case 41:
					return 2837;
				
				case 42:
					return 2844;
				
				case 43:
					return 2851;
				
				case 44:
					return 2858;
				
				case 45:
					return 2865;
				
				case 46:
					return 2872;
				
				case 47:
					return 2879;
				
				case 48:
					return 2886;
				
				case 52:
					return 2947;
				
				case 53:
					return 2954;
				
				case 54:
					return 2961;
				
				case 55:
					return 2968;
				
				case 56:
					return 2975;
				
				case 57:
					return 2982;
				
				case 58:
					return 2989;
				
				case 59:
					return 2996;
				
				case 60:
					return 3003;
				
				case 61:
					return 3010;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case joaat("mpsv_lp0_31"):
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4021;
				
				case 89:
					return 4029;
				
				case 90:
					return 4037;
				
				case 91:
					return 4045;
				
				case 92:
					return 4053;
				
				case 93:
					return 4061;
				
				case 94:
					return 4069;
				
				case 95:
					return 4077;
				
				case 96:
					return 4085;
				
				case 97:
					return 4093;
				
				case 98:
					return 4101;
				
				case 99:
					return 4109;
				
				case 100:
					return 4117;
				
				case 101:
					return 4125;
				
				case 102:
					return 4133;
				
				case 103:
					return 4141;
				
				case 104:
					return 4149;
				
				case 105:
					return 4157;
				
				case 106:
					return 4165;
				
				case 107:
					return 4173;
				
				case 108:
					return 4181;
				
				case 109:
					return 4189;
				
				case 110:
					return 4197;
				
				case 111:
					return 4205;
				
				case 112:
					return 4213;
				
				case 113:
					return 4221;
				
				case 114:
					return 4229;
				
				case 115:
					return 4237;
				
				case 116:
					return 4245;
				
				case 117:
					return 4253;
				
				case 118:
					return 4261;
				
				case 119:
					return 4269;
				
				case 120:
					return 4277;
				
				case 121:
					return 4285;
				
				case 122:
					return 4293;
				
				case 123:
					return 4301;
				
				case 124:
					return 4309;
				
				case 125:
					return 4317;
				
				case 126:
					return 4325;
				
				case 127:
					return 4333;
				
				case 128:
					return 4341;
				
				case 129:
					return 4349;
				
				case 130:
					return 4357;
				
				case 131:
					return 4365;
				
				case 132:
					return 4373;
				
				case 133:
					return 4381;
				
				case 134:
					return 4389;
				
				case 135:
					return 4397;
				
				case 136:
					return 4405;
				
				case 137:
					return 4413;
				
				case 138:
					return 4421;
				
				case 139:
					return 4429;
				
				case 140:
					return 4437;
				
				case 141:
					return 4445;
				
				case 142:
					return 4453;
				
				case 143:
					return 4461;
				
				case 144:
					return 4469;
				
				case 145:
					return 4477;
				
				case 146:
					return 4485;
				
				case 147:
					return 4493;
				
				case 148:
					return 4501;
				
				case 149:
					return 4509;
				
				case 150:
					return 4517;
				
				case 151:
					return 4525;
				
				case 152:
					return 4533;
				
				case 153:
					return 4541;
				
				case 154:
					return 4549;
				
				case 155:
					return 4557;
				
				case 156:
					return 4565;
				
				case 157:
					return 4573;
				
				case 158:
					return 5466;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5914;
				
				case 160:
					return 5921;
				
				case 161:
					return 5928;
				
				case 162:
					return 5935;
				
				case 163:
					return 5942;
				
				case 164:
					return 5949;
				
				case 165:
					return 5956;
				
				case 166:
					return 5963;
				
				case 167:
					return 5970;
				
				case 168:
					return 5977;
				
				case 169:
					return 5984;
				
				case 170:
					return 5991;
				
				case 171:
					return 5998;
				
				case 172:
					return 6005;
				
				case 173:
					return 6012;
				
				case 174:
					return 6019;
				
				case 175:
					return 6026;
				
				case 176:
					return 6033;
				
				case 177:
					return 6040;
				
				case 178:
					return 6047;
				
				case 179:
					return 6054;
				
				case 180:
					return 6061;
				
				case 181:
					return 6068;
				
				case 182:
					return 6075;
				
				case 183:
					return 6082;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6159;
				
				case 185:
					return 6166;
				
				case 186:
					return 6173;
				
				case 187:
					return 6180;
				
				case 188:
					return 6187;
				
				case 189:
					return 6194;
				
				case 190:
					return 6201;
				
				case 191:
					return 6208;
				
				case 192:
					return 6215;
				
				case 193:
					return 6222;
				
				default:
			}
			break;
		
		case 7:
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
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2822;
				
				case 40:
					return 2829;
				
				case 41:
					return 2836;
				
				case 42:
					return 2843;
				
				case 43:
					return 2850;
				
				case 44:
					return 2857;
				
				case 45:
					return 2864;
				
				case 46:
					return 2871;
				
				case 47:
					return 2878;
				
				case 48:
					return 2885;
				
				case 49:
					return 2892;
				
				case 50:
					return 2898;
				
				case 51:
					return 2904;
				
				case 52:
					return 2946;
				
				case 53:
					return 2953;
				
				case 54:
					return 2960;
				
				case 55:
					return 2967;
				
				case 56:
					return 2974;
				
				case 57:
					return 2981;
				
				case 58:
					return 2988;
				
				case 59:
					return 2995;
				
				case 60:
					return 3002;
				
				case 61:
					return 3009;
				
				case 62:
					return 3016;
				
				case 63:
					return 3022;
				
				case 64:
					return 3028;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3326;
				
				case 78:
					return 3334;
				
				case joaat("mpsv_lp0_31"):
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				case 85:
					return 3389;
				
				case 86:
					return 3396;
				
				case 87:
					return 3403;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4019;
				
				case 89:
					return 4027;
				
				case 90:
					return 4035;
				
				case 91:
					return 4043;
				
				case 92:
					return 4051;
				
				case 93:
					return 4059;
				
				case 94:
					return 4067;
				
				case 95:
					return 4075;
				
				case 96:
					return 4083;
				
				case 97:
					return 4091;
				
				case 98:
					return 4099;
				
				case 99:
					return 4107;
				
				case 100:
					return 4116;
				
				case 101:
					return 4124;
				
				case 102:
					return 4131;
				
				case 103:
					return 4139;
				
				case 104:
					return 4147;
				
				case 105:
					return 4155;
				
				case 106:
					return 4163;
				
				case 107:
					return 4171;
				
				case 108:
					return 4179;
				
				case 109:
					return 4187;
				
				case 110:
					return 4195;
				
				case 111:
					return 4203;
				
				case 112:
					return 4211;
				
				case 113:
					return 4219;
				
				case 114:
					return 4227;
				
				case 115:
					return 4235;
				
				case 116:
					return 4243;
				
				case 117:
					return 4251;
				
				case 118:
					return 4259;
				
				case 119:
					return 4267;
				
				case 120:
					return 4276;
				
				case 121:
					return 4284;
				
				case 122:
					return 4291;
				
				case 123:
					return 4299;
				
				case 124:
					return 4307;
				
				case 125:
					return 4315;
				
				case 126:
					return 4323;
				
				case 127:
					return 4331;
				
				case 128:
					return 4339;
				
				case 129:
					return 4347;
				
				case 130:
					return 4355;
				
				case 131:
					return 4363;
				
				case 132:
					return 4371;
				
				case 133:
					return 4379;
				
				case 134:
					return 4387;
				
				case 135:
					return 4395;
				
				case 136:
					return 4403;
				
				case 137:
					return 4411;
				
				case 138:
					return 4419;
				
				case 139:
					return 4427;
				
				case 140:
					return 4436;
				
				case 141:
					return 4444;
				
				case 142:
					return 4451;
				
				case 143:
					return 4459;
				
				case 144:
					return 4467;
				
				case 145:
					return 4475;
				
				case 146:
					return 4483;
				
				case 147:
					return 4491;
				
				case 148:
					return 4499;
				
				case 149:
					return 4507;
				
				case 150:
					return 4515;
				
				case 151:
					return 4523;
				
				case 152:
					return 4531;
				
				case 153:
					return 4539;
				
				case 154:
					return 4547;
				
				case 155:
					return 4555;
				
				case 156:
					return 4563;
				
				case 157:
					return 4571;
				
				case 158:
					return 5464;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5913;
				
				case 160:
					return 5920;
				
				case 161:
					return 5927;
				
				case 162:
					return 5934;
				
				case 163:
					return 5941;
				
				case 164:
					return 5948;
				
				case 165:
					return 5955;
				
				case 166:
					return 5962;
				
				case 167:
					return 5969;
				
				case 168:
					return 5976;
				
				case 169:
					return 5983;
				
				case 170:
					return 5990;
				
				case 171:
					return 5997;
				
				case 172:
					return 6004;
				
				case 173:
					return 6011;
				
				case 174:
					return 6018;
				
				case 175:
					return 6025;
				
				case 176:
					return 6032;
				
				case 177:
					return 6039;
				
				case 178:
					return 6046;
				
				case 179:
					return 6053;
				
				case 180:
					return 6060;
				
				case 181:
					return 6067;
				
				case 182:
					return 6074;
				
				case 183:
					return 6081;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6158;
				
				case 185:
					return 6165;
				
				case 186:
					return 6172;
				
				case 187:
					return 6179;
				
				case 188:
					return 6186;
				
				case 189:
					return 6193;
				
				case 190:
					return 6200;
				
				case 191:
					return 6207;
				
				case 192:
					return 6214;
				
				case 193:
					return 6221;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 194)
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if (iParam0 >= func_621(iVar0) && iParam0 < func_610(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_610(int iParam0)
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
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_619(iParam0);
		return func_618(iVar0);
	}
	return (func_611(iParam0, -1) * iParam0 + 1);
}

int func_611(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_614(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_613(iParam1))
			{
				return 0;
			}
			else if (func_612(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 <= 117 && iParam1 > 0)
			{
				if (Global_1049531[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 10)
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
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
	}
	return 0;
}

int func_612(int iParam0, int iParam1)
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

int func_613(int iParam0)
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

int func_614(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_615(unk_0x8CFC7D6E1DA5D304(), 0);
	}
	if (bParam1)
	{
		if (func_615(unk_0x8CFC7D6E1DA5D304(), 0))
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

bool func_615(int iParam0, bool bParam1)
{
	if (Global_1595525 != func_29())
	{
		if (!func_617(Global_1595525))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x8CFC7D6E1DA5D304() != Global_1595525)
			{
				if (unk_0xB03A1684359C50A1(Global_2422724[Global_1595525 /*420*/].f_210, 24) || func_616(Global_1595525))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 24);
}

int func_616(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_617(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 2);
	}
	return 0;
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_619(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_620(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9331)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1804002[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x756DE011CEDBBD7E() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_621(int iParam0)
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
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_619(iParam0);
		return func_622(iVar0);
	}
	return (func_611(iParam0, -1) * iParam0);
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_623(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_262145.f_16127)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_619(iParam0);
		if (iVar1 == 0 && func_130(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1367880[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549041[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2548958[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_624(int iParam0)
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

int func_625(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_620(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_130(func_608(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_627()
{
	return func_130(6146, -1, 0) != 0;
}

bool func_628()
{
	return func_130(5363, -1, 0) != 0;
}

bool func_629()
{
	return func_130(3811, -1, 0) != 0;
}

bool func_630()
{
	return func_130(3212, -1, 0) != 0;
}

bool func_631()
{
	return func_130(5362, -1, 0) != 0;
}

int func_632()
{
	int iVar0;
	
	iVar0 = func_161();
	if (iVar0 != func_29())
	{
		return Global_1627460[iVar0 /*530*/].f_11.f_93;
	}
	return 0;
}

bool func_633()
{
	return func_130(6139, -1, 0) != 0;
}

int func_634(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_248 != 0;
	}
	return 0;
}

bool func_635()
{
	return func_130(6147, -1, 0) == 3;
}

bool func_636()
{
	return func_130(6147, -1, 0) == 2;
}

bool func_637()
{
	return func_130(6147, -1, 0) == 1;
}

int func_638()
{
	int iVar0;
	
	if (func_157())
	{
		return 4;
	}
	else if (func_144())
	{
		if (func_333(unk_0x8CFC7D6E1DA5D304()))
		{
			return 8;
		}
		return 6;
	}
	if (func_96(1))
	{
		iVar0 = func_639(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_159(1))
	{
		if (func_333(func_161()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_639(int iParam0)
{
	if (func_260(iParam0, 1))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_410;
	}
	return -1;
}

int func_640(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0, int iParam1)
{
	return func_130(func_642(iParam1), iParam0, 0);
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3881;
		
		case 1:
			return 3910;
		
		case 2:
			return 3914;
		
		case 3:
			return 3918;
		
		case 4:
			return 3922;
		
		case 5:
			return 5433;
		
		default:
	}
	return 3881;
}

int func_643(int iParam0)
{
	if (func_63(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_644(int iParam0)
{
	if (func_62(iParam0) == 225 || func_62(iParam0) == 226)
	{
		return func_643(iParam0);
	}
	return -1;
}

int func_645(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_301(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_646()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_308(unk_0x8CFC7D6E1DA5D304(), iVar0))
		{
			unk_0xD2A9C3F486236CC5(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_647(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1627460[iParam0 /*530*/].f_11.f_8[1];
}

int func_648(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1627460[iParam0 /*530*/].f_11.f_8[0];
}

int func_649(int iParam0)
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

void func_650(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&uLocal_852, iParam0);
}

char* func_651()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_244(unk_0x8CFC7D6E1DA5D304());
	if (iVar0 != func_29())
	{
		if (iVar0 != unk_0x8CFC7D6E1DA5D304())
		{
			if (((func_103(iVar0, 28) || func_103(unk_0x8CFC7D6E1DA5D304(), 28)) || func_538(iVar0)) && !func_537(iVar0))
			{
				return func_539(iVar0, 0);
			}
			if (!unk_0x929A0C5D6A986B4F() && !unk_0xFD22D3369BAD2674(0, -1, 1))
			{
				return func_539(iVar0, 0);
			}
		}
		uVar1 = func_541(&(Global_1627460[iVar0 /*530*/].f_11.f_99));
		if (unk_0xFAFFA408239A026B(uVar1))
		{
			return func_539(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_652(int iParam0)
{
	int iVar0;
	
	iVar0 = func_243(iParam0);
	if (iVar0 != -1)
	{
		return func_241(iVar0);
	}
	return 1;
}

void func_653(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 != iParam0)
	{
		func_673(-1);
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 = iParam0;
		if (func_30() != -1)
		{
			func_672(-1);
		}
		if (func_671() != -1)
		{
			func_670(-1);
		}
		func_669(iParam2);
		func_667(iParam0);
		if (!func_666(iParam0))
		{
			fVar0 = func_665(iParam0);
			if (fVar0 != 1f)
			{
				func_664(fVar0);
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 1);
			}
		}
		if (!func_663(iParam0) || iParam3)
		{
			if (func_662(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x945880A1F9FE9E4F(0);
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
				}
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 0);
			}
			else if (unk_0xA41FC657B4BB4148() < 5)
			{
				unk_0x8BB3FA32294185BB(1f);
				unk_0x945880A1F9FE9E4F(5);
			}
		}
		if (func_78())
		{
			func_118(27);
		}
		if (bParam1)
		{
			if (!func_698())
			{
				func_660(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xB03A1684359C50A1(Global_2512581.f_4523, 1) || unk_0xB03A1684359C50A1(Global_2512581.f_4523, 4)) || unk_0xB03A1684359C50A1(Global_2512581.f_4523, 0))
			{
				func_223(6);
			}
			func_659();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x4F7751BE82240EB4(3, 0);
			unk_0x4F7751BE82240EB4(5, 0);
		}
		if (func_116(unk_0x8CFC7D6E1DA5D304()) && func_111(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1), 8);
		}
		func_655();
		if (func_654(iParam0))
		{
			unk_0x4F7751BE82240EB4(3, 0);
			unk_0x4F7751BE82240EB4(5, 0);
			unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 6);
		}
	}
}

int func_654(int iParam0)
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

void func_655()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_658();
	iVar2 = func_244(unk_0x8CFC7D6E1DA5D304());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3479F6F64A48251C(iVar0);
		if (unk_0x4AF13BCD120BCDBC(iVar1))
		{
			if (func_258(iVar1, iVar2, 1) || func_656(iVar1, unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xA6111D634CFDB8A0(unk_0x8CFC7D6E1DA5D304(), iVar1, uVar3);
				unk_0xA6111D634CFDB8A0(iVar1, unk_0x8CFC7D6E1DA5D304(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_656(int iParam0, int iParam1)
{
	if (func_260(iParam0, 1) && func_260(iParam1, 1))
	{
		return (func_657(iParam0) == func_244(iParam1) || func_657(iParam1) == func_244(iParam0));
	}
	return 0;
}

int func_657(int iParam0)
{
	if (func_260(iParam0, 1))
	{
		return Global_1627460[func_244(iParam0) /*530*/].f_11.f_443;
	}
	return func_29();
}

int func_658()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_161();
	if (iVar0 != func_29())
	{
		if (func_885(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xB03A1684359C50A1(Global_1627460[iVar1 /*530*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_659()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 1))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 1);
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 4))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 4);
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 6))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 6);
	}
	unk_0x62148293B793073B(&(Global_2512581.f_4523), 0);
	unk_0x62148293B793073B(&(Global_2512581.f_4523), 2);
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_577 = 0;
	if (Global_2512581.f_4525 > 0)
	{
		unk_0x945880A1F9FE9E4F(Global_2512581.f_4525);
	}
	Global_2512581.f_4524 = 0;
}

void func_660(int iParam0)
{
	if (func_661() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_661()
{
	if ((((Global_979885 != -1 && Global_979885 != 33) && Global_979885 != 35) && Global_979885 != 37) && Global_979885 != 21)
	{
		return 1;
	}
	return 0;
}

int func_662(int iParam0, int iParam1)
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

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
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

void func_664(float fParam0)
{
	float fVar0;
	
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_72())
	{
		return;
	}
	fVar0 = (Global_2512581.f_4873 - fParam0);
	if (unk_0x19B3A29FD53C54A6(Global_2512581.f_4874))
	{
		if (!Global_2512581.f_4874 == unk_0xBCF9D020FA9C313D() && unk_0x36E1A96E1D63ED91(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2512581.f_4873 = fParam0;
	Global_2512581.f_4874 = unk_0xBCF9D020FA9C313D();
}

float func_665(int iParam0)
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
		case 229:
		case 230:
		case 233:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_666(int iParam0)
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

void func_667(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(3774, -1, 0);
	iVar1 = func_668(iParam0);
	if (iVar1 != -1)
	{
		unk_0xD2A9C3F486236CC5(&iVar0, iVar1);
		func_128(3774, iVar0, -1, 1, 0);
	}
}

int func_668(int iParam0)
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

void func_669(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	if (Global_1627460[iVar0 /*530*/].f_11.f_176 != iParam0)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_176 = iParam0;
	}
}

void func_670(int iParam0)
{
	if (Global_2512581.f_4878.f_158 != iParam0)
	{
		Global_2512581.f_4878.f_158 = iParam0;
	}
}

int func_671()
{
	return Global_2512581.f_4878.f_158;
}

void func_672(int iParam0)
{
	if (Global_2512581.f_4878.f_157 != iParam0)
	{
		Global_2512581.f_4878.f_157 = iParam0;
	}
}

void func_673(int iParam0)
{
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_32 = iParam0;
}

bool func_674(int iParam0)
{
	return unk_0xB03A1684359C50A1(uLocal_852, iParam0);
}

int func_675(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_695(unk_0x8CFC7D6E1DA5D304(), 29))
	{
		return 0;
	}
	if (func_694(unk_0x8CFC7D6E1DA5D304(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x3AB73ED02FDAC9A8())
		{
			return 0;
		}
	}
	if (!func_410(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7DF51A716BE7A07F())
		{
			return 0;
		}
	}
	if (func_693(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_692())
	{
		return 0;
	}
	if (func_468())
	{
		return 0;
	}
	if (func_691())
	{
		return 0;
	}
	if (func_462())
	{
		return 0;
	}
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return 0;
	}
	if (func_460(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!func_464())
	{
		return 0;
	}
	if (func_694(unk_0x8CFC7D6E1DA5D304(), 0) || func_694(unk_0x8CFC7D6E1DA5D304(), 3))
	{
		return 0;
	}
	if ((func_694(unk_0x8CFC7D6E1DA5D304(), 12) || func_694(unk_0x8CFC7D6E1DA5D304(), 14)) || func_694(unk_0x8CFC7D6E1DA5D304(), 13))
	{
		return 0;
	}
	if (func_689(unk_0x8CFC7D6E1DA5D304(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		if (!func_681())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_680())
		{
			return 0;
		}
	}
	if (Global_1794814)
	{
		return 0;
	}
	if (func_679(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_678())
	{
		return 0;
	}
	if (func_677(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (func_676(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_676(int iParam0)
{
	if (Global_2422724[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422724[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

int func_677(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_678()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_679(int iParam0)
{
	if (!func_885(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_35;
}

bool func_680()
{
	return Global_92881.f_316 > 0;
}

int func_681()
{
	int iVar0;
	
	iVar0 = func_62(unk_0x8CFC7D6E1DA5D304());
	if (((func_613(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_17) || func_688(unk_0x8CFC7D6E1DA5D304())) || func_687(unk_0x8CFC7D6E1DA5D304())) || func_686(unk_0x8CFC7D6E1DA5D304()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_685(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_132(iVar0) || func_649(iVar0))
		{
			return 1;
		}
	}
	if (func_107(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_649(iVar0))
		{
			return 1;
		}
	}
	if (func_684(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_122(iVar0))
		{
			return 1;
		}
	}
	if (func_683(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_121(iVar0))
		{
			return 1;
		}
	}
	if (func_682(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_120(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_682(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_885(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_108(Global_2422724[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_683(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_885(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_108(Global_2422724[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_684(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_885(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_108(Global_2422724[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_685(int iParam0)
{
	if (func_612(Global_1595681[iParam0 /*678*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_686(int iParam0)
{
	if (func_614(Global_1595681[iParam0 /*678*/].f_266.f_17, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_687(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_885(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_108(Global_2422724[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_688(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_885(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_108(Global_2422724[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_689(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595681[iParam0 /*678*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 0))
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
		if (func_688(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_107(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_687(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_684(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_683(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_682(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_690(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_690(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_885(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_29())
			{
				return func_108(Global_2422724[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_691()
{
	return Global_1312854;
}

bool func_692()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 0);
}

int func_693(int iParam0)
{
	if (func_459(iParam0, 1))
	{
		if (Global_1595681[iParam0 /*678*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_694(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_223, iParam1);
}

bool func_695(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_11.f_5, iParam1);
}

int func_696(int iParam0)
{
	if (!func_144() && !func_260(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (!func_111(unk_0x8CFC7D6E1DA5D304()))
		{
			if (func_698())
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

int func_697()
{
	return 0;
}

int func_698()
{
	if ((func_103(unk_0x8CFC7D6E1DA5D304(), 21) || func_103(unk_0x8CFC7D6E1DA5D304(), 22)) || func_702())
	{
		return 1;
	}
	if (func_699())
	{
		func_118(22);
		return 1;
	}
	return 0;
}

int func_699()
{
	if (func_63(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if ((func_78() && !func_701()) || func_694(unk_0x8CFC7D6E1DA5D304(), 21))
		{
			return 1;
		}
		else
		{
			func_700(27);
		}
	}
	return 0;
}

void func_700(int iParam0)
{
	unk_0x62148293B793073B(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_4), iParam0);
}

bool func_701()
{
	return Global_1312416.f_1;
}

bool func_702()
{
	return func_293(296, -1);
}

void func_703(int iParam0, int iParam1)
{
	Local_956[iParam0 /*6*/] = iParam1;
}

bool func_704()
{
	if (!func_44(unk_0x85D34259F4F52150(), 3))
	{
		if (func_17(1))
		{
			func_706("JCMcBpPl9UWmcdOYFza0Tg");
			func_706("jDF4fBBUqG9ZuI9TR7mw");
			func_81(3);
			func_705();
		}
	}
	return func_44(unk_0x85D34259F4F52150(), 3);
}

void func_705()
{
	Global_1804423 = 1;
	if (!unk_0xB03A1684359C50A1(Global_2520572, 0))
	{
		unk_0xD2A9C3F486236CC5(&Global_2520572, 0);
		unk_0xD2A9C3F486236CC5(&Global_1804424, 0);
	}
	if (!unk_0xB03A1684359C50A1(Global_2520572, 1))
	{
		unk_0xD2A9C3F486236CC5(&Global_2520572, 1);
		unk_0xD2A9C3F486236CC5(&Global_1804424, 1);
	}
	if (!unk_0xB03A1684359C50A1(Global_2520572, 5))
	{
		unk_0xD2A9C3F486236CC5(&Global_2520572, 5);
		unk_0xD2A9C3F486236CC5(&Global_1804424, 5);
	}
	if (unk_0x94F13204B7EB050E(-355737150))
	{
		unk_0xF23A1E4D6AD3CAD2(-355737150, 0, 0, 0);
	}
	if (unk_0x94F13204B7EB050E(-580979506))
	{
		unk_0xF23A1E4D6AD3CAD2(-580979506, 0, 0, 0);
	}
	if (unk_0x94F13204B7EB050E(-1426452475))
	{
		unk_0xF23A1E4D6AD3CAD2(-1426452475, 0, 0, 0);
	}
	if (unk_0x94F13204B7EB050E(745417724))
	{
		unk_0xF23A1E4D6AD3CAD2(745417724, 0, 0, 0);
	}
	if (unk_0x94F13204B7EB050E(-1305304906))
	{
		unk_0xF23A1E4D6AD3CAD2(-1305304906, 0, 0, 0);
	}
	if (unk_0x94F13204B7EB050E(-1543175077))
	{
		unk_0xF23A1E4D6AD3CAD2(-1543175077, 0, 0, 0);
	}
	if (unk_0x94F13204B7EB050E(-811770997))
	{
		unk_0xF23A1E4D6AD3CAD2(-811770997, 0, 0, 0);
	}
}

void func_706(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return;
	}
	iVar0 = unk_0x6E987D62C8535B6E(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xB03A1684359C50A1(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_707(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xB03A1684359C50A1(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					unk_0xD2A9C3F486236CC5(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_707(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_709(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_708(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_708(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_709(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794708.f_98389[iVar13 /*13*/];
		
		case 62:
			return Global_907705.f_18805[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_709(var uParam0)
{
	int iVar0;
	
	if (unk_0xFAFFA408239A026B(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_711(uParam0->f_1))
	{
		if (func_710(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xB03A1684359C50A1(Global_794708.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x9D39145AD645E383(&(Global_794708.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xB03A1684359C50A1(Global_794708.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xB03A1684359C50A1(Global_794708.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x9D39145AD645E383(&(Global_794708.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xB03A1684359C50A1(Global_907705.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x9D39145AD645E383(&(Global_907705.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xB03A1684359C50A1(Global_907705.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xB03A1684359C50A1(Global_907705.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x9D39145AD645E383(&(Global_907705.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
	{
		if (unk_0xB03A1684359C50A1(Global_950951.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x9D39145AD645E383(&(Global_950951.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_950951.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xB03A1684359C50A1(Global_950951.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x9D39145AD645E383(&(Global_950951.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_710(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0x9D39145AD645E383(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_711(int iParam0)
{
	return iParam0 == 9999;
}

int func_712()
{
	return Local_921.f_0;
}

int func_713(int iParam0)
{
	return Local_956[iParam0 /*6*/];
}

void func_714()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		switch (iVar1)
		{
			case 171:
				unk_0xF6A7C6FEAD04F4B3(1, iVar0, &uVar2, 2);
				break;
			
			case 182:
				func_715(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_715(int iParam0)
{
	struct<10> Var0;
	var uVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 10))
	{
		if (unk_0x31F12808DC47A9E5(Var0.f_0))
		{
			if (unk_0xB6C2454233C8F532(Var0.f_0))
			{
				uVar10 = unk_0x6DE4035D8BAB73B4(Var0.f_0);
				if (unk_0xEE1E09882FA264CA(uVar10))
				{
					iVar11 = unk_0xD3287DCBDBC58316(iVar10);
					if (unk_0x1DD0F419559F38C7(iVar11))
					{
						if (Var0.f_3)
						{
							if (unk_0x31F12808DC47A9E5(Var0.f_1))
							{
								if (unk_0xB6C2454233C8F532(Var0.f_1))
								{
									iVar10 = unk_0x6DE4035D8BAB73B4(Var0.f_1);
									if (unk_0xEE1E09882FA264CA(iVar10))
									{
										iVar12 = unk_0xD3287DCBDBC58316(iVar10);
										if (iVar12 == unk_0x8CFC7D6E1DA5D304())
										{
											if (func_493())
											{
												if (func_495())
												{
													if (!func_339(iVar12, iVar11) && func_718(iVar12))
													{
														if (func_716(Var0))
														{
															if (func_45(iVar11))
															{
																Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 = (Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 + (Global_262145.f_17436 * Global_262145.f_17437));
															}
															else
															{
																Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 = (Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 + (Global_262145.f_17435 * Global_262145.f_17437));
															}
														}
														else if (func_45(iVar11))
														{
															Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 = (Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 + Global_262145.f_17436);
														}
														else
														{
															Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 = (Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 + Global_262145.f_17435);
														}
													}
													else if (iVar12 == iVar11 || !func_339(iVar12, iVar11))
													{
														if (func_716(Var0))
														{
															Local_956[unk_0xA651DA0BC9FD8FA4() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_533(11);
												}
											}
											else
											{
												func_533(9);
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

int func_716(struct<10> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x31F12808DC47A9E5(unk_0x6DE4035D8BAB73B4(Param0.f_1)) && !unk_0x74C2FE037DFC8B4A(unk_0x6DE4035D8BAB73B4(Param0.f_1), 0))
	{
		if (func_717(unk_0x6DE4035D8BAB73B4(Param0.f_1)))
		{
			iVar0 = unk_0x4EC9249A7A40AB3A(Param0.f_4);
			iVar1 = Param0.f_4;
			iVar2 = unk_0x6FC79CDB2F486DF5(iVar1);
			if (((Param0.f_9 || iVar1 == joaat("weapon_unarmed")) || iVar2 == joaat("GROUP_MELEE")) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_717(int iParam0)
{
	int iVar0;
	
	if (unk_0xB160CAD76325B7F1(iParam0))
	{
		return 1;
	}
	if (unk_0x657B649BA2AD3582(iParam0, 1))
	{
		iVar0 = unk_0x5AD687C3474F04B4(iParam0, 1);
		if ((((unk_0x4F69FBD64CDF125B(iVar0) == joaat("chimera") || unk_0x4F69FBD64CDF125B(iVar0) == joaat("blazer")) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("blazer2")) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("blazer3")) || unk_0x4F69FBD64CDF125B(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_718(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x3E8AA4B2B7764D27(iParam0);
	if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(iParam0), 0))
	{
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(iParam0), 0);
		iVar1 = func_719(iVar0);
		if (func_339(iVar1, iParam0) || iVar1 == iParam0)
		{
			unk_0x3E8AA4B2B7764D27(iParam0);
			unk_0x3E8AA4B2B7764D27(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (!unk_0x74B8CA477787A438(iParam0, -1, 0))
		{
			iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, -1, 0);
			if (!unk_0x0FAE113CE72ED842(iVar0))
			{
				iVar1 = unk_0xD3287DCBDBC58316(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_885(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_720()
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_674(9))
		{
			iVar0 = (1 - func_34(unk_0x8CFC7D6E1DA5D304()));
			if (Local_921.f_16[1] != Local_921.f_16[0])
			{
				if (Local_921.f_16[iVar0] != func_29())
				{
					StringCopy(&Local_898, func_536(Local_921.f_16[iVar0]), 64);
					iLocal_881 = func_652(Local_921.f_16[iVar0]);
					func_650(9);
				}
			}
		}
	}
}

void func_721()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x178FDB0B1F1679C1(unk_0x18F7BE9ACB7D08F4()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3479F6F64A48251C(iVar0);
		if (iVar1 != unk_0x8CFC7D6E1DA5D304())
		{
			if (unk_0x4AF13BCD120BCDBC(iVar1))
			{
				if (!unk_0xB03A1684359C50A1(uLocal_860, iVar0))
				{
					unk_0x86BEE64E65765306(iVar1, 0);
					unk_0xD2A9C3F486236CC5(&iLocal_860, iVar0);
				}
				else if (!unk_0x1DD0F419559F38C7(iVar1))
				{
					if (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)))
					{
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
						{
							if (!unk_0xB03A1684359C50A1(uLocal_859, iVar0))
							{
								if (((!func_723(unk_0x18F7BE9ACB7D08F4(), unk_0x6604E096142B4B55(iVar1)) && !func_722(unk_0x6604E096142B4B55(iVar1))) && !func_339(unk_0x8CFC7D6E1DA5D304(), iVar1)) && (func_554() || func_551()))
								{
									unk_0x86BEE64E65765306(iVar1, 1);
									unk_0xD2A9C3F486236CC5(&iLocal_859, iVar0);
								}
							}
							else if (func_723(unk_0x18F7BE9ACB7D08F4(), unk_0x6604E096142B4B55(iVar1)))
							{
								unk_0x86BEE64E65765306(iVar1, 0);
								unk_0x62148293B793073B(&iLocal_859, iVar0);
							}
							else if (func_722(unk_0x6604E096142B4B55(iVar1)))
							{
								unk_0x86BEE64E65765306(iVar1, 0);
								unk_0x62148293B793073B(&iLocal_859, iVar0);
							}
							else if (func_339(unk_0x8CFC7D6E1DA5D304(), iVar1))
							{
								unk_0x86BEE64E65765306(iVar1, 0);
								unk_0x62148293B793073B(&iLocal_859, iVar0);
							}
							else if (!func_554() && !func_551())
							{
								unk_0x86BEE64E65765306(iVar1, 0);
								unk_0x62148293B793073B(&iLocal_859, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(unk_0x85D34259F4F52150(), 1))
				{
					if (Local_956[iLocal_861 /*6*/].f_5 >= 2)
					{
						if (!func_44(unk_0xE24BCF1006ECB50A(iVar1), 1))
						{
							if (!unk_0xB03A1684359C50A1(iLocal_859, iVar0))
							{
								if (!(unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1))))
								{
									if (!func_723(unk_0x18F7BE9ACB7D08F4(), unk_0x6604E096142B4B55(iVar1)) && !func_722(unk_0x6604E096142B4B55(iVar1)))
									{
										unk_0x86BEE64E65765306(iVar1, 1);
										unk_0xD2A9C3F486236CC5(&iLocal_859, iVar0);
									}
								}
							}
							else if (!(unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1))))
							{
								if (func_723(unk_0x18F7BE9ACB7D08F4(), unk_0x6604E096142B4B55(iVar1)) || func_722(unk_0x6604E096142B4B55(iVar1)))
								{
									unk_0x86BEE64E65765306(iVar1, 0);
									unk_0x62148293B793073B(&iLocal_859, iVar0);
								}
							}
						}
						else if (unk_0xB03A1684359C50A1(iLocal_859, iVar0))
						{
							if (func_44(unk_0xE24BCF1006ECB50A(iVar1), 1))
							{
								unk_0x86BEE64E65765306(iVar1, 0);
								unk_0x62148293B793073B(&iLocal_859, iVar0);
							}
						}
					}
				}
				else
				{
					if (!unk_0xB03A1684359C50A1(iLocal_859, iVar0))
					{
						if (func_44(unk_0xE24BCF1006ECB50A(iVar1), 1))
						{
							unk_0x86BEE64E65765306(iVar1, 1);
							unk_0xD2A9C3F486236CC5(&iLocal_859, iVar0);
						}
					}
					if (!func_44(unk_0xE24BCF1006ECB50A(iVar1), 1))
					{
						if (unk_0xB03A1684359C50A1(iLocal_859, iVar0))
						{
							unk_0x86BEE64E65765306(iVar1, 0);
							unk_0x62148293B793073B(&iLocal_859, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_722(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x1A7B277A2CBA7ADF(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3479F6F64A48251C(iVar0);
		if (unk_0x4AF13BCD120BCDBC(iVar1))
		{
			if (unk_0x1DD0F419559F38C7(iVar1))
			{
				iVar2 = unk_0x6604E096142B4B55(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_723(iParam0, iVar2))
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

bool func_723(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x657B649BA2AD3582(iParam0, 0) || !unk_0x657B649BA2AD3582(iParam1, 0))
	{
		return 0;
	}
	return unk_0x5AD687C3474F04B4(iParam0, 0) == unk_0x5AD687C3474F04B4(iParam1, 0);
}

void func_724()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x3479F6F64A48251C(iLocal_863);
	iVar2 = func_34(unk_0x8CFC7D6E1DA5D304());
	if (unk_0x4AF13BCD120BCDBC(iVar1))
	{
		if (unk_0x1DD0F419559F38C7(iVar1))
		{
			iVar0 = unk_0xE24BCF1006ECB50A(iVar1);
			if (iLocal_861 > -1)
			{
				if (func_44(unk_0xF4E7C3C6384793AA(iLocal_861), 1))
				{
					if (func_674(9))
					{
						if (iVar0 != unk_0x85D34259F4F52150())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!unk_0xB03A1684359C50A1(iLocal_862, iLocal_863))
										{
											func_75(iVar1, 432, 1);
											func_70(iVar1, func_74(iLocal_881), 1);
											unk_0xD2A9C3F486236CC5(&iLocal_862, iLocal_863);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xB03A1684359C50A1(iLocal_862, iLocal_863))
		{
			func_75(iVar1, 432, 0);
			func_70(iVar1, func_74(iLocal_881), 0);
			unk_0x62148293B793073B(&iLocal_862, iLocal_863);
		}
	}
	iLocal_863++;
	if (iLocal_863 >= 32)
	{
		iLocal_863 = 0;
	}
}

void func_725()
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
		Local_748[iVar1 /*3*/] = func_29();
		Local_748[iVar1 /*3*/].f_1 = -1;
		Local_748[iVar1 /*3*/].f_2 = uVar3;
		unk_0x62148293B793073B(&uLocal_855, iVar1);
		unk_0x62148293B793073B(&uLocal_857, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		Local_107[iVar0 /*20*/] = func_726();
		Local_107[iVar0 /*20*/].f_1 = -1;
		unk_0x62148293B793073B(&uLocal_856, iVar0);
		Local_107[iVar0 /*20*/].f_2 = { Var4 };
		Local_107[iVar0 /*20*/].f_18 = 0;
		Local_107[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar20 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		if (unk_0x0CA6AB9C192005B8(iVar0))
		{
			Local_107[iVar0 /*20*/] = iVar0;
			unk_0xD2A9C3F486236CC5(&uLocal_856, iVar0);
			iVar2 = unk_0x8A0B92A0286253B3(Local_107[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_885(iVar2, 0, 1))
			{
				iVar20++;
				Local_748[iVar1 /*3*/] = iVar2;
				Local_107[iVar0 /*20*/].f_1 = iVar1;
				Local_748[iVar1 /*3*/].f_1 = iVar0;
				Local_748[iVar1 /*3*/].f_2 = unk_0x6604E096142B4B55(iVar2);
				StringCopy(&(Local_107[iVar0 /*20*/].f_2), unk_0x3E8AA4B2B7764D27(iVar2), 64);
				unk_0xD2A9C3F486236CC5(&uLocal_855, iVar1);
				if (unk_0x74C2FE037DFC8B4A(Local_748[iVar1 /*3*/].f_2, 0))
				{
					unk_0xD2A9C3F486236CC5(&uLocal_857, iVar1);
				}
				if (func_45(Local_748[iVar1 /*3*/]))
				{
					Local_107[iVar0 /*20*/].f_18 = 1;
				}
				else if (func_97(Local_748[iVar1 /*3*/], 0))
				{
					Local_107[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_861 == iVar0)
				{
					if (unk_0x657B649BA2AD3582(Local_748[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_107[iVar0 /*20*/].f_18)
				{
					if (!unk_0xB03A1684359C50A1(uLocal_857, iVar1) && !unk_0xB03A1684359C50A1(iLocal_857, unk_0x8CFC7D6E1DA5D304()))
					{
					}
				}
				else if (Local_107[iVar0 /*20*/].f_19)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_858 != iVar20)
	{
		iLocal_858 = iVar20;
	}
}

int func_726()
{
	return -1;
}

void func_727()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iLocal_861 = -1;
	if (unk_0xB03A1684359C50A1(uLocal_855, unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0xB03A1684359C50A1(uLocal_856, unk_0xA651DA0BC9FD8FA4()))
		{
			if (!func_253(unk_0x8CFC7D6E1DA5D304()))
			{
				iLocal_861 = unk_0xA651DA0BC9FD8FA4();
			}
			else if (func_251() && !func_730())
			{
				uVar0 = func_728();
				if (unk_0xEE1E09882FA264CA(uVar0))
				{
					iVar1 = unk_0xD3287DCBDBC58316(iVar0);
					if (unk_0x1DD0F419559F38C7(iVar1))
					{
						iVar2 = unk_0xE24BCF1006ECB50A(iVar1);
						iLocal_861 = iVar2;
					}
				}
			}
		}
	}
}

var func_728()
{
	if (unk_0x31F12808DC47A9E5(func_729()))
	{
		return func_729();
	}
	return func_250();
}

var func_729()
{
	return Global_2359302.f_3;
}

bool func_730()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 11);
}

int func_731()
{
	var uVar0;
	
	func_736(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_735())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	if (func_733(157))
	{
		if (!func_732())
		{
			return 1;
		}
	}
	if (func_733(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_72() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_72()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_732()
{
	return Global_2447128.f_586;
}

int func_733(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_734()
{
	return Global_2456781;
}

bool func_735()
{
	return Global_2447128.f_581;
}

void func_736(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_737(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_737(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_885(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(iVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(iVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_738(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_738(int iParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(iParam0))
		{
			if (unk_0x84E7E48409E0DA9F(iParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					unk_0x337F2213526139E0(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(iParam0, 0))
		{
			if (unk_0x1800B99666D25740(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_739(bool bParam0)
{
	if (func_740(1))
	{
		return 1;
	}
	if (Global_2512581.f_4878.f_30)
	{
		Global_2512581.f_4878.f_30 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_89() == func_29() || !func_885(func_89(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_740(bool bParam0)
{
	bool bVar0;
	
	if (!func_159(1))
	{
		bVar0 = false;
		if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 != func_29())
		{
			if (func_885(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57, 0, 1))
			{
				if ((Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 4 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 8) || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_741(func_62(unk_0x8CFC7D6E1DA5D304())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_223(31);
				if (func_93(func_62(unk_0x8CFC7D6E1DA5D304())))
				{
					func_223(81);
				}
				if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 != func_29() && unk_0x4AF13BCD120BCDBC(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57))
				{
					Global_1626044 = func_231(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57, -2, 0, 0);
					if (!func_45(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57))
					{
						func_223(88);
					}
				}
				else
				{
					Global_1626044 = 1;
				}
				Global_1626028 = { Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_741(int iParam0)
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
		case 229:
		case 230:
		case 233:
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

void func_742()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_743()
{
	var uVar0;
	int iVar1;
	
	if (!func_808(&uLocal_99))
	{
		unk_0x9BEA833CAF67289C("BIKER_MP_MUSIC_STOP");
	}
	unk_0x74526DD63FA067F5(0);
	func_490(&uLocal_99);
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()) == uLocal_876[0] || unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()) == uLocal_876[1])
		{
			unk_0x641E77554763EF06(unk_0x18F7BE9ACB7D08F4(), iLocal_879);
		}
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_44(unk_0x85D34259F4F52150(), 9))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			func_79(9);
		}
	}
	func_51();
	Global_2512581.f_262 = 0;
	func_806(Global_1807007, -1, -1, -1, -1);
	func_747(1, 0);
	func_746();
	func_499();
	func_66();
	if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
	{
		uVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
		iVar1 = unk_0x4F69FBD64CDF125B(uVar0);
		if (func_494(iVar1))
		{
			unk_0xDCFE648D80E16920(iVar0, 0);
		}
	}
	func_548(0);
	func_745();
	func_744();
	unk_0x810C5D6462DD69E6();
}

void func_744()
{
	unk_0x174D10140C6EDAA7(uLocal_876[0]);
	unk_0x174D10140C6EDAA7(uLocal_876[1]);
}

void func_745()
{
	if (Global_1804423)
	{
		if (unk_0xB03A1684359C50A1(Global_1804424, 0))
		{
			unk_0x62148293B793073B(&Global_2520572, 0);
		}
		if (unk_0xB03A1684359C50A1(Global_1804424, 1))
		{
			unk_0x62148293B793073B(&Global_2520572, 1);
		}
		if (unk_0xB03A1684359C50A1(Global_1804424, 5))
		{
			unk_0x62148293B793073B(&Global_2520572, 5);
		}
		if (unk_0x94F13204B7EB050E(-355737150))
		{
			unk_0xF23A1E4D6AD3CAD2(-355737150, 1, 0, 0);
		}
		if (unk_0x94F13204B7EB050E(-580979506))
		{
			unk_0xF23A1E4D6AD3CAD2(-580979506, 1, 0, 0);
		}
		if (unk_0x94F13204B7EB050E(-1426452475))
		{
			unk_0xF23A1E4D6AD3CAD2(-1426452475, 1, 0, 0);
		}
		if (unk_0x94F13204B7EB050E(745417724))
		{
			unk_0xF23A1E4D6AD3CAD2(745417724, 1, 0, 0);
		}
		if (unk_0x94F13204B7EB050E(-1305304906))
		{
			unk_0xF23A1E4D6AD3CAD2(-1305304906, 1, 0, 0);
		}
		if (unk_0x94F13204B7EB050E(-1543175077))
		{
			unk_0xF23A1E4D6AD3CAD2(-1543175077, 1, 0, 0);
		}
		if (unk_0x94F13204B7EB050E(-811770997))
		{
			unk_0xF23A1E4D6AD3CAD2(-811770997, 1, 0, 0);
		}
		Global_1804424 = 0;
	}
	Global_1804423 = 0;
}

void func_746()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573838 = { Var0 };
	Global_1573838.f_13 = func_29();
	if (unk_0xB03A1684359C50A1(Global_1573336, 3))
	{
		unk_0x62148293B793073B(&Global_1573336, 3);
	}
}

void func_747(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1347470.f_1.f_108 != 0)
	{
		Global_1347470.f_1.f_108 = 0;
	}
	Global_1347470.f_1.f_109 = -1;
	Global_1347470.f_1.f_110 = -1;
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 167 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 168)
	{
		func_804();
		unk_0x62148293B793073B(&(Global_1806998.f_3), 4);
	}
	if ((func_157() && iParam1 != 0) && Global_262145.f_16124)
	{
		if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 190 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 192)
		{
			func_787(unk_0x8CFC7D6E1DA5D304(), iParam1, 1, 0);
		}
	}
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 164 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 208)
	{
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(5, 1);
	}
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 != -1)
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 = -1;
		if (!unk_0xB03A1684359C50A1(Global_1574398.f_1, 14) && !func_116(unk_0x8CFC7D6E1DA5D304()))
		{
			func_660(0);
		}
	}
	else if (func_785(unk_0x8CFC7D6E1DA5D304()) != -1)
	{
		func_673(-1);
	}
	func_784(func_29());
	if (func_217(16))
	{
		func_783(16);
	}
	func_780(0);
	func_669(-1);
	func_746();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_779(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_777(iVar1);
		iVar1++;
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 0))
	{
		unk_0x8BB3FA32294185BB(1f);
		unk_0x945880A1F9FE9E4F(5);
		unk_0x62148293B793073B(&(Global_1806998.f_3), 0);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 5))
	{
		unk_0x62148293B793073B(&(Global_1806998.f_3), 5);
	}
	iVar2 = func_102();
	if ((func_85(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_776(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_132(iVar2))
	{
		func_772(-1, 1);
	}
	else if (((((func_101(iVar2) || func_771(iVar2)) || func_770(iVar2)) || func_122(iVar2)) || func_121(iVar2)) || func_120(iVar2))
	{
	}
	else
	{
		func_772(-1, 1);
	}
	func_700(19);
	func_700(20);
	func_700(21);
	func_700(22);
	func_700(27);
	func_783(3);
	func_783(4);
	func_783(7);
	func_769();
	if (func_111(unk_0x8CFC7D6E1DA5D304()))
	{
		func_768(0);
	}
	func_700(29);
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 = func_29();
	if (Global_2512581.f_4878.f_30 != 0)
	{
		Global_2512581.f_4878.f_30 = 0;
	}
	if (bParam0)
	{
		func_761();
	}
	if (!func_116(unk_0x8CFC7D6E1DA5D304()))
	{
		func_760();
		unk_0x62148293B793073B(&(Global_1806998.f_3), 1);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 6))
	{
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(5, 1);
		unk_0x62148293B793073B(&(Global_1806998.f_3), 6);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 7))
	{
		unk_0x62148293B793073B(&(Global_1806998.f_3), 7);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 8))
	{
		func_759("IMPEXP_SELFDES", 0);
		func_750("IMPEXP_SELFDES");
		unk_0x62148293B793073B(&(Global_1806998.f_3), 8);
	}
	func_748(iVar2, 0);
}

void func_748(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xB03A1684359C50A1(Global_1806998.f_3, 9))
		{
			unk_0x64D773F3BE6DC50A(func_749(iParam0));
			unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 9);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 9))
	{
		unk_0xA11D9B06B99FE786(func_749(iParam0));
		unk_0x62148293B793073B(&(Global_1806998.f_3), 9);
	}
}

char* func_749(int iParam0)
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

void func_750(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE0C4A595CD61B7F2(&(Global_104551.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x9D39145AD645E383(&(Global_104551.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104551.f_14111[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_752();
					Global_104551.f_14111[iVar0 /*104*/].f_99[Global_14453] = 0;
					if (func_751(iVar0))
					{
					}
					else
					{
						Global_104551.f_14111[iVar0 /*104*/].f_24 = 0;
						Global_104551.f_14111[iVar0 /*104*/].f_28 = 0;
						Global_104551.f_14111[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x1BEAF0E2DD876AA1(Global_104551.f_14111[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_751(int iParam0)
{
	if ((Global_104551.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104551.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104551.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_752()
{
	if (func_758(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_753();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_753()
{
	func_754();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_754()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_757(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_756(unk_0x18F7BE9ACB7D08F4());
			if (func_755(iVar0) && (!func_758(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_755(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_755(int iParam0)
{
	return iParam0 < 3;
}

int func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_757(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_757(int iParam0)
{
	if (func_755(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_758(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_759(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE0C4A595CD61B7F2(&(Global_104551.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x9D39145AD645E383(&(Global_104551.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104551.f_14111[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104551.f_14111[iVar0 /*104*/].f_24 = 1;
				if (Global_104551.f_14111[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104551.f_14021[0 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104551.f_14021[1 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104551.f_14021[2 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104551.f_14021[3 /*20*/].f_17 = 0;
					}
					Global_104551.f_14111[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104551.f_14111[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_760()
{
	if (unk_0x19B3A29FD53C54A6(Global_2512581.f_4874))
	{
		if (!Global_2512581.f_4874 == unk_0xBCF9D020FA9C313D() && Global_2512581.f_4873 < 1f)
		{
			return;
		}
	}
	Global_2512581.f_4874 = -1;
	Global_2512581.f_4873 = 1f;
}

void func_761()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_24), &Global_2409093, 2);
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_26), &Global_2409095, 18);
	func_766();
	func_762(1, 1, 0);
	func_52();
}

void func_762(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x5AE102D61A343DFA(&(Global_2405047.f_44), &Global_2409113, 316);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409113 };
		Global_2405047.f_44.f_49 = { Global_2409113.f_49 };
		Global_2405047.f_44.f_52 = Global_2409113.f_52;
		Global_2405047.f_44.f_53 = Global_2409113.f_53;
	}
	if (bParam0)
	{
		func_765();
	}
	if (!bParam2)
	{
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_764(0);
	func_763();
}

void func_763()
{
	struct<6> Var0;
	
	if (Global_2405047.f_482.f_1 == unk_0xBCF9D020FA9C313D())
	{
		Global_2405047.f_482 = { Var0 };
	}
}

void func_764(bool bParam0)
{
	if (bParam0)
	{
		Global_2405047.f_685 = 0;
	}
	else
	{
		Global_2405047.f_685 = 1;
	}
}

void func_765()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_360), &Global_2409429, 121);
}

void func_766()
{
	func_767();
	Global_2405047.f_2228 = 0;
}

void func_767()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2229[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_768(bool bParam0)
{
	if (bParam0)
	{
		if (!func_103(unk_0x8CFC7D6E1DA5D304(), 9))
		{
			if (func_109(unk_0x8CFC7D6E1DA5D304()) != 0)
			{
				func_118(9);
			}
		}
	}
	else if (func_103(unk_0x8CFC7D6E1DA5D304(), 9))
	{
		func_700(9);
	}
}

void func_769()
{
	if (func_547(unk_0x8CFC7D6E1DA5D304()))
	{
		func_700(25);
	}
}

int func_770(int iParam0)
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

int func_771(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_772(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_102();
	}
	if (iParam0 > 0)
	{
		if (func_161() != func_29())
		{
			if (func_775(unk_0x8CFC7D6E1DA5D304()) == unk_0x8CFC7D6E1DA5D304())
			{
				Global_2492267.f_93[func_774(iParam0)] = 1;
			}
		}
		iVar0 = func_774(159);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(157);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(148);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(164);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(142);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(152);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(166);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(170);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(173);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(179);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(200);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(201);
		if (func_773(iVar0, Global_262145.f_11765, bParam1))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(182);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(183);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(185);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(186);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(180);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(195);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(197);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(198);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(207);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(208);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(209);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(214);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(215);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(216);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(217);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(218);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(219);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(220);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(221);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_773(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_103(unk_0x8CFC7D6E1DA5D304(), 19) && !func_103(unk_0x8CFC7D6E1DA5D304(), 20)) && !func_103(unk_0x8CFC7D6E1DA5D304(), 9))
		{
			return 0;
		}
	}
	if (Global_2492267.f_93[iParam0] == 1 && func_5(&(Global_2492267[iParam0 /*2*/])))
	{
		if (func_22(&(Global_2492267[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2492267.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_774(int iParam0)
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

int func_775(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_35;
}

void func_776(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_102();
	}
	if (iParam0 > 0)
	{
		if (func_161() != func_29())
		{
			Global_2492267.f_93[func_774(iParam0)] = 1;
		}
		iVar0 = func_774(155);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(163);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(160);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(153);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(162);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(154);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(171);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(172);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(199);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(194);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(193);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(210);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(205);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(189);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_774(211);
		if (func_773(iVar0, Global_262145.f_11766, 0))
		{
			func_7(&(Global_2492267[iVar0 /*2*/]));
			func_4(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_777(int iParam0)
{
	if (!func_11(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_303[iParam0 /*3*/], func_778(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_303[iParam0 /*3*/] = { func_778() };
	}
	if (!func_11(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_290[iParam0 /*3*/], func_778(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_290[iParam0 /*3*/] = { func_778() };
	}
}

Vector3 func_778()
{
	struct<3> Var0;
	
	return Var0;
}

void func_779(int iParam0)
{
	if (!func_11(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_145[iParam0 /*3*/], func_778(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_145[iParam0 /*3*/] = { func_778() };
	}
	if (!func_11(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_120[iParam0 /*3*/], func_778(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_120[iParam0 /*3*/] = { func_778() };
	}
}

void func_780(bool bParam0)
{
	if (bParam0)
	{
		if (!func_695(unk_0x8CFC7D6E1DA5D304(), 14))
		{
			func_782(14);
		}
	}
	else if (func_695(unk_0x8CFC7D6E1DA5D304(), 14))
	{
		func_781(14);
	}
}

void func_781(int iParam0)
{
	unk_0x62148293B793073B(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_5), iParam0);
}

void func_782(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_5), iParam0);
}

void func_783(int iParam0)
{
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_34), iParam0);
}

void func_784(int iParam0)
{
	if (func_41(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x8CFC7D6E1DA5D304() != iParam0)
		{
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_443 != iParam0)
			{
				Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_443 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_785(int iParam0)
{
	if (func_786(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_32;
	}
	return -1;
}

int func_786(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_32 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_787(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_308(iParam0, iParam1) && func_803(iParam0, iParam1))
	{
		iVar0 = func_307(iParam0, iParam1);
		func_790(iVar0, bParam2, bParam3);
		func_788(iVar0, 1);
	}
}

void func_788(int iParam0, int iParam1)
{
	func_294(func_789(iParam0), iParam1, -1, 1);
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_6 = iParam1;
}

int func_789(int iParam0)
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

void func_790(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_599(unk_0x8CFC7D6E1DA5D304(), iParam0);
	if (!bParam1)
	{
		func_802(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2492180[iParam0];
		iVar0 = func_801(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1808538 = -1;
		}
		func_800(iParam0, 0, bParam2);
	}
	else if (func_798(iParam0, bParam2))
	{
		iVar0 = func_797(iVar2, 0);
		iVar3 = func_645(unk_0x8CFC7D6E1DA5D304(), iVar2);
		iVar4 = func_796(iVar2, bParam2);
		iVar5 = func_797(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_795(iVar2) && func_794(unk_0x8CFC7D6E1DA5D304(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_802(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_793(unk_0x8CFC7D6E1DA5D304(), iVar2) > 0)
		{
			func_792(iParam0, (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2 - (func_796(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_797(iVar2, bParam2) / func_793(unk_0x8CFC7D6E1DA5D304(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_795(iVar2) && func_794(unk_0x8CFC7D6E1DA5D304(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_791(unk_0x8CFC7D6E1DA5D304(), iVar2, iVar0, bParam2);
}

void func_791(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_301(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1595681[iParam0 /*678*/].f_266.f_234 = iParam2;
				}
				else
				{
					Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_792(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2)
	{
		Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_793(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_301(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_794(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_301(iParam1) && func_795(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_795(int iParam0)
{
	return func_154(iParam0) == 5;
}

int func_796(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_154(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16095;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16100;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16094;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16099;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16093;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16098;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16091;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16096;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16092;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16097;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20143;
				if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20144;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20127;
				if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20128;
				}
			}
			break;
	}
	return uVar0;
}

int func_797(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_154(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16076;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16085);
			}
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16090);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16077;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16084);
			}
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16089);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16078;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16083);
			}
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16088);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16079;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16081);
			}
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16086);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16080;
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16082);
			}
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16087);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20140;
			}
			else
			{
				iVar0 = Global_262145.f_20124;
			}
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20141);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20125);
				}
			}
			if (func_306(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20142);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20126);
				}
			}
			if (func_794(unk_0x8CFC7D6E1DA5D304(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_798(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_295(15384, -1, -1);
	}
	return func_295(func_799(iParam0), -1, -1);
}

int func_799(int iParam0)
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

void func_800(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_294(15384, iParam1, -1, 1);
		return;
	}
	func_294(func_799(iParam0), iParam1, -1, 1);
}

int func_801(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2492180[iParam0];
	iVar1 = func_599(unk_0x8CFC7D6E1DA5D304(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2492187;
	}
	if (func_795(iVar1))
	{
		if (func_794(unk_0x8CFC7D6E1DA5D304(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_802(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2492187 = iParam1;
		return;
	}
	Global_2492180[iParam0] = iParam1;
}

int func_803(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_308(iParam0, iParam1))
	{
		iVar0 = func_307(iParam0, iParam1);
		if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_4 > 0 && Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_804()
{
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 28);
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 29);
	func_805(24);
}

void func_805(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_7[iVar0]), iVar1);
}

void func_806(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0xFCA64981FEF7C913();
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0x9D39145AD645E383(uVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			unk_0xC510A49DADCE88A0(&Var1);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1807007.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			unk_0xF0D77DDB2686186A(&Var16);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1807007.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			unk_0x4373676A6ED966E3(&Var35);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1807007.f_14;
			Var54.f_15 = iParam14;
			unk_0x2F043CC3BD8F81D8(&Var54);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1807007.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			unk_0x6F2043B06AE9A9DC(&Var70);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1807007.f_14;
			unk_0x336F5A777799B1A0(&Var87);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (unk_0xBBDA792448DB5A89(iParam14) / unk_0xBBDA792448DB5A89(iParam15));
			Var102.f_16 = iParam16;
			unk_0xCBDC54BBFAB44B50(&Var102);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1807007.f_14;
			unk_0xBBB4E01017A90BC3(&Var119);
		}
	}
	func_807();
}

void func_807()
{
	struct<18> Var0;
	
	Global_1807007 = { Var0 };
}

bool func_808(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 0);
}

void func_809(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_674(0))
	{
		uVar1 = func_849(func_25(), bParam0, bVar0, bParam1);
		Global_1807007.f_2 = Local_921.f_33;
		Global_1807007.f_3 = Local_921.f_34;
		func_810(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1);
		func_650(0);
	}
}

void func_810(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_62(unk_0x8CFC7D6E1DA5D304());
	if (func_93(iVar0))
	{
		Global_1807025.f_2 = func_848();
		Global_1807025.f_3 = func_847();
		Global_1807025.f_50 = iParam4;
		Global_1807025.f_51 = iParam5;
		Global_1807025.f_10 = unk_0xE6E19D6A1FC25165();
		Global_1807025.f_20 = (Global_1807025.f_10 - Global_1807025.f_9);
		Global_1807025.f_12 = uParam1;
		Global_1807025.f_19 = func_843(iVar0, bParam0, func_846(bParam3));
		if (bParam0)
		{
			Global_1807025.f_11 = 1;
		}
		else
		{
			Global_1807025.f_11 = 0;
		}
		if ((func_111(unk_0x8CFC7D6E1DA5D304()) || func_110(unk_0x8CFC7D6E1DA5D304())) || func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807025.f_8 = 1;
		}
		else
		{
			Global_1807025.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1807025.f_43 = 0;
			Global_1807025.f_45 = func_645(func_161(), iParam2);
			Global_1807025.f_47 = iParam7;
			Global_1807025.f_46 = iParam6;
			Global_1807025.f_52 = func_842(func_161(), iParam2);
		}
		func_840(iVar0);
	}
	else if (func_100(iVar0))
	{
		Global_1807078.f_2 = func_848();
		Global_1807078.f_3 = func_847();
		Global_1807078.f_10 = unk_0xE6E19D6A1FC25165();
		Global_1807078.f_19 = (Global_1807078.f_10 - Global_1807078.f_9);
		Global_1807078.f_12 = uParam1;
		if (bParam0)
		{
			Global_1807078.f_11 = 1;
		}
		else
		{
			Global_1807078.f_11 = 0;
		}
		if ((func_111(unk_0x8CFC7D6E1DA5D304()) || func_110(unk_0x8CFC7D6E1DA5D304())) || func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807078.f_8 = 1;
		}
		else
		{
			Global_1807078.f_8 = 0;
		}
		func_838(iVar0);
	}
	else if (func_122(iVar0))
	{
		Global_1807140.f_2 = func_848();
		Global_1807140.f_3 = func_847();
		Global_1807140.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807140.f_18 = (Global_1807140.f_9 - Global_1807140.f_8);
		Global_1807140.f_11 = uParam1;
		Global_1807140.f_7 = func_638();
		Global_1807140.f_42 = func_641(func_49(), 5);
		iVar1 = unk_0x8CFC7D6E1DA5D304();
		iVar2 = func_143(iVar1);
		Global_1807140.f_28 = iVar2;
		Global_1807140.f_29 = func_640((func_606(iVar1) || func_605(iVar1)));
		Global_1807140.f_30 = func_640(func_837(iVar1));
		Global_1807140.f_32 = func_640(func_603(iVar1));
		Global_1807140.f_33 = func_640(func_604(iVar1));
		Global_1807140.f_34 = func_640(func_836(iVar1));
		Global_1807140.f_35 = func_640(func_602(0, iVar1) == 1);
		Global_1807140.f_36 = func_640(func_835(iVar1));
		Global_1807140.f_37 = func_640(func_834(iVar1));
		Global_1807140.f_38 = func_640(func_833(iVar1));
		Global_1807140.f_39 = func_640(func_306(iVar1, iVar2, 0));
		Global_1807140.f_40 = func_640(func_306(iVar1, iVar2, 2));
		Global_1807140.f_41 = func_640(func_306(iVar1, iVar2, 1));
		if (func_832(iVar1))
		{
			Global_1807140.f_31 = 2;
		}
		else if (func_831(iVar1))
		{
			Global_1807140.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1807140.f_10 = 1;
		}
		else
		{
			Global_1807140.f_10 = 0;
		}
		if ((func_111(unk_0x8CFC7D6E1DA5D304()) || func_110(unk_0x8CFC7D6E1DA5D304())) || func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_6 = 1;
		}
		else
		{
			Global_1807140.f_6 = 0;
		}
		Global_1807140.f_21 = -2;
		Global_1807140.f_22 = -2;
		func_829(iVar0);
	}
	else if (func_121(iVar0))
	{
		Global_1807183.f_2 = func_848();
		Global_1807183.f_3 = func_847();
		if ((func_111(unk_0x8CFC7D6E1DA5D304()) || func_110(unk_0x8CFC7D6E1DA5D304())) || func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807183.f_6 = 1;
		}
		else
		{
			Global_1807183.f_6 = 0;
		}
		Global_1807183.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807183.f_10 = func_640(bParam0);
		Global_1807183.f_11 = uParam1;
		Global_1807183.f_17 = func_639(func_89());
		Global_1807183.f_18 = (Global_1807183.f_9 - Global_1807183.f_8);
		Global_1807183.f_20 = iParam8;
		Global_1807183.f_21 = -2;
		Global_1807183.f_22 = -2;
		Global_1807183.f_27 = func_828();
		Global_1807183.f_29 = func_130(6090, -1, 0);
		Global_1807183.f_30 = func_130(6086, -1, 0);
		Global_1807183.f_31 = func_130(6087, -1, 0);
		Global_1807183.f_32 = func_130(6089, -1, 0);
		Global_1807183.f_33 = func_130(6088, -1, 0);
		Global_1807183.f_34 = func_130(6091, -1, 0);
		Global_1807183.f_36 = func_640(func_96(1));
		Global_1807183.f_37 = func_825();
		func_815();
		func_813(iVar0);
	}
	else if (func_120(iVar0))
	{
		Global_1807236.f_2 = func_848();
		Global_1807236.f_3 = func_847();
		if ((func_111(unk_0x8CFC7D6E1DA5D304()) || func_110(unk_0x8CFC7D6E1DA5D304())) || func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807236.f_6 = 1;
		}
		else
		{
			Global_1807236.f_6 = 0;
		}
		Global_1807236.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807236.f_10 = func_640(bParam0);
		Global_1807236.f_11 = uParam1;
		Global_1807236.f_18 = (Global_1807236.f_9 - Global_1807236.f_8);
		Global_1807236.f_20 = iParam8;
		Global_1807236.f_23 = Global_786546;
		Global_1807236.f_36 = Global_786546.f_1;
		Global_1807236.f_24 = func_130(6140, -1, 0);
		Global_1807236.f_25 = func_130(6145, -1, 0);
		Global_1807236.f_26 = func_130(6146, -1, 0);
		Global_1807236.f_27 = func_640((((func_637() || func_636()) || func_635()) || func_634(unk_0x8CFC7D6E1DA5D304())));
		Global_1807236.f_28 = func_130(6147, -1, 0);
		Global_1807236.f_29 = func_640(func_633());
		Global_1807236.f_35 = -1;
		Global_1807236.f_38 = -1;
		Global_1807236.f_39 = Global_1807236.f_4;
		Global_1807236.f_40 = Global_1807236.f_5;
		Global_1807236.f_41 = func_848();
		Global_1807236.f_42 = func_640(func_96(1));
		Global_1807236.f_44 = Global_1807236.f_18;
		func_811(iVar0);
	}
	else
	{
		Global_1807007.f_6 = unk_0xE6E19D6A1FC25165();
		if (bParam0)
		{
			Global_1807007.f_7 = 1;
		}
		else
		{
			Global_1807007.f_7 = 0;
		}
		Global_1807007.f_8 = uParam1;
		if (Global_1807007.f_4 == 0)
		{
			if ((func_111(unk_0x8CFC7D6E1DA5D304()) || func_110(unk_0x8CFC7D6E1DA5D304())) || func_114(unk_0x8CFC7D6E1DA5D304()))
			{
				Global_1807007.f_4 = 1;
			}
		}
	}
}

void func_811(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1807236);
	func_812();
}

void func_812()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1807236 = { Var0 };
	Global_1807236.f_16 = 0;
}

void func_813(int iParam0)
{
	unk_0x4809857AF2A6E711(&Global_1807183);
	func_814();
}

void func_814()
{
	struct<53> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1807183 = { Var0 };
	Global_1807183.f_23 = 0;
	Global_1807183.f_24 = 0;
	Global_1807183.f_16 = 0;
}

void func_815()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_621(12));
		func_620(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1320309[iVar1 /*140*/].f_66 != 0 && func_817(Global_1320309[iVar1 /*140*/].f_66, 1))
			{
				if (Global_2512581.f_871 != iVar1)
				{
					if (func_816(Global_1320309[iVar1 /*140*/].f_66))
					{
						if (Global_1320309[iVar1 /*140*/].f_66 != 0)
						{
							iVar3 = Global_1320309[iVar1 /*140*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1807183.f_38 = iVar3;
								break;
							
							case 1:
								Global_1807183.f_39 = iVar3;
								break;
							
							case 2:
								Global_1807183.f_40 = iVar3;
								break;
							
							case 3:
								Global_1807183.f_41 = iVar3;
								break;
							
							case 4:
								Global_1807183.f_42 = iVar3;
								break;
							
							case 5:
								Global_1807183.f_43 = iVar3;
								break;
							
							case 6:
								Global_1807183.f_44 = iVar3;
								break;
							
							case 7:
								Global_1807183.f_45 = iVar3;
								break;
							
							case 8:
								Global_1807183.f_46 = iVar3;
								break;
							
							case 9:
								Global_1807183.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
			return 1;
		
		default:
	}
	return 0;
}

int func_817(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xDC3C87280F94833B(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x44243F2E2F58B8E3()) || (iParam0 == joaat("buffalo3") && !unk_0x44243F2E2F58B8E3())) || (iParam0 == joaat("gauntlet2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blista3"))
	{
		if (!func_824())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x469F77B2A79C2220())
		{
			if (unk_0x2164A4E269B646EB(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x0663FFD85FC79E8F(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_823() && !func_822()) && !func_821()) && !func_820()) && !func_824())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x929A0C5D6A986B4F() || unk_0xC339C5C5B5E8BC5B()) || unk_0x0A8A596EB9C068FA())
		{
		}
		else if (!func_821())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_819(iParam0))
		{
			return 0;
		}
	}
	if (!func_818(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_818(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_158())
	{
		return 1;
	}
	unk_0xFA7CFD9BFC4E130D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x393CD2FA300F18B3(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_819(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2491976)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE6E19D6A1FC25165();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5836 && !Global_262145.f_12069) && iVar1 < Global_262145.f_12070)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13367 && iVar1 < Global_262145.f_13379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13363 && iVar1 < Global_262145.f_13375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13364 && iVar1 < Global_262145.f_13376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13365 && iVar1 < Global_262145.f_13377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13366 && iVar1 < Global_262145.f_13378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13368 && iVar1 < Global_262145.f_13380)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13369 && iVar1 < Global_262145.f_13372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13370 && iVar1 < Global_262145.f_13373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13371 && iVar1 < Global_262145.f_13374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15998 && iVar1 < Global_262145.f_15963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15993 && iVar1 < Global_262145.f_15958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15997 && iVar1 < Global_262145.f_15962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15996 && iVar1 < Global_262145.f_15961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15990 && iVar1 < Global_262145.f_15955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15991 && iVar1 < Global_262145.f_15956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15994 && iVar1 < Global_262145.f_15959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15995 && iVar1 < Global_262145.f_15960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15992 && iVar1 < Global_262145.f_15957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16000 && iVar1 < Global_262145.f_15965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16001 && iVar1 < Global_262145.f_15966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15989 && iVar1 < Global_262145.f_15954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15988 && iVar1 < Global_262145.f_15953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15987 && iVar1 < Global_262145.f_15952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15999 && iVar1 < Global_262145.f_15964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16002 && iVar1 < Global_262145.f_15967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16003 && iVar1 < Global_262145.f_15968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16004 && iVar1 < Global_262145.f_15969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16005 && iVar1 < Global_262145.f_15970)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16150 && iVar1 < Global_262145.f_16172)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16151 && iVar1 < Global_262145.f_16173)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16152 && iVar1 < Global_262145.f_16174)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16153 && iVar1 < Global_262145.f_16175)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16154 && iVar1 < Global_262145.f_16176)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16155 && iVar1 < Global_262145.f_16177)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16157 && iVar1 < Global_262145.f_16178)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16158 && iVar1 < Global_262145.f_16179)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16159 && iVar1 < Global_262145.f_16180)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16160 && iVar1 < Global_262145.f_16181)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16161 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16162 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16163 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16166 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16167 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16156 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16164 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16165 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17801 && iVar1 < Global_262145.f_17861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17802 && iVar1 < Global_262145.f_17862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17803 && iVar1 < Global_262145.f_17863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17804 && iVar1 < Global_262145.f_17864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17805 && iVar1 < Global_262145.f_17865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17806 && iVar1 < Global_262145.f_17866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17807 && iVar1 < Global_262145.f_17867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17808 && iVar1 < Global_262145.f_17868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17809 && iVar1 < Global_262145.f_17869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17810 && iVar1 < Global_262145.f_17870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17811 && iVar1 < Global_262145.f_17871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17812 && iVar1 < Global_262145.f_17872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17813 && iVar1 < Global_262145.f_17873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17814 && iVar1 < Global_262145.f_17874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17815 && iVar1 < Global_262145.f_17875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17816 && iVar1 < Global_262145.f_17876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17817 && iVar1 < Global_262145.f_17877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17818 && iVar1 < Global_262145.f_17878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17819 && iVar1 < Global_262145.f_17879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17820 && iVar1 < Global_262145.f_17880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17821 && iVar1 < Global_262145.f_17881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17822 && iVar1 < Global_262145.f_17882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17823 && iVar1 < Global_262145.f_17883)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18844)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19688 && iVar1 < Global_262145.f_19696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19689 && iVar1 < Global_262145.f_19697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19690 && iVar1 < Global_262145.f_19698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19691 && iVar1 < Global_262145.f_19699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19692 && iVar1 < Global_262145.f_19700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19693 && iVar1 < Global_262145.f_19701)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20464 && iVar1 < Global_262145.f_20484)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20476 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20467 && iVar1 < Global_262145.f_20487)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20477 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20465 && iVar1 < Global_262145.f_20485)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20481 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20479 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20480 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20475 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20482 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20478 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20474 && iVar1 < Global_262145.f_20494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20466 && iVar1 < Global_262145.f_20486)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20468 && iVar1 < Global_262145.f_20488)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20469 && iVar1 < Global_262145.f_20489)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20470 && iVar1 < Global_262145.f_20490)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20471 && iVar1 < Global_262145.f_20491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20472 && iVar1 < Global_262145.f_20492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20473 && iVar1 < Global_262145.f_20493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21428 && iVar1 < Global_262145.f_21456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21429 && iVar1 < Global_262145.f_21457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21430 && iVar1 < Global_262145.f_21458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21431 && iVar1 < Global_262145.f_21459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21432 && iVar1 < Global_262145.f_21460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21433 && iVar1 < Global_262145.f_21461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21434 && iVar1 < Global_262145.f_21462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21435 && iVar1 < Global_262145.f_21463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21436 && iVar1 < Global_262145.f_21464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21437 && iVar1 < Global_262145.f_21465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21438 && iVar1 < Global_262145.f_21466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21439 && iVar1 < Global_262145.f_21467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21440 && iVar1 < Global_262145.f_21468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21441 && iVar1 < Global_262145.f_21469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21442 && iVar1 < Global_262145.f_21470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21443 && iVar1 < Global_262145.f_21471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21444 && iVar1 < Global_262145.f_21472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21445 && iVar1 < Global_262145.f_21473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21446 && iVar1 < Global_262145.f_21474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21447 && iVar1 < Global_262145.f_21475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21448 && iVar1 < Global_262145.f_21476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21449 && iVar1 < Global_262145.f_21477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21450 && iVar1 < Global_262145.f_21478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21451 && iVar1 < Global_262145.f_21479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21452 && iVar1 < Global_262145.f_21480)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_820()
{
	return 0;
}

int func_821()
{
	return 1;
}

int func_822()
{
	return 1;
}

int func_823()
{
	if (unk_0x5E02CD27DBE77D67(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_824()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_825()
{
	var uVar0;
	
	uVar0 = func_827();
	if (!func_144())
	{
		if (func_161() != func_29())
		{
			uVar0 = func_826(func_161()) + 1;
		}
	}
	return uVar0;
}

int func_826(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_19;
}

int func_827()
{
	return func_826(unk_0x8CFC7D6E1DA5D304()) + 1;
}

int func_828()
{
	return func_130(6096, -1, 0);
}

void func_829(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xDA611A012FA700E9(&Global_1807140);
	func_830();
}

void func_830()
{
	struct<43> Var0;
	
	Global_1807140 = { Var0 };
	Global_1807140.f_23 = 0;
	Global_1807140.f_24 = 0;
	Global_1807140.f_16 = 0;
}

bool func_831(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 12);
}

bool func_832(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 13);
}

int func_833(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 12) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 13)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_834(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_835(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (((((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 3) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 4)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 5)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_836(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 6) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 7)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_837(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 9);
}

void func_838(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x4E7B62933B69DA3F(&Global_1807078);
	func_839();
}

void func_839()
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
	Global_1807078 = { Var0 };
	Global_1807078.f_24 = 0;
	Global_1807078.f_25 = 0;
	Global_1807078.f_17 = 0;
}

void func_840(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3456F7325A58B63B(&Global_1807025);
	func_841();
}

void func_841()
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
	Global_1807025 = { Var0 };
	Global_1807025.f_29 = 0;
	Global_1807025.f_30 = 0;
	Global_1807025.f_17 = 0;
}

int func_842(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_306(iParam0, iParam1, 2);
	bVar1 = func_306(iParam0, iParam1, 1);
	bVar2 = func_306(iParam0, iParam1, 0);
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

int func_843(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_132(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16840;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16839;
		}
		else
		{
			iVar0 = Global_262145.f_16821;
		}
		iVar1 = 19;
	}
	else if (func_649(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_86(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16820;
			iVar1 = 20;
		}
	}
	else if (func_93(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16840;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16839;
		}
		else
		{
			iVar0 = Global_262145.f_16821;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xE567E8F7F9EA6A8C(func_648(func_161()), func_647(func_161()), func_848(), func_847(), iVar1, iVar0);
	}
	func_845(iVar0);
	func_844(iVar0);
	return iVar0;
}

void func_844(int iParam0)
{
	int iVar0;
	
	iVar0 = func_130(3951, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_449 = iVar0;
	func_128(3951, iVar0, -1, 1, 0);
}

void func_845(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	Global_1627460[iVar0 /*530*/].f_11.f_448 = (Global_1627460[iVar0 /*530*/].f_11.f_448 + iParam0);
	if (Global_1627460[iVar0 /*530*/].f_11.f_448 < -9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
	else if (Global_1627460[iVar0 /*530*/].f_11.f_448 > 9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
}

int func_846(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_111(unk_0x8CFC7D6E1DA5D304()) || func_114(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	return 0;
}

int func_847()
{
	if (Global_1807007.f_3 != 0)
	{
		return Global_1807007.f_3;
	}
	return -1;
}

int func_848()
{
	if (Global_1807007.f_2 != 0)
	{
		return Global_1807007.f_2;
	}
	return -1;
}

int func_849(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_850(struct<21> Param0)
{
	func_883(func_884(Param0.f_0), Param0);
	func_880(0, -1, 0);
	unk_0x9B457509556CB639(&Local_921, 35);
	unk_0x0D25D64240F2BAA8(&Local_956, 193);
	unk_0xDA6A6B59F261B209(0);
	func_853(0, 0);
	func_851();
	return 1;
}

void func_851()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x48E76A4B7B58B77A("relJoust0", &(uLocal_876[0]));
	unk_0x48E76A4B7B58B77A("relJoust1", &(uLocal_876[1]));
	iVar0 = unk_0xB052D95D688673A4(unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			unk_0xFB5F4D76105A21B5(1, Global_1574714[iVar1], uLocal_876[iVar2]);
			unk_0xFB5F4D76105A21B5(1, uLocal_876[iVar2], Global_1574714[iVar1]);
			unk_0xFB5F4D76105A21B5(iVar0, uLocal_876[iVar2], joaat("COP"));
			unk_0xFB5F4D76105A21B5(iVar0, joaat("COP"), uLocal_876[iVar2]);
			unk_0xFB5F4D76105A21B5(1, uLocal_876[iVar2], Global_1574759[5]);
			unk_0xFB5F4D76105A21B5(1, Global_1574759[5], uLocal_876[iVar2]);
			unk_0xFB5F4D76105A21B5(1, uLocal_876[iVar2], Global_1574747);
			unk_0xFB5F4D76105A21B5(1, Global_1574747, uLocal_876[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	unk_0xFB5F4D76105A21B5(5, uLocal_876[0], uLocal_876[1]);
	unk_0xFB5F4D76105A21B5(5, uLocal_876[1], uLocal_876[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		unk_0xFB5F4D76105A21B5(5, 2017343592, uLocal_876[iVar2]);
		func_852(&(uLocal_876[iVar2]));
		iVar2++;
	}
}

void func_852(var uParam0)
{
	unk_0xFB5F4D76105A21B5(1, -1865950624, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, -1865950624);
	unk_0xFB5F4D76105A21B5(1, 296331235, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, 296331235);
	unk_0xFB5F4D76105A21B5(1, 1166638144, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, 1166638144);
	unk_0xFB5F4D76105A21B5(1, 2037579709, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, 2037579709);
	unk_0xFB5F4D76105A21B5(1, 2017343592, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, 2017343592);
	unk_0xFB5F4D76105A21B5(1, -1821475077, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, -1821475077);
	unk_0xFB5F4D76105A21B5(1, 1782292358, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, 1782292358);
	unk_0xFB5F4D76105A21B5(1, -1033021910, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, -1033021910);
	unk_0xFB5F4D76105A21B5(1, -1285976420, *uParam0);
	unk_0xFB5F4D76105A21B5(1, *uParam0, -1285976420);
}

void func_853(int iParam0, int iParam1)
{
	func_879();
	func_857(1);
	if ((iParam0 != 0 && unk_0x4AF13BCD120BCDBC(iParam1)) && func_856(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xD2A9C3F486236CC5(&Global_1806993, 0);
				break;
			}
	}
	if (!func_144() && !func_260(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (func_702())
		{
			func_855(3);
		}
	}
	func_855(4);
	if (func_159(0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 = func_161();
	}
	if (func_93(iParam0))
	{
		func_841();
		Global_1807025.f_18 = func_639(func_89());
	}
	else if (func_100(func_785(unk_0x8CFC7D6E1DA5D304())))
	{
		func_839();
		Global_1807078.f_18 = func_639(func_89());
	}
	func_854();
}

void func_854()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1347470.f_532[iVar0 /*42*/].f_1 = func_29();
		Global_1347470.f_532[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_855(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4878.f_34), iParam0);
}

int func_856(int iParam0, bool bParam1)
{
	return func_258(unk_0x8CFC7D6E1DA5D304(), iParam0, bParam1);
}

void func_857(bool bParam0)
{
	int iVar0;
	
	func_805(33);
	func_805(34);
	func_805(35);
	func_805(36);
	func_805(37);
	func_805(38);
	func_805(39);
	func_805(40);
	func_805(43);
	func_805(41);
	func_805(54);
	func_805(42);
	func_805(47);
	func_878(23);
	func_878(24);
	func_805(92);
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 2);
	func_877();
	func_872();
	func_867();
	func_859();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512581.f_4878.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_858(3))
	{
		func_878(3);
	}
	else if (func_858(4))
	{
		func_878(4);
	}
	else if (func_858(5))
	{
		func_878(5);
	}
	else if (func_858(6))
	{
		func_878(6);
	}
	else if (func_858(7))
	{
		func_878(7);
	}
	else if (((((((((((((((((func_858(0) || func_858(1)) || func_858(2)) || func_858(8)) || func_858(9)) || func_858(10)) || func_858(11)) || func_858(12)) || func_858(13)) || func_858(14)) || func_858(15)) || func_858(16)) || func_858(17)) || func_858(18)) || func_858(19)) || func_858(20)) || func_858(21)) || func_858(22))
	{
		func_878(8);
		func_878(0);
		func_878(1);
		func_878(2);
		func_878(9);
		func_878(10);
		func_878(11);
		func_878(12);
		func_878(13);
		func_878(14);
		func_878(15);
		func_878(16);
		func_878(17);
		func_878(18);
		func_878(19);
		func_878(20);
		func_878(21);
		func_878(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512581.f_4878.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_858(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_14[iVar0], iVar1);
}

void func_859()
{
	if (func_866())
	{
		func_865(0);
		func_865(1);
		func_865(2);
		func_865(3);
		func_865(4);
		func_865(5);
		if (func_864(32))
		{
			if (func_861(func_862(), 3))
			{
				func_860(func_862(), 3);
			}
			func_865(32);
		}
	}
}

void func_860(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104551.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_861(int iParam0, int iParam1)
{
	if (Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_862()
{
	if (func_863())
	{
		Global_104551.f_28020[12 /*29*/].f_24[Global_14453] = 1;
	}
	return 12;
}

int func_863()
{
	int iVar0;
	
	iVar0 = func_244(unk_0x8CFC7D6E1DA5D304());
	if (((iVar0 != unk_0x8CFC7D6E1DA5D304() && iVar0 != func_29()) && unk_0x4AF13BCD120BCDBC(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_864(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_23[iVar0], iVar1);
}

void func_865(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_23[iVar0]), iVar1);
}

int func_866()
{
	if ((((func_864(1) || func_864(0)) || func_864(2)) || func_864(4)) || func_864(5))
	{
		return 1;
	}
	return 0;
}

void func_867()
{
	if (func_871())
	{
		func_870(0);
		func_870(1);
		func_870(2);
		func_870(3);
		func_870(4);
		func_870(5);
		func_870(6);
		func_870(7);
		if (func_869(8))
		{
			func_870(8);
		}
		if (func_869(15))
		{
			if (func_861(func_868(), 3))
			{
				func_860(func_868(), 3);
			}
			func_870(15);
		}
	}
}

int func_868()
{
	if (func_863())
	{
		Global_104551.f_28020[20 /*29*/].f_24[Global_14453] = 1;
	}
	return 20;
}

bool func_869(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_21[iVar0], iVar1);
}

void func_870(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_21[iVar0]), iVar1);
}

int func_871()
{
	if ((((((((func_869(0) || func_869(1)) || func_869(2)) || func_869(3)) || func_869(4)) || func_869(5)) || func_869(6)) || func_869(7)) || func_869(8))
	{
		return 1;
	}
	return 0;
}

void func_872()
{
	if (func_876())
	{
		func_875(0);
		func_875(1);
		func_875(2);
		func_875(3);
		func_875(4);
		func_875(5);
		func_875(6);
		func_875(7);
		func_875(8);
		func_875(9);
		func_875(10);
		func_875(11);
		func_875(12);
		if (func_874(13))
		{
			if (func_861(func_873(), 3))
			{
				func_860(func_873(), 3);
			}
			func_875(13);
		}
	}
}

int func_873()
{
	if (func_863())
	{
		Global_104551.f_28020[76 /*29*/].f_24[Global_14453] = 1;
	}
	return 76;
}

bool func_874(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_19[iVar0], iVar1);
}

void func_875(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_19[iVar0]), iVar1);
}

int func_876()
{
	if ((((((((((((func_874(0) || func_874(1)) || func_874(2)) || func_874(3)) || func_874(4)) || func_874(5)) || func_874(6)) || func_874(7)) || func_874(8)) || func_874(9)) || func_874(10)) || func_874(11)) || func_874(12))
	{
		return 1;
	}
	return 0;
}

void func_877()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2512581.f_4878.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_878(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_14[iVar0]), iVar1);
}

void func_879()
{
	struct<14> Var0;
	
	Global_1807007 = { Var0 };
	Global_1807007.f_14 = 0;
	Global_1807007.f_15 = 0;
}

int func_880(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_882();
			}
			else
			{
				return 0;
			}
		}
		if (!func_881())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x44243F2E2F58B8E3())
				{
					if (!bParam2)
					{
						func_882();
					}
					else
					{
						return 0;
					}
				}
				if (func_735())
				{
					if (!bParam2)
					{
						func_882();
					}
					else
					{
						return 0;
					}
				}
				if (func_733(155))
				{
					if (!bParam2)
					{
						func_882();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x32BCC4E6A353E146())
			{
				if (!bParam2)
				{
					func_882();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (!bParam2)
			{
				func_882();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x32BCC4E6A353E146())
	{
		if (!bParam2)
		{
			func_882();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_881()
{
	return Global_1312831;
}

void func_882()
{
	unk_0x810C5D6462DD69E6();
}

void func_883(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		func_882();
	}
	unk_0x4121A9A0CCC0E014(uParam0, 0, Param1.f_16);
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

int func_885(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

