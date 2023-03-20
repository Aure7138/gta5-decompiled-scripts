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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_56 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar18;
	int iVar19;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	Local_50 = { 1694.74f, 3276.502f, 41.2796f };
	Local_53 = { 8.79494f, 0.59893f, 154.8464f };
	unk_0x69BC3CC82D2BC993();
	unk_0xBE8D9288BC309C7D(0);
	unk_0x2A28AC114D3E5AD9(0);
	unk_0xEE3240EAE773A95A("prologue_DistantLights");
	unk_0xEE3240EAE773A95A("prologue_LODLights");
	iLocal_56 = 0;
	bVar0 = func_41();
	if (unk_0x5DDBC5DC47754D67() || unk_0x6B0438914761A08F())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		unk_0xCC62111059960999();
	}
	unk_0x2F501823004C19D0(0);
	func_40(joaat("mp_registration"), 1424);
	unk_0x0594C68074129537(joaat("mp_registration"));
	func_40(joaat("mp_fm_registration"), 1424);
	unk_0x0594C68074129537(joaat("mp_fm_registration"));
	func_40(joaat("tunables_registration"), 1424);
	unk_0x0594C68074129537(joaat("tunables_registration"));
	func_40(joaat("sc_lb_global_block"), 1424);
	unk_0x0594C68074129537(joaat("sc_lb_global_block"));
	func_40(joaat("mp_save_game_global_block"), 1424);
	unk_0x0594C68074129537(joaat("mp_save_game_global_block"));
	func_40(joaat("mp_prop_global_block"), 1424);
	unk_0x0594C68074129537(joaat("mp_prop_global_block"));
	func_40(joaat("title_update_registration"), 1424);
	unk_0x0594C68074129537(joaat("title_update_registration"));
	Global_2559338 = 0;
	func_40(joaat("sp_dlc_registration"), 1424);
	unk_0x0594C68074129537(joaat("sp_dlc_registration"));
	func_40(joaat("sp_pilotschool_reg"), 1424);
	unk_0x0594C68074129537(joaat("sp_pilotschool_reg"));
	func_39();
	switch (iLocal_56)
	{
		case 0:
			func_40(joaat("standard_global_init"), 1424);
			unk_0x0594C68074129537(joaat("standard_global_init"));
			break;
	}
	unk_0x4EDE34FBADD967A6(0);
	Global_69319 = 1;
	Global_2 = bVar0;
	unk_0x8793DE27084C2CBD(0f);
	switch (iLocal_56)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_40(joaat("standard_global_reg"), 1424);
			unk_0x2C85BCB989483284("standard_global_reg");
			while ((!unk_0xB56FEBC510E7E9DE(Global_2559338, 0) || !unk_0xB56FEBC510E7E9DE(Global_2559338, 1)) || !unk_0xB56FEBC510E7E9DE(Global_2559338, 2))
			{
				if (!unk_0xB56FEBC510E7E9DE(Global_2559338, 0))
				{
				}
				if (!unk_0xB56FEBC510E7E9DE(Global_2559338, 1))
				{
				}
				if (!unk_0xB56FEBC510E7E9DE(Global_2559338, 2))
				{
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xA58003F1CC850024(&Global_99250, 1, 1);
			unk_0x6A3446EC44F60226(&Global_99250, "fSaveVersion");
			unk_0x3BAF1EED7B789DC5();
			if (Global_1)
			{
				Global_0 = Global_99250;
			}
			Global_99250 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_28(Global_0);
				}
			}
			break;
	}
	unk_0xA58003F1CC850024(&Global_2097152, 10186, 0);
	unk_0x1A8BCBFFF6957403(&Global_2097152, 10186, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		func_20(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		func_18(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*10185*/]), iVar1);
		iVar1++;
	}
	unk_0xF05631B776B1535B();
	unk_0x3BAF1EED7B789DC5();
	iVar18 = 10186;
	iVar19 = unk_0x3EFF63F3B12C1C47(0);
	if (iVar18 != iVar19)
	{
	}
	if (!unk_0x7C2AB39D08DC8495() && !unk_0x6CC29FA215E1F2AA())
	{
		unk_0xB7E0ED34092883F4(0);
	}
	unk_0xC9C526F0391F4EDB(0);
	unk_0x2A28AC114D3E5AD9(0);
	func_2();
	func_1();
	unk_0x2F798BA2098FDADE();
}

