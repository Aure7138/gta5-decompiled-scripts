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
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<11> Local_55[30];
	int iLocal_386 = 0;
	var uLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	var uLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393[4] = { 0, 0, 0, 0 };
	float fLocal_398[4] = { 0f, 0f, 0f, 0f };
	float fLocal_403 = 0f;
	float fLocal_404 = 0f;
	float fLocal_405 = 0f;
	int iLocal_406 = 0;
	bool bLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_388 = -1;
	iLocal_406 = 1;
	uLocal_408 = unk_0x3DF2C10FD29336A3();
	if (unk_0xBCA819F9975BEDFA(210))
	{
		func_77(1);
	}
	if (unk_0x82F1A060D8F4583B(joaat("ambient_diving")) > 1)
	{
		unk_0x921053BAF754303D();
	}
	func_76(27);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73(0))
		{
			if (!iLocal_412)
			{
				func_77(0);
				iLocal_412 = 1;
			}
		}
		else
		{
			iLocal_412 = 0;
			func_72(unk_0x17B5CC8A8615737D());
			switch (iLocal_386)
			{
				case 0:
					func_67();
					break;
				
				case 1:
					func_64();
					func_55();
					func_1();
					break;
				
				case 2:
					func_55();
					break;
				
				case 3:
					func_77(1);
					break;
				}
		}
	}
}

