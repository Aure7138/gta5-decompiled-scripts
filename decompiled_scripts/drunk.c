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
	if (unk_0xC11469DCA6FC3BB5(2))
	{
		func_131();
	}
	Local_42 = { ScriptParam_0 };
	func_130();
	func_129();
	func_124(iLocal_47, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_123();
	func_115();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_114(iLocal_47);
		func_113();
		func_111();
		func_104();
		func_124(iLocal_47, 0, 0);
		func_130();
		func_6();
		if ((unk_0x03A753E2C8458335() && !unk_0xB8A3683DF4C96A44()) && !func_5())
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
	Global_2428131.f_629 = 1;
}

var func_3()
{
	return Global_2428131.f_608;
}

bool func_4()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2428131.f_2, 11);
}

bool func_5()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2428891.f_1.f_2808, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0x7D5B1F88E7504BBA(Local_42.f_1))
	{
		func_131();
	}
	if (bLocal_49)
	{
		if (!unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			func_131();
		}
	}
	func_103();
	bVar0 = true;
	switch (Local_59.f_0)
	{
		case 4:
			func_102();
			return;
		
		case 5:
			func_99();
			return;
		
		case 6:
			func_97();
			return;
		
		case 7:
			func_96();
			return;
		
		case 8:
			func_95();
			return;
		
		case 9:
			func_93();
			return;
		
		case 10:
			func_92();
			func_89();
			func_88();
			return;
		
		case 11:
			func_87();
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
			if (!func_86())
			{
				func_85();
				func_89();
			}
			break;
		
		case 2:
			func_83();
			break;
		
		case 12:
			func_70();
			break;
		
		case 3:
			func_7();
			break;
		
		default:
			break;
	}
}