void func_1()
{
	Global_30[0] = unk_0x9794B606B17FAF25(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = unk_0x9794B606B17FAF25(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = unk_0x9794B606B17FAF25(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = unk_0x9794B606B17FAF25(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = unk_0x9794B606B17FAF25(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = unk_0x9794B606B17FAF25(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = unk_0x9794B606B17FAF25(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = unk_0x9794B606B17FAF25(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = unk_0x9794B606B17FAF25(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = unk_0x9794B606B17FAF25(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = unk_0x9794B606B17FAF25(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = unk_0x9794B606B17FAF25(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = unk_0x9794B606B17FAF25(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = unk_0x9794B606B17FAF25(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = unk_0x9794B606B17FAF25(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = unk_0x9794B606B17FAF25(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = unk_0x9794B606B17FAF25(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = unk_0x9794B606B17FAF25(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = unk_0x9794B606B17FAF25(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = unk_0x9794B606B17FAF25(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = unk_0x9794B606B17FAF25(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = unk_0x9794B606B17FAF25(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = unk_0x9794B606B17FAF25(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = unk_0x9794B606B17FAF25(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = unk_0x9794B606B17FAF25(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = unk_0x9794B606B17FAF25(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = unk_0x9794B606B17FAF25(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = unk_0x9794B606B17FAF25(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = unk_0x9794B606B17FAF25(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = unk_0x9794B606B17FAF25(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = unk_0x9794B606B17FAF25(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = unk_0x9794B606B17FAF25(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = unk_0x9794B606B17FAF25(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = unk_0x9794B606B17FAF25(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = unk_0x9794B606B17FAF25(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = unk_0x9794B606B17FAF25(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = unk_0x9794B606B17FAF25(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = unk_0x9794B606B17FAF25(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = unk_0x9794B606B17FAF25(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = unk_0x9794B606B17FAF25(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = unk_0x9794B606B17FAF25(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = unk_0x9794B606B17FAF25(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = unk_0x9794B606B17FAF25(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = unk_0x9794B606B17FAF25(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = unk_0x9794B606B17FAF25(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = unk_0x9794B606B17FAF25(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = unk_0x9794B606B17FAF25(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = unk_0x9794B606B17FAF25(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = unk_0x9794B606B17FAF25(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = unk_0x9794B606B17FAF25(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = unk_0x9794B606B17FAF25(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = unk_0x9794B606B17FAF25(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = unk_0x9794B606B17FAF25(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = unk_0x9794B606B17FAF25(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = unk_0x9794B606B17FAF25(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = unk_0x9794B606B17FAF25(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = unk_0x9794B606B17FAF25(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = unk_0x9794B606B17FAF25(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = unk_0x9794B606B17FAF25(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = unk_0x9794B606B17FAF25(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = unk_0x9794B606B17FAF25(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_136294 = 1;
	Global_136295 = 1;
}

void func_3(var uParam0, int iParam1)
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10158.f_19), 8, &cVar0);
	unk_0x522B9CEFB99AD7FD(&(uParam0->f_10158.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	unk_0x0418971078797240(&(uParam0->f_10158.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	unk_0x0418971078797240(&(uParam0->f_10158.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	unk_0x0418971078797240(&(uParam0->f_10158.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	unk_0x0418971078797240(&(uParam0->f_10158.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	unk_0x0418971078797240(&(uParam0->f_10158.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	unk_0x0418971078797240(&(uParam0->f_10158.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	unk_0x0418971078797240(&(uParam0->f_10158.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	unk_0xF05631B776B1535B();
	unk_0x21117B8E797A17FB();
}

void func_5(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10158.f_15), 4, &cVar0);
	unk_0x522B9CEFB99AD7FD(&(uParam0->f_10158.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	unk_0x6A3446EC44F60226(&(uParam0->f_10158.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	unk_0x6A3446EC44F60226(&(uParam0->f_10158.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	unk_0x6A3446EC44F60226(&(uParam0->f_10158.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	unk_0xF05631B776B1535B();
	unk_0x21117B8E797A17FB();
}

void func_6(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10158.f_6), 9, &cVar0);
	unk_0xD8FD2A4D727F435F(&(uParam0->f_10158.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	unk_0x21117B8E797A17FB();
}

void func_7(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10158.f_4), 2, &cVar0);
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_10158.f_4[0]), "TEMPSTAT_BOOL");
	unk_0x21117B8E797A17FB();
}

void func_8(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10158.f_2), 2, &cVar0);
	unk_0x6A3446EC44F60226(&(uParam0->f_10158.f_2[0]), "TEMPSTAT_FLOAT");
	unk_0x21117B8E797A17FB();
}

void func_9(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10158), 2, &cVar0);
	unk_0x0418971078797240(&(uParam0->f_10158[0]), "TEMPSTAT_INT1");
	unk_0x21117B8E797A17FB();
}

void func_10(var uParam0, int iParam1)
{
	char cVar0[24];
	int iVar6;
	struct<4> Var7;
	char cVar11[16];
	char cVar15[16];
	char cVar19[16];
	char cVar23[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	unk_0x522B9CEFB99AD7FD(&(uParam0->f_10008), 150, &cVar0);
	unk_0x0418971078797240(&(uParam0->f_10008), "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&Var7, "MPATMLOGVAL", 16);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10008.f_1), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar11 = { Var7 };
		StringIntConCat(&cVar11, iVar6, 16);
		unk_0x0418971078797240(&(uParam0->f_10008.f_1[iVar6]), &cVar11);
		iVar6++;
	}
	unk_0x21117B8E797A17FB();
	StringCopy(&Var7, "MPATMLOGSCRS", 16);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10008.f_18), 97, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar15 = { Var7 };
		StringIntConCat(&cVar15, iVar6, 16);
		unk_0xDC0FAA9CF401A9F7(&(uParam0->f_10008.f_18[iVar6 /*6*/]), &cVar15);
		iVar6++;
	}
	unk_0x21117B8E797A17FB();
	StringCopy(&Var7, "MPATMLOGACT", 16);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10008.f_115), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar19 = { Var7 };
		StringIntConCat(&cVar19, iVar6, 16);
		unk_0x00BA798CF02BBC66(&(uParam0->f_10008.f_115[iVar6]), &cVar19);
		iVar6++;
	}
	unk_0x21117B8E797A17FB();
	StringCopy(&Var7, "MPATMLOGDAT", 16);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_10008.f_132), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar23 = { Var7 };
		StringIntConCat(&cVar23, iVar6, 16);
		unk_0x0418971078797240(&(uParam0->f_10008.f_132[iVar6]), &cVar23);
		iVar6++;
	}
	unk_0x21117B8E797A17FB();
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_10008.f_149), "mpAnyVecBought");
	unk_0xF05631B776B1535B();
}

void func_11(var uParam0, int iParam1)
{
	struct<6> Var0;
	char cVar6[32];
	int iVar14;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	unk_0x522B9CEFB99AD7FD(&(uParam0->f_9767), 241, &Var0);
	unk_0x15FB7C0479995168(&(uParam0->f_9767), "BOUNTY_GAMERH64_1");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_1), "BOUNTY_GAMERH64_2");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_2), "BOUNTY_GAMERH64_3");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_3), "BOUNTY_GAMERH64_4");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_4), "BOUNTY_GAMERH64_5");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_5), "BOUNTY_GAMERH64_6");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_6), "BOUNTY_GAMERH64_7");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_7), "BOUNTY_GAMERH64_8");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_8), "BOUNTY_GAMERH64_9");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_9), "BOUNTY_GAMERH64_10");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_10), "BOUNTY_GAMERH64_11");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_11), "BOUNTY_GAMERH64_12");
	unk_0x15FB7C0479995168(&(uParam0->f_9767.f_12), "BOUNTY_GAMERH64_13");
	unk_0x0418971078797240(&(uParam0->f_9767.f_13), "BOUNTY_TIME");
	unk_0x0418971078797240(&(uParam0->f_9767.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_9767.f_15), 209, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/]), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_1), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_2), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_3), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_4), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_5), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_6), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_7), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_8), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_9), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_10), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_11), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		unk_0x15FB7C0479995168(&(uParam0->f_9767.f_15[iVar14 /*13*/].f_12), &cVar6);
		iVar14++;
	}
	unk_0x21117B8E797A17FB();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_9767.f_224), 17, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		unk_0x0418971078797240(&(uParam0->f_9767.f_224[iVar14]), &cVar6);
		iVar14++;
	}
	unk_0x21117B8E797A17FB();
	unk_0xF05631B776B1535B();
}

void func_12(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_7698), &cVar0);
}

void func_13(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	int iVar5;
	char cVar6[64];
	int iVar22;
	int iVar23;
	char cVar24[16];
	char cVar28[16];
	
	unk_0x522B9CEFB99AD7FD(uParam0, 2069, cParam1);
	unk_0x0418971078797240(uParam0, "CASH_GIVEN_TOTAL");
	unk_0x0418971078797240(&(uParam0->f_1), "CASH_GIVEN_TIME");
	unk_0x0418971078797240(&(uParam0->f_2), "LAST_SAVED_CAR");
	unk_0x0418971078797240(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	unk_0x0418971078797240(&(uParam0->f_4), "WHEELIE_TIMER");
	unk_0x0418971078797240(&(uParam0->f_5), "WHEELIE_UPDATES");
	unk_0x0418971078797240(&(uParam0->f_6), "WHEELIE_TIME");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_7), "GRAB_TIME");
	unk_0x0418971078797240(&(uParam0->f_8), "iLastSoldVehicleTime");
	unk_0x0418971078797240(&(uParam0->f_9), "ilasttimeplayed");
	unk_0x0418971078797240(&(uParam0->f_10), "iSaveCoupons");
	unk_0x0418971078797240(&(uParam0->f_11), "iLastBruciePillReminder");
	unk_0x0418971078797240(&(uParam0->f_12), "iLastSecVanReminder");
	unk_0x0418971078797240(&(uParam0->f_13), "iLastBountyReminder");
	unk_0x0418971078797240(&(uParam0->f_14), "iLastParaReminder");
	unk_0x0418971078797240(&(uParam0->f_15), "iLastCrateDropReminder");
	unk_0x0418971078797240(&(uParam0->f_16), "iLastGangAttackReminder");
	unk_0x0418971078797240(&(uParam0->f_17), "iLastImpExpReminder");
	unk_0x0418971078797240(&(uParam0->f_18), "iLastInsuranceReminder");
	unk_0x0418971078797240(&(uParam0->f_19), "iLastSurvivalReminder");
	unk_0x0418971078797240(&(uParam0->f_20), "iLastBikerBackupReminder");
	unk_0x0418971078797240(&(uParam0->f_21), "iLastVagosBackupReminder");
	unk_0x0418971078797240(&(uParam0->f_22), "iLastLesterVehReminder");
	unk_0x0418971078797240(&(uParam0->f_23), "iLastPersonalVehDeliveryReminder");
	unk_0x0418971078797240(&(uParam0->f_24), "iLastPegasusVehicleReminder");
	unk_0x0418971078797240(&(uParam0->f_25), "iLastMerryweatherReminder");
	unk_0x0418971078797240(&(uParam0->f_26), "iLastLesterHelpReminder");
	unk_0x0418971078797240(&(uParam0->f_27), "iLastLesterReqJobReminder");
	unk_0x0418971078797240(&(uParam0->f_28), "iLastGeraldReqJobReminder");
	unk_0x0418971078797240(&(uParam0->f_29), "iLastSimeonReqJobReminder");
	unk_0x0418971078797240(&(uParam0->f_30), "iLastMartinReqJobReminder");
	unk_0x0418971078797240(&(uParam0->f_31), "iLastRonReqJobReminder");
	unk_0x0418971078797240(&(uParam0->f_32), "iRecentlyPassedMissionBitset");
	unk_0x0418971078797240(&(uParam0->f_33), "iRecentlyPassedMissionTime");
	unk_0x0418971078797240(&(uParam0->f_34), "iLastImportExportDelTime");
	unk_0x0418971078797240(&(uParam0->f_35), "iLastImportExportListTime");
	unk_0x0418971078797240(&(uParam0->f_36), "iMyLastImportExportListDay");
	unk_0x0418971078797240(&(uParam0->f_37), "iVehicleWebsiteReminderTime");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_38), "bDefaultClothesSet");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_39), 5, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_39)
	{
		StringCopy(&cVar1, "CLOTHES", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_39[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_44), 629, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_44)
	{
		StringCopy(&cVar1, "CARMODS", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_44[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x0418971078797240(&(uParam0->f_673), "iLastCrewCharWasIn");
	unk_0x0418971078797240(&(uParam0->f_674), "iStripperUnlockedBS");
	unk_0x0418971078797240(&(uParam0->f_675), "iGeneralBS");
	unk_0x0418971078797240(&(uParam0->f_676), "iCarsModifiedTimeStamp");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_677), 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_677)
	{
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		unk_0x6A3446EC44F60226(&(uParam0->f_677[iVar5]), &cVar6);
		iVar5++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_687), 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_687)
	{
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		unk_0x6A3446EC44F60226(&(uParam0->f_687[iVar5]), &cVar6);
		iVar5++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x0418971078797240(&(uParam0->f_697), "GOLF_iBestRound");
	unk_0x6A3446EC44F60226(&(uParam0->f_698), "GOLF_fLongestDrive");
	unk_0x6A3446EC44F60226(&(uParam0->f_699), "GOLF_fLongestPutt");
	unk_0x0418971078797240(&(uParam0->f_700), "iShareLJCashTotal");
	unk_0x0418971078797240(&(uParam0->f_701), "iShareLJCashTime");
	unk_0x0418971078797240(&(uParam0->f_702), "iReceiveLJCashTotal");
	unk_0x0418971078797240(&(uParam0->f_703), "iReceiveLJCashTime");
	unk_0x0418971078797240(&(uParam0->f_704), "LAST_ACC_PROP");
	unk_0x0418971078797240(&(uParam0->f_705), "MULTI1_PROP_VAL");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_706), 4, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < uParam0->f_706)
	{
		StringCopy(&cVar1, "PROP_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0418971078797240(&(uParam0->f_706[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x0418971078797240(&(uParam0->f_710), "KR_PATCH_UPDATE");
	iVar22 = 0;
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1422), 472, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1422)
	{
		StringCopy(&cVar1, "DLC_MODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0418971078797240(&(uParam0->f_1422[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	iVar22 = 0;
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1894), 75, "DLC_SUPERMODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1894)
	{
		StringCopy(&cVar1, "DLC_SMODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0418971078797240(&(uParam0->f_1894[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_711), 144, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CompDraw", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x1A8BCBFFF6957403(&(uParam0->f_711[iVar22 /*13*/]), 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&cVar1, "CompDraw", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x0418971078797240(&(uParam0->f_711[iVar22 /*13*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x21117B8E797A17FB();
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_855), 144, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CompTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x1A8BCBFFF6957403(&(uParam0->f_855[iVar22 /*13*/]), 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&cVar1, "CompTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x0418971078797240(&(uParam0->f_855[iVar22 /*13*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x21117B8E797A17FB();
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_999), 111, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "PropID", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x1A8BCBFFF6957403(&(uParam0->f_999[iVar22 /*10*/]), 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&cVar1, "PropID", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x0418971078797240(&(uParam0->f_999[iVar22 /*10*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x21117B8E797A17FB();
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1110), 111, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "PropTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x1A8BCBFFF6957403(&(uParam0->f_1110[iVar22 /*10*/]), 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&cVar1, "PropTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x0418971078797240(&(uParam0->f_1110[iVar22 /*10*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x21117B8E797A17FB();
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1221), 12, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "Stored", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_1221[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1233), 12, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalA", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_1233[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1245), 12, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalB", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_1245[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1257), 12, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalC", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_1257[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1269), 12, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalD", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_1269[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1370), 12, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "ShirtDecal", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0418971078797240(&(uParam0->f_1370[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1281), 89, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "Name", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xD8FD2A4D727F435F(&(uParam0->f_1281[iVar22 /*8*/]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1382), 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "LastJobG64_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_1", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/]), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_2", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_1), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_3", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_2), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_4", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_3), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_5", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_4), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_6", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_5), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_7", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_6), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_8", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_7), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_9", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_8), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_10", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_9), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_11", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_10), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_12", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_11), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_13", 16);
		unk_0x15FB7C0479995168(&(uParam0->f_1382[iVar22 /*13*/].f_12), &cVar24);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_1969), "DO_CompletedObjectives");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_1970), "DO_LoggedInToday");
	unk_0x0418971078797240(&(uParam0->f_1971), "DO_xValue");
	unk_0x0418971078797240(&(uParam0->f_1972), "DO_LastHistoryLength");
	unk_0x0418971078797240(&(uParam0->f_1973), "DO_LastResetTime");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1974), 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "Objective", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0418971078797240(&(uParam0->f_1974[iVar22 /*3*/]), &cVar1);
		StringCopy(&cVar1, "Completed", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_1974[iVar22 /*3*/].f_1), &cVar1);
		StringCopy(&cVar1, "Initial", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0418971078797240(&(uParam0->f_1974[iVar22 /*3*/].f_2), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1984), 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24)
	{
		StringCopy(&cVar1, "History", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0418971078797240(&(uParam0->f_1984[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_2009), 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "LastJobTL_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar28 = { cVar1 };
		StringConCat(&cVar28, "_1", 16);
		unk_0xE93758B935E94137(&(uParam0->f_2009[iVar22 /*16*/]), &cVar28);
		iVar22++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_2058), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar1, "BGSAVEINT", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_2058[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x21117B8E797A17FB();
}

void func_14(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&(uParam0->f_5420), &cVar0, iParam1);
}

void func_15(var uParam0, char[4] cParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	
	unk_0x522B9CEFB99AD7FD(uParam0, 2278, cParam1);
	unk_0x1A8BCBFFF6957403(uParam0, 2151, "CAR_APP_DATA");
	iVar16 = 0;
	while (iVar16 < 50)
	{
		StringCopy(&cVar0, "CARAPP_DATA_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		func_17(uParam0[iVar16 /*43*/], &cVar0);
		iVar16++;
	}
	unk_0x21117B8E797A17FB();
	unk_0xF05631B776B1535B();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_2192), 51, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 50)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_2192[iVar16]), &cVar0);
		iVar16++;
	}
	unk_0x21117B8E797A17FB();
	func_16(&(uParam0->f_2151), "CAR_APP_ORDER");
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_2243), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_2245), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_2244), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x0418971078797240(&(uParam0->f_2250), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0xCC59D54AB8C3725B(&(uParam0->f_2246), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x0418971078797240(&(uParam0->f_2251), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x0418971078797240(&(uParam0->f_2252), &cVar0);
	unk_0x1A8BCBFFF6957403(&(uParam0->f_2253), 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		unk_0x0418971078797240(&(uParam0->f_2253[iVar16]), &cVar0);
		iVar16++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_2264), 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		unk_0x0418971078797240(&(uParam0->f_2264[iVar16]), &cVar0);
		iVar16++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x0418971078797240(&(uParam0->f_2275), "LAST_USED");
	unk_0x0418971078797240(&(uParam0->f_2276), "NEW_SAVED");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_2277), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)
{
	unk_0x522B9CEFB99AD7FD(uParam0, 41, sParam1);
	unk_0x00BA798CF02BBC66(uParam0, "Model");
	unk_0x0418971078797240(&(uParam0->f_1), "iColourID1");
	unk_0x0418971078797240(&(uParam0->f_2), "iColourID2");
	unk_0x0418971078797240(&(uParam0->f_3), "iColour1Group");
	unk_0x0418971078797240(&(uParam0->f_4), "iColour2Group");
	unk_0x0418971078797240(&(uParam0->f_5), "iWindowTint");
	unk_0x0418971078797240(&(uParam0->f_6), "iTyreSmokeR");
	unk_0x0418971078797240(&(uParam0->f_7), "iTyreSmokeG");
	unk_0x0418971078797240(&(uParam0->f_8), "iTyreSmokeB");
	unk_0x0418971078797240(&(uParam0->f_9), "iEngine");
	unk_0x0418971078797240(&(uParam0->f_10), "iBrakes");
	unk_0x0418971078797240(&(uParam0->f_11), "iWheels");
	unk_0x0418971078797240(&(uParam0->f_12), "iWheelType");
	unk_0x0418971078797240(&(uParam0->f_13), "iExhaust");
	unk_0x0418971078797240(&(uParam0->f_14), "iSuspension");
	unk_0x0418971078797240(&(uParam0->f_15), "iArmour");
	unk_0x0418971078797240(&(uParam0->f_16), "iHorn");
	unk_0x0418971078797240(&(uParam0->f_17), "iLights");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_18), "bBulletProofTyres");
	unk_0x0418971078797240(&(uParam0->f_19), "iTurbo");
	unk_0x0418971078797240(&(uParam0->f_20), "iTyreSmoke");
	unk_0xCC59D54AB8C3725B(&(uParam0->f_21), "tlPlateText");
	unk_0x0418971078797240(&(uParam0->f_25), "iPlateBack");
	unk_0x0418971078797240(&(uParam0->f_26), "UID");
	unk_0x0418971078797240(&(uParam0->f_27), "Cost");
	unk_0xCC59D54AB8C3725B(&(uParam0->f_28), "tlPlateText_pending");
	unk_0x0418971078797240(&(uParam0->f_32), "iPlateBack_pending");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_33), "bProcessOrder");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_36), "bOrderPending");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_35), "bOrderReceivedOnBoot");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_34), "bOrderForPlayerVehicle");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_37), "bCheckPlateProfanity");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_40), "bOrderPaidFor");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_38), "bSCProfanityFailed");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_39), "bOrderFailedFunds");
	unk_0xF05631B776B1535B();
}