void func_1()
{
	if (func_18(&Local_42, &Local_55) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_407)
			{
				bLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)
{
	iLocal_386 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_7(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x48B8265059381CD0(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_101700.f_6647.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_101700.f_6647.f_911 == Var0.f_0)
		{
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x94E3E074F38DF86C() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x21E7933CCC7B3724(&(Var0.f_1), 1);
		unk_0x21E7933CCC7B3724(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xEB79FECD9022AAF0(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xEB79FECD9022AAF0(&(Var0.f_1), 10);
		}
		Global_101700.f_6647[Global_101700.f_6647.f_136 /*15*/] = { Var0 };
		Global_101700.f_6647.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0x48B8265059381CD0(iParam2, iVar15))
			{
				func_4(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_6647[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101700.f_6647[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101700.f_6647[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101700.f_6647.f_764)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_6647.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101700.f_6647.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101700.f_6647.f_919[iParam0] = iVar1;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_12(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_11() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

int func_11()
{
	return Global_25190;
}

int func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(iVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1312735;
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		Global_101700.f_13010.f_89 = 1;
	}
	else
	{
		Global_101700.f_13010.f_89 = 0;
	}
}

int func_16()
{
	if (unk_0x82F1A060D8F4583B(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	
	unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D());
	Var2 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_54(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!func_53((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_36(uParam0, iParam1, Var2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_69962)
		{
			func_26(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_389, &uLocal_387, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			Var5 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			if (func_24(&Local_42, &Local_55, Var5, &iVar8))
			{
				if (unk_0x3DC4639D5F23DEA2(func_23(iVar8), Var5, 0) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_407)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_19369.f_150[iVar1]), iVar0);
	}
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6A7B0D91FD88D9EE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_19369[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9)
	{
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4), sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = (unk_0x94E3E074F38DF86C() + iParam3);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = ((unk_0x94E3E074F38DF86C() + iParam3) + iParam4);
		}
		else
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_22();
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0])
			{
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1])
			{
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2])
			{
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_54(&(uParam0->f_1), iVar0))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x48B8265059381CD0(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	
	func_35(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0xB50E108F09B8EC7A("MIDSIZED_MESSAGE");
				if (unk_0xFF84A94166FBB351(*uParam5))
				{
					uVar0 = unk_0x3DF2C10FD29336A3();
					if (iParam3 == 6)
					{
						unk_0x4988C48537D1AE4F(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x4988C48537D1AE4F(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0xEAC9A8A194DF8F91(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0xDCEB60B79ECB219E(sParam6);
				unk_0x1798EBF9408190D3();
				unk_0xDCEB60B79ECB219E(sParam7);
				unk_0x69967F83C1E636E2(func_28(iParam3));
				unk_0x1798EBF9408190D3();
				unk_0x44983883E630A945();
				*uParam2 = unk_0x94E3E074F38DF86C();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x94E3E074F38DF86C() - *uParam2) > 7000)
				{
					unk_0xEAC9A8A194DF8F91(*uParam5, "SHARD_ANIM_OUT");
					unk_0xDF18CF55301CEB8B(1);
					unk_0x584CF9CAE83942E5(0.33f);
					unk_0x44983883E630A945();
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0xFF84A94166FBB351(*uParam5))
					{
						func_35(1);
						unk_0x90101FEE397F4A7E(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x94E3E074F38DF86C() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0xFF84A94166FBB351(*uParam5))
					{
						func_35(1);
						unk_0x90101FEE397F4A7E(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xFF84A94166FBB351(*uParam5))
				{
					unk_0x33CBABDFE7B17924(uParam5);
				}
				func_35(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_27()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			if (unk_0x48B8265059381CD0(Global_101700.f_9008.f_108, func_33(func_34(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x7FE4F330D3D74809(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x7FE4F330D3D74809(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x7FE4F330D3D74809(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = (func_32(iParam0) + iVar1);
			if (func_29(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x083FFE917EBA1560(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_32(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_34(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_35(int iParam0)
{
	if (Global_69969 != iParam0)
	{
		Global_69969 = iParam0;
	}
}

int func_36(var uParam0, var uParam1, struct<3> Param2)
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x386274C5877FE8E9((uParam1[iVar0 /*11*/])->f_1) || func_49((uParam1[iVar0 /*11*/])->f_1))
			{
				func_39(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xAF6D1E258B973F1D((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0xE63C64081D02EFD3((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(13)) || func_38(14))
		{
			func_37(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (unk_0xAF6D1E258B973F1D(*uParam0))
	{
		unk_0xC2E11A6D29A07A71(*uParam0);
	}
}

bool func_38(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_39(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_32(*uParam0) + iParam2);
	func_37(&((uParam1[iParam2 /*11*/])->f_1));
	func_48(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_47(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_46(*uParam0, iParam2, 1);
	}
	unk_0x1C7515726465BC07(0, 200, 250);
	unk_0xBA7C565ADABC4947(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_45(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_43(&(uParam0->f_1));
	}
	func_41();
	unk_0x8F9035CABA266EA0(iVar0);
	func_40(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

void func_40(int iParam0, int iParam1)
{
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0x7FE4F330D3D74809(func_42(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	unk_0x7FE4F330D3D74809(func_42(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	unk_0x7FE4F330D3D74809(func_42(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = ((func_34(0) + func_34(1)) + func_34(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x731753D8494ABECD(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_42(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_54(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = (unk_0x94E3E074F38DF86C() + iParam1);
}

void func_45(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_54(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_9008.f_122), iParam1);
			}
			else
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_9008.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_9008.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_9008.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_9008.f_125), iParam1);
			}
			else
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_9008.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_9008.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_9008.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_47(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0xEB79FECD9022AAF0(uParam0, iParam1);
		}
		else
		{
			unk_0x21E7933CCC7B3724(uParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(uParam0->f_1), (iParam1 - 32));
	}
}

void func_48(var uParam0)
{
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x5ACBCE67F0494242(*uParam0, 0);
		unk_0x020DF7300725ECAB(uParam0);
	}
}

int func_49(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xAF6D1E258B973F1D(uParam0))
	{
		return 0;
	}
	if (func_50(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			iVar1 = unk_0x0324EEB10F81965F(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0xE63C64081D02EFD3(uParam0)) < (5f * 5f) || unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), unk_0x936571E46A80DCC8(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_50(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_51(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (!func_38(13) && !func_38(14))
			{
				if (!unk_0xAF6D1E258B973F1D(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0xE1324F59713746FA(uParam1);
						while (!unk_0x9F746898F7881612(uParam1))
						{
							unk_0xE1324F59713746FA(uParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_52(uParam0->f_3);
						}
						unk_0x1B60289D0F2A2E3C(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xEB79FECD9022AAF0(&uVar0, 1);
							uParam0->f_1 = unk_0xC70DFF4A4A4D72AB(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0xEB79FECD9022AAF0(&uVar0, 3);
							unk_0xEB79FECD9022AAF0(&uVar0, 4);
							unk_0xEB79FECD9022AAF0(&uVar0, 8);
							unk_0xEB79FECD9022AAF0(&uVar0, 1);
							uParam0->f_1 = unk_0xA26C2D9EE51CAC7D(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0x924CDE68BA2ED3BA(uParam1);
					}
				}
			}
			if (unk_0xAF6D1E258B973F1D(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_52(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x1A4C1C534F86E06A(Param0);
	if (unk_0x623BDE1B17A9D9E3(uVar0))
	{
		unk_0xB746CFFEAA8CB784(uVar0);
		while (!unk_0x1F02DB541727C048(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0xDD5B92F304023AEF(uVar0);
	}
}

bool func_53(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0x48B8265059381CD0(*uParam0, iParam1);
	}
	return unk_0x48B8265059381CD0(uParam0->f_1, (iParam1 - 32));
}

void func_55()
{
	float fVar0;
	
	switch (iLocal_411)
	{
		case 0:
			if (func_62())
			{
				if (func_50(uLocal_409))
				{
					func_61();
					unk_0x83E56A7E8E3D71F1(uLocal_409, 0);
					iLocal_411 = 1;
					if (iLocal_386 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_50(uLocal_409) && func_50(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(unk_0x17B5CC8A8615737D(), uLocal_409, 0) > fVar0)
				{
					func_59();
					if (iLocal_386 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_386 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_386 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (func_50(uLocal_409))
				{
					if (!unk_0xA3794949321E107C(uLocal_410))
					{
						uLocal_410 = func_56(uLocal_409, 0, 0);
					}
					unk_0x524A422B74847594(uLocal_409, 0, 1, 0);
					if (unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(uLocal_409)))
					{
						if (!unk_0xDF0087E7822095AA(uLocal_409))
						{
							unk_0x83E56A7E8E3D71F1(uLocal_409, 1);
						}
					}
					iLocal_411 = 0;
				}
			}
			break;
	}
}

int func_56(var uParam0, bool bParam1, bool bParam2)
{
	return func_57(uParam0, !bParam1, bParam2);
}

int func_57(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(uParam0);
	if (unk_0x3983CCB0D958159C(uParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_58(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(uParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_58(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(uParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_58(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()
{
	func_61();
	if (func_50(uLocal_409))
	{
		if (unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(uLocal_409)))
		{
			unk_0x83E56A7E8E3D71F1(uLocal_409, 0);
		}
		unk_0xF7190FFAC79BD5C5(uLocal_409, 0);
		if (unk_0xC26429B504BA534D(uLocal_409))
		{
			unk_0x921CF98C637B0043(&uLocal_409);
		}
	}
}

float func_60(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(uParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(uParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
}

void func_61()
{
	if (unk_0xA3794949321E107C(uLocal_410))
	{
		unk_0x020DF7300725ECAB(&uLocal_410);
	}
}

int func_62()
{
	if (func_50(unk_0x17B5CC8A8615737D()))
	{
		if (func_50(uLocal_409))
		{
			if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), uLocal_409, 0))
			{
				return 1;
			}
		}
		else if (func_63())
		{
			uLocal_409 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x23E9113C762466ED(uLocal_409))
			{
				unk_0xF0F77C99098F999B(uLocal_409, 1, 1);
				unk_0xF7190FFAC79BD5C5(uLocal_409, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_63()
{
	var uVar0;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (unk_0x23E9113C762466ED(uVar0))
		{
			if (unk_0x0324EEB10F81965F(uVar0) == joaat("dinghy") || unk_0x0324EEB10F81965F(uVar0) == joaat("dinghy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_64()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	
	Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	if (func_24(&Local_42, &Local_55, Var0, &iLocal_388))
	{
		Var3 = { func_23(iLocal_388) };
		fVar6 = unk_0x3DC4639D5F23DEA2(Var3, Var0, 0);
		if (fVar6 > 200f)
		{
			func_66();
			if (!iLocal_406)
			{
				iLocal_406 = 1;
			}
			if (func_63())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_388 != iLocal_391)
				{
					if (unk_0xA3794949321E107C(uLocal_390))
					{
						unk_0x020DF7300725ECAB(&uLocal_390);
					}
				}
				if (!unk_0xA3794949321E107C(uLocal_390))
				{
					uLocal_390 = unk_0x2528C64BC2C01C92(Var3, 200f);
					unk_0x5F97CFBDE7F2B599(uLocal_390, 128);
					unk_0xCC930AE12D020496(uLocal_390, 2);
					unk_0x5202472B608D60CC(uLocal_390, 0);
					unk_0xAAF15482D9DB27D9(uLocal_390, "B_WRE");
					unk_0x1441D969BF79AD61(uLocal_390, 0);
					iLocal_391 = iLocal_388;
				}
			}
			else if (unk_0xA3794949321E107C(uLocal_390))
			{
				unk_0x020DF7300725ECAB(&uLocal_390);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()) && !unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (unk_0xA3794949321E107C(uLocal_390))
			{
				unk_0x020DF7300725ECAB(&uLocal_390);
			}
			if (iLocal_388 != iLocal_391)
			{
				func_66();
				iLocal_391 = iLocal_388;
				iLocal_406 = 1;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3)
			{
				if (iLocal_406)
				{
					fLocal_403 = 0f;
					fLocal_404 = fVar6;
					if (func_63())
					{
						fLocal_404 = func_65(fLocal_404, 20f, 200f);
					}
					else
					{
						fLocal_404 = func_65(fLocal_404, 10f, 200f);
					}
					fLocal_405 = (fLocal_404 * 0.025f);
					iLocal_406 = 0;
					if (func_63())
					{
						unk_0x4876B73C5A534970(uLocal_408, "SINGLE_BLIP_FROM_BOAT", Var3, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else
					{
						unk_0x4876B73C5A534970(uLocal_408, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else
				{
					fLocal_403 = (fLocal_403 + fLocal_405);
					fLocal_403 = func_65(fLocal_403, 0f, fLocal_404);
					if (!unk_0xA3794949321E107C(uLocal_392))
					{
						uLocal_392 = unk_0x2528C64BC2C01C92(Var3, fLocal_403);
						unk_0x5F97CFBDE7F2B599(uLocal_392, 255);
						unk_0xCC930AE12D020496(uLocal_392, 4);
						unk_0x7E2A76828C48BFB2(uLocal_392, 1);
						unk_0x66EF553C95DBD200(uLocal_392, 1);
						unk_0x1441D969BF79AD61(uLocal_392, 0);
					}
					else
					{
						unk_0x00EA14207118EEE2(uLocal_392, fLocal_403);
					}
					iVar7 = 0;
					if (func_63())
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (!unk_0xA3794949321E107C(uLocal_393[iVar7]))
							{
								uLocal_393[iVar7] = unk_0x2528C64BC2C01C92(Var3, (fLocal_403 + fLocal_398[iVar7]));
								unk_0x5F97CFBDE7F2B599(uLocal_393[iVar7], 255);
								unk_0xCC930AE12D020496(uLocal_393[iVar7], 4);
								unk_0x7E2A76828C48BFB2(uLocal_393[iVar7], 1);
								unk_0x66EF553C95DBD200(uLocal_393[iVar7], 1);
								unk_0x1441D969BF79AD61(uLocal_393[iVar7], 0);
							}
							else
							{
								unk_0x00EA14207118EEE2(uLocal_393[iVar7], (fLocal_403 + fLocal_398[iVar7]));
							}
							iVar7++;
						}
					}
					else
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (unk_0xA3794949321E107C(uLocal_393[iVar7]))
							{
								unk_0x00EA14207118EEE2(uLocal_393[iVar7], fLocal_403);
							}
							iVar7++;
						}
					}
					if (fLocal_403 >= fLocal_404)
					{
						iLocal_406 = 1;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
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

void func_66()
{
	int iVar0;
	
	if (unk_0xA3794949321E107C(uLocal_392))
	{
		unk_0x020DF7300725ECAB(&uLocal_392);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (unk_0xA3794949321E107C(uLocal_393[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_67()
{
	iLocal_389 = 0;
	if (func_62())
	{
		iLocal_411 = 1;
	}
	else
	{
		iLocal_411 = 0;
	}
	func_71();
	func_70(&Local_42, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_42, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_398[0] = 0.25f;
	fLocal_398[1] = 0.5f;
	fLocal_398[2] = 0.75f;
	fLocal_398[3] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_69(&(uParam0->f_1), iParam2, iParam3);
}

void func_69(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_29((uParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_47(uParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_55[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_55[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_55[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_55[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_55[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_55[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_55[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_55[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_55[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_55[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_55[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_55[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_55[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_55[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_55[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_55[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_55[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_55[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_55[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_55[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_55[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_55[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_55[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_55[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_55[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_55[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_55[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_55[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_55[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_55[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_55[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_55[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

bool func_72(var uParam0)
{
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	return !unk_0xA929B2923D14E2F8(uParam0, 0);
}

int func_73(int iParam0)
{
	if (Global_35781 == 15)
	{
		return 0;
	}
	if (func_74(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, Global_35781);
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_8044.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_77(bool bParam0)
{
	int iVar0;
	
	if (unk_0xA3794949321E107C(uLocal_390))
	{
		unk_0x020DF7300725ECAB(&uLocal_390);
	}
	func_66();
	if (!unk_0x7DFE463FA760D738(uLocal_408))
	{
		unk_0x2EB37CDED0E516F3(uLocal_408);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		func_48(&(Local_55[iVar0 /*11*/].f_2));
		func_37(&(Local_55[iVar0 /*11*/].f_1));
		Local_55[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_79(&(Local_42.f_1)) || func_17(110) == 1)
		{
			func_78(27);
		}
		unk_0x924CDE68BA2ED3BA(Local_42.f_7);
		unk_0x921053BAF754303D();
	}
	else
	{
		iLocal_386 = 0;
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[iVar0], iVar1))
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_8044.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

