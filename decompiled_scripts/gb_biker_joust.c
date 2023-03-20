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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
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
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_99 = Global_262145.f_16162;
	iLocal_865 = unk_0x2657E29E0DD8087E();
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_702(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (!func_685(ScriptParam_0))
			{
				func_673(0, 1);
				func_622();
			}
		}
		else
		{
			func_622();
		}
	}
	else
	{
		func_673(0, 1);
		func_622();
	}
	while (true)
	{
		func_621();
		if (func_618())
		{
			func_673(0, 1);
			func_622();
		}
		if (func_610())
		{
			func_673(0, 1);
			func_622();
		}
		func_606();
		func_604();
		func_603();
		func_600();
		func_599();
		func_593();
		switch (func_592(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_591() == 1)
				{
					if (func_583())
					{
						func_582(unk_0x848AF823A8EA3C62(), 1);
					}
				}
				break;
			
			case 1:
				if (func_591() == 1)
				{
					func_50();
				}
				else if (func_591() == 3)
				{
					func_582(unk_0x848AF823A8EA3C62(), 3);
				}
				break;
			
			case 3:
				func_622();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			func_33();
			if (func_32())
			{
				func_673(0, 1);
				func_31(3);
			}
			switch (func_591())
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
					func_622();
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
			unk_0xB21EB307350F5CA1(&(Local_921.f_33), &(Local_921.f_34));
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return (1000 * Global_262145.f_16151);
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
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
		if (!unk_0x08BA6DD398CA197C(Local_921.f_32, iVar1))
		{
			Var2 = { func_12(iVar1) };
			if (!func_11(Var2, 0f, 0f, 0f, 0))
			{
				if (!unk_0x3CF373660FCFAFCE(Local_921.f_19[iVar1]))
				{
					if (func_8(&(uLocal_916[iVar1]), &(Local_921.f_19[iVar1]), Var2, 1))
					{
						unk_0x88B0F0DC270164B7(&(Local_921.f_32), iVar1);
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
			if (unk_0x08BA6DD398CA197C(Local_921.f_32, iVar1))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_921.f_32), iVar1);
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
			unk_0x88B0F0DC270164B7(&iVar1, 0);
			unk_0x88B0F0DC270164B7(&iVar1, 1);
			unk_0x88B0F0DC270164B7(&iVar1, 9);
			unk_0x88B0F0DC270164B7(&iVar1, 4);
			*uParam0 = unk_0x975E3E92387D44C9(joaat("pickup_portable_crate_fixed_incar"), Param2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, iParam5, 1);
			*uParam1 = unk_0xDA9308553DFB8112(*uParam0);
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
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
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	Local_921.f_14 = iParam0;
}

void func_15(int iParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	unk_0x88B0F0DC270164B7(&(Local_921.f_1), iParam0);
}

bool func_16()
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Local_921.f_1, iParam0);
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
					uVar2 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), (-1 * Local_921.f_4));
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
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
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
	if (!unk_0xD9E8CA806A80203D())
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
			Local_921.f_31 = unk_0xB5BF1B58C833F7A9(0, 3);
		}
		if (Global_262145.f_16156)
		{
			if (Local_921.f_31 == 0)
			{
				if (!Global_262145.f_16157)
				{
					Local_921.f_31 = 1;
				}
				else
				{
					Local_921.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_16157)
		{
			if (Local_921.f_31 == 1)
			{
				if (!Global_262145.f_16158)
				{
					Local_921.f_31 = 2;
				}
				else
				{
					Local_921.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_16158)
		{
			if (Local_921.f_31 == 2)
			{
				if (!Global_262145.f_16157)
				{
					Local_921.f_31 = 0;
				}
				else
				{
					Local_921.f_31 = 1;
				}
			}
		}
		Local_921.f_15 = unk_0x0C1D3C552325765B();
		Local_921.f_16[0] = unk_0x0C1D3C552325765B();
		Local_921.f_24[0] = iLocal_99;
		Local_921.f_16[1] = func_29();
		Local_921.f_24[1] = iLocal_99;
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
	return Global_2482149.f_4698.f_145;
}

void func_31(int iParam0)
{
	Local_921.f_0 = iParam0;
}

int func_32()
{
	if (Global_2482149.f_4698.f_17)
	{
		Global_2482149.f_4698.f_17 = 0;
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
			{
				iVar1 = unk_0x81C7A2950EF11C8A(iVar0);
				iVar13 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
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
							if (!unk_0x08BA6DD398CA197C(Local_921.f_2, iVar0))
							{
								iVar5++;
								unk_0x88B0F0DC270164B7(&(Local_921.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (unk_0x08BA6DD398CA197C(Local_921.f_2, iVar0))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_921.f_2), iVar0);
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
			iVar15 = (iLocal_99 - iVar16);
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
			iVar15 = (iLocal_99 - iVar16);
			if (Local_921.f_24[1] != iVar15)
			{
				iVar14 = 0;
				if (Local_921.f_24[1] < iVar15)
				{
					iVar14 = (iVar15 - Local_921.f_24[1]);
				}
				Local_921.f_24[1] = (iVar15 - iVar14);
			}
			if (Local_921.f_27[0] >= iLocal_99)
			{
				Local_921.f_30 = 0;
			}
			else if (Local_921.f_27[1] >= iLocal_99)
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
		if (Global_1614576[iParam0 /*324*/].f_10 != func_29())
		{
			if (iParam1 == Global_1614576[iParam0 /*324*/].f_10)
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
		return Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_29())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
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
			if (Global_1614576[iParam0 /*324*/].f_10 != func_29())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					if (Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam2)
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
	unk_0x09C86C0C5CA26B1E(&(Local_921.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Local_956[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 != func_29())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_29())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
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
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_48(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312731;
}

void func_50()
{
	if (iLocal_861 > -1)
	{
		if ((!func_576() && !func_575()) && !func_574(179))
		{
			if (func_558(1))
			{
				switch (Local_956[iLocal_861 /*6*/].f_5)
				{
					case 0:
						if (!func_557(2))
						{
							func_537(179, 1, -1, 1);
							iLocal_880 = func_536(unk_0x0C1D3C552325765B());
							StringCopy(&Local_882, func_535(), 64);
							func_534(2);
						}
						if (!func_557(4))
						{
							func_527(-1, 0, 0, -1);
							func_534(4);
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
						func_485();
						func_484();
						func_461();
						func_444();
						if (Local_921.f_13 != 1)
						{
							if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
							{
								func_436(1);
								Local_956[iLocal_861 /*6*/].f_5 = Local_921.f_13;
							}
							else
							{
								func_429();
								Local_956[iLocal_861 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_485();
						func_428();
						unk_0xABC36CFE4F3421A0(0, 140, 1);
						unk_0xABC36CFE4F3421A0(0, 141, 1);
						unk_0xABC36CFE4F3421A0(0, 142, 1);
						unk_0xABC36CFE4F3421A0(0, 143, 1);
						unk_0xABC36CFE4F3421A0(0, 24, 1);
						unk_0xABC36CFE4F3421A0(0, 345, 1);
						unk_0xABC36CFE4F3421A0(0, 346, 1);
						unk_0xABC36CFE4F3421A0(0, 347, 1);
						if (func_44(unk_0xA00C21A2AE68AB7B(), 1) || func_44(unk_0xA00C21A2AE68AB7B(), 2))
						{
							if (!func_44(unk_0xA00C21A2AE68AB7B(), 6))
							{
								func_427(1);
							}
							func_444();
						}
						func_422();
						if (Local_921.f_13 != 2)
						{
							func_421(&uLocal_101);
							Local_956[iLocal_861 /*6*/].f_5 = Local_921.f_13;
						}
						break;
					
					case 3:
						if (func_5(&(Local_921.f_5)))
						{
							func_419((func_3() - func_22(&(Local_921.f_5), 0, 0)), func_25() != 0, &uLocal_100);
						}
						if (!func_557(3))
						{
							if (func_2(&(Local_921.f_5), 10000, 0))
							{
								func_418();
								func_534(3);
							}
						}
						if (func_25() == 0)
						{
							func_485();
							func_417();
							func_416();
							func_415();
							if (func_414())
							{
								if (Local_956[iLocal_861 /*6*/].f_5 == 3)
								{
									func_413();
								}
							}
							if (iLocal_861 > -1)
							{
								if (iLocal_861 == unk_0x848AF823A8EA3C62())
								{
									func_422();
									func_298(&(Global_1332731.f_527), &Global_1332731, 24, &(Global_1332731.f_1), &(Global_1332731.f_110), -1, 0);
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
						func_429();
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
	
	if (!func_557(5))
	{
		func_429();
		if (unk_0xA86CA03D9749EEB3())
		{
			if (func_44(unk_0xA00C21A2AE68AB7B(), 4))
			{
				func_74(4);
				func_72(1);
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 1);
			}
		}
		if (unk_0x16833EFAA58E63DB(uLocal_869))
		{
			unk_0x0B57C567D698C373(&uLocal_869);
		}
		if (unk_0x16833EFAA58E63DB(uLocal_868))
		{
			unk_0x0B57C567D698C373(&uLocal_868);
		}
		if (unk_0x16833EFAA58E63DB(uLocal_870))
		{
			unk_0x0B57C567D698C373(&uLocal_870);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (unk_0x16833EFAA58E63DB(uLocal_871[iVar0]))
			{
				unk_0x0B57C567D698C373(&(uLocal_871[iVar0]));
			}
			iVar0++;
		}
		func_64();
		func_62();
		func_61();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		func_421(&uLocal_101);
		func_52();
		func_534(5);
	}
}

void func_52()
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_60())
		{
			func_59();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_62();
		func_58(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
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
		func_58(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_56()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_57()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

void func_59()
{
	if (func_57())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_60()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
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
	while (iVar0 < 32)
	{
		Global_2404993.f_1684[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404993.f_1683 = 0;
}

void func_62()
{
	if (func_60() && !func_57())
	{
		func_59();
	}
	func_63();
	Global_2404993.f_649 = 0;
}

void func_63()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	
	if (!func_557(8))
	{
		func_534(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (unk_0xCB129F9A01D14082(iVar1))
			{
				if (iVar1 != unk_0x0C1D3C552325765B())
				{
					if (unk_0x08BA6DD398CA197C(uLocal_862, iVar0))
					{
						func_70(iVar1, 432, 0);
						func_65(iVar1, func_69(iLocal_881), 0);
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
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_67())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_66(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = uParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_66(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
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
	return Global_25185;
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
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
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_67())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_535[iParam0]) || Global_2414657.f_535[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_71();
			}
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_403[iVar0] = uVar1;
			Global_2414657.f_535[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_71();
			}
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_535[iParam0] = -1;
		}
	}
}

void func_71()
{
	Global_2414657.f_923 = 1;
}

void func_72(bool bParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_73())
		{
			if (func_702(unk_0x0C1D3C552325765B(), 1, 0))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 0);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 0);
			}
			unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 1f);
			unk_0x57FA95501E37763C(0);
			unk_0x83CDA1F1ADCD9582(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0x9066E5B82BC6B02C(0, 0);
				}
			}
		}
		else
		{
			if (func_702(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 0);
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 1);
				unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0x9066E5B82BC6B02C(1, 0);
				}
			}
			unk_0x57FA95501E37763C(1);
			unk_0x83CDA1F1ADCD9582(0);
		}
	}
}

bool func_73()
{
	return Global_1312412;
}

void func_74(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_1), iParam0);
}

void func_75()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar16;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	if (!func_557(1))
	{
		if (func_25() != 0)
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (func_558(1))
				{
					if (((!func_576() && !func_575()) && !func_574(179)) && func_44(unk_0xA00C21A2AE68AB7B(), 1))
					{
						if (func_296())
						{
							iVar1 = func_34(unk_0x0C1D3C552325765B());
							iVar2 = Local_921.f_30;
							switch (func_25())
							{
								case 2:
									unk_0x94724F7C938EBE34(1);
									break;
								
								case 3:
									unk_0x94724F7C938EBE34(1);
									break;
								
								case 1:
									unk_0x94724F7C938EBE34(1);
									if (Local_921.f_30 > -1)
									{
										if (Local_921.f_30 == 99)
										{
											func_294(87, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_294(86, "GB_WINNER", "BIGM_JOUSTWD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_294(87, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_285(87, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2);
									}
									break;
								
								case 5:
									unk_0x94724F7C938EBE34(1);
									func_285(87, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2);
									break;
								
								case 4:
									unk_0x94724F7C938EBE34(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_294(86, "GB_WINNER", "BIGM_JOUSTWD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_294(87, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_294(87, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_882, iLocal_880, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar16 = unk_0x0C1D3C552325765B();
				func_283(1, iVar16);
				if (bVar0)
				{
				}
				func_115(179, bVar0, &Var3, 0);
				func_673(bVar0, 0);
				func_51();
				func_534(1);
			}
		}
	}
	if (func_77(&uLocal_845, 1, 0))
	{
		func_76(0);
	}
}

void func_76(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_1), iParam0);
}

int func_77(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_114(29);
	if ((*uParam0 > 0 && !func_113()) && func_105(unk_0x0C1D3C552325765B()) != 0)
	{
		if (!func_102())
		{
			func_101();
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
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 2);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_100(uParam0, 1);
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
				func_100(uParam0, 2);
			}
			break;
		
		case 2:
			func_91(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_78(func_79(0)))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_100(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
				func_100(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_78(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

char* func_79(int iParam0)
{
	if (((func_89(unk_0x0C1D3C552325765B()) || func_86(unk_0x0C1D3C552325765B())) || func_83()) || iParam0)
	{
		if (func_86(unk_0x0C1D3C552325765B()))
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
	return Global_1624945;
}

bool func_83()
{
	return (func_85() && func_45(func_84()));
}

int func_84()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_85()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

bool func_86(int iParam0)
{
	return func_81(func_87(iParam0), 0);
}

int func_87(int iParam0)
{
	if (func_88(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_88(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
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
		
		default:
	}
	return 0;
}

void func_91(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_702(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF()) && !func_99(unk_0x0C1D3C552325765B(), 22)) && func_105(unk_0x0C1D3C552325765B()) != 0) && !func_97(func_98())) && !func_89(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_96(func_79(iParam0), -1);
			func_92(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
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
	if (iParam0 && !func_113())
	{
		unk_0xAB16AADE80707D47(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_93(bool bParam0)
{
	return func_94(unk_0x0C1D3C552325765B(), bParam0);
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
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_29() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_96(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_97(int iParam0)
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

int func_98()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	return 0;
}

bool func_99(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

void func_100(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_101()
{
	Global_2453273 = 1;
}

int func_102()
{
	if (func_87(unk_0x0C1D3C552325765B()) == 170)
	{
		return 1;
	}
	if (func_103(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_702(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_104(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
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
			return 3;
			break;
	}
	return -1;
}

int func_105(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_112(iParam0) && !func_111(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_110(iParam0);
	bVar3 = func_73();
	uVar4 = func_576();
	if ((bVar1 && (func_109(iParam0) || func_108(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_107(iParam0)) && !func_106(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

bool func_106(int iParam0)
{
	return func_99(iParam0, 19);
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_99(iParam0, 9);
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

bool func_110(int iParam0)
{
	return func_99(iParam0, 20);
}

bool func_111(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

int func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

bool func_113()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

void func_114(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_115(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	
	func_281(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (iParam3 == 0)
		{
			iVar1 = (iVar1 + func_280(iParam0));
		}
		else
		{
			iVar1 = (iVar1 + Global_262145.f_16146);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (iParam3 == 0)
		{
			iVar0 = (iVar0 + func_279(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16145);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if (iParam0 == 185)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_87(unk_0x0C1D3C552325765B()) == 167 || func_87(unk_0x0C1D3C552325765B()) == 168)
	{
		if (bParam1)
		{
			if (func_278(unk_0x0C1D3C552325765B()) > 0)
			{
				func_277();
			}
			else
			{
				func_276();
			}
		}
		else
		{
			func_275();
		}
	}
	func_246(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_235(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_84();
	if (iVar6 != func_29() && iParam0 != 148)
	{
		if (func_234(unk_0x0C1D3C552325765B(), 0))
		{
			if (!func_232(unk_0x0C1D3C552325765B(), iVar6, 1))
			{
				func_198(&iVar0, 1);
			}
		}
	}
	func_193(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1750569.f_10 = iVar1;
		func_192();
		func_146(0, unk_0xA0081090911D13E5(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1750569.f_9 = iVar0;
		iVar11 = func_145();
		if (iVar11 != func_29())
		{
			func_144(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_143(1);
		if (iParam0 == 168)
		{
			if (!func_142())
			{
				unk_0x68D326E42C98E875(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_141())
			{
				if (!func_142())
				{
					unk_0x68D326E42C98E875(iVar0, uVar5);
				}
			}
			else if (func_142())
			{
				func_132(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2572880[iVar13 /*73*/].f_8.f_54 = uVar9;
				Global_2572880[iVar13 /*73*/].f_8.f_55 = uVar10;
				Global_2572880[iVar13 /*73*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x68D326E42C98E875(iVar0, uVar5);
			}
		}
		else if (func_142())
		{
			func_132(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2572880[iVar14 /*73*/].f_8.f_54 = uVar9;
			Global_2572880[iVar14 /*73*/].f_8.f_55 = uVar10;
			Global_2572880[iVar14 /*73*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x2C88EFEEFFB32E94(uVar9, uVar10, iVar0, bVar12);
		}
		func_131(iParam0, iVar0);
		if (func_130(iParam0))
		{
			if (func_129(iParam0) > -1)
			{
				func_128(func_129(iParam0), iVar0);
			}
		}
		Global_2453923 = iVar0;
		func_127(&Global_2452207, 0, 0);
	}
	if (func_107(unk_0x0C1D3C552325765B()) || func_110(unk_0x0C1D3C552325765B()))
	{
		func_116(iParam0);
	}
	if (func_90(iParam0))
	{
		Global_1750587.f_13 = iVar0;
		Global_1750587.f_14 = iVar1;
	}
}

void func_116(int iParam0)
{
	if (func_126(unk_0x0C1D3C552325765B()) && func_141())
	{
		if (func_125(iParam0))
		{
			func_119(4611, -1);
		}
		else if (func_118(iParam0))
		{
			func_119(4613, -1);
		}
		else if (func_81(iParam0, 1))
		{
			func_119(4614, -1);
		}
		else if (func_117(iParam0))
		{
			func_119(4615, -1);
		}
	}
}

int func_117(int iParam0)
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

int func_118(int iParam0)
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

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_124(iParam1), 0);
	iVar0++;
	if (!func_122(iParam0))
	{
		func_121(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_120(iParam0, iVar0, iParam1, 1);
	}
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_124(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_124(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_124(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_124(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_124(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_124(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_124(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_124(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_124(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_124(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_124(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_124(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_124(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_124(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_124(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_124(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_124(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_124(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_124(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_124(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_124(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_124(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_124(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_124(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_124(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_124(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_124(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_124(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_124(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_124(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_124(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_124(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_122(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_124(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_125(int iParam0)
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

bool func_126(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_84, 14);
}

void func_127(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

void func_128(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

int func_129(int iParam0)
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

int func_130(int iParam0)
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

void func_131(int iParam0, int iParam1)
{
	if (func_126(unk_0x0C1D3C552325765B()) && func_141())
	{
		if (func_125(iParam0) && iParam1 > 0)
		{
			func_121(4612, (func_123(4612, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_132(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_142())
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
			if (iParam1 > 0)
			{
				func_133(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_133(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_142())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_49()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_140(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_139(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_134(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_135(iParam0);
	}
}

void func_135(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_142())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_138(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_136(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_136(var uParam0)
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
	func_137(&(uParam0->f_8.f_3));
	func_137(&(uParam0->f_8.f_16));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_137(var uParam0)
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

int func_138(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_139(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_140(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_142())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_141()
{
	return func_45(unk_0x0C1D3C552325765B());
}

int func_142()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

bool func_143(bool bParam0)
{
	return func_234(unk_0x0C1D3C552325765B(), bParam0);
}

void func_144(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1614576[iParam0 /*324*/].f_10.f_7[0];
	*uParam2 = Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_145()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

int func_146(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_147(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_147(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_157(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				iVar1 = unk_0x90897FA118314142(iParam1);
				func_153(unk_0x7560B9B6FB83879C(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_148(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_148(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_151(iParam0, 1) };
	if (iParam0 == func_150(unk_0xA0081090911D13E5()))
	{
		func_149(1);
	}
	func_153(Var0, iParam1, 0, sParam2, iParam3);
}

void func_149(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_150(int iParam0)
{
	return iParam0;
}

Vector3 func_151(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_152(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_152(int iParam0)
{
	return iParam0;
}

void func_153(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_156(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_155();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_154();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam6);
		}
	}
}

int func_154()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_155()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_156(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
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

var func_157(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_158(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_158(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_191(unk_0x0C1D3C552325765B()) || func_190(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_189(sParam2))
	{
	}
	if (func_188())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_186(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_185(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_182(0, &iVar1);
					break;
				
				case 3:
					func_182(1, &iVar1);
					break;
				
				case 1:
					func_178(&iVar1);
					break;
				}
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
			func_177(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_169((func_176(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_177(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_163(iVar1);
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
				func_159((func_161(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_159((func_161(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_159(int iParam0)
{
	if (func_188())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_160(joaat("mpply_globalxp"), iParam0);
	}
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_161(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_702(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_162(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_162(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_163(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_168(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_166(func_167(&Var0));
			if (iVar13 == 0)
			{
				func_165(&Global_1352222, iParam0);
				func_164(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_165(&Global_1352223, iParam0);
				func_164(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_165(&Global_1352224, iParam0);
				func_164(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_165(&Global_1352225, iParam0);
				func_164(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_165(&Global_1352226, iParam0);
				func_164(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_164(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_165(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_166(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_167(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

struct<13> func_168(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	if (func_188())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_124(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_124(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_175(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_173(iParam0, 1);
		}
		func_120(632, iParam0, -1, 1);
		func_121(633, func_173(iParam0, 1), -1, 1, 0);
		Global_1352337[func_124(-1)] = iParam0;
		func_170(7, 0);
	}
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_172(iParam0, iParam1))
	{
		iVar0 = func_171();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_172(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_174(iParam0, 0);
}

int func_174(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_175(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_176(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_124(-1)];
			}
			else if (func_175(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_124(-1)];
	}
	return 0;
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_124(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_122(iParam0))
	{
		func_121(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_120(iParam0, iVar0, iParam2, 1);
	}
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_181(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_180(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_179(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_179(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_179(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_180(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_168(iParam0) };
		Global_2471207 = { func_168(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2)
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_182(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_702(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_180(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_702(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_183(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_180(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_179(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_179(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_183(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_184(iParam0), func_184(iParam1));
	return 0f;
}

Vector3 func_184(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_185(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_179(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_186(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_176(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_176(unk_0x0C1D3C552325765B());
		}
	}
	if (func_187(8000, 0, 0) > 0)
	{
		if (func_187(8000, 0, 0) < (iParam0 + func_176(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_187(8000, 0, 0) - func_176(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_187(int iParam0, bool bParam1, int iParam2)
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
	return Global_278713[iParam0];
}

int func_188()
{
	return 1;
}

int func_189(char* sParam0)
{
	if (unk_0xD28EDDD3F7264249(sParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(sParam0, "") || unk_0x28C1B9853548BD8E(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_190(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_191(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_192()
{
	Global_2453272 = 1;
}

void func_193(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_197(7))
	{
		return;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_194(iParam0);
	iVar2 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2482149.f_4698.f_75, unk_0x4B50AAB32FBE0483()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16348)
		{
			iVar2 = Global_262145.f_16348;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16349)
		{
			iVar2 = Global_262145.f_16349;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16347)
		{
			iVar2 = Global_262145.f_16347;
		}
	}
	else if (func_125(iParam0))
	{
		if (iVar2 > Global_262145.f_16350)
		{
			iVar2 = Global_262145.f_16350;
		}
	}
	else if (func_81(iParam0, 0) || func_118(iParam0))
	{
		if (iVar2 > Global_262145.f_16351)
		{
			iVar2 = Global_262145.f_16351;
		}
	}
	else if (iVar2 > Global_262145.f_10827)
	{
		iVar2 = Global_262145.f_10827;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10918;
		
		case 152:
			return Global_262145.f_10953;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10941;
		
		case 157:
			return Global_262145.f_10908;
		
		case 159:
			return Global_262145.f_10891;
		
		case 164:
			return Global_262145.f_10931;
		
		case 160:
			return Global_262145.f_10981;
		
		case 162:
			return Global_262145.f_11001;
		
		case 163:
			return Global_262145.f_10966;
		
		case 154:
			return Global_262145.f_11036;
		
		case 155:
			return Global_262145.f_11026;
		
		case 153:
			return Global_262145.f_10990;
		
		case 170:
			return Global_262145.f_12877;
		
		case 171:
			return Global_262145.f_12936;
		
		case 172:
			return Global_262145.f_12954;
		
		case 173:
			return Global_262145.f_12895;
		
		case 166:
			return Global_262145.f_12910;
		
		case 167:
			return Global_262145.f_13001;
		
		case 169:
			return Global_262145.f_12973;
		
		case 168:
			return Global_262145.f_12966;
		
		case 179:
			return Global_262145.f_16230;
		
		case 180:
			return Global_262145.f_16009;
		
		case 182:
			return Global_262145.f_16009;
		
		case 183:
			return Global_262145.f_16009;
		
		case 185:
			return Global_262145.f_16009;
		
		case 186:
			return Global_262145.f_16009;
		
		case 189:
			return Global_262145.f_16230;
		
		case 190:
			return Global_262145.f_15885;
		
		case 191:
			return Global_262145.f_15976;
		
		case 192:
			return Global_262145.f_15770;
		
		case 193:
			return Global_262145.f_16230;
		
		case 194:
			return Global_262145.f_16230;
		
		case 195:
			return Global_262145.f_16009;
		
		case 197:
			return Global_262145.f_16009;
		
		case 198:
			return Global_262145.f_16009;
		
		case 199:
			return Global_262145.f_16230;
		
		case 200:
			return Global_262145.f_16230;
		
		case 201:
			return Global_262145.f_16230;
		
		case 205:
			return Global_262145.f_16230;
		
		case 207:
			return Global_262145.f_16009;
		
		case 208:
			return Global_262145.f_16009;
		
		case 209:
			return Global_262145.f_16009;
		
		case 210:
			return Global_262145.f_16230;
		
		case 211:
			return Global_262145.f_16230;
		
		default:
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10917;
		
		case 152:
			return Global_262145.f_10952;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10940;
		
		case 157:
			return Global_262145.f_10907;
		
		case 159:
			return Global_262145.f_10890;
		
		case 164:
			return Global_262145.f_10930;
		
		case 160:
			return Global_262145.f_10980;
		
		case 162:
			return Global_262145.f_11000;
		
		case 163:
			return Global_262145.f_10965;
		
		case 154:
			return Global_262145.f_11035;
		
		case 155:
			return Global_262145.f_11025;
		
		case 153:
			return Global_262145.f_10989;
		
		case 170:
			return Global_262145.f_12876;
		
		case 171:
			return Global_262145.f_12935;
		
		case 172:
			return Global_262145.f_12953;
		
		case 173:
			return Global_262145.f_12894;
		
		case 166:
			return Global_262145.f_12909;
		
		case 179:
			return Global_262145.f_16229;
		
		case 180:
			return Global_262145.f_16008;
		
		case 182:
			return Global_262145.f_16008;
		
		case 183:
			return Global_262145.f_16008;
		
		case 185:
			return Global_262145.f_16008;
		
		case 186:
			return Global_262145.f_16008;
		
		case 189:
			return Global_262145.f_16229;
		
		case 193:
			return Global_262145.f_16229;
		
		case 194:
			return Global_262145.f_16229;
		
		case 195:
			return Global_262145.f_16008;
		
		case 197:
			return Global_262145.f_16008;
		
		case 198:
			return Global_262145.f_16008;
		
		case 199:
			return Global_262145.f_16229;
		
		case 200:
			return Global_262145.f_16229;
		
		case 201:
			return Global_262145.f_16229;
		
		case 205:
			return Global_262145.f_16229;
		
		case 207:
			return Global_262145.f_16008;
		
		case 208:
			return Global_262145.f_16008;
		
		case 209:
			return Global_262145.f_16008;
		
		case 210:
			return Global_262145.f_16229;
		
		case 211:
			return Global_262145.f_16229;
		
		case 190:
			if (!func_196())
			{
				return Global_262145.f_15884;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_196())
			{
				return Global_262145.f_15975;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_196())
			{
				return Global_262145.f_15769;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

bool func_196()
{
	return func_41(unk_0x0C1D3C552325765B());
}

bool func_197(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

void func_198(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_196())
		{
			if (func_143(0))
			{
				if (!func_93(0))
				{
					if (unk_0xCB129F9A01D14082(func_145()))
					{
						if (func_231() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_231());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_229(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_202("GB_BCUT_TICK1", func_145(), iVar0, 0, 0, 1, 1);
						}
						func_201(20);
						func_199(func_145(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_702(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_200(iParam0));
	}
}

var func_200(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_202(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_209(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_207(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_203(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_203(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_206() || !unk_0x1504F110F2576375()) || !func_47(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_204(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_205(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_206()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

var func_207(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_208(&cVar0);
}

var func_208(char[4] cParam0)
{
	return cParam0;
}

int func_209(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_227(iParam0))
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
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_227(unk_0x0C1D3C552325765B()) || (func_226() && func_225()))
	{
		uVar1 = func_224();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_702(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_223(iParam1, iParam0, 0);
							}
							else
							{
								return func_216(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_216(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_223(iParam1, iParam0, 0);
				}
				else
				{
					return func_210(0, -1, 0);
				}
			}
			else
			{
				return func_210(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_223(iParam1, iParam0, 0);
		}
		else
		{
			return func_216(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_216(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_210(bool bParam0, int iParam1, bool bParam2)
{
	return func_211(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_211(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_181(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_215(1);
				}
				else
				{
					return func_215(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_212(iVar0, iParam2, 1);
			}
			else
			{
				return func_212(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_215(1);
	}
	return func_215(0);
}

int func_212(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_214(iParam0, iParam1);
	if (func_213(Global_1626500.f_83867))
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

int func_213(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
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
			if (!func_181(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_222(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_181(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_215(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_221(1);
			}
			else
			{
				return func_211(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_215(1);
			}
			else
			{
				return func_211(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_219(iParam0);
	if (!iVar3 == -1)
	{
		return func_217(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_218(iParam0);
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

var func_218(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (!iParam0 == func_29())
	{
		if (func_234(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_220(iParam0)];
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_29();
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
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_223(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_211(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_224()
{
	return Global_2359301.f_2;
}

bool func_225()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_226()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_227(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_228())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_228()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

void func_229(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_230(1);
	}
	else
	{
		iVar1 = func_230(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_230(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_231()
{
	return Global_262145.f_10821;
}

int func_232(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_233(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_29())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_29())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_234(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_29();
}

void func_235(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_141())
			{
				Var0 = { func_245() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_244(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_244(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_238(unk_0x0C1D3C552325765B(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16459);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16458);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_237(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16449);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16448));
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
					func_201(88);
				}
				Global_2482149.f_4698.f_186 = *iParam2;
			}
			else if (func_93(0))
			{
				Var15 = { func_236(func_145()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_244(func_145(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_244(func_145(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_238(func_145(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16459));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16458));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16498;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16499;
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

struct<2> func_236(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_177;
}

int func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(iVar0)))
		{
			iVar2 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_47(iVar2, 0) && !func_232(iVar2, unk_0x0C1D3C552325765B(), 1))
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

int func_238(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_243(iParam1);
	if (func_242(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14838;
				if (func_239(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14843);
				}
				if (func_239(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14848);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14837;
				if (func_239(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14842);
				}
				if (func_239(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14836;
				if (func_239(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14841);
				}
				if (func_239(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14834;
				if (func_239(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14839);
				}
				if (func_239(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14835;
				if (func_239(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14840);
				}
				if (func_239(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_239(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_241(iParam0, iParam1))
	{
		iVar0 = func_240(iParam0, iParam1);
		return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_242(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_241(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_242(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_243(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_242(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_245()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_177;
}

void func_246(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_41(unk_0x0C1D3C552325765B()))
		{
			if (bParam1)
			{
				func_274();
			}
			func_273();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(unk_0x0C1D3C552325765B()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_265(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_264(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_237(&uVar2);
					iVar4 = Global_262145.f_14023;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13232));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_201(44);
					}
				}
				func_258(*iParam3);
				func_257();
				Global_2482149.f_4698.f_186 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xE5697AB254094B0D())
				{
					iVar8 = iVar7;
					if (unk_0x1489FFC2CBA39486(iVar8))
					{
						iVar9 = unk_0xF3B8A064D228878B(iVar8);
						if (func_256(iVar9))
						{
							func_248(iVar9, 1);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(unk_0x0C1D3C552325765B()))
		{
			func_247();
		}
	}
}

void func_247()
{
	int iVar0;
	
	iVar0 = Global_2507793[func_49()];
	iVar0++;
	func_120(3647, iVar0, -1, 1);
}

void func_248(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_250(iParam0);
	func_249(iParam0, uVar0, iParam1);
}

void func_249(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 457;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_29())
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			unk_0x8E36889D76C8D4FA(1, &Var0, 4, func_200(iParam0));
		}
	}
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_255();
	iVar0 = func_253(iParam0, iVar0);
	iVar1 = Global_1614576[func_145() /*324*/].f_10.f_233;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12837));
	if (iVar0 < func_252())
	{
		iVar0 = func_252();
	}
	if (iVar0 > func_251())
	{
		iVar0 = func_251();
	}
	return iVar0;
}

int func_251()
{
	return Global_262145.f_12838;
}

int func_252()
{
	return Global_262145.f_14013;
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_278(iParam0) * func_254());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_254()
{
	return Global_262145.f_14012;
}

var func_255()
{
	return Global_262145.f_10813;
}

int func_256(int iParam0)
{
	if (unk_0xCB129F9A01D14082(iParam0))
	{
		if (iParam0 != unk_0x0C1D3C552325765B())
		{
			if (func_232(iParam0, unk_0x0C1D3C552325765B(), 0))
			{
				if (!func_99(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_257()
{
	int iVar0;
	
	iVar0 = Global_2507799[func_49()];
	iVar0++;
	func_120(3646, iVar0, -1, 1);
}

void func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2507802[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_120(3648, iVar0, -1, 1);
	if (func_261(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_260(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_259(7666, iVar2, -1, 1);
	}
}

var func_259(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD0BD93DA65E5EE25(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14156;
			break;
		
		case 2:
			return Global_262145.f_14157;
			break;
		
		case 3:
			return Global_262145.f_14158;
			break;
		
		case 4:
			return Global_262145.f_14159;
			break;
		
		case 5:
			return Global_262145.f_14160;
			break;
		
		case 6:
			return Global_262145.f_14161;
			break;
		
		case 7:
			return Global_262145.f_14162;
			break;
		
		case 8:
			return Global_262145.f_14163;
			break;
		
		case 9:
			return Global_262145.f_14164;
			break;
		
		case 10:
			return Global_262145.f_14165;
			break;
		
		case 11:
			return Global_262145.f_14166;
			break;
		
		case 12:
			return Global_262145.f_14167;
			break;
		
		case 13:
			return Global_262145.f_14168;
			break;
		
		case 14:
			return Global_262145.f_14169;
			break;
		
		case 15:
			return Global_262145.f_14170;
			break;
		
		case 16:
			return Global_262145.f_14171;
			break;
		
		case 17:
			return Global_262145.f_14172;
			break;
		
		case 18:
			return Global_262145.f_14173;
			break;
		
		case 19:
			return Global_262145.f_14174;
			break;
		
		case 20:
			return Global_262145.f_14175;
			break;
		
		case 21:
			return Global_262145.f_14176;
			break;
		
		case 22:
			return Global_262145.f_14177;
			break;
		
		case 23:
			return Global_262145.f_14178;
			break;
		
		case 24:
			return Global_262145.f_14179;
			break;
	}
	return 0;
}

int func_261(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_263(iParam0, iParam1);
	uVar2 = func_262(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x43577EDB73960877(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_264(int iParam0)
{
	if (iParam0 >= Global_262145.f_13210)
	{
		return Global_262145.f_13231;
	}
	else if (iParam0 >= Global_262145.f_13209)
	{
		return Global_262145.f_13230;
	}
	else if (iParam0 >= Global_262145.f_13208)
	{
		return Global_262145.f_13229;
	}
	else if (iParam0 >= Global_262145.f_13207)
	{
		return Global_262145.f_13228;
	}
	else if (iParam0 >= Global_262145.f_13206)
	{
		return Global_262145.f_13227;
	}
	else if (iParam0 >= Global_262145.f_13205)
	{
		return Global_262145.f_13226;
	}
	else if (iParam0 >= Global_262145.f_13204)
	{
		return Global_262145.f_13225;
	}
	else if (iParam0 >= Global_262145.f_13203)
	{
		return Global_262145.f_13224;
	}
	else if (iParam0 >= Global_262145.f_13202)
	{
		return Global_262145.f_13223;
	}
	else if (iParam0 >= Global_262145.f_13201)
	{
		return Global_262145.f_13222;
	}
	else if (iParam0 >= Global_262145.f_13200)
	{
		return Global_262145.f_13221;
	}
	else if (iParam0 >= Global_262145.f_13199)
	{
		return Global_262145.f_13220;
	}
	else if (iParam0 >= Global_262145.f_13198)
	{
		return Global_262145.f_13219;
	}
	else if (iParam0 >= Global_262145.f_13197)
	{
		return Global_262145.f_13218;
	}
	else if (iParam0 >= Global_262145.f_13196)
	{
		return Global_262145.f_13217;
	}
	else if (iParam0 >= Global_262145.f_13195)
	{
		return Global_262145.f_13216;
	}
	else if (iParam0 >= Global_262145.f_13194)
	{
		return Global_262145.f_13215;
	}
	else if (iParam0 >= Global_262145.f_13193)
	{
		return Global_262145.f_13214;
	}
	else if (iParam0 >= Global_262145.f_13192)
	{
		return Global_262145.f_13213;
	}
	else if (iParam0 >= Global_262145.f_13191)
	{
		return Global_262145.f_13212;
	}
	return Global_262145.f_13211;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_272(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_271(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_270(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_266(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_266(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_270(unk_0xB5BF1B58C833F7A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_266(int iParam0)
{
	int iVar0;
	
	if (func_269(iParam0))
	{
		iVar0 = func_267(func_268(iParam0));
		return func_123(iVar0, -1, 0);
	}
	return 0;
}

int func_267(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3626;
	}
	else if (iParam0 == 1)
	{
		return 3627;
	}
	else if (iParam0 == 2)
	{
		return 3628;
	}
	else if (iParam0 == 3)
	{
		return 3629;
	}
	else if (iParam0 == 4)
	{
		return 3630;
	}
	return 3626;
}

int func_268(int iParam0)
{
	int iVar0;
	
	if (func_269(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
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
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_270(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13410;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13408;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13412;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13406;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13404;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13414;
	}
	return 0;
}

int func_271(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_269(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1751743[iVar0] == iParam1 && Global_1751750[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_272(int iParam0)
{
	int iVar0;
	
	if (func_269(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_273()
{
	int iVar0;
	
	iVar0 = Global_2507790[func_49()];
	iVar0++;
	Global_2507790[func_49()] = iVar0;
	func_120(3645, iVar0, -1, 1);
}

void func_274()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507787[func_49()];
	iVar1 = Global_2507796[func_49()];
	iVar0++;
	iVar1++;
	Global_2507787[func_49()] = iVar0;
	Global_2507796[func_49()] = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_89 = iVar1;
	func_120(3643, iVar0, -1, 1);
	func_120(3644, iVar1, -1, 1);
}

void func_275()
{
	if (func_196())
	{
		Global_2443212.f_3065.f_134 = 0;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
	}
}

void func_276()
{
	if (func_196())
	{
		if (Global_2443212.f_3065.f_134 < 10)
		{
			Global_2443212.f_3065.f_134++;
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

void func_277()
{
	if (func_196())
	{
		if (Global_2443212.f_3065.f_134 > 0)
		{
			Global_2443212.f_3065.f_134 = (Global_2443212.f_3065.f_134 - 1);
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

int func_278(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_27;
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10938) * Global_262145.f_10943));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10888) * Global_262145.f_10893));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10915) * Global_262145.f_10919));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10928) * Global_262145.f_10932));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10950) * Global_262145.f_10955));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11112) * Global_262145.f_11113));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11118) * Global_262145.f_11119));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11117));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11110) * Global_262145.f_11111));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11114) * Global_262145.f_11115));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11109));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12933;
		
		case 172:
			return Global_262145.f_12949;
		
		case 173:
			return Global_262145.f_12892;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16153;
		
		case 180:
			return Global_262145.f_16029;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16037;
		
		case 185:
			return Global_262145.f_16046;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16241;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16258;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16106;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16289;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16167;
		
		case 205:
			return Global_262145.f_16276;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16134;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16271;
		
		case 211:
			return Global_262145.f_16235;
		
		default:
	}
	return 0;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10939) * Global_262145.f_10944));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10889) * Global_262145.f_10894));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10916) * Global_262145.f_10920));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10929) * Global_262145.f_10933));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10951) * Global_262145.f_10956));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10988) * Global_262145.f_10991));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11034) * Global_262145.f_11037));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11024) * Global_262145.f_11027));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10979) * Global_262145.f_10982));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10999) * Global_262145.f_11004));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10964) * Global_262145.f_10967));
		
		case 170:
			return Global_262145.f_12875;
		
		case 171:
			return Global_262145.f_12934;
		
		case 172:
			return Global_262145.f_12950;
		
		case 173:
			return Global_262145.f_12893;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_14967;
		
		case 168:
			return Global_262145.f_14966;
		
		case 179:
			return Global_262145.f_16154;
		
		case 180:
			return Global_262145.f_16030;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16038;
		
		case 185:
			return Global_262145.f_16047;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16242;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16259;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16107;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16290;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16168;
		
		case 205:
			return Global_262145.f_16277;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16135;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16272;
		
		case 211:
			return Global_262145.f_16236;
		
		default:
	}
	return 0;
}

void func_281(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_282(iParam0))
	{
		if (!func_196())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10832;
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
		*uParam1 = (Global_262145.f_16007 / 100f);
		*uParam2 = (Global_262145.f_16007 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10831;
		*uParam2 = Global_262145.f_10830;
	}
	if (func_90(iParam0))
	{
		if (func_234(unk_0x0C1D3C552325765B(), 1))
		{
			*uParam1 = (Global_262145.f_16006 / 100f);
			*uParam2 = (Global_262145.f_16006 / 100f);
		}
	}
	else if (func_234(unk_0x0C1D3C552325765B(), 1))
	{
		*uParam1 = Global_262145.f_10829;
		*uParam2 = Global_262145.f_10828;
	}
	iVar0 = func_84();
	if (iVar0 != func_29())
	{
		if (func_232(unk_0x0C1D3C552325765B(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_282(int iParam0)
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

void func_283(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (unk_0xCB129F9A01D14082(iParam1))
		{
			if (iParam1 == unk_0x0C1D3C552325765B())
			{
				iVar0 = 1;
			}
			else if (func_284(iParam1, unk_0x0C1D3C552325765B()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_702(unk_0x0C1D3C552325765B(), 1, 1))
		{
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			Global_2482149.f_4698.f_187 = unk_0x39E54E7BC7452169();
		}
	}
}

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_220(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_220(iParam1);
		}
	}
	return 0;
}

int func_285(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_293(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_286(&Var0);
}

int func_286(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_292(uParam0, uParam0->f_16);
	func_289(uParam0);
	if (func_288(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_287(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 86:
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_288(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_289(var uParam0)
{
	if (func_291(uParam0->f_1))
	{
		uParam0->f_66 = func_290();
	}
}

int func_290()
{
	return 21;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 62:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_292(var uParam0, int iParam1)
{
	if (func_291(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_29())
	{
		return;
	}
	if (func_287(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_209(iParam1, -2, 0, 0);
		}
	}
}

void func_293(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_29();
	uParam1->f_17 = func_29();
	uParam1->f_18 = func_29();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_294(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_295(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_295(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_293(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	unk_0x88B0F0DC270164B7(&(Var0.f_63), 2);
	return func_286(&Var0);
}

int func_296()
{
	if ((func_702(unk_0x0C1D3C552325765B(), 1, 1) && !unk_0x84C71F36E7D97756()) && !func_297())
	{
		return 1;
	}
	return 0;
}

bool func_297()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

void func_298(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_412(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_410() || iParam2 == 24)
	{
		if (func_363(uParam1, iParam2, uParam3, Global_1573696, 0, func_408()))
		{
			func_362(1);
			if ((!func_361() && !func_360()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_359())
				{
					func_357();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_356(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_355(uParam1);
							if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
							{
								unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
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
								if (func_702(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_47(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_354(iVar35))
										{
											iVar44 = iVar35;
											if (func_41(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_353(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_352(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_350())
							{
								if (func_702(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
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
							if ((func_349(iVar35) && func_344(iVar35, iParam2)) && func_702(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_339(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_168(iVar35) };
								iVar37 = func_333(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
								}
								Global_1573696++;
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
									if (!func_350())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_328(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_327(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_326(iVar35, 0);
								if (bVar34)
								{
									if (func_234(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_325(iParam5))
								{
									func_324(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_324(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0x88B0F0DC270164B7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							if (func_702(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_29();
							}
							if (func_349(iVar35))
							{
								if (func_702(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_339(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_168(iVar35) };
									iVar37 = func_333(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_326(iVar35, 1);
									if (bVar34)
									{
										if (func_234(iVar35, 1))
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
									func_311(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_308(uParam3, uParam1);
						}
						func_7(&(uParam3->f_21));
						func_307();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_306(uParam3, uParam1);
							func_305(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_306(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_301(uParam3))
						{
							Global_1573844 = 1;
						}
						func_299(uParam3);
						if (Global_1573844 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573844 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x1E3F61C2C1E29520(*uParam1))
					{
						unk_0x1373E5003F76E429(7);
						unk_0x04F50370A3D0809C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x1373E5003F76E429(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_307();
			func_356(0);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
			}
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x9AA8EEC80385B281();
}

void func_299(var uParam0)
{
	if (!func_5(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_2(&(uParam0->f_21), 250, 0))
	{
		func_7(&(uParam0->f_21));
		func_300(0);
	}
}

void func_300(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573844 != 2)
		{
			Global_1573844 = 2;
		}
	}
	else
	{
		switch (Global_1573844)
		{
			case 0:
				Global_1573844 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_301(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_29() && func_702(iVar15, 0, 1))
	{
		Var2 = { func_168(iVar15) };
		iVar1 = func_304(uParam0, uParam0->f_37);
		if (func_303(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_302(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_302(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_302(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_302(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_302(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_302(uParam0, iVar0, 0);
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

void func_302(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_303(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_304(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_305(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB9D4F4DE7E7EC038(*uParam0, "COLLAPSE"))
	{
		unk_0x5CC02BB872FEF340(iParam1);
		unk_0xE73340DA551C95E1();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_306(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_307()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_308(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_29())
		{
			if (func_702(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_310(uParam0->f_38[iVar0 /*2*/], 0);
					func_309(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_309(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_ICON"))
		{
			unk_0x7CBFB9F4AF33C67E(iParam1);
			unk_0x7CBFB9F4AF33C67E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

int func_310(int iParam0, bool bParam1)
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

void func_311(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_323() && iParam4 < func_322())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB9D4F4DE7E7EC038(*uParam2, sVar1))
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_321("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_321(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_321("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_321("");
			if (uParam3->f_108 == 6)
			{
				func_321("");
			}
			else
			{
				func_321(&sParam5);
			}
			func_316(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_315(uParam3))
			{
				func_314("DPAD_FRIEND");
			}
			else if (func_313(uParam3))
			{
				func_314("DPAD_FRIEND");
			}
			else if (func_312(uParam3))
			{
				func_314("DPAD_CREW");
			}
			else
			{
				func_314("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_312(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_313(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_314(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_315(var uParam0)
{
	if (func_313(uParam0) && func_312(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_316(var uParam0, int iParam1)
{
	if (func_320(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_317(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_317(int iParam0)
{
	if ((func_702(iParam0, 0, 1) && func_318()) && func_94(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_318()
{
	if (func_112(unk_0x0C1D3C552325765B()) || func_319())
	{
		return 0;
	}
	return 1;
}

int func_319()
{
	switch (func_87(unk_0x0C1D3C552325765B()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 1;
		
		default:
	}
	return 0;
}

int func_320(int iParam0)
{
	if ((func_702(iParam0, 0, 1) && func_318()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_321(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_322()
{
	int iVar0;
	
	if (Global_1573698)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_323()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_324(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_323() && iParam3 < func_322())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573698)
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
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x1E3F61C2C1E29520(*uParam1))
		{
			if (unk_0xB9D4F4DE7E7EC038(*uParam1, sVar1))
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
				if (unk_0x08BA6DD398CA197C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_321("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_314(sParam16);
				}
				else
				{
					func_321(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_321("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x7CBFB9F4AF33C67E(iVar0);
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(-1);
				}
				if (func_350())
				{
					func_321("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 5 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x509383441597090D(sParam16)) && !unk_0x509383441597090D(sParam17))
				{
					unk_0x709662CF2BD061A4("FM_AE_TWO_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0xBDE6EEC5F6BDC060(sParam17);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 8 && !unk_0x509383441597090D(&(uParam2->f_104)))
				{
					unk_0x709662CF2BD061A4("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x63A04EB63F481124(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3F9D1B882EC0B8AF(iParam10);
					}
					unk_0xBDE6EEC5F6BDC060(&(uParam2->f_104));
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x709662CF2BD061A4("FM_AE_CASH");
					unk_0xBEC4DE8C7D72AD8A(iParam10, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x509383441597090D(&(uParam2->f_104)))
					{
						func_314(&(uParam2->f_104));
					}
					else
					{
						func_321("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x709662CF2BD061A4("STRING");
					unk_0x37F0707A16E921F7(iParam14, 6);
					unk_0x1E77BE8F4283FA05();
				}
				else if (fParam13 != -1f)
				{
					unk_0x709662CF2BD061A4("NUMBER");
					unk_0x63A04EB63F481124(fParam13, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam10 != -1)
				{
					unk_0x7CBFB9F4AF33C67E(iParam10);
				}
				else
				{
					func_321("");
				}
				if (uParam2->f_108 == 6)
				{
					func_321("");
				}
				else
				{
					func_321(&sParam4);
				}
				func_316(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_321("");
					func_321("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_315(uParam2))
				{
					func_314("DPAD_FRIEND");
				}
				else if (func_313(uParam2))
				{
					func_314("DPAD_FRIEND");
				}
				else if (func_312(uParam2))
				{
					func_314("DPAD_CREW");
				}
				else
				{
					func_314("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_325(int iParam0)
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

int func_326(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_112(iParam0)) && !func_110(iParam0))
	{
		iVar0 = func_290();
	}
	iVar1 = func_219(iParam0);
	if (!iVar1 == -1)
	{
		return func_217(iVar1);
	}
	return iVar0;
}

char* func_327(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xAE52C62FC0BBB14E())
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
			if (unk_0xAE52C62FC0BBB14E())
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

int func_328(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_332(iParam3))
	{
		*fParam1 = (func_329(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_325(iParam3))
	{
		*fParam1 = (func_329(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_329(int iParam0, int iParam1)
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
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_331(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_330(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_330(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_331(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_332(int iParam0)
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

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = func_336(iParam0);
	if (iVar0 == -1)
	{
		func_334(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_334(int iParam0, bool bParam1)
{
	if (!func_702(iParam0, 0, 1))
	{
		return;
	}
	if (func_336(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_335(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_336(int iParam0)
{
	int iVar0;
	
	if (!func_702(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_337(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_337(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_338(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_338(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_339(int iParam0)
{
	struct<4> Var0;
	
	if (func_702(iParam0, 0, 1))
	{
		Global_2471194 = { func_168(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_303(Global_2471194))
			{
				if (!unk_0x6F4E1F8D329BC4EC(&Global_2471194))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xED4DB0F2EFE02B37(0))
		{
			return Var0;
		}
		if (func_343(&Global_2471194))
		{
			Global_2471124 = { func_341(iParam0) };
			func_340(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_340(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_341(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_342(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_168(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_342(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_343(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_344(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_111(iParam0) || func_348(iParam0)) || func_347(iParam0))
		{
			return 0;
		}
	}
	if (!func_346(iParam0))
	{
		return 0;
	}
	if ((!func_345(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_354(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0)
{
	if (func_702(iParam0, 0, 1))
	{
		if (func_702(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_346(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

bool func_347(int iParam0)
{
	if (func_111(iParam0))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

int func_349(int iParam0)
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
		if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_137, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_350()
{
	switch (func_87(unk_0x0C1D3C552325765B()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 188:
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
	switch (func_351(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_110(unk_0x0C1D3C552325765B()))
	{
		switch (func_87(unk_0x0C1D3C552325765B()))
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

int func_351(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

int func_352(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_80(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_80(Global_1614576[iParam0 /*324*/].f_10.f_31))
		{
			return 1;
		}
	}
	return 0;
}

void func_353(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_702(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_354(iVar1))
				{
					if (func_232(iVar1, iParam1, 0))
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

bool func_354(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

void func_355(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_356(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1342780.f_2 == 0)
		{
			Global_1342780.f_2 = 1;
		}
	}
	else if (Global_1342780.f_2 == 1)
	{
		Global_1342780.f_2 = 0;
	}
}

void func_357()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_113())
		{
			func_358();
		}
	}
}

void func_358()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_359()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_113())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_113())
	{
		return 1;
	}
	return 0;
}

int func_360()
{
	if (func_113())
	{
		if (func_287(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_361()
{
	if (func_113())
	{
		if (func_291(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_362(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_363(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_407(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_406();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_405())
		{
			if (func_404() > 0 && Global_1573698)
			{
				unk_0x6EDFAF353D332BBF();
				unk_0xDA81B130FA38800A(fVar7);
				unk_0x7ABD1B29E6C2963D(18);
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x8D2BC9240C67A1F4();
				}
				unk_0x7ABD1B29E6C2963D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_390())
		{
			func_389(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_389(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_19)))
	{
		if (func_404() == 1)
		{
			func_388(bVar6, uParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_389(uParam0, uParam2, 0);
		}
	}
	if (func_5(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_2(&(uParam2->f_19), 10000, 0) || (func_404() == 0 && !bParam5))
		{
			func_389(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_387();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x6EDFAF353D332BBF();
				}
				unk_0x7ABD1B29E6C2963D(18);
			}
			if (unk_0x08BA6DD398CA197C(uParam2->f_33, 0))
			{
				Global_1573696 = uParam3;
				Global_1573695 = 1;
				unk_0xDA81B130FA38800A(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573697)
					{
						unk_0x09C86C0C5CA26B1E(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_387();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_388(bVar6, uParam0, 0))
				{
					func_355(uParam0);
					sVar4 = func_385(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_382(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_375(uParam0, func_379(uParam2), func_376(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_371(uParam0, func_373(), func_372(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_382(uParam0, sVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_369(iParam1) };
						iVar8 = func_364(iParam1);
						func_382(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_368())
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
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_367(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_366(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_365(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_365(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_366(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_367(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_368()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_369(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_370(unk_0x0C1D3C552325765B()) || func_365(unk_0x0C1D3C552325765B()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1626500.f_25, 16);
			break;
	}
	return Var0;
}

bool func_370(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_371(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_314(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_314("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_372()
{
	switch (func_87(unk_0x0C1D3C552325765B()))
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

char* func_373()
{
	switch (func_87(unk_0x0C1D3C552325765B()))
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
			if (func_374(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_374(int iParam0)
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

void func_375(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_314(sParam1);
		}
		else if (func_351(unk_0x0C1D3C552325765B()) == 133)
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT_C");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_314("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_376(var uParam0)
{
	int iVar0;
	
	iVar0 = func_351(unk_0x0C1D3C552325765B());
	if (func_378())
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
			switch (func_377())
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

int func_377()
{
	if (func_351(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

bool func_378()
{
	return Global_1588659;
}

char* func_379(var uParam0)
{
	int iVar0;
	
	iVar0 = func_351(unk_0x0C1D3C552325765B());
	if (func_378())
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
			if (func_381() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_381() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_377())
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
			if (func_380() == 1)
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

int func_380()
{
	return Global_2482149.f_4688;
}

int func_381()
{
	if (func_351(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_382(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_321(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(sParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_314(sParam1);
		}
		if (func_405() && iParam6)
		{
			if (func_384())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x709662CF2BD061A4("LBD_DPD_CNT");
			unk_0x3F9D1B882EC0B8AF(iVar0);
			unk_0x3F9D1B882EC0B8AF(iVar1);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_314(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_383(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_383(int iParam0)
{
	if (func_367(iParam0) || func_366(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_384()
{
	return Global_1573698;
}

char* func_385(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_386();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x509383441597090D(uParam1))
	{
		if (Global_1573862 == 1)
		{
			Global_1573862 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
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
			case 6:
			case 22:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_386()
{
	if (unk_0x01F6BD16E5956BB1())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x779C4262BB31C063())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x364521DB2DFEAA2D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4E1E7050584F0E5B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_387()
{
	Global_36678 = 1;
}

bool func_388(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x474309DF4921072A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x474309DF4921072A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x474309DF4921072A("mp_matchmaking_card");
	}
	return unk_0x1E3F61C2C1E29520(*uParam1);
}

void func_389(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_307();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_19)))
		{
			func_7(&(uParam1->f_19));
		}
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(uParam1->f_33, 0))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 0);
	}
	unk_0xDA81B130FA38800A(0f);
}

int func_390()
{
	if (func_297())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (!func_401())
	{
		return 0;
	}
	if (!func_399())
	{
		return 0;
	}
	if (func_398(8, -1))
	{
		return 0;
	}
	if (func_404() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_397())
	{
		return 0;
	}
	else if (!func_394(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_393(1) || func_391(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_227(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (Global_1738547)
	{
		return 0;
	}
	if (func_197(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

int func_391(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_392(unk_0xA0081090911D13E5()))
			{
				if (unk_0x7F6103BD34B839B0(0, 25) || unk_0x7F6103BD34B839B0(0, 68))
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
	if (unk_0x7F6103BD34B839B0(0, 19) || (!bParam0 && unk_0xFEB2816B7220E998(0, 19)))
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (((unk_0x7F6103BD34B839B0(0, 166) || unk_0x7F6103BD34B839B0(0, 167)) || unk_0x7F6103BD34B839B0(0, 168)) || unk_0x7F6103BD34B839B0(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xFEB2816B7220E998(0, 166) || unk_0xFEB2816B7220E998(0, 167)) || unk_0xFEB2816B7220E998(0, 168)) || unk_0xFEB2816B7220E998(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_392(int iParam0)
{
	int iVar0;
	
	if (unk_0xE228E561BF27BBD0())
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_393(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_394(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_395(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_395(int iParam0)
{
	return func_396(iParam0);
}

bool func_396(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_397()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_398(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_399()
{
	if (func_400() == 0)
	{
		return 1;
	}
	return 0;
}

int func_400()
{
	return Global_1312462.f_18;
}

int func_401()
{
	if (func_402())
	{
		return 1;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC())
	{
		return 0;
	}
	if (unk_0x72D1F5A29BD70129())
	{
		return 0;
	}
	return 1;
}

bool func_402()
{
	return Global_1312434;
}

bool func_403()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

int func_404()
{
	return Global_1342783.f_68;
}

int func_405()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_406()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_408()
{
	if (func_409(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_409(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_47(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

int func_410()
{
	if (func_408())
	{
		return 1;
	}
	if (func_347(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_378())
	{
		return 1;
	}
	if (func_112(unk_0x0C1D3C552325765B()))
	{
		switch (func_351(unk_0x0C1D3C552325765B()))
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
				if (!func_411(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_411(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_411(unk_0x0C1D3C552325765B()))
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

bool func_411(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_412(int iParam0)
{
	if ((iParam0 == 24 && func_112(unk_0x0C1D3C552325765B())) && !func_110(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_88(unk_0x0C1D3C552325765B(), 0) && func_110(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_105(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_413()
{
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		func_428();
		unk_0xABC36CFE4F3421A0(0, 140, 1);
		unk_0xABC36CFE4F3421A0(0, 141, 1);
		unk_0xABC36CFE4F3421A0(0, 142, 1);
		unk_0xABC36CFE4F3421A0(0, 143, 1);
		unk_0xABC36CFE4F3421A0(0, 24, 1);
		unk_0xABC36CFE4F3421A0(0, 24, 1);
		unk_0xABC36CFE4F3421A0(0, 345, 1);
		unk_0xABC36CFE4F3421A0(0, 346, 1);
		unk_0xABC36CFE4F3421A0(0, 347, 1);
	}
}

bool func_414()
{
	return func_27() >= 2;
}

void func_415()
{
	func_53(3000, 3000);
}

void func_416()
{
	int iVar0;
	
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (((((unk_0xB3CA072889EC63CC(iVar0) || unk_0x705BC1BB91F530B5(iVar0) == joaat("hydra")) || unk_0x705BC1BB91F530B5(iVar0) == joaat("savage")) || unk_0x705BC1BB91F530B5(iVar0) == joaat("buzzard")) || unk_0x705BC1BB91F530B5(iVar0) == joaat("insurgent")) || unk_0x705BC1BB91F530B5(iVar0) == joaat("valkyrie"))
		{
			unk_0xABC36CFE4F3421A0(0, 68, 1);
			unk_0xABC36CFE4F3421A0(0, 69, 1);
			unk_0xABC36CFE4F3421A0(0, 70, 1);
		}
	}
}

void func_417()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!unk_0x16833EFAA58E63DB(uLocal_871[iVar0]))
		{
			if (unk_0x3CF373660FCFAFCE(Local_921.f_19[iVar0]))
			{
				uLocal_871[iVar0] = unk_0x91B4D18C6AFDC14C(unk_0x9C16D1E97E386176(Local_921.f_19[iVar0]));
				unk_0x32479C670EB9962F(uLocal_871[iVar0], 351);
				unk_0x77804F3DCBA01DB5(uLocal_871[iVar0], 2);
				unk_0x6F18BFEFE84565FF(uLocal_871[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_418()
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4697), 1);
}

void func_419(int iParam0, bool bParam1, var uParam2)
{
	if (!func_110(unk_0x0C1D3C552325765B()))
	{
		return;
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_420(uParam2);
		return;
	}
	if (!unk_0x08BA6DD398CA197C(*uParam2, 0))
	{
		if (iParam0 <= 40000)
		{
			if (unk_0xB49DAD10DC051295("FM_PRE_COUNTDOWN_30S"))
			{
				unk_0x88B0F0DC270164B7(uParam2, 0);
				unk_0x88B0F0DC270164B7(uParam2, 1);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(*uParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x08BA6DD398CA197C(*uParam2, 2))
			{
				if (unk_0x27971883A8701E73("FM_COUNTDOWN_30S_KILL"))
				{
					unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
					unk_0x5A6B86444D23FCA8(0);
					unk_0x88B0F0DC270164B7(uParam2, 2);
				}
			}
			if (!unk_0x08BA6DD398CA197C(*uParam2, 3))
			{
				if (unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S"))
				{
					unk_0x88B0F0DC270164B7(uParam2, 3);
				}
			}
			if (unk_0x08BA6DD398CA197C(*uParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x08BA6DD398CA197C(*uParam2, 4))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
						unk_0x88B0F0DC270164B7(uParam2, 4);
					}
					if (iParam0 <= 500)
					{
						if (unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA"))
						{
							unk_0x8821193EA2732C2C("FM_COUNTDOWN_30S_KILL");
							unk_0x09C86C0C5CA26B1E(uParam2, 1);
						}
					}
				}
			}
		}
	}
}

void func_420(var uParam0)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 1))
	{
		if (!unk_0x08BA6DD398CA197C(*uParam0, 5))
		{
			if (unk_0x08BA6DD398CA197C(*uParam0, 2))
			{
				if (!unk_0x08BA6DD398CA197C(*uParam0, 4))
				{
					unk_0x5A6B86444D23FCA8(1);
					unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0x08BA6DD398CA197C(*uParam0, 6))
			{
				if (unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_KILL"))
				{
					unk_0x88B0F0DC270164B7(uParam0, 6);
				}
			}
			if (unk_0x08BA6DD398CA197C(*uParam0, 6))
			{
				if (!unk_0x08BA6DD398CA197C(*uParam0, 7))
				{
					if (unk_0xB49DAD10DC051295("FM_COUNTDOWN_30S_FIRA"))
					{
						unk_0x88B0F0DC270164B7(uParam0, 7);
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 7))
				{
					unk_0x88B0F0DC270164B7(uParam0, 5);
				}
			}
		}
	}
}

void func_421(var uParam0)
{
	unk_0xA12A0D38735CCBF2(uParam0);
	unk_0x29B0EFEB2715365C("HUD_MINI_GAME_SOUNDSET");
}

void func_422()
{
	int iVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (!func_44(unk_0xA00C21A2AE68AB7B(), 8))
		{
			if (func_425())
			{
				func_76(8);
				if (func_5(&uLocal_914))
				{
					func_7(&uLocal_914);
				}
			}
		}
		else if (!func_425())
		{
			func_74(8);
		}
		if (iLocal_865 >= 0)
		{
			if (func_425())
			{
				if (!unk_0x7DFD3CAC2CF49957(iLocal_865))
				{
					unk_0x15761381A3072BFA(iLocal_865);
				}
			}
		}
		if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
		{
			if (Local_956[iLocal_861 /*6*/].f_5 == 3)
			{
				if (Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_222 == 99)
				{
					if (!func_44(unk_0xA00C21A2AE68AB7B(), 8))
					{
						if (!func_5(&uLocal_914))
						{
							if (func_423())
							{
								unk_0xAB16AADE80707D47(iLocal_865, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							}
							else
							{
								unk_0xAB16AADE80707D47(iLocal_865, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							}
							func_4(&uLocal_914, 0, 0);
						}
						if (func_5(&uLocal_914))
						{
							if (!func_2(&uLocal_914, 10000, 0))
							{
							}
							else if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
							{
								iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
								unk_0x8286505D1FF300DC(iVar0, 1, 0, -1);
								Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_4++;
							}
							else
							{
								unk_0xA082D4AC00BC651A(unk_0xA0081090911D13E5(), 0);
								Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_4++;
							}
						}
					}
					if (!func_423())
					{
						func_428();
						unk_0xABC36CFE4F3421A0(0, 140, 1);
						unk_0xABC36CFE4F3421A0(0, 141, 1);
						unk_0xABC36CFE4F3421A0(0, 142, 1);
						unk_0xABC36CFE4F3421A0(0, 143, 1);
						unk_0xABC36CFE4F3421A0(0, 24, 1);
						unk_0xABC36CFE4F3421A0(0, 24, 1);
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

int func_423()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar1 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			iVar0 = unk_0x705BC1BB91F530B5(iVar1);
			if (func_424(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	if (unk_0xBFD32C1D4D54E09B(iParam0) && !unk_0xC388189407833D70(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_425()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	func_426(&Var0, &Var3, &uVar6);
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Var0, Var3, uVar6, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_426(var uParam0, var uParam1, var uParam2)
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

void func_427(bool bParam0)
{
	unk_0xABC36CFE4F3421A0(0, 71, 1);
	unk_0xABC36CFE4F3421A0(0, 72, 1);
	unk_0xABC36CFE4F3421A0(0, 76, 1);
	unk_0xABC36CFE4F3421A0(0, 59, 1);
	unk_0xABC36CFE4F3421A0(0, 60, 1);
	if (bParam0)
	{
		unk_0xABC36CFE4F3421A0(0, 75, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 80, 1);
	unk_0xABC36CFE4F3421A0(0, 69, 1);
	unk_0xABC36CFE4F3421A0(0, 70, 1);
	unk_0xABC36CFE4F3421A0(0, 68, 1);
	unk_0xABC36CFE4F3421A0(0, 74, 1);
	unk_0xABC36CFE4F3421A0(0, 86, 1);
	unk_0xABC36CFE4F3421A0(0, 81, 1);
	unk_0xABC36CFE4F3421A0(0, 82, 1);
	unk_0xABC36CFE4F3421A0(0, 114, 1);
	unk_0xABC36CFE4F3421A0(0, 107, 1);
	unk_0xABC36CFE4F3421A0(0, 110, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 87, 1);
	unk_0xABC36CFE4F3421A0(0, 88, 1);
	unk_0xABC36CFE4F3421A0(0, 113, 1);
	unk_0xABC36CFE4F3421A0(0, 115, 1);
	unk_0xABC36CFE4F3421A0(0, 116, 1);
	unk_0xABC36CFE4F3421A0(0, 117, 1);
	unk_0xABC36CFE4F3421A0(0, 118, 1);
	unk_0xABC36CFE4F3421A0(0, 119, 1);
}

void func_428()
{
	unk_0xABC36CFE4F3421A0(0, 69, 1);
	unk_0xABC36CFE4F3421A0(0, 70, 1);
	unk_0xABC36CFE4F3421A0(0, 68, 1);
	unk_0xABC36CFE4F3421A0(0, 114, 1);
	unk_0xABC36CFE4F3421A0(0, 115, 1);
	unk_0xABC36CFE4F3421A0(0, 116, 1);
	unk_0xABC36CFE4F3421A0(0, 91, 1);
	unk_0xABC36CFE4F3421A0(0, 92, 1);
	unk_0xABC36CFE4F3421A0(0, 99, 1);
	unk_0xABC36CFE4F3421A0(0, 100, 1);
	unk_0xABC36CFE4F3421A0(0, 24, 1);
	unk_0xABC36CFE4F3421A0(0, 257, 1);
	unk_0xABC36CFE4F3421A0(0, 37, 1);
}

void func_429()
{
	if (!func_435())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_430();
}

void func_430()
{
	func_432();
	func_431(0);
}

void func_431(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_432()
{
	if (!func_434())
	{
	}
	if (func_435())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_433();
		unk_0x953FDEB57BB0D276();
	}
}

void func_433()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_434()
{
	if (!func_435())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_433();
	return unk_0x7A2AFC1B08BD3742();
}

int func_435()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

void func_436(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_34(unk_0x0C1D3C552325765B());
	if (bParam0)
	{
		iLocal_879 = unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5());
		unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), uLocal_876[iVar0]);
		func_72(0);
		func_439();
		func_437();
	}
}

void func_437()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x0C1D3C552325765B());
	func_61();
	switch (Local_921.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_438(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_438(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_438(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_438(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_438(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_438(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_438(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_438(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_438(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_438(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_438(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_438(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_438(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_438(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_438(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_438(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_438(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_438(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_438(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_438(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_438(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_438(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_438(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_438(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_438(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_438(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_438(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_438(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_438(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_438(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_438(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_438(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_438(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_438(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_438(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_438(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_438(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_438(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_438(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_438(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_438(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_438(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_438(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_438(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_438(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_438(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_438(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_438(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_438(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_438(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_438(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_438(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_438(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_438(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_438(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_438(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_438(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_438(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_438(struct<3> Param0, float fParam3)
{
	if (Global_2404993.f_1683 < 32)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_1684[Global_2404993.f_1683 /*4*/] = { Param0 };
		Global_2404993.f_1684[Global_2404993.f_1683 /*4*/].f_3 = fParam3;
		Global_2404993.f_1683++;
	}
}

void func_439()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x0C1D3C552325765B());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1);
	func_441(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0);
	switch (Local_921.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_440(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_440(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_440(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_440(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_440(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_440(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_440(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_440(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_440(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_440(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_440(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_440(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_440(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_440(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_440(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_440(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_440(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_440(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_440(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_440(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_440(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_440(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_440(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_440(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_440(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_440(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_440(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_440(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_440(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_440(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_440(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_440(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_440(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_440(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_440(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_440(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_440(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_440(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_440(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_440(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_440(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_440(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_440(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_440(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_440(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_440(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_440(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_440(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_440(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_440(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_440(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_440(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_440(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_440(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_440(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_440(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_440(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_440(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_440(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404993.f_1682)
	{
	}
	if (Global_2404993.f_649 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/] = { Param0 };
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_3 = fParam3;
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_4 = iParam4;
		Global_2404993.f_649++;
	}
}

void func_441(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	var uVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0x3217B792F2F3BB7B(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2404993.f_43.f_65 = bParam0;
	Global_2404993.f_43.f_67 = iParam1;
	Global_2404993.f_43.f_68 = bParam2;
	Global_2404993.f_43.f_170 = iParam3;
	Global_2404993.f_43.f_66 = iParam4;
	Global_2404993.f_43.f_172 = bParam5;
	Global_2404993.f_43.f_173 = bParam7;
	Global_2404993.f_43.f_175 = iParam6;
	Global_2404993.f_43.f_174 = iParam8;
	if (!bParam0)
	{
		func_443();
	}
	if (bParam2)
	{
		uVar0 = func_442();
		if (unk_0xD3FACCDA4D66AEAD(uVar0))
		{
			if (!unk_0x18C670321BC98FDA(iVar0))
			{
				if (unk_0x7DF3EE9F5A826186(iVar0))
				{
					unk_0x7B17650F15A8876D(iVar0, 0, 1);
					bVar1 = true;
				}
			}
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x687CB62D355FD7FD(iVar0, 1))
				{
					if (!unk_0x775F8FFC8E29F525(iVar0))
					{
						unk_0xDC64FA270C733B30(unk_0xDD3500FFBBCB3F3B(iVar0));
					}
				}
			}
			if (bVar1)
			{
				unk_0x615DE34FC732CF11(&iVar0);
			}
			if (bParam5)
			{
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					unk_0x30AACBA8A7A124E3(iVar0, 1);
				}
			}
			if (bParam7)
			{
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					unk_0x0DD72E0CB1FCF511(iVar0, 0);
				}
			}
			if (iParam6 > -1)
			{
				unk_0x728045E0733945FD(iVar0, iParam6, iParam6);
				unk_0xE491F8C2C2A96483(iVar0, iParam6, iParam6);
			}
		}
	}
}

var func_442()
{
	return Global_2404993.f_2194;
}

void func_443()
{
	struct<99> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Global_2404993.f_43.f_69 = { Var0 };
	Global_2404993.f_43.f_168 = 0;
}

void func_444()
{
	if (!func_44(unk_0xA00C21A2AE68AB7B(), 1))
	{
		return;
	}
	if (!func_557(7))
	{
		func_460(&uLocal_101);
		func_534(7);
		unk_0x30822041FD942595(func_459(func_34(unk_0x0C1D3C552325765B())), 50f, 1);
	}
	if (!func_44(unk_0xA00C21A2AE68AB7B(), 7))
	{
		if (func_458(&uLocal_101))
		{
			if (func_17(10))
			{
				if (func_445(&uLocal_101, 1, 0, 1))
				{
					func_76(7);
				}
			}
		}
	}
}

int func_445(var uParam0, bool bParam1, int iParam2, bool bParam3)
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
	
	if (func_458(uParam0))
	{
		if (!func_457(&(uParam0->f_3)))
		{
			func_455(&(uParam0->f_3));
		}
		unk_0x1373E5003F76E429(4);
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0x0F83039847376F53(*uParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = unk_0xF34EE736CF047844(func_452(&(uParam0->f_3)));
		iVar1 = unk_0x9ABCEFB6E400C9FB((iVar0 - 3));
		bVar2 = false;
		if (func_451(uParam0->f_1, 4))
		{
			if (uParam0->f_2 >= 5)
			{
				if (!func_451(uParam0->f_1, 16))
				{
					unk_0xAB16AADE80707D47(-1, "GO", "HUD_MINI_GAME_SOUNDSET", 0);
					func_449(&(uParam0->f_1), 16);
					unk_0x574416540AF6C9DF();
				}
			}
			else
			{
				uParam0->f_2++;
			}
		}
		if (!func_451(uParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_451(uParam0->f_1, 1))
			{
				func_449(&(uParam0->f_1), 1);
				unk_0xAB16AADE80707D47(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_448(uParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_451(uParam0->f_1, 2))
			{
				func_449(&(uParam0->f_1), 2);
				unk_0xAB16AADE80707D47(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_448(uParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_451(uParam0->f_1, 4))
			{
				func_449(&(uParam0->f_1), 4);
				unk_0xAB16AADE80707D47(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", 0);
				func_448(uParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_451(uParam0->f_1, 8))
			{
				func_449(&(uParam0->f_1), 8);
				unk_0xB49DAD10DC051295("BIKER_JOUST_FIGHT");
				unk_0x29F530EB20218AC0(18, &uVar3, &uVar4, &uVar5, &uVar6);
				unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_MESSAGE");
				func_314("CNTDWN_GO");
				unk_0x7CBFB9F4AF33C67E(uVar3);
				unk_0x7CBFB9F4AF33C67E(uVar4);
				unk_0x7CBFB9F4AF33C67E(uVar5);
				unk_0x5CC02BB872FEF340(1);
				unk_0xE73340DA551C95E1();
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
		if ((iParam2 && func_447()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				uParam0->f_1 = 0;
				func_446(&(uParam0->f_3));
			}
			unk_0x7C1793252FA472B6("RACES_RADIO_MUTE_scene");
			unk_0xC94C39C53546E775("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0xE5697AB254094B0D())
			{
				if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar7)))
				{
					iVar8 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar7));
					if (iVar8 != unk_0x0C1D3C552325765B())
					{
						iVar9 = unk_0x21F191D9AFF98B5E(iVar8);
						if (unk_0x39FEE545B315414E(iVar9, 0))
						{
							iVar10 = unk_0xF8DB47D339B8B953(iVar9, 0);
							unk_0x70C2DBAE2904E1EA(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
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

void func_446(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_447()
{
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (unk_0x7F6103BD34B839B0(0, 18) || unk_0x7F6103BD34B839B0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_448(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x29F530EB20218AC0(12, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_MESSAGE");
	unk_0x709662CF2BD061A4("NUMBER");
	unk_0x3F9D1B882EC0B8AF(unk_0x9ABCEFB6E400C9FB(iParam1));
	unk_0x1E77BE8F4283FA05();
	unk_0x7CBFB9F4AF33C67E(uVar0);
	unk_0x7CBFB9F4AF33C67E(uVar1);
	unk_0x7CBFB9F4AF33C67E(uVar2);
	unk_0x5CC02BB872FEF340(1);
	unk_0xE73340DA551C95E1();
}

void func_449(var uParam0, int iParam1)
{
	func_450(uParam0, iParam1);
}

void func_450(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_451(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_452(var uParam0)
{
	if (func_457(uParam0))
	{
		if (func_454(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_453(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_453(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar2 = unk_0x4B50AAB32FBE0483();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) / 1000f);
}

bool func_454(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

void func_455(var uParam0)
{
	func_456(uParam0, 0f);
}

void func_456(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_453(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_457(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
}

int func_458(var uParam0)
{
	if (!unk_0x1E3F61C2C1E29520(*uParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_459(int iParam0)
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

void func_460(var uParam0)
{
	*uParam0 = unk_0x474309DF4921072A("COUNTDOWN");
}

void func_461()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
		{
			func_74(1);
		}
		if (func_44(unk_0xA00C21A2AE68AB7B(), 2))
		{
			func_74(2);
		}
		return;
	}
	if (func_483() || func_480())
	{
		func_428();
		unk_0xABC36CFE4F3421A0(0, 140, 1);
		unk_0xABC36CFE4F3421A0(0, 141, 1);
		unk_0xABC36CFE4F3421A0(0, 142, 1);
		unk_0xABC36CFE4F3421A0(0, 143, 1);
		unk_0xABC36CFE4F3421A0(0, 24, 1);
		unk_0xABC36CFE4F3421A0(0, 345, 1);
		unk_0xABC36CFE4F3421A0(0, 346, 1);
		unk_0xABC36CFE4F3421A0(0, 347, 1);
	}
	if (func_483())
	{
		if (!func_44(unk_0xA00C21A2AE68AB7B(), 4))
		{
			func_76(4);
			unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 0);
			unk_0x83CDA1F1ADCD9582(0);
			unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 0);
		}
		if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
		{
			if (func_479(2))
			{
				func_478(2);
			}
			if (!func_73())
			{
				if (func_479(3))
				{
					func_478(3);
				}
				iVar1 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
				iVar0 = unk_0x705BC1BB91F530B5(iVar1);
				if (func_424(iVar0))
				{
					unk_0x30026A8ED83B403A(iVar1, 1);
					func_477(3);
					if (func_479(4))
					{
						func_478(4);
					}
					if (!func_44(unk_0xA00C21A2AE68AB7B(), 2))
					{
						func_76(2);
					}
					if (unk_0x08BA6DD398CA197C(Local_921.f_2, unk_0x848AF823A8EA3C62()))
					{
						if (!func_44(unk_0xA00C21A2AE68AB7B(), 1))
						{
							unk_0xB49DAD10DC051295("BIKER_JOUST_START");
							func_76(1);
							func_475();
							unk_0x13F1FCB111B820B0(true);
						}
						if (!func_474() || !func_473())
						{
							if (func_45(unk_0x0C1D3C552325765B()))
							{
								if (!func_474())
								{
									func_462(6);
								}
							}
							else
							{
								func_462(7);
							}
						}
						else
						{
							func_462(8);
						}
					}
				}
				else
				{
					if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
					{
						func_74(1);
					}
					if (func_44(unk_0xA00C21A2AE68AB7B(), 2))
					{
						func_74(2);
					}
					func_462(4);
				}
			}
			else
			{
				if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
				{
					func_74(1);
				}
				if (func_44(unk_0xA00C21A2AE68AB7B(), 2))
				{
					func_74(2);
				}
				if (func_44(unk_0xA00C21A2AE68AB7B(), 4))
				{
					func_74(4);
				}
				func_462(3);
			}
		}
		else
		{
			if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
			{
				func_74(1);
			}
			if (func_44(unk_0xA00C21A2AE68AB7B(), 2))
			{
				func_74(2);
			}
			func_462(2);
		}
	}
	else
	{
		if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
		{
			func_74(1);
		}
		if (func_44(unk_0xA00C21A2AE68AB7B(), 2))
		{
			func_74(2);
		}
		if (func_44(unk_0xA00C21A2AE68AB7B(), 4))
		{
			func_74(4);
			func_72(0);
			unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 1);
		}
	}
}

void func_462(int iParam0)
{
	char cVar0[64];
	int iVar16;
	
	if (func_472())
	{
		if (!func_479(iParam0))
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
					if (func_141())
					{
						func_471("JST_HTBLAUNCH", "JST_BLIP", iLocal_880, -1);
					}
					else
					{
						func_471("JST_HGNLNCH", "JST_BLIP", iLocal_880, -1);
					}
					break;
				
				case 14:
					func_471("JST_HGNLNCH", "JST_BLIP", iLocal_880, -1);
					break;
				
				case 10:
					func_471("JST_FIGHT", "HUNT_TARBLP", iLocal_881, -1);
					break;
				
				case 15:
					func_471("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&cVar0, func_465(func_36()), 64);
					iVar16 = func_536(func_36());
					func_464("JST_RVLLNCH", &cVar0, iVar16, "JST_BLIP", iLocal_880, -1);
					break;
				
				case 17:
					func_96("JST_DOUB", -1);
					break;
				
				default:
					break;
			}
			func_92(1);
			func_463(iParam0);
		}
	}
}

void func_463(int iParam0)
{
	unk_0x88B0F0DC270164B7(&uLocal_853, iParam0);
}

void func_464(char* sParam0, char[4] cParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(cParam1);
	if (!iParam4 == 0)
	{
		unk_0x212C24688D441F9E(iParam4);
	}
	unk_0xBDE6EEC5F6BDC060(sParam3);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam5);
}

char* func_465(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		uVar0 = func_470(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return uVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		uVar0 = func_468(iParam0, 0);
		return uVar0;
	}
	if (((func_99(iParam0, 28) || func_99(unk_0x0C1D3C552325765B(), 28)) || func_467(iParam0)) && !func_466(iParam0))
	{
		return func_468(iParam0, 0);
	}
	iVar1 = func_220(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_468(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		uVar0 = func_470(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar0))
		{
			return func_468(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_466(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_168(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_168(iParam0) };
	if (unk_0xD95D58B9AAC86D55() || unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xED4DB0F2EFE02B37(0))
		{
			return 0;
		}
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x6F4E1F8D329BC4EC(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_468(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_94(iParam0, 1))
		{
			return func_469();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

var func_469()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

var func_470(var uParam0)
{
	return uParam0;
}

void func_471(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xBDE6EEC5F6BDC060(sParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

int func_472()
{
	if (((((!func_297() && !unk_0x84C71F36E7D97756()) && !unk_0x0893ED56F523F729()) && func_702(unk_0x0C1D3C552325765B(), 1, 1)) && !func_113()) && !unk_0x598A9E990F05F82C())
	{
		return 1;
	}
	return 0;
}

bool func_473()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(unk_0x0C1D3C552325765B());
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

bool func_474()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(unk_0x0C1D3C552325765B()));
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

void func_475()
{
	if (!func_476(unk_0x0C1D3C552325765B()))
	{
		func_114(25);
	}
}

bool func_476(int iParam0)
{
	return func_99(iParam0, 25);
}

void func_477(int iParam0)
{
	Global_2404993.f_43.f_297 = iParam0;
	unk_0xB77EBFE57674ED21(unk_0xA0081090911D13E5(), Global_2404993.f_43.f_297);
	if (Global_2404993.f_43.f_297 == 1)
	{
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 115, 1);
	}
	else
	{
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 115, 0);
	}
}

void func_478(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&uLocal_853, iParam0);
}

bool func_479(int iParam0)
{
	return unk_0x08BA6DD398CA197C(uLocal_853, iParam0);
}

int func_480()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
	Var3 = { func_459(func_482(unk_0x0C1D3C552325765B())) };
	fVar6 = unk_0x999A157665D69393(Var0, Var3, 0);
	fVar7 = (func_481(func_482(unk_0x0C1D3C552325765B())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (unk_0x7466327978A6A24C((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

float func_481(int iParam0)
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_482(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_483()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
	Var3 = { func_459(func_34(unk_0x0C1D3C552325765B())) };
	fVar6 = unk_0x999A157665D69393(Var0, Var3, 0);
	fVar7 = (func_481(func_34(unk_0x0C1D3C552325765B())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (unk_0x7466327978A6A24C((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

void func_484()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	unk_0x29F530EB20218AC0(iLocal_880, &uVar0, &uVar1, &uVar2, &uVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_481(func_34(unk_0x0C1D3C552325765B()));
	Var7 = { func_459(func_34(unk_0x0C1D3C552325765B())) };
	Var7.f_2 = (Var7.f_2 - fVar5);
	unk_0xA75B05D6DFDD8308(1, Var7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, uVar0, uVar1, uVar2, uVar3, 0, 0, 2, 0, 0, 0, 0);
}

void func_485()
{
	if (func_524())
	{
		func_518();
		func_517();
		func_504();
		func_487();
		func_486();
	}
	else
	{
		switch (func_105(unk_0x0C1D3C552325765B()))
		{
			case 0:
				func_429();
				break;
			
			case 1:
				func_518();
				break;
			
			case 2:
				func_486();
				break;
			
			case 3:
				func_518();
				func_517();
				func_504();
				func_486();
				func_487();
				break;
			}
	}
}

void func_486()
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
			{
				if (!func_479(10))
				{
					func_462(10);
				}
				else
				{
					func_462(15);
				}
				if (!func_479(17))
				{
					func_462(17);
				}
			}
		}
		else if (!func_44(unk_0xA00C21A2AE68AB7B(), 1))
		{
			func_462(12);
		}
		else
		{
			func_462(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_524())
		{
			if (unk_0x0C1D3C552325765B() == Local_921.f_16[0])
			{
				func_462(13);
			}
			else
			{
				func_462(14);
			}
		}
		else
		{
			func_462(16);
		}
	}
}

void func_487()
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
				func_503();
				iVar2 = func_34(unk_0x0C1D3C552325765B());
				iVar3 = (1 - iVar2);
				iVar4 = func_536(unk_0x0C1D3C552325765B());
				iVar5 = Local_921.f_16[iVar3];
				if (Local_921.f_24[iVar2] > 0)
				{
					func_500(Local_921.f_27[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_99, 0, 0, 0, 0, 0);
				}
				else
				{
					func_500(Local_921.f_27[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_99, 0, 0, 0, 0, 0);
				}
				if (iVar5 != func_29())
				{
					if (unk_0xCB129F9A01D14082(iVar5))
					{
						if (!unk_0x509383441597090D(&Local_898))
						{
							iVar4 = func_536(iVar5);
							func_500(Local_921.f_27[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_99, 0, 0, 0, 0, 0);
						}
					}
				}
				if (iLocal_864 > 0)
				{
					func_499(iLocal_864, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_499(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_488();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_914, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_702(unk_0x0C1D3C552325765B(), 1, 1))
		{
			func_503();
			func_499(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
		}
	}
}

void func_488()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_414())
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
		iVar2 = func_498();
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
			func_497((iVar1 - func_22(&(Local_921.f_7), 0, 0)));
			func_489(iVar3, iVar2, (iVar1 - func_22(&(Local_921.f_7), 0, 0)), 1, func_496(-1));
		}
		else
		{
			func_489(iVar3, iVar2, 0, 1, func_496(-1));
		}
	}
}

void func_489(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_494(0) == 0)
	{
		return;
	}
	func_493();
	func_490(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_189(sParam4))
	{
		sVar0 = sParam4;
	}
	func_499(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_490(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_492(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_491(4, iVar0);
		Global_1344178.f_2929[iVar0] = iParam0;
		Global_1344178.f_2929.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1344178.f_2929.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1344178.f_2929.f_183[iVar0] = iParam3;
		Global_1344178.f_2929.f_216[iVar0] = iParam5;
		Global_1344178.f_2929.f_194[iVar0] = iParam4;
		Global_1344178.f_2929.f_227[iVar0] = iParam6;
		Global_1344178.f_2929.f_270[iVar0] = iParam7;
		Global_1344178.f_2929.f_281[iVar0] = iParam8;
		Global_1344178.f_2929.f_292[iVar0] = iParam9;
		Global_1344178.f_2929.f_303[iVar0] = iParam10;
		Global_1344178.f_2929.f_314[iVar0] = iParam11;
		Global_1344178.f_2929.f_325[iVar0] = iParam13;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x955B8C8F89CC3AC0()) && iParam12)
		{
			Global_1344178.f_941 = 1;
		}
	}
}

void func_491(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_492(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_493()
{
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	Global_2453276 = 1;
}

int func_494(bool bParam0)
{
	if (func_495())
	{
		return 0;
	}
	if (func_397())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_702(unk_0x0C1D3C552325765B(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_495()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 12);
}

char* func_496(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x367152330DB70D69();
	return "HUD_STARTING";
	if (unk_0x28C1B9853548BD8E(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_challenges"))
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
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_497(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x62E2FDDFDA7A731D())
	{
		Global_2482149.f_4601 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_4601, 1))
		{
			unk_0xAB16AADE80707D47(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2482149.f_4601 = 0;
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4601), 1);
		}
	}
}

int func_498()
{
	return 16;
}

void func_499(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_492(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_491(7, iVar0);
		Global_1344178.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = iParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = iParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_500(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_492(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_491(6, iVar0);
		Global_1344178.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_3579.f_183[iVar0] = iParam3;
		Global_1344178.f_3579.f_172[iVar0] = iParam2;
		Global_1344178.f_3579.f_260[iVar0] = iParam4;
		Global_1344178.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_3579.f_443[iVar0] = iParam7;
		Global_1344178.f_3579.f_454[iVar0] = iParam8;
		Global_1344178.f_3579.f_497[iVar0] = iParam9;
		Global_1344178.f_3579.f_508[iVar0] = iParam10;
		Global_1344178.f_3579.f_205[iVar0] = iParam11;
		Global_1344178.f_3579.f_216[iVar0] = iParam12;
		Global_1344178.f_3579.f_227[iVar0] = uParam13;
		Global_1344178.f_3579.f_238[iVar0] = iParam14;
		Global_1344178.f_3579.f_249[iVar0] = iParam15;
		Global_1344178.f_3579.f_519[iVar0] = iParam16;
		Global_1344178.f_3579.f_530[iVar0] = iParam17;
		Global_1344178.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_502())
		{
			Global_1344178.f_941 = 1;
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			iVar2 = 0;
			unk_0x28EBEB55C44FD509(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1344178.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1344178.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1344178.f_941 = 1;
			}
			if (func_501())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_501()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x28EBEB55C44FD509(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_502()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

void func_503()
{
	Global_1344178.f_941 = 1;
}

void func_504()
{
	if (iLocal_861 > -1)
	{
		if (func_44(unk_0x81C7A2950EF11C8A(iLocal_861), 1))
		{
			if (func_44(unk_0x81C7A2950EF11C8A(iLocal_861), 6))
			{
				if (func_425())
				{
					if (func_423())
					{
						if (!func_516("JST_OBJ_KILL"))
						{
							func_515("JST_OBJ_KILL", &Local_898, iLocal_881, 0);
						}
					}
					else
					{
						if (func_516("JST_OBJ_KILL"))
						{
							func_429();
						}
						if (!func_516("JST_FBIKE"))
						{
							func_512("JST_FBIKE", 0);
						}
						if (!func_44(unk_0xA00C21A2AE68AB7B(), 10))
						{
							func_76(10);
							func_511("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_423())
				{
					if (!func_516("JST_OBKAREA"))
					{
						func_512("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_516("JST_OBJ_KILL"))
					{
						func_429();
					}
					if (!func_516("JST_FBIKE"))
					{
						func_512("JST_FBIKE", 0);
					}
				}
			}
			else if (func_557(9))
			{
				if (func_423())
				{
					if (!func_516("JST_OBJ_CHARGE"))
					{
						func_515("JST_OBJ_CHARGE", &Local_898, iLocal_881, 0);
					}
				}
			}
		}
		else if (!func_483())
		{
			if (!func_516("JST_OGOAREA"))
			{
				func_505("JST_OGOAREA", "JST_START", iLocal_880, 0);
			}
		}
		else if (!func_423())
		{
			if (!func_516("JST_OBIKE"))
			{
				func_512("JST_OBIKE", 0);
			}
		}
	}
}

void func_505(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_506(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312571 = 19;
		Global_1312571.f_56 = iParam2;
	}
}

int func_506(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (func_510(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_430();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = uParam3;
	Global_1312571.f_56 = uParam3;
	func_509();
	func_508(bParam2);
	func_507();
	return 1;
}

void func_507()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_508(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_509()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

bool func_510(char* sParam0, char* sParam1)
{
	if (!func_435())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_511(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_512(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_513(sParam0))
	{
		return;
	}
	func_430();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_509();
	func_508(bParam1);
	func_507();
}

bool func_513(char* sParam0)
{
	if (!func_435())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_514(uParam0);
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_514(char* sParam0)
{
	if (!func_435())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_515(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_506(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312571 = 16;
		Global_1312571.f_56 = iParam2;
	}
}

int func_516(char* sParam0)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (!func_435())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		if (unk_0x8BC27E98D5626ED8(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	return func_513(sParam0);
}

void func_517()
{
}

void func_518()
{
	if (!func_414())
	{
		func_523();
	}
	else
	{
		if (unk_0x16833EFAA58E63DB(uLocal_869))
		{
			unk_0x0B57C567D698C373(&uLocal_869);
		}
		if (unk_0x16833EFAA58E63DB(uLocal_868))
		{
			unk_0x0B57C567D698C373(&uLocal_868);
		}
		if (iLocal_861 > -1)
		{
			if (func_44(unk_0x81C7A2950EF11C8A(iLocal_861), 1))
			{
				func_519();
			}
		}
	}
}

void func_519()
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	func_522(&Var0);
	if (!unk_0x16833EFAA58E63DB(uLocal_870))
	{
		func_521(&uVar3, &uVar4, &uVar5);
		uLocal_870 = unk_0x074D100E8FAE6B31(Var0, uVar3, uVar4);
		unk_0x80363F708E67A268(uLocal_870, uVar5);
		func_520(&uLocal_870, 29);
		unk_0x9F80CD84AD2B3DA4(uLocal_870, 180);
		unk_0x2FE9515E72A14285(uLocal_870, 0);
	}
}

void func_520(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		uVar0 = func_69(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, uVar0);
	}
}

void func_521(var uParam0, var uParam1, var uParam2)
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

void func_522(var uParam0)
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

void func_523()
{
	if (!unk_0x16833EFAA58E63DB(uLocal_869))
	{
		uLocal_869 = unk_0x52CE8C31DD5898E7(func_459(func_34(unk_0x0C1D3C552325765B())));
		unk_0x32479C670EB9962F(uLocal_869, 495);
		unk_0x3AE9C8E8575D2576(uLocal_869, 1);
		unk_0xFB70601EAE8F9B9E(uLocal_869, 7000);
		unk_0x6F18BFEFE84565FF(uLocal_869, "CELL_JOUST");
		unk_0x420759DE4A6A9555(uLocal_869, 9);
		Global_2482149.f_259 = 1;
		func_520(&uLocal_869, iLocal_880);
		if (!func_557(6))
		{
			unk_0x07FD940F5798C7D3();
			func_534(6);
		}
	}
	if (!unk_0x16833EFAA58E63DB(uLocal_868))
	{
		uLocal_868 = unk_0xF2C736D2FDAF2CB1(func_459(func_34(unk_0x0C1D3C552325765B())), (func_481(func_34(unk_0x0C1D3C552325765B())) / 2f));
		func_520(&uLocal_868, iLocal_880);
		unk_0x9F80CD84AD2B3DA4(uLocal_868, 100);
		unk_0xC40118229E47A3D7(uLocal_868, 1.4f);
		unk_0x2FE9515E72A14285(uLocal_868, 0);
	}
}

int func_524()
{
	if (func_526() || func_525())
	{
		return 1;
	}
	return 0;
}

int func_525()
{
	return func_37(unk_0x0C1D3C552325765B());
}

bool func_526()
{
	return func_35(unk_0x0C1D3C552325765B());
}

void func_527(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_87(unk_0x0C1D3C552325765B());
	if (iParam2 || func_90(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1750587 = iVar0;
		if (func_125(iVar0))
		{
			Global_1750587.f_1 = 4;
		}
		else if (func_533(iVar0))
		{
			Global_1750587.f_1 = 5;
		}
		else if (func_81(iVar0, 0))
		{
			Global_1750587.f_1 = 2;
			if (func_117(iVar0))
			{
				Global_1750587.f_1 = 3;
			}
		}
		else
		{
			Global_1750587.f_1 = 1;
		}
		if (func_145() != func_29())
		{
			Global_1750587.f_4 = func_532(func_145());
			Global_1750587.f_5 = func_531(func_145());
		}
		if (func_84() != func_29())
		{
			func_144(func_84(), &(Global_1750587.f_6), &(Global_1750587.f_7));
		}
		Global_1750587.f_9 = unk_0x39E54E7BC7452169();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1750587.f_27 = 1;
			Global_1750587.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1750587.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1750587.f_40 = func_243(iParam1);
			Global_1750587.f_41 = func_530();
			Global_1750587.f_42 = func_244(unk_0x0C1D3C552325765B(), iParam1);
			Global_1750587.f_44 = func_529(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	else
	{
		if (func_145() != func_29())
		{
			Global_1750569 = func_532(func_145());
			Global_1750569.f_1 = func_531(func_145());
		}
		Global_1750569.f_5 = unk_0x39E54E7BC7452169();
		Global_1750569.f_13 = func_528();
		Global_1750569.f_15 = 0;
		if (func_143(1))
		{
			if (func_84() == func_145())
			{
				Global_1750569.f_15 = 1;
			}
		}
	}
}

int func_528()
{
	int iVar0;
	
	iVar0 = func_145();
	if (iVar0 != func_29())
	{
		return Global_1614576[iVar0 /*324*/].f_10.f_91;
	}
	return 0;
}

int func_529(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_242(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_530()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_241(unk_0x0C1D3C552325765B(), iVar0))
		{
			unk_0x88B0F0DC270164B7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_531(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_532(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[0];
}

int func_533(int iParam0)
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

void func_534(int iParam0)
{
	unk_0x88B0F0DC270164B7(&uLocal_852, iParam0);
}

char* func_535()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_220(unk_0x0C1D3C552325765B());
	if (iVar0 != func_29())
	{
		if (iVar0 != unk_0x0C1D3C552325765B())
		{
			if (((func_99(iVar0, 28) || func_99(unk_0x0C1D3C552325765B(), 28)) || func_467(iVar0)) && !func_466(iVar0))
			{
				return func_468(iVar0, 0);
			}
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_468(iVar0, 0);
			}
		}
		uVar1 = func_470(&(Global_1614576[iVar0 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar1))
		{
			return func_468(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_536(int iParam0)
{
	int iVar0;
	
	iVar0 = func_219(iParam0);
	if (iVar0 != -1)
	{
		return func_217(iVar0);
	}
	return 1;
}

void func_537(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != iParam0)
	{
		func_556(-1);
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = iParam0;
		if (func_30() != -1)
		{
			func_555(-1);
		}
		if (func_554() != -1)
		{
			func_553(-1);
		}
		func_552(iParam2);
		func_550(iParam0);
		if (!func_549(iParam0))
		{
			fVar0 = func_548(iParam0);
			if (fVar0 != 1f)
			{
				func_547(fVar0);
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
			}
		}
		if (!func_546(iParam0))
		{
			if (func_545(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xCF03D9C8A7F1577C(0);
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				}
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
			}
			else if (unk_0x34E98013CA352B7E() < 5)
			{
				unk_0xACD6D334FD769B0C(1f);
				unk_0xCF03D9C8A7F1577C(5);
			}
		}
		if (func_73())
		{
			func_114(27);
		}
		if (bParam1)
		{
			if (!func_576())
			{
				func_543(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4)) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 0))
			{
				func_201(6);
			}
			func_542();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x806DACE5511E6771(3, 0);
			unk_0x806DACE5511E6771(5, 0);
		}
		if (func_112(unk_0x0C1D3C552325765B()) && func_107(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
		}
		func_538();
	}
}

void func_538()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_541();
	iVar2 = func_220(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (func_232(iVar1, iVar2, 1) || func_539(iVar1, unk_0x0C1D3C552325765B()))
			{
				unk_0x5EB0EEC362B46453(unk_0x0C1D3C552325765B(), iVar1, uVar3);
				unk_0x5EB0EEC362B46453(iVar1, unk_0x0C1D3C552325765B(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_539(int iParam0, int iParam1)
{
	if (func_234(iParam0, 1) && func_234(iParam1, 1))
	{
		return (func_540(iParam0) == func_220(iParam1) || func_540(iParam1) == func_220(iParam0));
	}
	return 0;
}

int func_540(int iParam0)
{
	if (func_234(iParam0, 1))
	{
		return Global_1614576[func_220(iParam0) /*324*/].f_10.f_268;
	}
	return func_29();
}

int func_541()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_145();
	if (iVar0 != func_29())
	{
		if (func_702(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x08BA6DD398CA197C(Global_1614576[iVar1 /*324*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_542()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 1);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 4);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 6))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 6);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 2);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_444 = 0;
	if (Global_2482149.f_4418 > 0)
	{
		unk_0xCF03D9C8A7F1577C(Global_2482149.f_4418);
	}
	Global_2482149.f_4417 = 0;
}

void func_543(int iParam0)
{
	if (func_544() && iParam0)
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

int func_544()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_545(int iParam0, int iParam1)
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

int func_546(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_547(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_67())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

float func_548(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_549(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_550(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_123(3759, -1, 0);
	iVar1 = func_551(iParam0);
	if (iVar1 != -1)
	{
		unk_0x88B0F0DC270164B7(&iVar0, iVar1);
		func_121(3759, iVar0, -1, 1, 0);
	}
}

int func_551(int iParam0)
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
		
		default:
	}
	return -1;
}

void func_552(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (Global_1614576[iVar0 /*324*/].f_10.f_172 != iParam0)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_172 = iParam0;
	}
}

void func_553(int iParam0)
{
	if (Global_2482149.f_4698.f_146 != iParam0)
	{
		Global_2482149.f_4698.f_146 = iParam0;
	}
}

int func_554()
{
	return Global_2482149.f_4698.f_146;
}

void func_555(int iParam0)
{
	if (Global_2482149.f_4698.f_145 != iParam0)
	{
		Global_2482149.f_4698.f_145 = iParam0;
	}
}

void func_556(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_31 = iParam0;
}

bool func_557(int iParam0)
{
	return unk_0x08BA6DD398CA197C(uLocal_852, iParam0);
}

int func_558(bool bParam0)
{
	if (func_573(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA012E3A84A2B2F1A())
		{
			return 0;
		}
	}
	if (func_572(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_571())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (func_570())
	{
		return 0;
	}
	if (func_397())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_395(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_399())
	{
		return 0;
	}
	if (func_573(unk_0x0C1D3C552325765B(), 0) || func_573(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_573(unk_0x0C1D3C552325765B(), 12) || func_573(unk_0x0C1D3C552325765B(), 14)) || func_573(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_569(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		if (!func_564())
		{
			return 0;
		}
	}
	if (func_563())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_562(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_561())
	{
		return 0;
	}
	if (func_560(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_559(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_559(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

int func_560(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

int func_561()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_562(int iParam0)
{
	if (!func_702(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_563()
{
	return Global_91458.f_304 > 0;
}

int func_564()
{
	int iVar0;
	
	iVar0 = func_87(unk_0x0C1D3C552325765B());
	if (func_568(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11) || func_567(unk_0x0C1D3C552325765B()))
	{
		if (iVar0 == 167 || iVar0 == 168)
		{
			return 1;
		}
	}
	if (func_565(unk_0x0C1D3C552325765B()))
	{
		if (func_125(iVar0) || func_533(iVar0))
		{
			return 1;
		}
	}
	if (func_103(unk_0x0C1D3C552325765B()))
	{
		if (func_533(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_565(int iParam0)
{
	if (func_566(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_566(int iParam0, int iParam1)
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

int func_567(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_702(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_104(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_568(int iParam0)
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

int func_569(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_567(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_103(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_570()
{
	return Global_1315229;
}

bool func_571()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_572(int iParam0)
{
	if (func_394(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_573(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_574(int iParam0)
{
	if (!func_196() && !func_234(unk_0x0C1D3C552325765B(), 1))
	{
		if (!func_107(unk_0x0C1D3C552325765B()))
		{
			if (func_576())
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

int func_575()
{
	return 0;
}

int func_576()
{
	if ((func_99(unk_0x0C1D3C552325765B(), 21) || func_99(unk_0x0C1D3C552325765B(), 22)) || func_580())
	{
		return 1;
	}
	if (func_577())
	{
		func_114(22);
		return 1;
	}
	return 0;
}

int func_577()
{
	if (func_88(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_73() && !func_579()) || func_573(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_99(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_578(27);
		}
	}
	return 0;
}

void func_578(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

bool func_579()
{
	return Global_1312412.f_1;
}

bool func_580()
{
	return func_581(286, -1);
}

int func_581(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_124(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_582(int iParam0, int iParam1)
{
	Local_956[iParam0 /*6*/] = iParam1;
}

bool func_583()
{
	if (!func_44(unk_0xA00C21A2AE68AB7B(), 3))
	{
		if (func_17(1))
		{
			func_585("JCMcBpPl9UWmcdOYFza0Tg");
			func_585("jDF4fBBUqG9ZuI9TR7mw");
			func_76(3);
			func_584();
		}
	}
	return func_44(unk_0xA00C21A2AE68AB7B(), 3);
}

void func_584()
{
	Global_1748041 = 1;
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 0))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 0);
		unk_0x88B0F0DC270164B7(&Global_1748042, 0);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 1))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 1);
		unk_0x88B0F0DC270164B7(&Global_1748042, 1);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 5))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 5);
		unk_0x88B0F0DC270164B7(&Global_1748042, 5);
	}
	if (unk_0x7B0208FFAEF67EF9(-355737150))
	{
		unk_0x6A7EBBBF8B647A25(-355737150, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-580979506))
	{
		unk_0x6A7EBBBF8B647A25(-580979506, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1426452475))
	{
		unk_0x6A7EBBBF8B647A25(-1426452475, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(745417724))
	{
		unk_0x6A7EBBBF8B647A25(745417724, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1305304906))
	{
		unk_0x6A7EBBBF8B647A25(-1305304906, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1543175077))
	{
		unk_0x6A7EBBBF8B647A25(-1543175077, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-811770997))
	{
		unk_0x6A7EBBBF8B647A25(-811770997, 0, 0, 0);
	}
}

void func_585(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_586(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0x88B0F0DC270164B7(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_586(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_588(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_587(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_587(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_588(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794608.f_98389[iVar12 /*12*/];
		
		case 62:
			return Global_906487.f_18805[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

int func_588(var uParam0)
{
	int iVar0;
	
	if (unk_0x509383441597090D(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_590(uParam0->f_1))
	{
		if (func_589(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x08BA6DD398CA197C(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_794608.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x08BA6DD398CA197C(Global_794608.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x28C1B9853548BD8E(&(Global_794608.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x08BA6DD398CA197C(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_906487.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x08BA6DD398CA197C(Global_906487.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x28C1B9853548BD8E(&(Global_906487.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x0C1D3C552325765B())
	{
		if (unk_0x08BA6DD398CA197C(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x28C1B9853548BD8E(&(Global_949333.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x08BA6DD398CA197C(Global_949333.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_949333.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_589(var uParam0)
{
	if (Global_2398050)
	{
		if (unk_0x28C1B9853548BD8E(&(Global_2398050.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_590(int iParam0)
{
	return iParam0 == 9999;
}

int func_591()
{
	return Local_921.f_0;
}

int func_592(int iParam0)
{
	return Local_956[iParam0 /*6*/];
}

void func_593()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		switch (iVar1)
		{
			case 168:
				unk_0x4FD5256AFF6E50B7(1, iVar0, &uVar2, 2);
				break;
			
			case 179:
				func_594(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_594(int iParam0)
{
	struct<10> Var0;
	var uVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 10))
	{
		if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
		{
			if (unk_0x60F161681C368C4E(Var0.f_0))
			{
				uVar10 = unk_0x90897FA118314142(Var0.f_0);
				if (unk_0x54F0AEFB11EA090A(uVar10))
				{
					iVar11 = unk_0xA43666ACD375E339(iVar10);
					if (unk_0x3F3C7C3B52DD0ECA(iVar11))
					{
						if (Var0.f_3)
						{
							if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
							{
								if (unk_0x60F161681C368C4E(Var0.f_1))
								{
									iVar10 = unk_0x90897FA118314142(Var0.f_1);
									if (unk_0x54F0AEFB11EA090A(iVar10))
									{
										iVar12 = unk_0xA43666ACD375E339(iVar10);
										if (iVar12 == unk_0x0C1D3C552325765B())
										{
											if (func_423())
											{
												if (func_425())
												{
													if (!func_284(iVar12, iVar11) && func_597(iVar12))
													{
														if (func_595(Var0))
														{
															if (func_45(iVar11))
															{
																Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 = (Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 + (Global_262145.f_16160 * Global_262145.f_16161));
															}
															else
															{
																Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 = (Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 + (Global_262145.f_16159 * Global_262145.f_16161));
															}
														}
														else if (func_45(iVar11))
														{
															Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 = (Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 + Global_262145.f_16160);
														}
														else
														{
															Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 = (Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_3 + Global_262145.f_16159);
														}
													}
													else if (iVar12 == iVar11 || !func_284(iVar12, iVar11))
													{
														if (func_595(Var0))
														{
															Local_956[unk_0x848AF823A8EA3C62() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_462(11);
												}
											}
											else
											{
												func_462(9);
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

int func_595(struct<10> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0x90897FA118314142(Param0.f_1)) && !unk_0x912AD5A10E7633F0(unk_0x90897FA118314142(Param0.f_1), 0))
	{
		if (func_596(unk_0x90897FA118314142(Param0.f_1)))
		{
			iVar0 = unk_0x31171C9B4E573B4A(Param0.f_4);
			iVar1 = Param0.f_4;
			iVar2 = unk_0x3AFAF26DE0EEA7E8(iVar1);
			if (((Param0.f_9 || iVar1 == joaat("weapon_unarmed")) || iVar2 == joaat("GROUP_MELEE")) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_596(int iParam0)
{
	int iVar0;
	
	if (unk_0xD05DBB55CBEF6ACF(iParam0))
	{
		return 1;
	}
	if (unk_0x39FEE545B315414E(iParam0, 1))
	{
		iVar0 = unk_0xF8DB47D339B8B953(iParam0, 1);
		if ((((unk_0x705BC1BB91F530B5(iVar0) == joaat("chimera") || unk_0x705BC1BB91F530B5(iVar0) == joaat("blazer")) || unk_0x705BC1BB91F530B5(iVar0) == joaat("blazer2")) || unk_0x705BC1BB91F530B5(iVar0) == joaat("blazer3")) || unk_0x705BC1BB91F530B5(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_597(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xCF66111B26743875(iParam0);
	if (unk_0x39FEE545B315414E(unk_0x21F191D9AFF98B5E(iParam0), 0))
	{
		iVar0 = unk_0xF8DB47D339B8B953(unk_0x21F191D9AFF98B5E(iParam0), 0);
		iVar1 = func_598(iVar0);
		if (func_284(iVar1, iParam0) || iVar1 == iParam0)
		{
			unk_0xCF66111B26743875(iParam0);
			unk_0xCF66111B26743875(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_598(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if (!unk_0x6315EBE95A97CADF(iParam0, -1, 0))
		{
			iVar0 = unk_0x8FD32443A080784B(iParam0, -1, 0);
			if (!unk_0xEB361B4BD195A4D3(iVar0))
			{
				iVar1 = unk_0xA43666ACD375E339(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_702(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_599()
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_557(9))
		{
			iVar0 = (1 - func_34(unk_0x0C1D3C552325765B()));
			if (Local_921.f_16[1] != Local_921.f_16[0])
			{
				if (Local_921.f_16[iVar0] != func_29())
				{
					StringCopy(&Local_898, func_465(Local_921.f_16[iVar0]), 64);
					iLocal_881 = func_536(Local_921.f_16[iVar0]);
					func_534(9);
				}
			}
		}
	}
}

void func_600()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9792E83A415B1434(unk_0xA0081090911D13E5()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (unk_0xCB129F9A01D14082(iVar1))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_860, iVar0))
				{
					unk_0xE39A6F479496C24E(iVar1, 0);
					unk_0x88B0F0DC270164B7(&iLocal_860, iVar0);
				}
				else if (!unk_0x3F3C7C3B52DD0ECA(iVar1))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (!unk_0x08BA6DD398CA197C(uLocal_859, iVar0))
							{
								if (((!func_602(unk_0xA0081090911D13E5(), unk_0x21F191D9AFF98B5E(iVar1)) && !func_601(unk_0x21F191D9AFF98B5E(iVar1))) && !func_284(unk_0x0C1D3C552325765B(), iVar1)) && (func_483() || func_480()))
								{
									unk_0xE39A6F479496C24E(iVar1, 1);
									unk_0x88B0F0DC270164B7(&iLocal_859, iVar0);
								}
							}
							else if (func_602(unk_0xA0081090911D13E5(), unk_0x21F191D9AFF98B5E(iVar1)))
							{
								unk_0xE39A6F479496C24E(iVar1, 0);
								unk_0x09C86C0C5CA26B1E(&iLocal_859, iVar0);
							}
							else if (func_601(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								unk_0xE39A6F479496C24E(iVar1, 0);
								unk_0x09C86C0C5CA26B1E(&iLocal_859, iVar0);
							}
							else if (func_284(unk_0x0C1D3C552325765B(), iVar1))
							{
								unk_0xE39A6F479496C24E(iVar1, 0);
								unk_0x09C86C0C5CA26B1E(&iLocal_859, iVar0);
							}
							else if (!func_483() && !func_480())
							{
								unk_0xE39A6F479496C24E(iVar1, 0);
								unk_0x09C86C0C5CA26B1E(&iLocal_859, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(unk_0xA00C21A2AE68AB7B(), 1))
				{
					if (Local_956[iLocal_861 /*6*/].f_5 >= 2)
					{
						if (!func_44(unk_0x9259DE19D910276C(iVar1), 1))
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_859, iVar0))
							{
								if (!(unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1))))
								{
									if (!func_602(unk_0xA0081090911D13E5(), unk_0x21F191D9AFF98B5E(iVar1)) && !func_601(unk_0x21F191D9AFF98B5E(iVar1)))
									{
										unk_0xE39A6F479496C24E(iVar1, 1);
										unk_0x88B0F0DC270164B7(&iLocal_859, iVar0);
									}
								}
							}
							else if (!(unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1))))
							{
								if (func_602(unk_0xA0081090911D13E5(), unk_0x21F191D9AFF98B5E(iVar1)) || func_601(unk_0x21F191D9AFF98B5E(iVar1)))
								{
									unk_0xE39A6F479496C24E(iVar1, 0);
									unk_0x09C86C0C5CA26B1E(&iLocal_859, iVar0);
								}
							}
						}
						else if (unk_0x08BA6DD398CA197C(iLocal_859, iVar0))
						{
							if (func_44(unk_0x9259DE19D910276C(iVar1), 1))
							{
								unk_0xE39A6F479496C24E(iVar1, 0);
								unk_0x09C86C0C5CA26B1E(&iLocal_859, iVar0);
							}
						}
					}
				}
				else
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_859, iVar0))
					{
						if (func_44(unk_0x9259DE19D910276C(iVar1), 1))
						{
							unk_0xE39A6F479496C24E(iVar1, 1);
							unk_0x88B0F0DC270164B7(&iLocal_859, iVar0);
						}
					}
					if (!func_44(unk_0x9259DE19D910276C(iVar1), 1))
					{
						if (unk_0x08BA6DD398CA197C(iLocal_859, iVar0))
						{
							unk_0xE39A6F479496C24E(iVar1, 0);
							unk_0x09C86C0C5CA26B1E(&iLocal_859, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x4745637EEB85132D(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (unk_0x3F3C7C3B52DD0ECA(iVar1))
			{
				iVar2 = unk_0x21F191D9AFF98B5E(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_602(iParam0, iVar2))
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

bool func_602(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x39FEE545B315414E(iParam0, 0) || !unk_0x39FEE545B315414E(iParam1, 0))
	{
		return 0;
	}
	return unk_0xF8DB47D339B8B953(iParam0, 0) == unk_0xF8DB47D339B8B953(iParam1, 0);
}

void func_603()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x81C85E54237F8A2E(iLocal_863);
	iVar2 = func_34(unk_0x0C1D3C552325765B());
	if (unk_0xCB129F9A01D14082(iVar1))
	{
		if (unk_0x3F3C7C3B52DD0ECA(iVar1))
		{
			iVar0 = unk_0x9259DE19D910276C(iVar1);
			if (iLocal_861 > -1)
			{
				if (func_44(unk_0x81C7A2950EF11C8A(iLocal_861), 1))
				{
					if (func_557(9))
					{
						if (iVar0 != unk_0xA00C21A2AE68AB7B())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!unk_0x08BA6DD398CA197C(iLocal_862, iLocal_863))
										{
											func_70(iVar1, 432, 1);
											func_65(iVar1, func_69(iLocal_881), 1);
											unk_0x88B0F0DC270164B7(&iLocal_862, iLocal_863);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0x08BA6DD398CA197C(iLocal_862, iLocal_863))
		{
			func_70(iVar1, 432, 0);
			func_65(iVar1, func_69(iLocal_881), 0);
			unk_0x09C86C0C5CA26B1E(&iLocal_862, iLocal_863);
		}
	}
	iLocal_863++;
	if (iLocal_863 >= 32)
	{
		iLocal_863 = 0;
	}
}

void func_604()
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
		unk_0x09C86C0C5CA26B1E(&uLocal_855, iVar1);
		unk_0x09C86C0C5CA26B1E(&uLocal_857, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		Local_107[iVar0 /*20*/] = func_605();
		Local_107[iVar0 /*20*/].f_1 = -1;
		unk_0x09C86C0C5CA26B1E(&uLocal_856, iVar0);
		Local_107[iVar0 /*20*/].f_2 = { Var4 };
		Local_107[iVar0 /*20*/].f_18 = 0;
		Local_107[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar20 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(iVar0))
		{
			Local_107[iVar0 /*20*/] = iVar0;
			unk_0x88B0F0DC270164B7(&uLocal_856, iVar0);
			iVar2 = unk_0xF3B8A064D228878B(Local_107[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_702(iVar2, 0, 1))
			{
				iVar20++;
				Local_748[iVar1 /*3*/] = iVar2;
				Local_107[iVar0 /*20*/].f_1 = iVar1;
				Local_748[iVar1 /*3*/].f_1 = iVar0;
				Local_748[iVar1 /*3*/].f_2 = unk_0x21F191D9AFF98B5E(iVar2);
				StringCopy(&(Local_107[iVar0 /*20*/].f_2), unk_0xCF66111B26743875(iVar2), 64);
				unk_0x88B0F0DC270164B7(&uLocal_855, iVar1);
				if (unk_0x912AD5A10E7633F0(Local_748[iVar1 /*3*/].f_2, 0))
				{
					unk_0x88B0F0DC270164B7(&uLocal_857, iVar1);
				}
				if (func_45(Local_748[iVar1 /*3*/]))
				{
					Local_107[iVar0 /*20*/].f_18 = 1;
				}
				else if (func_94(Local_748[iVar1 /*3*/], 0))
				{
					Local_107[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_861 == iVar0)
				{
					if (unk_0x39FEE545B315414E(Local_748[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_107[iVar0 /*20*/].f_18)
				{
					if (!unk_0x08BA6DD398CA197C(uLocal_857, iVar1) && !unk_0x08BA6DD398CA197C(iLocal_857, unk_0x0C1D3C552325765B()))
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

int func_605()
{
	return -1;
}

void func_606()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iLocal_861 = -1;
	if (unk_0x08BA6DD398CA197C(uLocal_855, unk_0x0C1D3C552325765B()))
	{
		if (unk_0x08BA6DD398CA197C(uLocal_856, unk_0x848AF823A8EA3C62()))
		{
			if (!func_227(unk_0x0C1D3C552325765B()))
			{
				iLocal_861 = unk_0x848AF823A8EA3C62();
			}
			else if (func_225() && !func_609())
			{
				uVar0 = func_607();
				if (unk_0x54F0AEFB11EA090A(uVar0))
				{
					iVar1 = unk_0xA43666ACD375E339(iVar0);
					if (unk_0x3F3C7C3B52DD0ECA(iVar1))
					{
						iVar2 = unk_0x9259DE19D910276C(iVar1);
						iLocal_861 = iVar2;
					}
				}
			}
		}
	}
}

var func_607()
{
	if (unk_0xD3FACCDA4D66AEAD(func_608()))
	{
		return func_608();
	}
	return func_224();
}

var func_608()
{
	return Global_2359301.f_3;
}

bool func_609()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 11);
}

int func_610()
{
	bool bVar0;
	var uVar1;
	
	func_615(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_614())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_613())
	{
		return 1;
	}
	if (func_612(157))
	{
		if (!func_611())
		{
			return 1;
		}
	}
	if (func_612(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_67() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_67()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_611()
{
	return Global_2442442.f_576;
}

int func_612(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_613()
{
	return Global_2451777;
}

bool func_614()
{
	return Global_2442442.f_571;
}

void func_615(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_616(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_616(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_702(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_617(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_617(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_618()
{
	if (func_619(1))
	{
		return 1;
	}
	if (Global_2482149.f_4698.f_18)
	{
		Global_2482149.f_4698.f_18 = 0;
		return 1;
	}
	if (func_84() == func_29() || !func_702(func_84(), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_619(bool bParam0)
{
	bool bVar0;
	
	if (!func_143(1))
	{
		bVar0 = false;
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 != func_29())
		{
			if (func_702(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, 0, 1))
			{
				if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 4 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_620(func_87(unk_0x0C1D3C552325765B())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_201(31);
				if (func_90(func_87(unk_0x0C1D3C552325765B())))
				{
					func_201(83);
				}
				if (unk_0xCB129F9A01D14082(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
				{
					Global_1613160 = func_209(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, -2, 0, 0);
					if (!func_45(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
					{
						func_201(90);
					}
				}
				else
				{
					Global_1613160 = 1;
				}
				Global_1613144 = { Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_620(int iParam0)
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
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
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
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_621()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_622()
{
	var uVar0;
	int iVar1;
	
	if (!func_672(&uLocal_100))
	{
		unk_0xB49DAD10DC051295("BIKER_MP_MUSIC_STOP");
	}
	unk_0x13F1FCB111B820B0(false);
	func_420(&uLocal_100);
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()) == uLocal_876[0] || unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()) == uLocal_876[1])
		{
			unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), iLocal_879);
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_44(unk_0xA00C21A2AE68AB7B(), 9))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			func_74(9);
		}
	}
	func_51();
	Global_2482149.f_259 = 0;
	func_670(Global_1750569, -1, -1, -1, -1);
	func_626(1, 0);
	func_625();
	func_429();
	func_61();
	if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
	{
		uVar0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
		iVar1 = unk_0x705BC1BB91F530B5(uVar0);
		if (func_424(iVar1))
		{
			unk_0x30026A8ED83B403A(iVar0, 0);
		}
	}
	func_477(0);
	func_624();
	func_623();
	unk_0x78C587487CD40B92();
}

void func_623()
{
	unk_0x17BC7AF21106B65E(uLocal_876[0]);
	unk_0x17BC7AF21106B65E(uLocal_876[1]);
}

void func_624()
{
	if (Global_1748041)
	{
		if (unk_0x08BA6DD398CA197C(Global_1748042, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 1))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 1);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 5))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 5);
		}
		if (unk_0x7B0208FFAEF67EF9(-355737150))
		{
			unk_0x6A7EBBBF8B647A25(-355737150, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-580979506))
		{
			unk_0x6A7EBBBF8B647A25(-580979506, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1426452475))
		{
			unk_0x6A7EBBBF8B647A25(-1426452475, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(745417724))
		{
			unk_0x6A7EBBBF8B647A25(745417724, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1305304906))
		{
			unk_0x6A7EBBBF8B647A25(-1305304906, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1543175077))
		{
			unk_0x6A7EBBBF8B647A25(-1543175077, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-811770997))
		{
			unk_0x6A7EBBBF8B647A25(-811770997, 1, 0, 0);
		}
		Global_1748042 = 0;
	}
	Global_1748041 = 0;
}

void func_625()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573418 = { Var0 };
	Global_1573418.f_13 = func_29();
	if (unk_0x08BA6DD398CA197C(Global_1572926, 3))
	{
		unk_0x09C86C0C5CA26B1E(&Global_1572926, 3);
	}
}

void func_626(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1332731.f_1.f_108 != 0)
	{
		Global_1332731.f_1.f_108 = 0;
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 167 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 168)
	{
		func_668();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 4);
	}
	if ((func_141() && iParam1 != 0) && Global_262145.f_14857)
	{
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 190 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 192)
		{
			func_653(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 164 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 208)
	{
		unk_0x806DACE5511E6771(3, 1);
		unk_0x806DACE5511E6771(5, 1);
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = -1;
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_112(unk_0x0C1D3C552325765B()))
		{
			func_543(0);
		}
	}
	else if (func_651(unk_0x0C1D3C552325765B()) != -1)
	{
		func_556(-1);
	}
	func_650(func_29());
	if (func_197(16))
	{
		func_649(16);
	}
	func_645(0);
	func_552(-1);
	func_625();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_643(iVar0);
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
	{
		unk_0xACD6D334FD769B0C(1f);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 5);
	}
	iVar1 = func_98();
	if ((func_80(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_642(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_125(iVar1))
	{
		func_638(-1, 1);
	}
	else if (func_97(iVar1) || func_637(iVar1))
	{
	}
	else
	{
		func_638(-1, 1);
	}
	func_578(19);
	func_578(20);
	func_578(21);
	func_578(22);
	func_578(27);
	func_649(3);
	func_649(4);
	func_649(7);
	func_636();
	if (func_107(unk_0x0C1D3C552325765B()))
	{
		func_635(0);
	}
	func_578(29);
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_29();
	if (Global_2482149.f_4698.f_18 != 0)
	{
		Global_2482149.f_4698.f_18 = 0;
	}
	if (bParam0)
	{
		func_628();
	}
	if (!func_112(unk_0x0C1D3C552325765B()))
	{
		func_627();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
	}
}

void func_627()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

void func_628()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_633();
	func_629(1, 1);
	func_52();
}

void func_629(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_632();
	}
	func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_631(0);
	func_630();
}

void func_630()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_631(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_632()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_633()
{
	func_634();
	Global_2404993.f_1813 = 0;
}

void func_634()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_635(bool bParam0)
{
	if (bParam0)
	{
		if (!func_99(unk_0x0C1D3C552325765B(), 9))
		{
			if (func_105(unk_0x0C1D3C552325765B()) != 0)
			{
				func_114(9);
			}
		}
	}
	else if (func_99(unk_0x0C1D3C552325765B(), 9))
	{
		func_578(9);
	}
}

void func_636()
{
	if (func_476(unk_0x0C1D3C552325765B()))
	{
		func_578(25);
	}
}

int func_637(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_638(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_98();
	}
	if (iParam0 > 0)
	{
		if (func_145() != func_29())
		{
			if (func_641(unk_0x0C1D3C552325765B()) == unk_0x0C1D3C552325765B())
			{
				Global_2471291.f_77[func_640(iParam0)] = 1;
			}
		}
		iVar0 = func_640(159);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(157);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(148);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(164);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(142);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(152);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(166);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(170);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(173);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(179);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(200);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(201);
		if (func_639(iVar0, Global_262145.f_11038, bParam1))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(182);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(183);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(185);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(186);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(180);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(195);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(197);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(198);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(207);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(208);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(209);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_639(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_99(unk_0x0C1D3C552325765B(), 19) && !func_99(unk_0x0C1D3C552325765B(), 20)) && !func_99(unk_0x0C1D3C552325765B(), 9))
		{
			return 0;
		}
	}
	if (Global_2471291.f_77[iParam0] == 1 && func_5(&(Global_2471291[iParam0 /*2*/])))
	{
		if (func_22(&(Global_2471291[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2471291.f_77[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		case 179:
			return 17;
		
		case 189:
			return 18;
		
		case 193:
			return 19;
		
		case 194:
			return 20;
		
		case 199:
			return 21;
		
		case 201:
			return 22;
		
		case 200:
			return 23;
		
		case 205:
			return 24;
		
		case 210:
			return 25;
		
		case 182:
			return 26;
		
		case 183:
			return 27;
		
		case 185:
			return 28;
		
		case 186:
			return 29;
		
		case 180:
			return 30;
		
		case 195:
			return 31;
		
		case 197:
			return 32;
		
		case 198:
			return 33;
		
		case 207:
			return 34;
		
		case 208:
			return 35;
		
		case 209:
			return 36;
		
		case 211:
			return 37;
		
		default:
	}
	return -1;
}

int func_641(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_34;
}

void func_642(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_98();
	}
	if (iParam0 > 0)
	{
		if (func_145() != func_29())
		{
			Global_2471291.f_77[func_640(iParam0)] = 1;
		}
		iVar0 = func_640(155);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(163);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(160);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(153);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(162);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(154);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(171);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(172);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(199);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(194);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(193);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(210);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(205);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(189);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_640(211);
		if (func_639(iVar0, Global_262145.f_11039, 0))
		{
			func_7(&(Global_2471291[iVar0 /*2*/]));
			func_4(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_643(int iParam0)
{
	if (!func_11(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/], func_644(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/] = { func_644() };
	}
	if (!func_11(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/], func_644(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/] = { func_644() };
	}
}

Vector3 func_644()
{
	struct<3> Var0;
	
	return Var0;
}

void func_645(bool bParam0)
{
	if (bParam0)
	{
		if (!func_648(unk_0x0C1D3C552325765B(), 10))
		{
			func_647(10);
		}
	}
	else if (func_648(unk_0x0C1D3C552325765B(), 10))
	{
		func_646(10);
	}
}

void func_646(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

void func_647(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

bool func_648(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

void func_649(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_22), iParam0);
}

void func_650(int iParam0)
{
	if (func_41(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x0C1D3C552325765B() != iParam0)
		{
			if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 != iParam0)
			{
				Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_651(int iParam0)
{
	if (func_652(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_31;
	}
	return -1;
}

int func_652(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_31 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_653(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_241(iParam0, iParam1) && func_667(iParam0, iParam1))
	{
		iVar0 = func_240(iParam0, iParam1);
		func_657(iVar0);
		func_654(iVar0, 1);
	}
}

void func_654(int iParam0, int iParam1)
{
	func_655(func_656(iParam0), iParam1, -1, 1);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_90[iParam0 /*11*/].f_6 = iParam1;
}

int func_655(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_656(int iParam0)
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
		
		default:
	}
	return 7628;
}

void func_657(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_666(unk_0x0C1D3C552325765B(), iParam0);
	Global_2471285[iParam0] = 0;
	if (func_662(func_665(iParam0), -1, -1))
	{
		iVar0 = func_661(iVar1);
		iVar2 = func_529(unk_0x0C1D3C552325765B(), iVar1);
		iVar3 = func_660(iVar1);
		iVar4 = func_661(iVar1);
		fVar5 = (unk_0xBBDA792448DB5A89(iVar4) / unk_0xBBDA792448DB5A89(iVar3));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar5)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_2471285[iParam0] = iVar0;
	}
	else
	{
		iVar0 = (func_661(iVar1) / func_659(unk_0x0C1D3C552325765B(), iVar1) + 1);
	}
	func_658(unk_0x0C1D3C552325765B(), iVar1, iVar0);
}

void func_658(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_242(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

int func_659(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_242(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_660(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_243(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14828;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14833;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14827;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14832;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14826;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14831;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14824;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14829;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14825;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14830;
			}
			break;
	}
	return uVar0;
}

int func_661(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_243(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14809;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14818);
			}
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14823);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14810;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14817);
			}
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14822);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14811;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14816);
			}
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14821);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14812;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14814);
			}
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14819);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14813;
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14815);
			}
			if (func_239(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14820);
			}
			break;
	}
	return iVar0;
}

int func_662(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_664(iParam0, iParam1);
	uVar2 = func_663(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_663(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_664(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_665(int iParam0)
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
		
		default:
	}
	return 9416;
}

int func_666(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_242(Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/]))
	{
		uVar0 = Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/];
	}
	return uVar0;
}

int func_667(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_241(iParam0, iParam1))
	{
		iVar0 = func_240(iParam0, iParam1);
		if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_4 > 0 && Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_668()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 28);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 29);
	func_669(24);
}

void func_669(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

void func_670(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			unk_0x5412E12E300E7B1F(&Var1);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1750569.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			unk_0xBDBE581AB3ED369F(&Var16);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1750569.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			unk_0xDEE1F8B6F6CF0E82(&Var35);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1750569.f_14;
			Var54.f_15 = iParam14;
			unk_0x64A0E841D16CDC60(&Var54);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1750569.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			unk_0x4D81466A556D3ED2(&Var70);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1750569.f_14;
			unk_0x0CA6269D7C162713(&Var87);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (unk_0xBBDA792448DB5A89(iParam14) / unk_0xBBDA792448DB5A89(iParam15));
			Var102.f_16 = iParam16;
			unk_0xFED0C2BC1661E10F(&Var102);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1750569.f_14;
			unk_0xD725C18B2EEF5C1E(&Var119);
		}
	}
	func_671();
}

void func_671()
{
	struct<18> Var0;
	
	Global_1750569 = { Var0 };
}

bool func_672(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 0);
}

void func_673(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_557(0))
	{
		uVar1 = func_684(func_25(), bParam0, bVar0, bParam1);
		Global_1750569.f_2 = Local_921.f_33;
		Global_1750569.f_3 = Local_921.f_34;
		func_674(bParam0, uVar1, 0, 0, -1, -1, -1, -1);
		func_534(0);
	}
}

void func_674(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_87(unk_0x0C1D3C552325765B());
	if (func_90(iVar0))
	{
		Global_1750587.f_2 = func_683();
		Global_1750587.f_3 = func_682();
		Global_1750587.f_50 = iParam4;
		Global_1750587.f_51 = iParam5;
		Global_1750587.f_10 = unk_0x39E54E7BC7452169();
		Global_1750587.f_20 = (Global_1750587.f_10 - Global_1750587.f_9);
		Global_1750587.f_12 = uParam1;
		Global_1750587.f_19 = func_678(iVar0, bParam0, func_681(bParam3));
		if (bParam0)
		{
			Global_1750587.f_11 = 1;
		}
		else
		{
			Global_1750587.f_11 = 0;
		}
		if ((func_107(unk_0x0C1D3C552325765B()) || func_106(unk_0x0C1D3C552325765B())) || func_110(unk_0x0C1D3C552325765B()))
		{
			Global_1750587.f_8 = 1;
		}
		else
		{
			Global_1750587.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1750587.f_43 = 0;
			Global_1750587.f_45 = func_529(func_145(), iParam2);
			Global_1750587.f_47 = iParam7;
			Global_1750587.f_46 = iParam6;
			Global_1750587.f_52 = func_677(func_145(), iParam2);
		}
		func_675();
	}
	else
	{
		Global_1750569.f_6 = unk_0x39E54E7BC7452169();
		if (bParam0)
		{
			Global_1750569.f_7 = 1;
		}
		else
		{
			Global_1750569.f_7 = 0;
		}
		Global_1750569.f_8 = uParam1;
		if (Global_1750569.f_4 == 0)
		{
			if ((func_107(unk_0x0C1D3C552325765B()) || func_106(unk_0x0C1D3C552325765B())) || func_110(unk_0x0C1D3C552325765B()))
			{
				Global_1750569.f_4 = 1;
			}
		}
	}
}

void func_675()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_FIVESTAR"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RACE_P2P"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "AM_PENNED_IN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BAD_DEAL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SAFECRACKER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SHUTTLE"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1750587);
	func_676();
}

void func_676()
{
	struct<53> Var0;
	
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
	Global_1750587 = { Var0 };
	Global_1750587.f_29 = 0;
	Global_1750587.f_30 = 0;
	Global_1750587.f_17 = 0;
}

int func_677(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_239(iParam0, iParam1, 2);
	bVar1 = func_239(iParam0, iParam1, 1);
	bVar2 = func_239(iParam0, iParam1, 0);
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

int func_678(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_125(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 19;
	}
	else if (func_533(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_81(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15544;
			iVar1 = 20;
		}
	}
	else if (func_90(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_532(func_145()), func_531(func_145()), func_683(), func_682(), iVar1, iVar0);
	}
	func_680(iVar0);
	func_679(iVar0);
	return iVar0;
}

void func_679(int iParam0)
{
	int iVar0;
	
	iVar0 = func_123(3936, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_274 = iVar0;
	func_121(3936, iVar0, -1, 1, 0);
}

void func_680(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	Global_1614576[iVar0 /*324*/].f_10.f_273 = (Global_1614576[iVar0 /*324*/].f_10.f_273 + iParam0);
	if (Global_1614576[iVar0 /*324*/].f_10.f_273 < -9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
	else if (Global_1614576[iVar0 /*324*/].f_10.f_273 > 9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
}

int func_681(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_107(unk_0x0C1D3C552325765B()) || func_110(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_682()
{
	if (Global_1750569.f_3 != 0)
	{
		return Global_1750569.f_3;
	}
	return -1;
}

int func_683()
{
	if (Global_1750569.f_2 != 0)
	{
		return Global_1750569.f_2;
	}
	return -1;
}

int func_684(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_685(struct<20> Param0)
{
	func_700(func_701(Param0.f_0), Param0);
	func_697(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_921, 35);
	unk_0xCCA45C9E00D2BC01(&Local_956, 193);
	unk_0x401559486BCA4D9B(0);
	func_688(0, 0);
	func_686();
	return 1;
}

void func_686()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xD8C3303D0A49D05B("relJoust0", &(uLocal_876[0]));
	unk_0xD8C3303D0A49D05B("relJoust1", &(uLocal_876[1]));
	iVar0 = unk_0xD28ED8D0CD006D1E(unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar1], uLocal_876[iVar2]);
			unk_0xFDDE2C1A05E64390(1, uLocal_876[iVar2], Global_1574240[iVar1]);
			unk_0xFDDE2C1A05E64390(iVar0, uLocal_876[iVar2], joaat("COP"));
			unk_0xFDDE2C1A05E64390(iVar0, joaat("COP"), uLocal_876[iVar2]);
			unk_0xFDDE2C1A05E64390(1, uLocal_876[iVar2], Global_1574284[5]);
			unk_0xFDDE2C1A05E64390(1, Global_1574284[5], uLocal_876[iVar2]);
			unk_0xFDDE2C1A05E64390(1, uLocal_876[iVar2], Global_1574273);
			unk_0xFDDE2C1A05E64390(1, Global_1574273, uLocal_876[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	unk_0xFDDE2C1A05E64390(5, uLocal_876[0], uLocal_876[1]);
	unk_0xFDDE2C1A05E64390(5, uLocal_876[1], uLocal_876[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		unk_0xFDDE2C1A05E64390(5, 2017343592, uLocal_876[iVar2]);
		func_687(&(uLocal_876[iVar2]));
		iVar2++;
	}
}

void func_687(var uParam0)
{
	unk_0xFDDE2C1A05E64390(1, -1865950624, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, -1865950624);
	unk_0xFDDE2C1A05E64390(1, 296331235, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, 296331235);
	unk_0xFDDE2C1A05E64390(1, 1166638144, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, 1166638144);
	unk_0xFDDE2C1A05E64390(1, 2037579709, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, 2037579709);
	unk_0xFDDE2C1A05E64390(1, 2017343592, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, 2017343592);
	unk_0xFDDE2C1A05E64390(1, -1821475077, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, -1821475077);
	unk_0xFDDE2C1A05E64390(1, 1782292358, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, 1782292358);
	unk_0xFDDE2C1A05E64390(1, -1033021910, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, -1033021910);
	unk_0xFDDE2C1A05E64390(1, -1285976420, *uParam0);
	unk_0xFDDE2C1A05E64390(1, *uParam0, -1285976420);
}

void func_688(int iParam0, int iParam1)
{
	func_696();
	func_693(1);
	if ((iParam0 != 0 && unk_0xCB129F9A01D14082(iParam1)) && func_692(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x88B0F0DC270164B7(&Global_1750555, 0);
				break;
			}
	}
	if (!func_196() && !func_234(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_580())
		{
			func_691(3);
		}
		func_691(4);
	}
	if (func_143(0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_145();
	}
	if (func_90(iParam0))
	{
		func_676();
		Global_1750587.f_18 = func_690(func_84());
	}
	func_689();
}

void func_689()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1332731.f_527[iVar0 /*49*/].f_1 = func_29();
		Global_1332731.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_690(int iParam0)
{
	if (func_234(iParam0, 1))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_235;
	}
	return -1;
}

void func_691(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_22), iParam0);
}

int func_692(int iParam0, bool bParam1)
{
	return func_232(unk_0x0C1D3C552325765B(), iParam0, bParam1);
}

void func_693(bool bParam0)
{
	int iVar0;
	
	func_669(33);
	func_669(34);
	func_669(35);
	func_669(36);
	func_669(37);
	func_669(38);
	func_669(39);
	func_669(40);
	func_669(43);
	func_669(41);
	func_669(54);
	func_669(42);
	func_669(47);
	func_695(23);
	func_695(24);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_694(3))
	{
		func_695(3);
	}
	else if (func_694(4))
	{
		func_695(4);
	}
	else if (func_694(5))
	{
		func_695(5);
	}
	else if (func_694(6))
	{
		func_695(6);
	}
	else if (func_694(7))
	{
		func_695(7);
	}
	else if (((((((((((((((((func_694(0) || func_694(1)) || func_694(2)) || func_694(8)) || func_694(9)) || func_694(10)) || func_694(11)) || func_694(12)) || func_694(13)) || func_694(14)) || func_694(15)) || func_694(16)) || func_694(17)) || func_694(18)) || func_694(19)) || func_694(20)) || func_694(21)) || func_694(22))
	{
		func_695(8);
		func_695(0);
		func_695(1);
		func_695(2);
		func_695(9);
		func_695(10);
		func_695(11);
		func_695(12);
		func_695(13);
		func_695(14);
		func_695(15);
		func_695(16);
		func_695(17);
		func_695(18);
		func_695(19);
		func_695(20);
		func_695(21);
		func_695(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_694(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_11[iVar0], iVar1);
}

void func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_11[iVar0]), iVar1);
}

void func_696()
{
	struct<14> Var0;
	
	Global_1750569 = { Var0 };
	Global_1750569.f_14 = 0;
	Global_1750569.f_15 = 0;
}

int func_697(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_699();
			}
			else
			{
				return 0;
			}
		}
		if (!func_698())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_699();
					}
					else
					{
						return 0;
					}
				}
				if (func_614())
				{
					if (!bParam2)
					{
						func_699();
					}
					else
					{
						return 0;
					}
				}
				if (func_612(155))
				{
					if (!bParam2)
					{
						func_699();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_699();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_699();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_699();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_698()
{
	return Global_1315206;
}

void func_699()
{
	unk_0x78C587487CD40B92();
}

void func_700(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_699();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_701(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
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
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

int func_702(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