void func_17(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x522B9CEFB99AD7FD(uParam0, 43, cParam1);
	unk_0x00BA798CF02BBC66(uParam0, "Model");
	unk_0x0418971078797240(&(uParam0->f_1), "iColourID1");
	unk_0x0418971078797240(&(uParam0->f_2), "iColourID2");
	unk_0x0418971078797240(&(uParam0->f_3), "iWindowTint");
	unk_0x0418971078797240(&(uParam0->f_4), "iTyreSmokeR");
	unk_0x0418971078797240(&(uParam0->f_5), "iTyreSmokeG");
	unk_0x0418971078797240(&(uParam0->f_6), "iTyreSmokeB");
	unk_0x0418971078797240(&(uParam0->f_7), "iEngine");
	unk_0x0418971078797240(&(uParam0->f_8), "iBrakes");
	unk_0x0418971078797240(&(uParam0->f_9), "iWheels");
	unk_0x0418971078797240(&(uParam0->f_10), "iWheelType");
	unk_0x0418971078797240(&(uParam0->f_11), "iExhaust");
	unk_0x0418971078797240(&(uParam0->f_12), "iSuspension");
	unk_0x0418971078797240(&(uParam0->f_13), "iArmour");
	unk_0x0418971078797240(&(uParam0->f_14), "iHorn");
	unk_0x0418971078797240(&(uParam0->f_15), "iLights");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_16), "bBulletProofTyres");
	unk_0x0418971078797240(&(uParam0->f_17), "iTurbo");
	unk_0x0418971078797240(&(uParam0->f_18), "iTyreSmoke");
	unk_0xCC59D54AB8C3725B(&(uParam0->f_19), "tlPlateText");
	unk_0x0418971078797240(&(uParam0->f_23), "iPlateBack");
	unk_0x0418971078797240(&(uParam0->f_24), "iModCountEngine");
	unk_0x0418971078797240(&(uParam0->f_25), "iModCountBrakes");
	unk_0x0418971078797240(&(uParam0->f_26), "iModCountExhaust");
	unk_0x0418971078797240(&(uParam0->f_27), "iModCountWheels");
	unk_0x0418971078797240(&(uParam0->f_28), "iModCountHorn");
	unk_0x0418971078797240(&(uParam0->f_29), "iModCountArmour");
	unk_0x0418971078797240(&(uParam0->f_30), "iModCountSuspension");
	unk_0x6A3446EC44F60226(&(uParam0->f_31), "fModPriceModifier");
	unk_0x0418971078797240(&(uParam0->f_32), "iModColoursThatCanBeSet");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_33), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_33[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x00BA798CF02BBC66(&(uParam0->f_39), "eModKitType");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_40), "bSendDataToCloud");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_41), "bDeleteData");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_42), "bUpdateMods");
	unk_0xF05631B776B1535B();
}

