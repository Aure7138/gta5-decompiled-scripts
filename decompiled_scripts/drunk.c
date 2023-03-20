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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<5> Local_42 = { 0, 0, 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	char* sLocal_53 = NULL;
	struct<5> Local_54 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_47 = -1;
	iLocal_48 = -1;
	fLocal_51 = 1.7f;
	fLocal_52 = 0f;
	sLocal_53 = "";
	iLocal_62 = -1;
	if (unk_0x7547D7CF93115D6D(2))
	{
		func_130();
	}
	Local_42 = { ScriptParam_0 };
	func_129();
	func_128();
	func_123(iLocal_47, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_122();
	func_114();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_113(iLocal_47);
		func_112();
		func_110();
		func_103();
		func_123(iLocal_47, 0, 0);
		func_129();
		func_5();
		if (unk_0xD95428C8AA1DBBF2() && !unk_0x0971F0C5992C6780())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_4() || func_3())
	{
		func_2();
	}
}

void func_2()
{
	Global_2427935.f_627 = 1;
}

var func_3()
{
	return Global_2427935.f_606;
}

bool func_4()
{
	return unk_0x61D8FEAF64881CDA(Global_2427935.f_2, 11);
}

void func_5()
{
	bool bVar0;
	
	if (unk_0xE5D56342B0FF1D0D(Local_42.f_1))
	{
		func_130();
	}
	if (bLocal_49)
	{
		if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			func_130();
		}
	}
	func_102();
	bVar0 = true;
	switch (Local_59.f_0)
	{
		case 4:
			func_101();
			return;
		
		case 5:
			func_98();
			return;
		
		case 6:
			func_96();
			return;
		
		case 7:
			func_95();
			return;
		
		case 8:
			func_94();
			return;
		
		case 9:
			func_92();
			return;
		
		case 10:
			func_91();
			func_88();
			func_87();
			return;
		
		case 11:
			func_86();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_59.f_0 == 12)
	{
		return;
	}
	switch (Local_59.f_1)
	{
		case 1:
			if (!func_85())
			{
				func_84();
				func_88();
			}
			break;
		
		case 2:
			func_82();
			break;
		
		case 12:
			func_69();
			break;
		
		case 3:
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()
{
	char* sVar0;
	struct<53> Var1;
	int iVar59;
	
	unk_0xFFA7CDD296D07129(Local_42.f_1, 3000, 3500, 0, 1, 1, 0);
	if (!unk_0xC2C705ED6124A7C2())
	{
		unk_0x7C69A4879766A867(2500);
		while (unk_0xF468278E75CA2341())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		func_63(unk_0xAF65E5A58BE87D95(), 0, 57344, 1);
		Global_2404546.f_1371 = 1;
		if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
		{
			Global_2404546.f_1372 = 1;
		}
		else
		{
			Global_2404546.f_1372 = 0;
		}
		func_61(1);
		func_130();
	}
	sVar0 = "";
	Var1.f_3 = 1064514355;
	Var1.f_30 = 1148829696;
	Var1.f_31 = 1148829696;
	Var1.f_52 = 1148829696;
	iVar59 = 7;
	switch (func_56())
	{
		case 0:
			if (func_54() != 2)
			{
				iVar59 = 0;
			}
			else
			{
				iVar59 = 1;
			}
			break;
		
		case 1:
			if (!func_53(126))
			{
				iVar59 = 2;
			}
			else
			{
				iVar59 = 3;
			}
			break;
		
		case 2:
			if (!func_52(4))
			{
				if (func_53(58))
				{
					iVar59 = 4;
				}
				if (func_53(59))
				{
					iVar59 = 5;
				}
				if (iVar59 == 7)
				{
					if (!func_51())
					{
						iVar59 = 4;
					}
					else
					{
						iVar59 = 5;
					}
				}
			}
			else
			{
				iVar59 = 6;
			}
			break;
	}
	switch (iVar59)
	{
		case 0:
			sVar0 = "DWC_MICHAEL_mansion";
			Var1.f_0 = "SAVEM_Default@";
			Var1.f_1 = "M_GetOut_R";
			Var1.f_2 = "M_GetOut_R_CAM";
			Var1.f_5 = { -814.181f, 181.1f, 75.74f };
			Var1.f_8 = { 0f, 0f, 21.1994f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar0 = "DWC_MICHAEL_trailer";
			Var1.f_0 = "SAVECountryside@";
			Var1.f_1 = "M_GetOut_countryside";
			Var1.f_2 = "M_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar0 = "DWC_FRANKLIN_city";
			Var1.f_0 = "SWITCH@FRANKLIN@BED";
			Var1.f_1 = "Sleep_GetUp_RubEyes";
			Var1.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var1.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var1.f_8 = { 0f, 0f, -179.653f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar0 = "DWC_FRANKLIN_hills";
			Var1.f_0 = "SAVEBighouse@";
			Var1.f_1 = "F_GetOut_r_bighouse";
			Var1.f_2 = "F_GetOut_r_bighouse_CAM";
			Var1.f_5 = { -1.049f, 524.283f, 170.064f };
			Var1.f_8 = { 0f, 0f, 24f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar0 = "DWC_TREVOR_trailer";
			Var1.f_0 = "SAVECountryside@";
			Var1.f_1 = "T_GetOut_countryside";
			Var1.f_2 = "T_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar0 = "DWC_TREVOR_beach";
			Var1.f_0 = "SAVEVeniceB@";
			Var1.f_1 = "T_GetOut_r_veniceB";
			Var1.f_2 = "T_GetOut_r_veniceB_CAM";
			Var1.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var1.f_8 = { 0f, 0f, 36.25f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar0 = "DWC_TREVOR_stripclub";
			Var1.f_0 = "SAVECouch@";
			Var1.f_1 = "T_GetOut_couch";
			Var1.f_2 = "T_GetOut_couch_CAM";
			Var1.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!unk_0xE5D56342B0FF1D0D(Local_42.f_1))
	{
		unk_0xF85858E5CBF4D9F0(Local_42.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_8(sVar0, &Var1, "");
	func_7(126, 1);
	func_130();
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_8(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	struct<3> Var186;
	struct<3> Var189;
	float fVar192;
	float fVar193;
	float fVar194;
	struct<3> Var195;
	var uVar198;
	float fVar199;
	float fVar200;
	struct<3> Var201;
	struct<3> Var204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	struct<3> Var211;
	var uVar214;
	float fVar215;
	float fVar216;
	struct<3> Var217;
	struct<3> Var220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), false, 0);
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 1);
	}
	unk_0x0AC2FF55967985A8(uParam1->f_5, 4500f);
	unk_0x52DD7CA48EBAB1F0(uParam1->f_5, 4500f);
	unk_0x4BCBC9058A5CECE1(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x479E7EEEBDEE245D(unk_0x507DA4994C3D8EBD(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x1757405122DE8566(1);
	unk_0x395C5D98343F0040(*uParam1);
	if (unk_0x8FA72E132AAFA62F(uParam1->f_16))
	{
	}
	else
	{
		unk_0x395C5D98343F0040(uParam1->f_16);
	}
	if (!unk_0xC2C705ED6124A7C2())
	{
		unk_0x7C69A4879766A867(0);
	}
	func_46(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xC2C705ED6124A7C2())
	{
		unk_0x7C69A4879766A867(0);
	}
	iVar1 = unk_0xF976C624234A4AA8() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0xF976C624234A4AA8())
	{
		bVar2 = true;
		unk_0x395C5D98343F0040(*uParam1);
		if (!unk_0xCE40391AB65FE305(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x8FA72E132AAFA62F(uParam1->f_16))
		{
			unk_0x395C5D98343F0040(uParam1->f_16);
			if (!unk_0xCE40391AB65FE305(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xC2C705ED6124A7C2())
		{
			unk_0x7C69A4879766A867(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_43();
	if (!func_42(uParam1->f_22, 0f, 0f, 0f))
	{
		unk_0xE0988F7BD7BD3889(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x407F91A831576A66(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x4BCBC9058A5CECE1(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x35667994C79745D2(unk_0xAF65E5A58BE87D95());
		unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
		unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
	}
	unk_0x479E7EEEBDEE245D(unk_0x507DA4994C3D8EBD(), false);
	unk_0x1757405122DE8566(0);
	unk_0x4BCBC9058A5CECE1(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x9611FE1B4A112F5F();
	unk_0x383F49040A255D78();
	func_40();
	while (func_39())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x8D4100BAA46EE198() && !unk_0xC17F446CF864854D())
	{
		unk_0x662E87A876F1069D(250);
	}
	unk_0x842A97A1C98339FF(1);
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		iVar4 = unk_0x1BEDF9ACAEAB15F8(uParam1->f_5, uParam1->f_8, 2);
		unk_0x15B365C4645F79B8(iVar4, 0);
		unk_0x36069312B76436F6(iVar4, 0);
		uVar5 = unk_0x07A7435490ED9AAB("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_37(unk_0x507DA4994C3D8EBD(), uParam1->f_18);
		unk_0x206610E40EE4D7D9(unk_0x507DA4994C3D8EBD(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x5CA3C0D266164A4D(unk_0x507DA4994C3D8EBD(), 1);
		unk_0x04F0AE7916719B90(unk_0xAF65E5A58BE87D95(), 1);
		iVar3 = unk_0xF06F46B83EF10D97(unk_0x507DA4994C3D8EBD(), 77);
		unk_0xE131FC34DA8AD63F(unk_0x507DA4994C3D8EBD(), 77, 1);
		unk_0xB754DFF4436CE5FF(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
		if (!unk_0x8FA72E132AAFA62F(uParam1->f_16) && !unk_0x8FA72E132AAFA62F(uParam1->f_17))
		{
			unk_0xEC0A546609840086(unk_0x507DA4994C3D8EBD(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x8FA72E132AAFA62F(sParam2))
		{
			func_36(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x8FA72E132AAFA62F(&(uParam1->f_11)))
	{
		iVar174 = func_56();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_35(&uVar9, iVar175, unk_0x507DA4994C3D8EBD(), sVar176, 0, 1);
	}
	if (unk_0x1955A5B9B65FEEBD(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x1955A5B9B65FEEBD(iVar4) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (!bVar8)
			{
				if (!unk_0xC2C705ED6124A7C2())
				{
					if (!unk_0x8FA72E132AAFA62F(uParam1->f_26))
					{
						unk_0x8EEEED91D5DD768C(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x8FA72E132AAFA62F(uParam1->f_27))
					{
						if (!unk_0x8FA72E132AAFA62F(uParam1->f_28))
						{
							unk_0x84795EA8F54230A1(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x8FA72E132AAFA62F(uParam1->f_29))
						{
							unk_0x84795EA8F54230A1(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x0DCB93E7DEB1CC3F();
			unk_0xD9E638F7F8DCAA60(18);
			unk_0xADB29B38DD8FAD3C();
			func_31();
			iVar179 = unk_0xF976C624234A4AA8();
			if (iVar179 >= (Global_35460 - 500))
			{
				func_30(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x6385FE4ECBDF05D2(iVar4);
			if (!unk_0x8FA72E132AAFA62F(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_18(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (unk_0x89D7DDF7D591D231(unk_0x507DA4994C3D8EBD(), unk_0x3BA42EA02A10243D(sVar177)))
			{
				iVar183 = (unk_0x995E5B5A14F2E170(2, 195) - 128);
				iVar184 = (unk_0x995E5B5A14F2E170(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (unk_0x25A5D05A7AF9563B() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0xCAED01C16CFFE43C() };
						Var189 = { unk_0xC5B1818639240D24(unk_0x507DA4994C3D8EBD(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x8FE221761D524CFE(Var186, Var189, 1);
						fVar185 = func_17(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_16(&(uParam1->f_34), unk_0x507DA4994C3D8EBD(), func_56(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_15(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xF976C624234A4AA8();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x15625E41D8D33E1D(2) };
							uVar198 = unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD());
							fVar199 = Var195.f_2;
							fVar200 = uVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						unk_0x77CB1AAAF31275BE(fVar193, 1065353216);
						unk_0xBE5E0E5A454F4D6A(fVar194);
						unk_0xB27C8D61506D9E62(fVar193);
						unk_0xA9BF832396751ADB(fVar194);
						Var201 = { unk_0xCAED01C16CFFE43C() };
						Var204 = { unk_0xD51D48ADA03E62C7() };
						fVar207 = unk_0x8FE221761D524CFE(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x8C3EC449F7948B8A();
						if (func_12(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x89D7DDF7D591D231(unk_0x507DA4994C3D8EBD(), unk_0x3BA42EA02A10243D(sVar178)) || iVar182)
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x832DBDBEA29906F5(unk_0x507DA4994C3D8EBD(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x28D21A983751927B(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x832DBDBEA29906F5(unk_0x507DA4994C3D8EBD(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x2D7FE4B6E3F31F41(unk_0xAF65E5A58BE87D95(), 1f, 500, 0, 1, 0);
							if (unk_0x25A5D05A7AF9563B() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x15625E41D8D33E1D(2) };
									uVar214 = unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD());
									fVar215 = Var211.f_2;
									fVar216 = uVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								unk_0x77CB1AAAF31275BE(fVar209, 1065353216);
								unk_0xBE5E0E5A454F4D6A(fVar210);
								Var217 = { unk_0xCAED01C16CFFE43C() };
								Var220 = { unk_0xD51D48ADA03E62C7() };
								fVar223 = unk_0x8FE221761D524CFE(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x92931D2249E68921(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x1955A5B9B65FEEBD(iVar4))
					{
						unk_0xDA08F511A13A14A2(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_42(uParam1->f_22, 0f, 0f, 0f))
	{
		unk_0x9A76FCB3181D8AAB(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), true, 0);
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
	}
	bVar225 = unk_0xE6898C981186359C();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x8C3EC449F7948B8A();
		if (!func_12(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while (bVar225 || bVar226)
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_11(1, 26, &iVar227);
			func_11(1, 79, &iVar227);
			func_11(1, 1, &iVar227);
			func_11(1, 2, &iVar227);
			func_11(0, 22, &iVar227);
			func_11(0, 36, &iVar227);
			func_11(0, 142, &iVar227);
			func_11(0, 141, &iVar227);
			func_11(0, 140, &iVar227);
			func_11(0, 263, &iVar227);
			func_11(0, 264, &iVar227);
			unk_0x4EDE34FBADD967A6(0);
			bVar225 = unk_0xE6898C981186359C();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x8C3EC449F7948B8A();
				if (!func_12(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x8FA72E132AAFA62F(uParam1->f_16))
	{
		unk_0xA878656BC39BBC51(uParam1->f_16);
	}
	unk_0xA878656BC39BBC51(*uParam1);
	unk_0x44151B6071157DDD(uVar5, 0);
	func_9(&(uParam1->f_34));
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xE131FC34DA8AD63F(unk_0x507DA4994C3D8EBD(), 77, iVar3);
		unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
	}
	sParam0 = sParam0;
}

void func_9(var uParam0)
{
	func_10(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_10(var uParam0)
{
	if (unk_0x17D71902CA06091B(uParam0->f_1))
	{
		unk_0x44151B6071157DDD(uParam0->f_1, 0);
	}
	if (unk_0x17D71902CA06091B(uParam0->f_2))
	{
		unk_0x44151B6071157DDD(uParam0->f_2, 0);
	}
	if (unk_0x17D71902CA06091B(uParam0->f_3))
	{
		unk_0x44151B6071157DDD(uParam0->f_3, 0);
	}
	if (unk_0x17D71902CA06091B(uParam0->f_4))
	{
		unk_0x44151B6071157DDD(uParam0->f_4, 0);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	unk_0x500F4CA776CEBD0A(iParam0, iParam1, 1);
	*iParam2++;
}

int func_12(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	var uVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_13();
			if (!unk_0xE5D56342B0FF1D0D(uParam0->f_5))
			{
				func_10(uParam0);
				Var0 = { unk_0xCAED01C16CFFE43C() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x903468970F24CA24(uParam0->f_5) * FtoV(unk_0x94B2D2AEAA1D886E()) };
				}
				Var3 = { unk_0xC9351EFF34BB33C0(uParam0->f_5, Var0) };
				Var6 = { unk_0x15625E41D8D33E1D(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0xAD9A5677421290F3(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0xBCB9DCF2C76D747C();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x2EA8060B4AF80E86(1775630800, 0);
				}
				uParam0->f_1 = unk_0x2EA8060B4AF80E86(26379945, 1);
				if (bParam1)
				{
					unk_0x04BEA87701970868(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xEEA9AFA5E9078090(uParam0->f_1, Var0);
				}
				unk_0x46AA97C6CB72D170(uParam0->f_1, Var6, 2);
				unk_0x435B97ECA622D5B0(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x2EA8060B4AF80E86(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x04BEA87701970868(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xEEA9AFA5E9078090(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x46AA97C6CB72D170(uParam0->f_2, Var6, 2);
				unk_0x435B97ECA622D5B0(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x2EA8060B4AF80E86(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x04BEA87701970868(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xEEA9AFA5E9078090(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x46AA97C6CB72D170(uParam0->f_4, Var6, 2);
					unk_0x435B97ECA622D5B0(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xEEE12718D946EB54(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xEEE12718D946EB54(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xEEE12718D946EB54(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x869DEED457FDB98D(uParam0->f_3, iParam6);
					unk_0x6F430D0F1783A56E(uParam0->f_3, 1);
				}
				else
				{
					unk_0xB09853C2B8C94A37(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xF976C624234A4AA8();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_13();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0xF976C624234A4AA8() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x8EEEED91D5DD768C("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x8EEEED91D5DD768C("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x8EEEED91D5DD768C("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x8EEEED91D5DD768C("CamPushInNeutral", 0, 0);
						}
						unk_0x84795EA8F54230A1(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xF976C624234A4AA8() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_10(uParam0);
					unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_13()
{
	unk_0x882182119EAE9ABF();
	func_14();
}

void func_14()
{
	Global_17098.f_134 = 1;
}

void func_15(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_16(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_17(float fParam0, float fParam1, float fParam2)
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

bool func_18(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_19(sParam2, iParam3, 0);
}

int func_19(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_28();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_26();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_24();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_23())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_22())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_21();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_20();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_28();
	}
	return 0;
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_21()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_22()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_23()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_24()
{
	if (func_25(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_56();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_25(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_28()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_30(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_31()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_34(0))
		{
			func_32(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

void func_32(int iParam0)
{
	if (Global_14551)
	{
		func_33(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_22())
	{
		Global_14393.f_1 = 3;
	}
}

void func_33(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_34(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_34(int iParam0)
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

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

void func_36(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

void func_37(int iParam0, var uParam1)
{
	if (func_38(uParam1, 1))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_38(uParam1, 2))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_38(uParam1, 4))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_38(uParam1, 8))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_38(uParam1, 16))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_38(uParam1, 32))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_38(uParam1, 64))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_38(uParam1, 128))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_38(uParam1, 256))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_38(uParam1, 512))
	{
		unk_0xC98F9602E69A0C17(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_38(uParam1, 0))
	{
	}
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_39()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

void func_40()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87122[iVar0 /*17*/] && !Global_87122[iVar0 /*17*/].f_1)
		{
			if (Global_87122[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87122[iVar0 /*17*/].f_5 != 88 && Global_87122[iVar0 /*17*/].f_5 != 89) && Global_87122[iVar0 /*17*/].f_5 != 92)
				{
					func_41(Global_87122[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84174[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84174[iParam0 /*2*/] = 0;
	}
}

bool func_42(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_43()
{
	func_44();
	func_61(1);
}

void func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_35756[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_123(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_35730[iVar2 /*5*/] == 0)
		{
			func_45(iVar2);
		}
		iVar2++;
	}
}

void func_45(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0x507DA4994C3D8EBD())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

int func_46(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		func_50(0);
		unk_0x4BCBC9058A5CECE1(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Param0, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), uParam3);
				unk_0x77CB1AAAF31275BE(0f, 1065353216);
				unk_0xBE5E0E5A454F4D6A(0f);
			}
		}
		unk_0xE24944560D6F19ED(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x4BCBC9058A5CECE1(Param0, 5000f, 1, 0, 0, 0);
		unk_0x2F36A13C15BE17D7(Param0, 5000f, 0);
		unk_0x0AC2FF55967985A8(Param0, 5000f);
		unk_0x52DD7CA48EBAB1F0(Param0, 5000f);
		func_49();
		func_48();
		unk_0xC1B1E9A034A63A62(0);
		func_50(1);
		if (!unk_0x9DBF5ADC61595373())
		{
			while (!unk_0xE24944560D6F19ED(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x1757405122DE8566(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x96D96D592BE19BEA())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x1757405122DE8566(0);
				if (unk_0x9DBF5ADC61595373())
				{
					unk_0x5DE91777B624B339();
				}
				return 0;
			}
		}
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x9DBF5ADC61595373())
				{
					unk_0x5DE91777B624B339();
				}
				unk_0x1757405122DE8566(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x9611FE1B4A112F5F();
				if (iParam5 == 1)
				{
					unk_0x383F49040A255D78();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0xFE4CD40B43ECEDD9();
			}
		}
		while ((!unk_0x66CA9B9689E10C56() && !func_47()) && unk_0x83666F9FB8FEBD4B() < 1500)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x83666F9FB8FEBD4B() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			unk_0xBC5E1C3D489E93FD(Param0, &(Param0.f_2));
			unk_0x4BCBC9058A5CECE1(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
			{
				if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
				{
					unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Param0, 1, 0, 0, 1);
					unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), uParam3);
				}
			}
		}
		unk_0x77CB1AAAF31275BE(0f, 1065353216);
		unk_0xBE5E0E5A454F4D6A(0f);
		func_50(0);
		return 1;
	}
	func_50(0);
	return 0;
}

bool func_47()
{
	return !Global_66960.f_553;
}

void func_48()
{
	Global_66960.f_553 = 1;
	Global_66960.f_554 = 0;
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_66960[iVar0] = 0;
		iVar0++;
	}
}

void func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_89784.f_20, 2))
			{
				unk_0x1757405122DE8566(1);
				unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 2);
			}
		}
		else if (unk_0x61D8FEAF64881CDA(Global_89784.f_20, 2))
		{
			unk_0x1757405122DE8566(0);
			unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 2);
		}
	}
}

int func_51()
{
	if (unk_0x61D8FEAF64881CDA(unk_0x4D3E68F73B727E49(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0)
{
	return unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iParam0], 0);
}

int func_53(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

int func_54()
{
	if (Global_32357[11] == 1)
	{
		return 4;
	}
	if (!func_55(21))
	{
		return 0;
	}
	if (!func_53(130))
	{
		return 1;
	}
	if (!func_53(131))
	{
		return 2;
	}
	if (!func_55(22))
	{
		return 1;
	}
	if (!func_55(49))
	{
		return 3;
	}
	if (!func_55(28))
	{
		return 1;
	}
	return 3;
}

int func_55(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

int func_56()
{
	func_57();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_57()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_60(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_59(unk_0x507DA4994C3D8EBD());
			if (func_58(iVar0) && (!func_25(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_58(Global_97173.f_1729.f_539.f_3213))
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

bool func_58(int iParam0)
{
	return iParam0 < 3;
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_60(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_60(int iParam0)
{
	if (func_58(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_61(bool bParam0)
{
	unk_0xB3A2E1E33B288962(0f);
	unk_0x6D88DBBBECD37E5A(0f);
	unk_0xF78764690DB8F559(0f);
	unk_0xB3BE5EAE7F48BADE(1);
	unk_0x6B5EA708EBD7C0EF(0f);
	unk_0xD6F8F4C71896F304(1);
	unk_0x039A3D11A21B19E6(0);
	if (unk_0xA2A45E58AC3DF6C5("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xAB5C0FE0C680BC7F("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x8FA72E132AAFA62F(&Global_35931))
	{
		if (unk_0xA2A45E58AC3DF6C5(&Global_35931))
		{
			unk_0xAB5C0FE0C680BC7F(&Global_35931);
		}
	}
	if (unk_0x17D71902CA06091B(Global_35920))
	{
		if (unk_0xFC044F5A8CA9782F(Global_35920))
		{
			unk_0xE2C04E90396EAF08(Global_35920, 0f);
			unk_0x60A59DBF922B3037(Global_35920, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xEF9CD83E2E2816E8() != -1 || unk_0x91796810B25FDA18() != -1)
		{
			unk_0x8611FA16C57B4195();
		}
		else if (unk_0xA4ADA92842355D33())
		{
			unk_0x8611FA16C57B4195();
		}
	}
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
	StringCopy(&Global_35931, "", 64);
	StringCopy(&Global_35947, "", 16);
	func_62();
}

void func_62()
{
	Global_35919 = 0;
	Global_35920 = 0;
	Global_35921 = 0;
	Global_35922 = 30000;
	Global_35923 = 0f;
	Global_35925 = 0f;
	Global_35924 = 0f;
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
}

void func_63(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (unk_0xBDB6BD580ED1F954())
		{
			unk_0x8311E913E07031CD(0);
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		uVar0 = iParam2;
		unk_0xFAAA53BBE1EEF174(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_67())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xB832D52B86777A35(iParam0) && unk_0x52A84D9C3A400EA8(iParam0))
		{
			iVar23 = unk_0x687D51F360787909(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xD95428C8AA1DBBF2())
				{
					unk_0x341B81CE859F7C97(1);
				}
				else
				{
					unk_0x07E0AE075425AA06(iVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0xD95428C8AA1DBBF2() && !bVar18)
					{
						unk_0x341B81CE859F7C97(0);
					}
					Global_2413868[iParam0 /*253*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_66(iVar23) && !unk_0xB9D0211AF48761E5(iVar23))
				{
					if (!bVar21)
					{
						unk_0xCC8C6873CFB069A4(iVar23, true, 0);
					}
				}
				if (!unk_0xDF75DAAACD32E49E(iVar23))
				{
					if (!bVar20)
					{
						unk_0x479E7EEEBDEE245D(iVar23, false);
					}
					unk_0x5BA593EA32D0187E(iVar23, 1);
				}
				else if (!bVar20)
				{
					unk_0x479E7EEEBDEE245D(iVar23, false);
				}
				unk_0x6A750A31D18DA81A(iVar23, true);
				unk_0x60D71C675384BFB1(iParam0, 0);
				unk_0x8576187A1C5FF880(iVar23);
				unk_0x6A8A5F1A990BB700(iVar23, 1);
				func_65();
				func_64();
				if (unk_0x09CAFDEAB6242673())
				{
				}
				if (unk_0x9DBF5ADC61595373())
				{
				}
				Global_2413868[iParam0 /*253*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_66(iVar23) && !unk_0xB9D0211AF48761E5(iVar23))
				{
					if (!bVar21)
					{
						unk_0xCC8C6873CFB069A4(iVar23, !bVar14, 0);
					}
					if (!unk_0xDF75DAAACD32E49E(iVar23))
					{
						if (!bVar20)
						{
							unk_0x479E7EEEBDEE245D(iVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x5BA593EA32D0187E(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x60D71C675384BFB1(iParam0, 0);
				}
				else
				{
					unk_0x60D71C675384BFB1(iParam0, 1);
				}
				unk_0x6A750A31D18DA81A(iVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0x50CD51844ED01084(iVar23) && !unk_0x2A24448FF232F834(iVar23, 0))
					{
						unk_0xCEBD1B99CF343672(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			unk_0xFAAA53BBE1EEF174(iParam0, bParam1, iVar24);
		}
	}
}

void func_64()
{
	struct<2> Var0;
	
	Global_2421967.f_675 = 0;
	Global_2421967.f_676 = 0;
	Global_2421967.f_677 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404546.f_1374 = { Var0 };
}

void func_65()
{
	Global_2404546.f_537 = 0;
	Global_2404546.f_1415 = 0;
	Global_2404546.f_420 = 0;
	Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_204 = 0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	if (unk_0x2A24448FF232F834(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xEC043AB2FEE0E94F(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (func_68() == 0)
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	return Global_1312466.f_18;
}

void func_69()
{
	int iVar0;
	
	if (bLocal_49)
	{
		return;
	}
	Local_42.f_4 = 0;
	if (!func_70(Global_35756[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x4D3E68F73B727E49(500, 3000);
	Local_59.f_0 = 5;
	Local_54.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_70(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_81();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x9F94F2CFDCA78C55(Local_42.f_1))
	{
		if (unk_0x2A24448FF232F834(Local_42.f_1, 0) || unk_0xADFF42956B1E6E0F(Local_42.f_1))
		{
			return 0;
		}
		if (unk_0x61DBAE4CD87221B9(Local_42.f_1))
		{
			return 0;
		}
		if (func_77(Local_42.f_1))
		{
			return 0;
		}
	}
	if (Global_35756[iLocal_63 /*5*/].f_3 < 3 && Global_35756[iLocal_63 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_35756[iLocal_63 /*5*/].f_4 < 9 && Global_35756[iLocal_63 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_76(iParam0);
	if (unk_0x8FA72E132AAFA62F(uVar1))
	{
		return 0;
	}
	if (func_77(Local_42.f_1))
	{
		return 0;
	}
	unk_0x4554A56FA4AB29D4(sVar1);
	if (func_73(Local_42.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0x8FA72E132AAFA62F(sVar2) && !unk_0x8FA72E132AAFA62F(sVar3))
		{
			unk_0x395C5D98343F0040(sVar2);
			while (!unk_0xCE40391AB65FE305(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x9F94F2CFDCA78C55(Local_42.f_1))
			{
				unk_0xEC0A546609840086(Local_42.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_53 = sVar3;
			}
		}
	}
	if (!unk_0x7283AF7715BF497C(sVar1))
	{
		return 0;
	}
	if (unk_0x9F94F2CFDCA78C55(Local_42.f_1))
	{
		return 0;
	}
	unk_0xC3171961272B0BF2(Local_42.f_1, sVar1, 0.75f);
	if (unk_0x25A5D05A7AF9563B() == 4)
	{
		unk_0x4C174E6F2323E7DC(Local_42.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x750F44AB2EED1F0B(Local_42.f_1, 0, sVar1, "idle", 2f, 1);
	Local_59.f_2 = sVar1;
	bLocal_50 = true;
	iVar4 = 0;
	switch (func_59(Local_42.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0xBC57175ED22C698D(Local_42.f_1))
			{
				if (!func_71())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xB9DC6B81F29B0CA8(Local_42.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xB999892D829E5A79(Local_42.f_1, "mood_drunk_1", iVar4);
	unk_0xE131FC34DA8AD63F(Local_42.f_1, 200, 1);
	unk_0xE131FC34DA8AD63F(Local_42.f_1, 46, 1);
	unk_0xC9CD9F3D2675F791(Local_42.f_1, 0);
	unk_0xB2B080B88A4144B7(Local_42.f_1, 262144, 1);
	unk_0x5FFD5ABB6E7B7D77(Local_42.f_1, 1);
	return 1;
}

bool func_71()
{
	return func_72(unk_0xAF65E5A58BE87D95());
}

int func_72(int iParam0)
{
	if (unk_0x26EA758C2A691D06(unk_0x687D51F360787909(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x2A24448FF232F834(iParam0, 1) || unk_0xADFF42956B1E6E0F(iParam0))
	{
		return 0;
	}
	if (unk_0xEC043AB2FEE0E94F(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xEC043AB2FEE0E94F(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0xEB4AE93098956715(iParam0))
	{
		return 0;
	}
	if (unk_0xF97DDB74A78F6500(iParam0))
	{
		return 0;
	}
	if (unk_0x1983DA3C921BB046(iParam0))
	{
		return 0;
	}
	if (unk_0x8BD202CCF931002E(iParam0))
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (iParam0 == unk_0x507DA4994C3D8EBD())
	{
		if (!unk_0xC7F04149CEA63421(unk_0xAF65E5A58BE87D95()))
		{
			return 0;
		}
		if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
		{
			return 0;
		}
		if (unk_0xAD26E3EB5603F99C(unk_0xAF65E5A58BE87D95()) || unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			return 0;
		}
		if (func_74())
		{
			return 0;
		}
	}
	Var0 = { unk_0x903468970F24CA24(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_74()
{
	return Global_89836.f_291 > 0;
}

bool func_75()
{
	return unk_0xF976C624234A4AA8() <= Global_17236.f_5130 + 100;
}

char* func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

int func_77(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_78(iParam0);
	uVar1 = func_76(iVar0);
	if (unk_0x8FA72E132AAFA62F(Local_59.f_2))
	{
		if (unk_0x8FA72E132AAFA62F(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xA858564DC37EED5E(Local_59.f_2, sVar1);
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xFD68187442384158(iParam0))
	{
		return -1;
	}
	iVar0 = func_80(iParam0);
	iVar1 = func_79(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35756[iVar1 /*5*/].f_2;
}

int func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35756[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_80(int iParam0)
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
		if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
		{
			return Global_35756[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_81()
{
	int iVar0;
	
	if (Local_54.f_0 == -2)
	{
		return -2;
	}
	if (Local_54.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_82()
{
	if (bLocal_49)
	{
		return;
	}
	if (!func_83())
	{
		Local_59.f_0 = 5;
		Local_54.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_59.f_0 = 6;
}

bool func_83()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_42.f_4 == 0)
	{
		return 0;
	}
	if (unk_0xE5D56342B0FF1D0D(Local_42.f_4))
	{
		return 0;
	}
	Var0 = { unk_0xBF1B13057E5119A4(Local_42.f_1, 1) };
	Var3 = { unk_0xBF1B13057E5119A4(Local_42.f_4, 1) };
	fVar6 = unk_0x8FE221761D524CFE(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_84()
{
	int iVar0;
	char* sVar1;
	
	if (Local_42.f_1 == unk_0x507DA4994C3D8EBD())
	{
		unk_0x500F4CA776CEBD0A(0, 36, 1);
		if (unk_0x3153580B6C021741(Local_42.f_1))
		{
			if (Global_35756[iLocal_63 /*5*/].f_2 == 0 || Global_35756[iLocal_63 /*5*/].f_2 == 2)
			{
				unk_0xD14BE9B74CD80551(Local_42.f_1, 0, 0);
			}
		}
		if (unk_0xB0680605FE40CDC9(Local_42.f_1))
		{
			unk_0xC23E5B0130192B40(Local_42.f_1, 0);
		}
	}
	if (Local_54.f_0 != -2)
	{
		if (Local_54.f_0 == -1)
		{
			if (Global_35756[iLocal_63 /*5*/].f_2 != 0)
			{
				Global_35756[iLocal_63 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_35756[iLocal_63 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_35756[iLocal_63 /*5*/].f_2 = 2;
					if (!func_70(2))
					{
						Global_35756[iLocal_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_35756[iLocal_63 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_35756[iLocal_63 /*5*/].f_2 = 1;
					if (!func_70(2))
					{
						Global_35756[iLocal_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_35756[iLocal_63 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x8FA72E132AAFA62F(sLocal_53))
	{
		if (!func_73(Local_42.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x22605DE2E6933CF2(Local_42.f_1, sVar1, sLocal_53, 3))
			{
				unk_0xB7672D87B547201C(Local_42.f_1, sVar1, sLocal_53, -4f);
			}
			sLocal_53 = "";
			return;
		}
	}
	if (Global_35756[iLocal_63 /*5*/].f_3 >= 10 || Global_35756[iLocal_63 /*5*/].f_4 >= 15)
	{
		if (unk_0xEC043AB2FEE0E94F(Local_42.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x17E998AB655366FD(Local_42.f_1))
		{
			return;
		}
		Local_59.f_1 = 3;
		return;
	}
	if (!bLocal_50)
	{
		return;
	}
	if (!func_77(Local_42.f_1))
	{
		return;
	}
}

int func_85()
{
	int iVar0;
	
	if (!unk_0x2E177F2B797A4A34(Local_42.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x78AB10B64129B3D5(Local_42.f_1, 0);
	if (!unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xE634CB9EE7094537(iVar0, -1) == Local_42.f_1)
	{
		return 0;
	}
	Local_42.f_4 = iVar0;
	Local_59.f_0 = 7;
	return 1;
}

void func_86()
{
	if (!unk_0x2A24448FF232F834(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		return;
	}
}

void func_87()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	if (!bLocal_49)
	{
		return;
	}
	if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		return;
	}
	if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
	{
		return;
	}
	if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
	{
		return;
	}
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	fVar1 = unk_0x11F6A4A45943670E(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x4D30A22147A9AEBA(Var5, Var8) && !unk_0x2ECF6DFC75F222F2(Var5, Var8))
	{
		return;
	}
	unk_0x5D68762ED393DB97(unk_0xAF65E5A58BE87D95(), 1, 0);
	unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
	func_7(73, 1);
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_42.f_1;
	if (unk_0x2A24448FF232F834(Local_42.f_1, 0))
	{
		iVar1 = unk_0x78AB10B64129B3D5(Local_42.f_1, 0);
		iVar2 = unk_0xE634CB9EE7094537(iVar1, -1);
		if (!iVar2 == Local_42.f_1)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x507DA4994C3D8EBD() == Local_42.f_1)
	{
		return;
	}
	else if (!unk_0x25A5D05A7AF9563B() == 4)
	{
		fLocal_52 = 0f;
		func_90(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_4)
	{
		func_90(iVar0, fLocal_52);
		return;
	}
	if (unk_0x91F594068DF4424F(iVar0))
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x11F6A4A45943670E(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_52 = 0f;
		func_90(iVar0, 0f);
		return;
	}
	if (Local_54.f_1 == -1)
	{
		fLocal_52 = func_89(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_54.f_1 - unk_0x83666F9FB8FEBD4B());
		if (iVar4 < 5000)
		{
			fLocal_52 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_52 = func_89(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_52 = func_89(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_52 = func_89(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_52 = func_89(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_52 = func_89(iVar0, 0.13f, 0.06f);
		}
	}
	func_90(iVar0, fLocal_52);
}

float func_89(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x01E9A2D3AF075537(-fParam1, fParam1);
	fVar1 = unk_0x01E9A2D3AF075537(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x91F594068DF4424F(iParam0))
	{
		if (unk_0x485BBA43A75711BE(unk_0x274BAC44978F9161(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x26EA758C2A691D06(iParam0);
		if (unk_0xA34706B20AE53D17(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_17(fVar0, -1f, 1f);
	return fVar0;
}

void func_90(int iParam0, float fParam1)
{
	if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x8CC867BE28661C52(unk_0x274BAC44978F9161(iParam0), fParam1);
	}
	else if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0xAD31B3B3B4A153DE(unk_0x379620F9B34A512B(iParam0), fParam1);
	}
}

void func_91()
{
	int iVar0;
	
	if (!unk_0x2A24448FF232F834(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		return;
	}
	if (bLocal_49)
	{
		return;
	}
	iVar0 = unk_0x78AB10B64129B3D5(Local_42.f_1, 0);
	if (!unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		unk_0x48367A1F7C9A1041(Local_42.f_1, 0, 0);
		Local_59.f_0 = 11;
		return;
	}
}

void func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_54.f_3)
	{
		return;
	}
	iVar0 = unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), 355471868);
	if (!iVar0 == 7)
	{
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x2A24448FF232F834(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		Local_54.f_3 = -2;
		return;
	}
	iVar1 = unk_0x78AB10B64129B3D5(Local_42.f_1, 0);
	iVar2 = unk_0xE634CB9EE7094537(iVar1, -1);
	if (iVar2 == Local_42.f_1)
	{
		func_93();
		Local_54.f_3 = -2;
		return;
	}
	unk_0x1DE8910EDFD23539(Local_42.f_1, iVar1);
	Local_59.f_0 = 9;
	Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_93()
{
	if (Local_59.f_0 == 10)
	{
		return;
	}
	Local_59.f_0 = 10;
	if (iLocal_47 == -1)
	{
		return;
	}
	func_123(iLocal_47, 2, 5);
	Local_54.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_52 = 0f;
}

void func_94()
{
	if (unk_0x2E177F2B797A4A34(Local_42.f_1))
	{
		Local_59.f_0 = 10;
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_3)
	{
		return;
	}
	Local_59.f_0 = 4;
	Local_54.f_3 = -2;
}

void func_95()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_49)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x2E177F2B797A4A34(Local_42.f_1))
	{
		if (!bLocal_49)
		{
		}
		iVar0 = unk_0x78AB10B64129B3D5(Local_42.f_1, 0);
		if (!iVar0 == Local_42.f_4)
		{
			if (!bLocal_49)
			{
			}
			if (!bLocal_49)
			{
				if (!bLocal_49)
				{
				}
				unk_0x48367A1F7C9A1041(Local_42.f_1, 0, 0);
				Local_59.f_0 = 11;
				return;
			}
			Local_42.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_49)
			{
			}
			func_93();
			return;
		}
		if (!bLocal_49)
		{
			if (!bLocal_49)
			{
			}
			func_93();
			return;
		}
		if (!bLocal_49)
		{
		}
		iVar2 = unk_0xE634CB9EE7094537(Local_42.f_4, -1);
		if (iVar2 == Local_42.f_1)
		{
			func_93();
			return;
		}
		unk_0x1DE8910EDFD23539(Local_42.f_1, iVar0);
		Local_59.f_0 = 9;
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_83())
	{
		unk_0xAC57FBF981AB03F4(Local_42.f_1);
		Local_59.f_0 = 4;
		return;
	}
	if (!bLocal_49)
	{
		iVar3 = unk_0xEC043AB2FEE0E94F(Local_42.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x2A24448FF232F834(Local_42.f_1, 0))
			{
				unk_0xAC57FBF981AB03F4(Local_42.f_1);
				Local_59.f_0 = 4;
				return;
			}
		}
	}
}

void func_96()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (bLocal_49)
	{
		return;
	}
	if (Local_42.f_4 == 0)
	{
		Local_59.f_0 = 4;
		return;
	}
	if (!unk_0xCA8794CE207FC6D5(Local_42.f_4, 0))
	{
		Local_42.f_4 = 0;
		Local_59.f_0 = 4;
		return;
	}
	Var0 = { unk_0xBF1B13057E5119A4(Local_42.f_1, 1) };
	Var3 = { unk_0xBF1B13057E5119A4(Local_42.f_4, 1) };
	fVar6 = unk_0x8FE221761D524CFE(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_70(Global_35756[iLocal_63 /*5*/].f_2))
		{
			Local_59.f_0 = 12;
			return;
		}
		Local_59.f_0 = 5;
		Local_54.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0xF7D9833F1E3C722B(Local_42.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0xC51FBEBD87CFD69C(Local_42.f_4, iVar8))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			Local_59.f_0 = 4;
			return;
		}
	}
	func_97();
	unk_0x36B42DB2912118E2(Local_42.f_1, Local_42.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_59.f_0 = 7;
}

void func_97()
{
	if (!unk_0xFD68187442384158(Local_42.f_1))
	{
		return;
	}
	if (!unk_0x9F94F2CFDCA78C55(Local_42.f_1))
	{
		unk_0x708A5EFEB2660CE4(Local_42.f_1, 1048576000);
		unk_0x514C7D46216AA8DE(Local_42.f_1);
		unk_0x12F4EB7593FFEE2C(Local_42.f_1, 0, -1056964608);
		Local_59.f_2 = "";
		unk_0xF0092A6A58666782(Local_42.f_1);
		unk_0xE131FC34DA8AD63F(Local_42.f_1, 200, 0);
		unk_0xE131FC34DA8AD63F(Local_42.f_1, 46, 0);
		unk_0xC9CD9F3D2675F791(Local_42.f_1, 1);
		unk_0xB2B080B88A4144B7(Local_42.f_1, 262144, 0);
		unk_0x5FFD5ABB6E7B7D77(Local_42.f_1, 0);
	}
	if (!bLocal_50)
	{
		return;
	}
	bLocal_50 = false;
}

void func_98()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_2)
	{
		func_84();
		return;
	}
	func_99();
	Local_54.f_2 = -2;
	Local_59.f_0 = 12;
}

int func_99()
{
	if (!func_77(Local_42.f_1))
	{
		return 0;
	}
	if (!bLocal_50)
	{
		return 0;
	}
	func_100(Local_42.f_1);
	Local_59.f_2 = "";
	return 1;
}

void func_100(int iParam0)
{
	unk_0x708A5EFEB2660CE4(uParam0, 1048576000);
	unk_0x12F4EB7593FFEE2C(uParam0, 0, -1056964608);
	unk_0xE131FC34DA8AD63F(uParam0, 200, 0);
	unk_0xC9CD9F3D2675F791(iParam0, 1);
	unk_0xB2B080B88A4144B7(iParam0, 262144, 0);
	unk_0x5FFD5ABB6E7B7D77(iParam0, 0);
}

void func_101()
{
	int iVar0;
	
	if (Local_54.f_0 == -1)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35756[iLocal_63 /*5*/].f_3 < 3 && Global_35756[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x2A24448FF232F834(Local_42.f_1, 0))
	{
		Local_59.f_0 = 10;
		return;
	}
	if (func_77(Local_42.f_1))
	{
		Local_59.f_0 = 12;
		return;
	}
	if (Local_54.f_0 == -2)
	{
		return;
	}
	if (!func_70(Global_35756[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	Local_59.f_0 = 12;
}

void func_102()
{
}

void func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_35837[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_35837[iVar1 /*5*/].f_1 == iLocal_47)
			{
				func_105(iVar1);
				func_104(iVar1);
			}
			else if (Global_35837[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_48 == -1)
				{
					if (iLocal_48 == Global_35837[iVar1 /*5*/])
					{
						func_105(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_104(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_35837[iParam0 /*5*/] = -1;
	Global_35837[iParam0 /*5*/].f_1 = -1;
	Global_35837[iParam0 /*5*/].f_2 = 6;
	Global_35837[iParam0 /*5*/].f_3 = 0;
	Global_35837[iParam0 /*5*/].f_4 = 0;
}

void func_105(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_35837[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_130();
			break;
		
		case 2:
			func_109(Global_35837[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_108();
			break;
		
		case 4:
			func_107();
			break;
		
		case 5:
			func_106();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_106()
{
	Local_59.f_1 = 2;
}

void func_107()
{
	int iVar0;
	
	Global_35756[iLocal_63 /*5*/].f_4++;
	if (Local_54.f_0 == -1)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35756[iLocal_63 /*5*/].f_4 < 9 && Global_35756[iLocal_63 /*5*/].f_4 != 0)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_77(Local_42.f_1))
		{
			func_70(Global_35756[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_108()
{
	int iVar0;
	
	Global_35756[iLocal_63 /*5*/].f_3++;
	if (Local_54.f_0 == -1)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35756[iLocal_63 /*5*/].f_3 < 3 && Global_35756[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_77(Local_42.f_1))
		{
			func_70(Global_35756[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_109(int iParam0)
{
	Local_42.f_3 = (Local_42.f_3 + iParam0);
	Local_42.f_2 = (Local_42.f_2 + iParam0);
	Local_54.f_1 = (Local_54.f_1 + iParam0);
	Local_54.f_0 = (Local_54.f_0 + iParam0);
}

void func_110()
{
	int iVar0;
	
	if (!bLocal_49)
	{
		iLocal_62 = -1;
		return;
	}
	if (iLocal_62 < 0)
	{
		iLocal_62 = unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95());
		return;
	}
	iVar0 = unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95());
	if (iVar0 != iLocal_62)
	{
		if (iVar0 > iLocal_62)
		{
			func_111();
		}
		iLocal_62 = iVar0;
		return;
	}
}

void func_111()
{
}

void func_112()
{
	if (!Local_54.f_0 == -1)
	{
		if (!Local_54.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_54.f_0)
			{
				func_97();
				Local_54.f_0 = -2;
				Local_59.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_54.f_1)
		{
			func_130();
		}
	}
}

void func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35837[iVar0 /*5*/])
		{
			func_104(iVar0);
		}
		iVar0++;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_59.f_0 = 4;
	if (!unk_0xE5D56342B0FF1D0D(Local_42.f_1))
	{
		if (unk_0x2E177F2B797A4A34(Local_42.f_1))
		{
			Local_59.f_0 = 10;
		}
	}
	if (bLocal_49)
	{
		func_121();
		func_7(71, 1);
		if (unk_0xD95428C8AA1DBBF2())
		{
			iVar0 = func_120(2040, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_118(iVar1);
			}
			func_115(2040, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x55FFE396AA3CA77A(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x55FFE396AA3CA77A(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x55FFE396AA3CA77A(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_118(iVar6);
			}
			switch (func_56())
			{
				case 0:
					unk_0x96B68C67633472DC(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x96B68C67633472DC(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x96B68C67633472DC(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_59.f_1 = 1;
		return;
	}
	Local_59.f_1 = 12;
	if (Local_54.f_0 == -1)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35756[iLocal_63 /*5*/].f_3 < 3 && Global_35756[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35756[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_35756[iLocal_63 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_35756[iLocal_63 /*5*/].f_2 = 1;
		}
	}
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_116(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
}

int func_116(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_117();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

var func_117()
{
	return Global_1312736;
}

void func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = func_119(81);
	Global_2408752[iVar0 /*83*/] = 81;
	Global_2408752[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2408752[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408752[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_116(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_121()
{
}

void func_122()
{
	Local_54.f_0 = Local_42.f_2;
	Local_54.f_1 = Local_42.f_3;
	Local_54.f_2 = -2;
	Local_54.f_3 = -2;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	func_124(iParam0, iParam1, iParam2, 0, 0);
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_126(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_125();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35837[iVar0 /*5*/] = iParam0;
	Global_35837[iVar0 /*5*/].f_1 = iParam1;
	Global_35837[iVar0 /*5*/].f_2 = iParam2;
	Global_35837[iVar0 /*5*/].f_3 = iParam3;
	Global_35837[iVar0 /*5*/].f_4 = iParam4;
}

int func_125()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35837[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	if (func_127(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
			{
				if (iParam1 == Global_35837[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_128()
{
	int iVar0;
	
	bLocal_49 = false;
	if (Local_42.f_1 == unk_0x507DA4994C3D8EBD())
	{
		bLocal_49 = true;
		Global_35952 = 1;
		Global_35954++;
	}
	if (!unk_0xE5D56342B0FF1D0D(Local_42.f_1))
	{
		iVar0 = func_59(Local_42.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x454E090239AFF6E8(Local_42.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x454E090239AFF6E8(Local_42.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_129()
{
	if (!iLocal_47 == -1)
	{
		return;
	}
	iLocal_47 = func_80(Local_42.f_1);
	if (iLocal_47 == -1)
	{
		return;
	}
	iLocal_63 = func_79(iLocal_47);
}

void func_130()
{
	int iVar0;
	
	if (!func_25(0) && !func_25(3))
	{
		if (!unk_0xE5D56342B0FF1D0D(Local_42.f_1))
		{
			iVar0 = func_59(Local_42.f_1);
			if (Global_35756[iLocal_63 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_132(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_132(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_132(Local_42.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x454E090239AFF6E8(Local_42.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x454E090239AFF6E8(Local_42.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_97();
	if (bLocal_49)
	{
		Global_35952 = 0;
	}
	func_131();
	unk_0xA878656BC39BBC51(func_76(0));
	unk_0xA878656BC39BBC51(func_76(2));
	unk_0xA878656BC39BBC51(func_76(1));
	if (unk_0x25531002BCF0D968(joaat("appemail")) > 0)
	{
		func_32(0);
	}
	unk_0x883793591E631A3B();
}

void func_131()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xE5D56342B0FF1D0D(Local_42.f_1))
	{
		return;
	}
	uVar0 = Local_42.f_1;
	if (unk_0x2A24448FF232F834(Local_42.f_1, 0))
	{
		uVar1 = unk_0x78AB10B64129B3D5(Local_42.f_1, 0);
		iVar2 = unk_0xE634CB9EE7094537(uVar1, -1);
		if (!Local_42.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x25A5D05A7AF9563B() == 4 || !unk_0x507DA4994C3D8EBD() == Local_42.f_1)
	{
		return;
	}
	fLocal_52 = 0f;
	func_90(uVar0, 0f);
}

void func_132(var uParam0, char* sParam1, int iParam2)
{
	unk_0xF3E45A7DABC97254(uParam0, sParam1, func_133(iParam2), 1);
}

int func_133(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