void func_7()
{
	char* sVar0;
	struct<53> Var1;
	int iVar59;
	
	unk_0xA40C6065FC8B2FED(Local_42.f_1, 3000, 3500, 0, 1, 1, 0);
	if (!unk_0xF5472C80DF2FF847())
	{
		unk_0x40C719A5E410B9E4(2500);
		while (unk_0x02F39BEFE7B88D00())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x03A753E2C8458335())
	{
		func_64(unk_0x217E9DC48139933D(), 0, 57344, 1);
		Global_2404548.f_1373 = 1;
		if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
		{
			Global_2404548.f_1374 = 1;
		}
		else
		{
			Global_2404548.f_1374 = 0;
		}
		func_62(1);
		func_131();
	}
	sVar0 = "";
	Var1.f_3 = 1064514355;
	Var1.f_30 = 1148829696;
	Var1.f_31 = 1148829696;
	Var1.f_52 = 1148829696;
	iVar59 = 7;
	switch (func_57())
	{
		case 0:
			if (func_55() != 2)
			{
				iVar59 = 0;
			}
			else
			{
				iVar59 = 1;
			}
			break;
		
		case 1:
			if (!func_54(126))
			{
				iVar59 = 2;
			}
			else
			{
				iVar59 = 3;
			}
			break;
		
		case 2:
			if (!func_53(4))
			{
				if (func_54(58))
				{
					iVar59 = 4;
				}
				if (func_54(59))
				{
					iVar59 = 5;
				}
				if (iVar59 == 7)
				{
					if (!func_52())
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
	if (!unk_0x7D5B1F88E7504BBA(Local_42.f_1))
	{
		unk_0xF6A103413A202C37(Local_42.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_131();
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_9(char* sParam0, var uParam1, char* sParam2)
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
	unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), false, 0);
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 1);
	}
	unk_0x87B5905ECA623B68(uParam1->f_5, 4500f);
	unk_0x86DE59FA02902B40(uParam1->f_5, 4500f);
	unk_0x3B882A96EA77D5B1(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x7D9EFB7AD6B19754(unk_0x096275889B8E0EE0(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0xFAEC088D28B1DE4A(1);
	unk_0xA862A2AD321F94B4(*uParam1);
	if (unk_0x2CF12F9ACF18F048(uParam1->f_16))
	{
	}
	else
	{
		unk_0xA862A2AD321F94B4(uParam1->f_16);
	}
	if (!unk_0xF5472C80DF2FF847())
	{
		unk_0x40C719A5E410B9E4(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xF5472C80DF2FF847())
	{
		unk_0x40C719A5E410B9E4(0);
	}
	iVar1 = unk_0x4F67E8ECA7D3F667() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x4F67E8ECA7D3F667())
	{
		bVar2 = true;
		unk_0xA862A2AD321F94B4(*uParam1);
		if (!unk_0x27FF6FE8009B40CA(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x2CF12F9ACF18F048(uParam1->f_16))
		{
			unk_0xA862A2AD321F94B4(uParam1->f_16);
			if (!unk_0x27FF6FE8009B40CA(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xF5472C80DF2FF847())
		{
			unk_0x40C719A5E410B9E4(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f))
	{
		unk_0xEDF13ED104B0FF6B(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x894DDE7F2D919046(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x3B882A96EA77D5B1(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
		unk_0xA1594471C8773FDD(unk_0x096275889B8E0EE0(), joaat("weapon_unarmed"), 1);
		unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
	}
	unk_0x7D9EFB7AD6B19754(unk_0x096275889B8E0EE0(), false);
	unk_0xFAEC088D28B1DE4A(0);
	unk_0x3B882A96EA77D5B1(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x44E4BC5BF73F79B6();
	unk_0x1FF00DB43026B12F();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x37F9A426FBCF4AF2() && !unk_0x0CECCC63FFA2EF24())
	{
		unk_0x6A053CF596F67DF7(250);
	}
	unk_0xDF3B5846DE5904AF(1);
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		iVar4 = unk_0x4D3B117F889EADDA(uParam1->f_5, uParam1->f_8, 2);
		unk_0x074C419F65D01DE7(iVar4, 0);
		unk_0x0D750763E4B00866(iVar4, 0);
		uVar5 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0x096275889B8E0EE0(), uParam1->f_18);
		unk_0x3605588B4955CFAF(unk_0x096275889B8E0EE0(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x4AC538A3F3EE3517(unk_0x096275889B8E0EE0(), 1);
		unk_0xD0D9317DFEEF9A66(unk_0x217E9DC48139933D(), 1);
		iVar3 = unk_0x5C70A6EC0F3FF0BA(unk_0x096275889B8E0EE0(), 77);
		unk_0x28AC5FC91EA70789(unk_0x096275889B8E0EE0(), 77, 1);
		unk_0x6E3975B3F6954199(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
		if (!unk_0x2CF12F9ACF18F048(uParam1->f_16) && !unk_0x2CF12F9ACF18F048(uParam1->f_17))
		{
			unk_0x8DBC05C86F873CC9(unk_0x096275889B8E0EE0(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x2CF12F9ACF18F048(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x2CF12F9ACF18F048(&(uParam1->f_11)))
	{
		iVar174 = func_57();
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
		func_36(&uVar9, iVar175, unk_0x096275889B8E0EE0(), sVar176, 0, 1);
	}
	if (unk_0x0ACACDD53B4C4879(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x0ACACDD53B4C4879(iVar4) && !unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (!bVar8)
			{
				if (!unk_0xF5472C80DF2FF847())
				{
					if (!unk_0x2CF12F9ACF18F048(uParam1->f_26))
					{
						unk_0x4102732DF6B4005F(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x2CF12F9ACF18F048(uParam1->f_27))
					{
						if (!unk_0x2CF12F9ACF18F048(uParam1->f_28))
						{
							unk_0xB906B139171B1845(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x2CF12F9ACF18F048(uParam1->f_29))
						{
							unk_0xB906B139171B1845(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x36CDD81627A6FCD2();
			unk_0xB5F6539FA93ECBF6(18);
			unk_0x71726C1041227B2B();
			func_32();
			iVar179 = unk_0x4F67E8ECA7D3F667();
			if (iVar179 >= (Global_35464 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x5D6C0F302EC49A67(iVar4);
			if (!unk_0x2CF12F9ACF18F048(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_19(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (unk_0x5851CC48405F4A07(unk_0x096275889B8E0EE0(), unk_0xFD340785ADF8CFB7(sVar177)))
			{
				iVar183 = (unk_0x929BAD36765E37C2(2, 195) - 128);
				iVar184 = (unk_0x929BAD36765E37C2(2, 196) - 128);
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
			if (unk_0x420537F38720164C() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x5352E025EC2B416F() };
						Var189 = { unk_0x012B43913EE9671C(unk_0x096275889B8E0EE0(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x0BE7F4E3CDBAFB28(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0x096275889B8E0EE0(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x4F67E8ECA7D3F667();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x602685BD85DD26CA(2) };
							uVar198 = unk_0xC230DD956E2F5507(unk_0x096275889B8E0EE0());
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
						unk_0xFB760AF4F537B8BF(fVar193, 1065353216);
						unk_0x5D1EB123EAC5D071(fVar194);
						unk_0x6078203D7B97446E(fVar193);
						unk_0x22A0468C54BC6794(fVar194);
						Var201 = { unk_0x5352E025EC2B416F() };
						Var204 = { unk_0x595320200B98596E() };
						fVar207 = unk_0x0BE7F4E3CDBAFB28(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x77D65669A05D1A1A();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x5851CC48405F4A07(unk_0x096275889B8E0EE0(), unk_0xFD340785ADF8CFB7(sVar178)) || iVar182)
			{
				if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
				{
					unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x701D6D68FC656B34(unk_0x096275889B8E0EE0(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x8C7C7FF7CF0E5153(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x701D6D68FC656B34(unk_0x096275889B8E0EE0(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xFA0C063C422C4355(unk_0x217E9DC48139933D(), 1f, 500, 0, 1, 0);
							if (unk_0x420537F38720164C() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x602685BD85DD26CA(2) };
									uVar214 = unk_0xC230DD956E2F5507(unk_0x096275889B8E0EE0());
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
								unk_0xFB760AF4F537B8BF(fVar209, 1065353216);
								unk_0x5D1EB123EAC5D071(fVar210);
								Var217 = { unk_0x5352E025EC2B416F() };
								Var220 = { unk_0x595320200B98596E() };
								fVar223 = unk_0x0BE7F4E3CDBAFB28(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x33281167E4942E4F(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x0ACACDD53B4C4879(iVar4))
					{
						unk_0xC8E971F780F32046(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f))
	{
		unk_0xC77E39B7E42156B8(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), true, 0);
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
	}
	bVar225 = unk_0x251241CAEC707106();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x77D65669A05D1A1A();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
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
			func_12(1, 26, &iVar227);
			func_12(1, 79, &iVar227);
			func_12(1, 1, &iVar227);
			func_12(1, 2, &iVar227);
			func_12(0, 22, &iVar227);
			func_12(0, 36, &iVar227);
			func_12(0, 142, &iVar227);
			func_12(0, 141, &iVar227);
			func_12(0, 140, &iVar227);
			func_12(0, 263, &iVar227);
			func_12(0, 264, &iVar227);
			unk_0x4EDE34FBADD967A6(0);
			bVar225 = unk_0x251241CAEC707106();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x77D65669A05D1A1A();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x2CF12F9ACF18F048(uParam1->f_16))
	{
		unk_0x4763145053A33D46(uParam1->f_16);
	}
	unk_0x4763145053A33D46(*uParam1);
	unk_0x4E67E0B6D7FD5145(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0x28AC5FC91EA70789(unk_0x096275889B8E0EE0(), 77, iVar3);
		unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
	}
	sParam0 = sParam0;
}

void func_10(var uParam0)
{
	func_11(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_11(var uParam0)
{
	if (unk_0x153AD457764FD704(uParam0->f_1))
	{
		unk_0x4E67E0B6D7FD5145(uParam0->f_1, 0);
	}
	if (unk_0x153AD457764FD704(uParam0->f_2))
	{
		unk_0x4E67E0B6D7FD5145(uParam0->f_2, 0);
	}
	if (unk_0x153AD457764FD704(uParam0->f_3))
	{
		unk_0x4E67E0B6D7FD5145(uParam0->f_3, 0);
	}
	if (unk_0x153AD457764FD704(uParam0->f_4))
	{
		unk_0x4E67E0B6D7FD5145(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0x562F5D788AF3FA80(iParam0, iParam1, 1);
	*iParam2++;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
			func_14();
			if (!unk_0x7D5B1F88E7504BBA(uParam0->f_5))
			{
				func_11(uParam0);
				Var0 = { unk_0x5352E025EC2B416F() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xC3BBBD114C2B597B(uParam0->f_5) * FtoV(unk_0x5E72022914CE3C38()) };
				}
				Var3 = { unk_0x497C6B1A2C9AE69C(uParam0->f_5, Var0) };
				Var6 = { unk_0x602685BD85DD26CA(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0xE09CAF86C32CB48F(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x04AF77971E508F6A();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x57CDF879EA466C46(1775630800, 0);
				}
				uParam0->f_1 = unk_0x57CDF879EA466C46(26379945, 1);
				if (bParam1)
				{
					unk_0xFDC0DF7F6FB0A592(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xF9EE7D419EE49DE6(uParam0->f_1, Var0);
				}
				unk_0x63DFA6810AD78719(uParam0->f_1, Var6, 2);
				unk_0x27666E5988D9D429(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x57CDF879EA466C46(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0xFDC0DF7F6FB0A592(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xF9EE7D419EE49DE6(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x63DFA6810AD78719(uParam0->f_2, Var6, 2);
				unk_0x27666E5988D9D429(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x57CDF879EA466C46(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0xFDC0DF7F6FB0A592(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xF9EE7D419EE49DE6(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x63DFA6810AD78719(uParam0->f_4, Var6, 2);
					unk_0x27666E5988D9D429(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xC3B78862DCEFAB97(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xC3B78862DCEFAB97(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xC3B78862DCEFAB97(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x84B3645618E726B0(uParam0->f_3, iParam6);
					unk_0x87295BCA613800C8(uParam0->f_3, 1);
				}
				else
				{
					unk_0x8B15AE2987C1AC8F(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x4F67E8ECA7D3F667();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_14();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x4F67E8ECA7D3F667() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x4102732DF6B4005F("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x4102732DF6B4005F("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x4102732DF6B4005F("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x4102732DF6B4005F("CamPushInNeutral", 0, 0);
						}
						unk_0xB906B139171B1845(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x4F67E8ECA7D3F667() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
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

void func_14()
{
	unk_0xA8C44C13419634F2();
	func_15();
}

void func_15()
{
	Global_17098.f_134 = 1;
}

void func_16(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_17(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

float func_18(float fParam0, float fParam1, float fParam2)
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

bool func_19(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_20(sParam2, iParam3, 0);
}

int func_20(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x89EEEEF0CEB4D045(0);
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
					func_29();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_27();
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
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_25();
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
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
				}
			}
			if (func_23())
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_22();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_21();
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
		func_29();
	}
	return 0;
}

void func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_22()
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
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_23()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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

void func_25()
{
	if (func_26(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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
		Global_14393 = func_57();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_26(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_29()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_31(int iParam0)
{
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
}

void func_32()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0xF73FBE4845C43B5B(&Global_2264, 2);
	}
}

void func_33(int iParam0)
{
	if (Global_14551)
	{
		func_34(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_23())
	{
		Global_14393.f_1 = 3;
	}
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_35(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0xEA97D479130ACEA6(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_39(uParam1, 0))
	{
	}
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_40()
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/] && !Global_87300[iVar0 /*17*/].f_1)
		{
			if (Global_87300[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87300[iVar0 /*17*/].f_5 != 88 && Global_87300[iVar0 /*17*/].f_5 != 89) && Global_87300[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_87300[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

bool func_43(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_44()
{
	func_45();
	func_62(1);
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_35760[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_124(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_35734[iVar2 /*5*/] == 0)
		{
			func_46(iVar2);
		}
		iVar2++;
	}
}

void func_46(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x096275889B8E0EE0())
		{
			Global_35955 = 0;
		}
	}
	Global_35734[iParam0 /*5*/] = 13;
	Global_35734[iParam0 /*5*/].f_1 = 0;
	Global_35734[iParam0 /*5*/].f_2 = 0;
	Global_35734[iParam0 /*5*/].f_3 = 0;
	Global_35734[iParam0 /*5*/].f_4 = 0;
	Global_35733 = (Global_35733 - 1);
	if (Global_35733 < 0)
	{
		Global_35733 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		func_51(0);
		unk_0x3B882A96EA77D5B1(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), Param0, 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), uParam3);
				unk_0xFB760AF4F537B8BF(0f, 1065353216);
				unk_0x5D1EB123EAC5D071(0f);
			}
		}
		unk_0xE51EF82902FB7AE3(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x3B882A96EA77D5B1(Param0, 5000f, 1, 0, 0, 0);
		unk_0xB8F7B9FCD2D9AF57(Param0, 5000f, 0);
		unk_0x87B5905ECA623B68(Param0, 5000f);
		unk_0x86DE59FA02902B40(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0xEEA50AAE36800059())
		{
			while (!unk_0xE51EF82902FB7AE3(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0xFAEC088D28B1DE4A(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x9F3CD46F4B1D9255())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0xFAEC088D28B1DE4A(0);
				if (unk_0xEEA50AAE36800059())
				{
					unk_0xE27DBC64CB87AA75();
				}
				return 0;
			}
		}
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xEEA50AAE36800059())
				{
					unk_0xE27DBC64CB87AA75();
				}
				unk_0xFAEC088D28B1DE4A(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x44E4BC5BF73F79B6();
				if (iParam5 == 1)
				{
					unk_0x1FF00DB43026B12F();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0xEA6DC3A8ADD2005F();
			}
		}
		while ((!unk_0x2701D01D5E18FC31() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x24FA4267BB8D2431(Param0, &(Param0.f_2));
			unk_0x3B882A96EA77D5B1(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
			{
				if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
				{
					unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), Param0, 1, 0, 0, 1);
					unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), uParam3);
				}
			}
		}
		unk_0xFB760AF4F537B8BF(0f, 1065353216);
		unk_0x5D1EB123EAC5D071(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_67138.f_553;
}

void func_49()
{
	Global_67138.f_553 = 1;
	Global_67138.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_67138[iVar0] = 0;
		iVar0++;
	}
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_89962.f_20, 2))
			{
				unk_0xFAEC088D28B1DE4A(1);
				unk_0xF73FBE4845C43B5B(&(Global_89962.f_20), 2);
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(Global_89962.f_20, 2))
		{
			unk_0xFAEC088D28B1DE4A(0);
			unk_0x7D1D4A3602B6AD4E(&(Global_89962.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0x4ED6CFDFE8D4131A(Global_97353.f_5486[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97353.f_7341.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_32360[11] == 1)
	{
		return 4;
	}
	if (!func_56(21))
	{
		return 0;
	}
	if (!func_54(130))
	{
		return 1;
	}
	if (!func_54(131))
	{
		return 2;
	}
	if (!func_56(22))
	{
		return 1;
	}
	if (!func_56(49))
	{
		return 3;
	}
	if (!func_56(28))
	{
		return 1;
	}
	return 3;
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97353.f_7341.f_328[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_61(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_60(unk_0x096275889B8E0EE0());
			if (func_59(iVar0) && (!func_26(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_59(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_61(int iParam0)
{
	if (func_59(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x4489A26B98AAC0C9(0f);
	unk_0x8459B3E64257B21D(0f);
	unk_0x570E35F5C4A44838(0f);
	unk_0xE0DE43D290FB65F9(1);
	unk_0x10067741CAC97F38(0f);
	unk_0xAC4A4B1A187A9D8D(1);
	unk_0x0045B2771F31EFA0(0);
	if (unk_0x2E882EA08284F674("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xC27FB879C2B9A2EB("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x2CF12F9ACF18F048(&Global_35935))
	{
		if (unk_0x2E882EA08284F674(&Global_35935))
		{
			unk_0xC27FB879C2B9A2EB(&Global_35935);
		}
	}
	if (unk_0x153AD457764FD704(Global_35924))
	{
		if (unk_0x2EEB402BD7320159(Global_35924))
		{
			unk_0x82B9049F7264300A(Global_35924, 0f);
			unk_0xB78CC4B4706614B0(Global_35924, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xA705394293E2B3D3() != -1 || unk_0x2DA67BA3C8A6755D() != -1)
		{
			unk_0x0E3F4AF2D63491FB();
		}
		else if (unk_0xED20CB1F5297791D())
		{
			unk_0x0E3F4AF2D63491FB();
		}
	}
	Global_35930 = 0f;
	StringCopy(&Global_35931, "", 16);
	StringCopy(&Global_35935, "", 64);
	StringCopy(&Global_35951, "", 16);
	func_63();
}

void func_63()
{
	Global_35923 = 0;
	Global_35924 = 0;
	Global_35925 = 0;
	Global_35926 = 30000;
	Global_35927 = 0f;
	Global_35929 = 0f;
	Global_35928 = 0f;
	Global_35930 = 0f;
	StringCopy(&Global_35931, "", 16);
}

void func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		if (unk_0x323DAF00687E0F28())
		{
			unk_0x5CB83156AA038F95(0);
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		uVar0 = iParam2;
		unk_0x4D51E59243281D80(iParam0, bParam1, uVar0);
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
		if (!func_68())
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
		if (unk_0x1DB8366B5C46DA9E(iParam0) && unk_0xBFFB35986CAAE58C(iParam0))
		{
			iVar23 = unk_0x275F255ED201B937(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x03A753E2C8458335())
				{
					unk_0x30CA38A6AD35A13C(1);
				}
				else
				{
					unk_0x1794B4FCC84D812F(iVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x03A753E2C8458335() && !bVar18)
					{
						unk_0x30CA38A6AD35A13C(0);
					}
					Global_2414009[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_67(iVar23) && !unk_0x12DF6E0D2E736749(iVar23))
				{
					if (!bVar21)
					{
						unk_0xF66F820909453B8C(iVar23, true, 0);
					}
				}
				if (!unk_0xEE6AD63ABF59C0B7(iVar23))
				{
					if (!bVar20)
					{
						unk_0x7D9EFB7AD6B19754(iVar23, false);
					}
					unk_0x740CB4F3F602C9F4(iVar23, 1);
				}
				else if (!bVar20)
				{
					unk_0x7D9EFB7AD6B19754(iVar23, false);
				}
				unk_0x5E95290AF8605EA1(iVar23, true);
				unk_0xFEBEEBC9CBDF4B12(iParam0, 0);
				unk_0x91D19B576BF4F612(iVar23);
				unk_0x98FB75840705964B(iVar23, 1);
				func_66();
				func_65();
				if (unk_0x085EEAEB8783FEB5())
				{
				}
				if (unk_0xEEA50AAE36800059())
				{
				}
				Global_2414009[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar23) && !unk_0x12DF6E0D2E736749(iVar23))
				{
					if (!bVar21)
					{
						unk_0xF66F820909453B8C(iVar23, !bVar14, 0);
					}
					if (!unk_0xEE6AD63ABF59C0B7(iVar23))
					{
						if (!bVar20)
						{
							unk_0x7D9EFB7AD6B19754(iVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x740CB4F3F602C9F4(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xFEBEEBC9CBDF4B12(iParam0, 0);
				}
				else
				{
					unk_0xFEBEEBC9CBDF4B12(iParam0, 1);
				}
				unk_0x5E95290AF8605EA1(iVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0xE1DC391E8CC41219(iVar23) && !unk_0x52BE10F427339B39(iVar23, 0))
					{
						unk_0xFA8B88A1EF049B33(iVar23);
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
			unk_0x4D51E59243281D80(iParam0, bParam1, iVar24);
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	Global_2422140.f_676 = 0;
	Global_2422140.f_677 = 0;
	Global_2422140.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404548.f_1376 = { Var0 };
}

void func_66()
{
	Global_2404548.f_538 = 0;
	Global_2404548.f_1417 = 0;
	Global_2404548.f_420 = 0;
	Global_2414009[unk_0x217E9DC48139933D() /*254*/].f_204 = 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (unk_0x52BE10F427339B39(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x04932A97CB319DE0(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_68()
{
	if (func_69() == 0)
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	return Global_1312467.f_18;
}

void func_70()
{
	int iVar0;
	
	if (bLocal_49)
	{
		return;
	}
	Local_42.f_4 = 0;
	if (!func_71(Global_35760[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x9C1C462D7B1DD1F9(500, 3000);
	Local_59.f_0 = 5;
	Local_54.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_71(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_82();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x6CFF81397164A1D3(Local_42.f_1))
	{
		if (unk_0x52BE10F427339B39(Local_42.f_1, 0) || unk_0x29B959D9755B1A71(Local_42.f_1))
		{
			return 0;
		}
		if (unk_0x5E1CC2E8DC3111DD(Local_42.f_1))
		{
			return 0;
		}
		if (func_78(Local_42.f_1))
		{
			return 0;
		}
	}
	if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_35760[iLocal_63 /*5*/].f_4 < 9 && Global_35760[iLocal_63 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_77(iParam0);
	if (unk_0x2CF12F9ACF18F048(uVar1))
	{
		return 0;
	}
	if (func_78(Local_42.f_1))
	{
		return 0;
	}
	unk_0xEF7611B57A820126(sVar1);
	if (func_74(Local_42.f_1))
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
		if (!unk_0x2CF12F9ACF18F048(sVar2) && !unk_0x2CF12F9ACF18F048(sVar3))
		{
			unk_0xA862A2AD321F94B4(sVar2);
			while (!unk_0x27FF6FE8009B40CA(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x6CFF81397164A1D3(Local_42.f_1))
			{
				unk_0x8DBC05C86F873CC9(Local_42.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_53 = sVar3;
			}
		}
	}
	if (!unk_0x1F23D6B6DA1CC3B2(sVar1))
	{
		return 0;
	}
	if (unk_0x6CFF81397164A1D3(Local_42.f_1))
	{
		return 0;
	}
	unk_0xCC853EDF7160419D(Local_42.f_1, sVar1, 0.75f);
	if (unk_0x420537F38720164C() == 4)
	{
		unk_0x4BB0EEAA8F9C76F0(Local_42.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x0A77451A8C5B6E36(Local_42.f_1, 0, sVar1, "idle", 2f, 1);
	Local_59.f_2 = sVar1;
	bLocal_50 = true;
	iVar4 = 0;
	switch (func_60(Local_42.f_1))
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
			if (unk_0xDB07CF49373224B8(Local_42.f_1))
			{
				if (!func_72())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xD275D621ABBB1F83(Local_42.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x7FA9D4264D459354(Local_42.f_1, "mood_drunk_1", iVar4);
	unk_0x28AC5FC91EA70789(Local_42.f_1, 200, 1);
	unk_0x28AC5FC91EA70789(Local_42.f_1, 46, 1);
	unk_0x4FE2FB654BF367EB(Local_42.f_1, 0);
	unk_0xF6482620334B0094(Local_42.f_1, 262144, 1);
	unk_0x4BC10DEC81BFC45A(Local_42.f_1, 1);
	return 1;
}

bool func_72()
{
	return func_73(unk_0x217E9DC48139933D());
}

int func_73(int iParam0)
{
	if (unk_0xDA76A9F39210D365(unk_0x275F255ED201B937(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x52BE10F427339B39(iParam0, 1) || unk_0x29B959D9755B1A71(iParam0))
	{
		return 0;
	}
	if (unk_0x04932A97CB319DE0(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x04932A97CB319DE0(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x69BBBA1223D4C644(iParam0))
	{
		return 0;
	}
	if (unk_0xC1DB1F019BEDAE9D(iParam0))
	{
		return 0;
	}
	if (unk_0x14BDA64F4D0D5E1D(iParam0))
	{
		return 0;
	}
	if (unk_0xA97493EF63E95D58(iParam0))
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam0 == unk_0x096275889B8E0EE0())
	{
		if (!unk_0x424160AB5B6F0296(unk_0x217E9DC48139933D()))
		{
			return 0;
		}
		if (!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
		{
			return 0;
		}
		if (unk_0x936F967D4BE1CE9D(unk_0x217E9DC48139933D()) || unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
	}
	Var0 = { unk_0xC3BBBD114C2B597B(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_90014.f_291 > 0;
}

bool func_76()
{
	return unk_0x4F67E8ECA7D3F667() <= Global_17236.f_5130 + 100;
}

char* func_77(int iParam0)
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

int func_78(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_79(iParam0);
	uVar1 = func_77(iVar0);
	if (unk_0x2CF12F9ACF18F048(Local_59.f_2))
	{
		if (unk_0x2CF12F9ACF18F048(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xD3852F22AB713A1F(Local_59.f_2, sVar1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35760[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35760[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_81(int iParam0)
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
		if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
		{
			return Global_35760[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_82()
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

void func_83()
{
	if (bLocal_49)
	{
		return;
	}
	if (!func_84())
	{
		Local_59.f_0 = 5;
		Local_54.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_59.f_0 = 6;
}

bool func_84()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_42.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x7D5B1F88E7504BBA(Local_42.f_4))
	{
		return 0;
	}
	Var0 = { unk_0xA86D5F069399F44D(Local_42.f_1, 1) };
	Var3 = { unk_0xA86D5F069399F44D(Local_42.f_4, 1) };
	fVar6 = unk_0x0BE7F4E3CDBAFB28(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_85()
{
	int iVar0;
	char* sVar1;
	
	if (Local_42.f_1 == unk_0x096275889B8E0EE0())
	{
		unk_0x562F5D788AF3FA80(0, 36, 1);
		if (unk_0x42FAEF3CD9241800(Local_42.f_1))
		{
			if (Global_35760[iLocal_63 /*5*/].f_2 == 0 || Global_35760[iLocal_63 /*5*/].f_2 == 2)
			{
				unk_0x774524FA58C28A3A(Local_42.f_1, 0, 0);
			}
		}
		if (unk_0xCF59899BB01D6424(Local_42.f_1))
		{
			unk_0x5F35DB8E8F896FA7(Local_42.f_1, 0);
		}
	}
	if (Local_54.f_0 != -2)
	{
		if (Local_54.f_0 == -1)
		{
			if (Global_35760[iLocal_63 /*5*/].f_2 != 0)
			{
				Global_35760[iLocal_63 /*5*/].f_2 = 0;
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
			if (Global_35760[iLocal_63 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_35760[iLocal_63 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_35760[iLocal_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_35760[iLocal_63 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_35760[iLocal_63 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_35760[iLocal_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_35760[iLocal_63 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x2CF12F9ACF18F048(sLocal_53))
	{
		if (!func_74(Local_42.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0xDEE49D5CA6C49148(Local_42.f_1, sVar1, sLocal_53, 3))
			{
				unk_0x5CCBE40879FC8E8E(Local_42.f_1, sVar1, sLocal_53, -4f);
			}
			sLocal_53 = "";
			return;
		}
	}
	if (Global_35760[iLocal_63 /*5*/].f_3 >= 10 || Global_35760[iLocal_63 /*5*/].f_4 >= 15)
	{
		if (unk_0x04932A97CB319DE0(Local_42.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x9F878CD59A8920FD(Local_42.f_1))
		{
			return;
		}
		if (unk_0x52BE10F427339B39(Local_42.f_1, 1))
		{
			if (Global_35760[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_35760[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_35760[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_35760[iLocal_63 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_59.f_1 = 3;
		return;
	}
	if (!bLocal_50)
	{
		return;
	}
	if (!func_78(Local_42.f_1))
	{
		return;
	}
}

int func_86()
{
	int iVar0;
	
	if (!unk_0x08B96A437661F1BC(Local_42.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xB3598EA616C3FFC3(Local_42.f_1, 0);
	if (!unk_0xB86D29B10F627379(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xD214895E39AA3787(iVar0, -1) == Local_42.f_1)
	{
		return 0;
	}
	Local_42.f_4 = iVar0;
	Local_59.f_0 = 7;
	return 1;
}

void func_87()
{
	if (!unk_0x52BE10F427339B39(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		return;
	}
}

void func_88()
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
	if (!unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		return;
	}
	if (!unk_0x08B96A437661F1BC(unk_0x096275889B8E0EE0()))
	{
		return;
	}
	if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
	{
		return;
	}
	iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
	fVar1 = unk_0xFB6BA510A533DF81(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0xE4D1851579AECF73(Var5, Var8) && !unk_0x59E02EA311B86CAC(Var5, Var8))
	{
		return;
	}
	unk_0x4AC45C1D14A80EF0(unk_0x217E9DC48139933D(), 1, 0);
	unk_0xC3FF220EE8A94778(unk_0x217E9DC48139933D(), 0);
	func_8(73, 1);
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_42.f_1;
	if (unk_0x52BE10F427339B39(Local_42.f_1, 0))
	{
		iVar1 = unk_0xB3598EA616C3FFC3(Local_42.f_1, 0);
		iVar2 = unk_0xD214895E39AA3787(iVar1, -1);
		if (!iVar2 == Local_42.f_1)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x096275889B8E0EE0() == Local_42.f_1)
	{
		return;
	}
	else if (!unk_0x420537F38720164C() == 4)
	{
		fLocal_52 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_4)
	{
		func_91(iVar0, fLocal_52);
		return;
	}
	if (unk_0xCF8176912DDA4EA5(iVar0))
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xFB6BA510A533DF81(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_52 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (Local_54.f_1 == -1)
	{
		fLocal_52 = func_90(iVar0, 0.13f, 0.06f);
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
			fLocal_52 = func_90(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_52 = func_90(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_52 = func_90(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_52 = func_90(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_52 = func_90(iVar0, 0.13f, 0.06f);
		}
	}
	func_91(iVar0, fLocal_52);
}

float func_90(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0xE29F927A961F8AAA(-fParam1, fParam1);
	fVar1 = unk_0xE29F927A961F8AAA(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xCF8176912DDA4EA5(iParam0))
	{
		if (unk_0x5040BD184F70BF0A(unk_0x0F16D042BD640EA3(iParam0)))
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
		iVar2 = unk_0xDA76A9F39210D365(iParam0);
		if (unk_0x7331BD1F2125CC77(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_18(fVar0, -1f, 1f);
	return fVar0;
}

void func_91(int iParam0, float fParam1)
{
	if (unk_0xCF8176912DDA4EA5(iParam0))
	{
		unk_0x06AFA52DD061AB4C(unk_0x0F16D042BD640EA3(iParam0), fParam1);
	}
	else if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x84DAAE11E9EE4FC3(unk_0xDF1E5AAC561AFC59(iParam0), fParam1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x52BE10F427339B39(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		if (Global_35760[iLocal_63 /*5*/].f_3 >= 10 || Global_35760[iLocal_63 /*5*/].f_4 >= 15)
		{
			if (Global_35760[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_35760[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_35760[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_35760[iLocal_63 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_49)
	{
		return;
	}
	iVar0 = unk_0xB3598EA616C3FFC3(Local_42.f_1, 0);
	if (!unk_0xB86D29B10F627379(iVar0, 0))
	{
		unk_0x36DBE8E570B9FBCE(Local_42.f_1, 0, 0);
		Local_59.f_0 = 11;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_54.f_3)
	{
		return;
	}
	iVar0 = unk_0x04932A97CB319DE0(unk_0x096275889B8E0EE0(), 355471868);
	if (!iVar0 == 7)
	{
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x52BE10F427339B39(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		Local_54.f_3 = -2;
		return;
	}
	iVar1 = unk_0xB3598EA616C3FFC3(Local_42.f_1, 0);
	iVar2 = unk_0xD214895E39AA3787(iVar1, -1);
	if (iVar2 == Local_42.f_1)
	{
		func_94();
		Local_54.f_3 = -2;
		return;
	}
	unk_0xEF52697D7B92FDB0(Local_42.f_1, iVar1);
	Local_59.f_0 = 9;
	Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_94()
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
	func_124(iLocal_47, 2, 5);
	Local_54.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_52 = 0f;
}

void func_95()
{
	if (unk_0x08B96A437661F1BC(Local_42.f_1))
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

void func_96()
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
	if (bVar1 || unk_0x08B96A437661F1BC(Local_42.f_1))
	{
		if (!bLocal_49)
		{
		}
		iVar0 = unk_0xB3598EA616C3FFC3(Local_42.f_1, 0);
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
				unk_0x36DBE8E570B9FBCE(Local_42.f_1, 0, 0);
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
			func_94();
			return;
		}
		if (!bLocal_49)
		{
			if (!bLocal_49)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_49)
		{
		}
		iVar2 = unk_0xD214895E39AA3787(Local_42.f_4, -1);
		if (iVar2 == Local_42.f_1)
		{
			func_94();
			return;
		}
		unk_0xEF52697D7B92FDB0(Local_42.f_1, iVar0);
		Local_59.f_0 = 9;
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_84())
	{
		unk_0x0F1ABE64C3C18E5A(Local_42.f_1);
		Local_59.f_0 = 4;
		return;
	}
	if (!bLocal_49)
	{
		iVar3 = unk_0x04932A97CB319DE0(Local_42.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x52BE10F427339B39(Local_42.f_1, 0))
			{
				unk_0x0F1ABE64C3C18E5A(Local_42.f_1);
				Local_59.f_0 = 4;
				return;
			}
		}
	}
}

void func_97()
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
	if (!unk_0xB86D29B10F627379(Local_42.f_4, 0))
	{
		Local_42.f_4 = 0;
		Local_59.f_0 = 4;
		return;
	}
	Var0 = { unk_0xA86D5F069399F44D(Local_42.f_1, 1) };
	Var3 = { unk_0xA86D5F069399F44D(Local_42.f_4, 1) };
	fVar6 = unk_0x0BE7F4E3CDBAFB28(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_35760[iLocal_63 /*5*/].f_2))
		{
			Local_59.f_0 = 12;
			return;
		}
		Local_59.f_0 = 5;
		Local_54.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0xA9C55F1C15E62E06(Local_42.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0xE052C1B1CAA4ECE4(Local_42.f_4, iVar8))
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
	func_98();
	unk_0x12C24A48BF610759(Local_42.f_1, Local_42.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_59.f_0 = 7;
}

void func_98()
{
	if (!unk_0xD42BD6EB2E0F1677(Local_42.f_1))
	{
		return;
	}
	if (!unk_0x6CFF81397164A1D3(Local_42.f_1))
	{
		unk_0x4F94F6F61C24F87C(Local_42.f_1, 1048576000);
		unk_0xCE2DEF98A913D6FF(Local_42.f_1);
		unk_0x118A64A861EBA12E(Local_42.f_1, 0, -1056964608);
		Local_59.f_2 = "";
		unk_0xC67675DEA886160C(Local_42.f_1);
		unk_0x28AC5FC91EA70789(Local_42.f_1, 200, 0);
		unk_0x28AC5FC91EA70789(Local_42.f_1, 46, 0);
		unk_0x4FE2FB654BF367EB(Local_42.f_1, 1);
		unk_0xF6482620334B0094(Local_42.f_1, 262144, 0);
		unk_0x4BC10DEC81BFC45A(Local_42.f_1, 0);
	}
	if (!bLocal_50)
	{
		return;
	}
	bLocal_50 = false;
}

void func_99()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_2)
	{
		func_85();
		return;
	}
	func_100();
	Local_54.f_2 = -2;
	Local_59.f_0 = 12;
}

int func_100()
{
	if (!func_78(Local_42.f_1))
	{
		return 0;
	}
	if (!bLocal_50)
	{
		return 0;
	}
	func_101(Local_42.f_1);
	Local_59.f_2 = "";
	return 1;
}

void func_101(int iParam0)
{
	unk_0x4F94F6F61C24F87C(uParam0, 1048576000);
	unk_0x118A64A861EBA12E(uParam0, 0, -1056964608);
	unk_0x28AC5FC91EA70789(uParam0, 200, 0);
	unk_0x4FE2FB654BF367EB(iParam0, 1);
	unk_0xF6482620334B0094(iParam0, 262144, 0);
	unk_0x4BC10DEC81BFC45A(iParam0, 0);
}

void func_102()
{
	int iVar0;
	
	if (Local_54.f_0 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x52BE10F427339B39(Local_42.f_1, 0))
	{
		Local_59.f_0 = 10;
		return;
	}
	if (func_78(Local_42.f_1))
	{
		Local_59.f_0 = 12;
		return;
	}
	if (Local_54.f_0 == -2)
	{
		return;
	}
	if (!func_71(Global_35760[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	Local_59.f_0 = 12;
}

void func_103()
{
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_35841[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_35841[iVar1 /*5*/].f_1 == iLocal_47)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_35841[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_48 == -1)
				{
					if (iLocal_48 == Global_35841[iVar1 /*5*/])
					{
						func_106(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_105(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_35841[iParam0 /*5*/] = -1;
	Global_35841[iParam0 /*5*/].f_1 = -1;
	Global_35841[iParam0 /*5*/].f_2 = 6;
	Global_35841[iParam0 /*5*/].f_3 = 0;
	Global_35841[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_35841[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_35841[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_109();
			break;
		
		case 4:
			func_108();
			break;
		
		case 5:
			func_107();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_107()
{
	Local_59.f_1 = 2;
}

void func_108()
{
	int iVar0;
	
	Global_35760[iLocal_63 /*5*/].f_4++;
	if (Local_54.f_0 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_4 < 9 && Global_35760[iLocal_63 /*5*/].f_4 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_35760[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_109()
{
	int iVar0;
	
	Global_35760[iLocal_63 /*5*/].f_3++;
	if (Local_54.f_0 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_35760[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_110(int iParam0)
{
	Local_42.f_3 = (Local_42.f_3 + iParam0);
	Local_42.f_2 = (Local_42.f_2 + iParam0);
	Local_54.f_1 = (Local_54.f_1 + iParam0);
	Local_54.f_0 = (Local_54.f_0 + iParam0);
}

void func_111()
{
	int iVar0;
	
	if (!bLocal_49)
	{
		iLocal_62 = -1;
		return;
	}
	if (iLocal_62 < 0)
	{
		iLocal_62 = unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D());
		return;
	}
	iVar0 = unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D());
	if (iVar0 != iLocal_62)
	{
		if (iVar0 > iLocal_62)
		{
			func_112();
		}
		iLocal_62 = iVar0;
		return;
	}
}

void func_112()
{
}

void func_113()
{
	if (!Local_54.f_0 == -1)
	{
		if (!Local_54.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_54.f_0)
			{
				func_98();
				Local_54.f_0 = -2;
				Local_59.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_54.f_1)
		{
			func_131();
		}
	}
}

void func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35841[iVar0 /*5*/])
		{
			func_105(iVar0);
		}
		iVar0++;
	}
}

void func_115()
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
	if (!unk_0x7D5B1F88E7504BBA(Local_42.f_1))
	{
		if (unk_0x08B96A437661F1BC(Local_42.f_1))
		{
			Local_59.f_0 = 10;
		}
	}
	if (bLocal_49)
	{
		func_122();
		func_8(71, 1);
		if (unk_0x03A753E2C8458335())
		{
			iVar0 = func_121(2041, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			func_116(2041, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x380F22FED8D528A4(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x380F22FED8D528A4(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x380F22FED8D528A4(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0xA4DDF5DF95E65EED(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0xA4DDF5DF95E65EED(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0xA4DDF5DF95E65EED(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_59.f_1 = 1;
		return;
	}
	Local_59.f_1 = 12;
	if (Local_54.f_0 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, iParam1, iParam3);
	}
}

int func_117(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

var func_118()
{
	return Global_1312737;
}

void func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = func_120(81);
	Global_2408820[iVar0 /*83*/] = 81;
	Global_2408820[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408820[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408820[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_117(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122()
{
}

void func_123()
{
	Local_54.f_0 = Local_42.f_2;
	Local_54.f_1 = Local_42.f_3;
	Local_54.f_2 = -2;
	Local_54.f_3 = -2;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	func_125(iParam0, iParam1, iParam2, 0, 0);
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_127(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_126();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = iParam4;
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35841[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	if (func_128(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35841[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35841[iVar0 /*5*/])
			{
				if (iParam1 == Global_35841[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_129()
{
	int iVar0;
	
	bLocal_49 = false;
	if (Local_42.f_1 == unk_0x096275889B8E0EE0())
	{
		bLocal_49 = true;
		Global_35956 = 1;
		Global_35958++;
	}
	if (!unk_0x7D5B1F88E7504BBA(Local_42.f_1))
	{
		iVar0 = func_60(Local_42.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0xD937A3C5EF78C429(Local_42.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0xD937A3C5EF78C429(Local_42.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_130()
{
	if (!iLocal_47 == -1)
	{
		return;
	}
	iLocal_47 = func_81(Local_42.f_1);
	if (iLocal_47 == -1)
	{
		return;
	}
	iLocal_63 = func_80(iLocal_47);
}

void func_131()
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!unk_0x7D5B1F88E7504BBA(Local_42.f_1))
		{
			iVar0 = func_60(Local_42.f_1);
			if (Global_35760[iLocal_63 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0xD937A3C5EF78C429(Local_42.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0xD937A3C5EF78C429(Local_42.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_49)
	{
		Global_35956 = 0;
	}
	func_132();
	unk_0x4763145053A33D46(func_77(0));
	unk_0x4763145053A33D46(func_77(2));
	unk_0x4763145053A33D46(func_77(1));
	if (unk_0x8E34C953364A76DD(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x5E8B6D17FF91CD59();
}

void func_132()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x7D5B1F88E7504BBA(Local_42.f_1))
	{
		return;
	}
	uVar0 = Local_42.f_1;
	if (unk_0x52BE10F427339B39(Local_42.f_1, 0))
	{
		uVar1 = unk_0xB3598EA616C3FFC3(Local_42.f_1, 0);
		iVar2 = unk_0xD214895E39AA3787(uVar1, -1);
		if (!Local_42.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x420537F38720164C() == 4 || !unk_0x096275889B8E0EE0() == Local_42.f_1)
	{
		return;
	}
	fLocal_52 = 0f;
	func_91(uVar0, 0f);
}

void func_133(var uParam0, char* sParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(uParam0, sParam1, func_134(iParam2), 1);
}

int func_134(int iParam0)
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