void func_18(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&(uParam0->f_5388), &cVar0);
}

void func_19(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x522B9CEFB99AD7FD(uParam0, 32, cParam1);
	unk_0xDE2D5150C3A9B09F(uParam0, "TV_ON");
	unk_0x0418971078797240(&(uParam0->f_1), "TV_CHANNEL_ID");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_2), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xDE2D5150C3A9B09F(&(uParam0->f_2[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_5), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_8), "GARAGE_TV_ON");
	unk_0x0418971078797240(&(uParam0->f_9), "GARAGE_TV_CHANNEL_ID");
	unk_0xDE2D5150C3A9B09F(&(uParam0->f_10), "GARAGE_RADIO_ON");
	unk_0x0418971078797240(&(uParam0->f_11), "GARAGE_RADIO_STATION_ID");
	unk_0x0418971078797240(&(uParam0->f_12), "NUMBERS_TIMES_SMOKED");
	unk_0x0418971078797240(&(uParam0->f_13), "NUMBER_TIMES_DRANK");
	unk_0x0418971078797240(&(uParam0->f_14), "NUMBER_TIMES_STRIPPERS");
	unk_0x0418971078797240(&(uParam0->f_15), "NUMBERS_TIMES_SMOKED_SECOND");
	unk_0x0418971078797240(&(uParam0->f_16), "NUMBER_TIMES_DRANK_SECOND");
	unk_0x0418971078797240(&(uParam0->f_17), "NUMBER_TIMES_STRIPPERS_SECOND");
	unk_0x0418971078797240(&(uParam0->f_18), "NUMBERS_TIMES_SMOKED3");
	unk_0x0418971078797240(&(uParam0->f_19), "NUMBER_TIMES_DRANK3");
	unk_0x0418971078797240(&(uParam0->f_20), "NUMBER_TIMES_STRIPPERS3");
	unk_0x0418971078797240(&(uParam0->f_21), "NUMBERS_TIMES_SMOKED4");
	unk_0x0418971078797240(&(uParam0->f_22), "NUMBER_TIMES_DRANK4");
	unk_0x0418971078797240(&(uParam0->f_23), "NUMBER_TIMES_STRIPPERS4");
	unk_0x0418971078797240(&(uParam0->f_24), "NUMBERS_TIMES_SMOKED5");
	unk_0x0418971078797240(&(uParam0->f_25), "NUMBER_TIMES_DRANK5");
	unk_0x0418971078797240(&(uParam0->f_26), "NUMBER_TIMES_STRIPPERS5");
	unk_0x0418971078797240(&(uParam0->f_27), "NUMBERS_TIMES_SMOKEDYacht");
	unk_0x0418971078797240(&(uParam0->f_28), "NUMBER_TIMES_DRANKYacht");
	unk_0x0418971078797240(&(uParam0->f_29), "NUMBER_TIMES_STRIPPERSYacht");
	unk_0x00BA798CF02BBC66(&(uParam0->f_30), "DATE_LAST_CLEANED_APARTMENT");
	unk_0x00BA798CF02BBC66(&(uParam0->f_31), "SHOWERS_TAKEN");
	unk_0x21117B8E797A17FB();
}

void func_20(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&(uParam0->f_5383), &cVar0);
}

void func_21(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x522B9CEFB99AD7FD(uParam0, 5, cParam1);
	unk_0x0418971078797240(uParam0, "BAV_Timestamp");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_1), 4, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x21117B8E797A17FB();
}

void func_22(var uParam0, int iParam1)
{
	struct<3> Var0;
	
	StringCopy(&Var0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_23(uParam0, &Var0);
}

void func_23(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	unk_0x1A8BCBFFF6957403(uParam0, 5383, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&cVar1, "MP_VEHICLE", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		func_24(uParam0[iVar0 /*138*/], &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
}

void func_24(var uParam0, char[4] cParam1)
{
	unk_0x522B9CEFB99AD7FD(uParam0, 138, cParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	unk_0x0418971078797240(&(uParam0->f_99), "VEHICLE_BS");
	unk_0x0418971078797240(&(uParam0->f_101), "PAID_PREMIUM");
	unk_0xE93758B935E94137(&(uParam0->f_102), "PAID_PLAYER");
	unk_0xE93758B935E94137(&(uParam0->f_118), "RADIO_STATION");
	unk_0x0418971078797240(&(uParam0->f_100), "IMPOUND_TIME");
	unk_0x0418971078797240(&(uParam0->f_134), "COLOUR_GROUP1");
	unk_0x0418971078797240(&(uParam0->f_135), "COLOUR_GROUP2");
	unk_0x0418971078797240(&(uParam0->f_136), "PRICE_PAID");
	unk_0x0418971078797240(&(uParam0->f_137), "OBTAIN_TIME");
	unk_0xF05631B776B1535B();
}

void func_25(var uParam0, char* sParam1)
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	unk_0x522B9CEFB99AD7FD(uParam0, 99, sParam1);
	unk_0x0418971078797240(&(uParam0->f_78), "iSpawnVehicleHorn");
	unk_0x6A3446EC44F60226(&(uParam0->f_79), "fEnveffScale");
	unk_0x0418971078797240(&(uParam0->f_96), "iColour5");
	unk_0x0418971078797240(&(uParam0->f_97), "iLivery2");
	unk_0x0418971078797240(&(uParam0->f_98), "iColour6");
	func_26(&(uParam0->f_80), "GamerHandleOfCarOwner");
	unk_0x0418971078797240(&(uParam0->f_93), "OwnerStatus");
	unk_0x0418971078797240(&(uParam0->f_94), "iFlags");
	unk_0x0418971078797240(&(uParam0->f_95), "iPVSlot");
	unk_0xF05631B776B1535B();
}

void func_26(var uParam0, char* sParam1)
{
	unk_0x522B9CEFB99AD7FD(uParam0, 13, sParam1);
	unk_0x15FB7C0479995168(uParam0, "Data64_1");
	unk_0x15FB7C0479995168(&(uParam0->f_1), "Data64_2");
	unk_0x15FB7C0479995168(&(uParam0->f_2), "Data64_3");
	unk_0x15FB7C0479995168(&(uParam0->f_3), "Data64_4");
	unk_0x15FB7C0479995168(&(uParam0->f_4), "Data64_5");
	unk_0x15FB7C0479995168(&(uParam0->f_5), "Data64_6");
	unk_0x15FB7C0479995168(&(uParam0->f_6), "Data64_7");
	unk_0x15FB7C0479995168(&(uParam0->f_7), "Data64_8");
	unk_0x15FB7C0479995168(&(uParam0->f_8), "Data64_9");
	unk_0x15FB7C0479995168(&(uParam0->f_9), "Data64_10");
	unk_0x15FB7C0479995168(&(uParam0->f_10), "Data64_11");
	unk_0x15FB7C0479995168(&(uParam0->f_11), "Data64_12");
	unk_0x15FB7C0479995168(&(uParam0->f_12), "Data64_13");
	unk_0xF05631B776B1535B();
}

void func_27(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x522B9CEFB99AD7FD(uParam0, 78, sParam1);
	unk_0x0418971078797240(uParam0, "iPlateIndex");
	unk_0xCC59D54AB8C3725B(&(uParam0->f_1), "tlPlateText");
	unk_0x0418971078797240(&(uParam0->f_5), "iColour1");
	unk_0x0418971078797240(&(uParam0->f_6), "iColour2");
	unk_0x0418971078797240(&(uParam0->f_7), "iColourExtra1");
	unk_0x0418971078797240(&(uParam0->f_8), "iColourExtra2");
	unk_0x0418971078797240(&(uParam0->f_62), "iTyreR");
	unk_0x0418971078797240(&(uParam0->f_63), "iTyreG");
	unk_0x0418971078797240(&(uParam0->f_64), "iTyreB");
	unk_0x0418971078797240(&(uParam0->f_65), "iWindowTintColour");
	unk_0x0418971078797240(&(uParam0->f_67), "iLivery");
	unk_0x0418971078797240(&(uParam0->f_69), "iWheelType");
	unk_0x00BA798CF02BBC66(&(uParam0->f_68), "eRoofState");
	unk_0x0418971078797240(&(uParam0->f_77), "iFlags");
	unk_0x0418971078797240(&(uParam0->f_71), "iCustomR");
	unk_0x0418971078797240(&(uParam0->f_72), "iCustomG");
	unk_0x0418971078797240(&(uParam0->f_73), "iCustomB");
	unk_0x0418971078797240(&(uParam0->f_74), "iNeonR");
	unk_0x0418971078797240(&(uParam0->f_75), "iNeonG");
	unk_0x0418971078797240(&(uParam0->f_76), "iNeonB");
	unk_0x00BA798CF02BBC66(&(uParam0->f_66), "eModel");
	unk_0x1A8BCBFFF6957403(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x1A8BCBFFF6957403(&(uParam0->f_59), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x0418971078797240(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x21117B8E797A17FB();
	unk_0x00BA798CF02BBC66(&(uParam0->f_70), "eLockState");
	unk_0xF05631B776B1535B();
}

void func_28(float fParam0)
{
	func_37();
	if (fParam0 == 1f)
	{
		func_35();
	}
	if (fParam0 <= 1.1f)
	{
		func_34();
	}
	if (fParam0 < 1.5f)
	{
		func_32();
	}
	if (fParam0 <= 1.5f)
	{
		func_31();
	}
	if (fParam0 == 1.5f)
	{
		func_30();
	}
	if (fParam0 < 1.7f)
	{
		func_29();
	}
}

void func_29()
{
	Global_99250.f_30887.f_4 = 0;
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xBA16CA557222A92B(joaat("content_hanger_veh"), &iVar0, -1);
	unk_0xBA16CA557222A92B(joaat("content_marina_veh"), &iVar1, -1);
	unk_0xBA16CA557222A92B(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_99250.f_668.f_703 = (Global_99250.f_668.f_703 - iVar0);
	}
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_99250.f_29635[iVar1], iVar0))
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_29635[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				unk_0x573691DB812DC8AA(&(Global_99250.f_29635[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_32()
{
	if ((((func_33(54) || func_33(55)) || func_33(56)) || func_33(57)) || func_33(58))
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_8634.f_25), 6);
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99250.f_7703.f_330[iParam0 /*6*/];
}

void func_34()
{
}

void func_35()
{
	if (Global_99250.f_7703.f_99.f_205[7] != 0)
	{
		if (!Global_99250.f_7703.f_330[86 /*6*/])
		{
			Global_99250.f_7703.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_99250.f_7703.f_99.f_205[8] != 0)
	{
		if (!Global_99250.f_7703.f_330[71 /*6*/])
		{
			Global_99250.f_7703.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_99250.f_7703.f_99.f_205[9] != 0)
	{
		if (!Global_99250.f_7703.f_330[91 /*6*/])
		{
			Global_99250.f_7703.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_99250.f_7703.f_99.f_205[10] != 0)
	{
		if (!Global_99250.f_7703.f_330[67 /*6*/])
		{
			Global_99250.f_7703.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_99250.f_7703.f_99.f_205[11] != 0)
	{
		if (!Global_99250.f_7703.f_330[77 /*6*/])
		{
			Global_99250.f_7703.f_330[77 /*6*/] = 1;
		}
	}
	func_36(195, 198);
	func_36(195, 197);
	func_36(195, 196);
}

void func_36(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	Var0 = { Global_99250.f_8812[iParam0 /*12*/] };
	uVar4 = Global_99250.f_8812[iParam0 /*12*/].f_4;
	uVar5 = Global_99250.f_8812[iParam0 /*12*/].f_5;
	uVar6 = Global_99250.f_8812[iParam0 /*12*/].f_6;
	uVar7 = Global_99250.f_8812[iParam0 /*12*/].f_7;
	uVar8 = Global_99250.f_8812[iParam0 /*12*/].f_8;
	uVar9 = Global_99250.f_8812[iParam0 /*12*/].f_9;
	uVar10 = Global_99250.f_8812[iParam0 /*12*/].f_10;
	uVar11 = Global_99250.f_8812[iParam0 /*12*/].f_11;
	Global_99250.f_8812[iParam0 /*12*/] = { Global_99250.f_8812[iParam1 /*12*/] };
	Global_99250.f_8812[iParam0 /*12*/].f_4 = Global_99250.f_8812[iParam1 /*12*/].f_4;
	Global_99250.f_8812[iParam0 /*12*/].f_5 = Global_99250.f_8812[iParam1 /*12*/].f_5;
	Global_99250.f_8812[iParam0 /*12*/].f_6 = Global_99250.f_8812[iParam1 /*12*/].f_6;
	Global_99250.f_8812[iParam0 /*12*/].f_7 = Global_99250.f_8812[iParam1 /*12*/].f_7;
	Global_99250.f_8812[iParam0 /*12*/].f_8 = Global_99250.f_8812[iParam1 /*12*/].f_8;
	Global_99250.f_8812[iParam0 /*12*/].f_9 = Global_99250.f_8812[iParam1 /*12*/].f_9;
	Global_99250.f_8812[iParam0 /*12*/].f_10 = Global_99250.f_8812[iParam1 /*12*/].f_10;
	Global_99250.f_8812[iParam0 /*12*/].f_11 = Global_99250.f_8812[iParam1 /*12*/].f_11;
	Global_99250.f_8812[iParam1 /*12*/] = { Var0 };
	Global_99250.f_8812[iParam1 /*12*/].f_4 = uVar4;
	Global_99250.f_8812[iParam1 /*12*/].f_5 = uVar5;
	Global_99250.f_8812[iParam1 /*12*/].f_6 = uVar6;
	Global_99250.f_8812[iParam1 /*12*/].f_7 = uVar7;
	Global_99250.f_8812[iParam1 /*12*/].f_8 = uVar8;
	Global_99250.f_8812[iParam1 /*12*/].f_9 = uVar9;
	Global_99250.f_8812[iParam1 /*12*/].f_10 = uVar10;
	Global_99250.f_8812[iParam1 /*12*/].f_11 = uVar11;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_38(Global_99250.f_29357[iVar0 /*4*/]))
		{
			if (Global_99250.f_29357[iVar0 /*4*/] != 145)
			{
				Global_99250.f_29357[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39()
{
	unk_0x0D8E2BEA077D3A7F("No_Filter", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam1", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam2", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam3", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam4", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam5", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam6", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam7", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam9", 1);
	unk_0x0D8E2BEA077D3A7F("phone_cam12", 0);
}

void func_40(int iParam0, int iParam1)
{
	unk_0xB83075ADFF6A3A01(iParam0);
	while (!unk_0xCFA460CFA5E219DE(iParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xB83075ADFF6A3A01(iParam0);
	}
	unk_0xEB1C67C3A5333A92(iParam0, iParam1);
}

int func_41()
{
	if (((unk_0xC87AB07750E125A6() || unk_0x25F42108C8F221F5()) || unk_0x6EFA16D4811D6D30()) || unk_0xF8416908A8F39CE0())
	{
		return 1;
	}
	return 0;
}

