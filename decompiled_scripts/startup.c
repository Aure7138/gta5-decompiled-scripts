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
	unk_0x945226432ACF160F();
	unk_0xA41892E4C4E21063(0);
	unk_0x3CE919AAB6850C46(0);
	unk_0xE9BDE28F2FC853AF("prologue_DistantLights");
	unk_0xE9BDE28F2FC853AF("prologue_LODLights");
	iLocal_56 = 0;
	bVar0 = func_41();
	if (unk_0xC6FB5FBA8C9F5B39() || unk_0xE4AA76FEFF412491())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		unk_0xADC1453CF7DF295A();
	}
	unk_0xD3BDABAE927BF49F(0);
	func_40(joaat("mp_registration"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("mp_registration"));
	func_40(joaat("mp_fm_registration"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("mp_fm_registration"));
	func_40(joaat("tunables_registration"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("tunables_registration"));
	func_40(joaat("sc_lb_global_block"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("sc_lb_global_block"));
	func_40(joaat("mp_save_game_global_block"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("mp_save_game_global_block"));
	func_40(joaat("mp_prop_global_block"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("mp_prop_global_block"));
	func_40(joaat("mp_prop_special_global_block"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("mp_prop_special_global_block"));
	func_40(joaat("title_update_registration"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("title_update_registration"));
	Global_2601466 = 0;
	func_40(joaat("sp_dlc_registration"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("sp_dlc_registration"));
	func_40(joaat("sp_pilotschool_reg"), 1624);
	unk_0xBD71E7CB90D1A6FC(joaat("sp_pilotschool_reg"));
	func_39();
	switch (iLocal_56)
	{
		case 0:
			func_40(joaat("standard_global_init"), 1624);
			unk_0xBD71E7CB90D1A6FC(joaat("standard_global_init"));
			break;
	}
	unk_0x4EDE34FBADD967A6(0);
	Global_69802 = 1;
	Global_2 = bVar0;
	unk_0x164CA344DBD7B6F3(0f);
	switch (iLocal_56)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_40(joaat("standard_global_reg"), 1624);
			unk_0x57667D0A25494543("standard_global_reg");
			while ((!unk_0xAA4F14DA15DB0B51(Global_2601466, 0) || !unk_0xAA4F14DA15DB0B51(Global_2601466, 1)) || !unk_0xAA4F14DA15DB0B51(Global_2601466, 2))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_2601466, 0))
				{
				}
				if (!unk_0xAA4F14DA15DB0B51(Global_2601466, 1))
				{
				}
				if (!unk_0xAA4F14DA15DB0B51(Global_2601466, 2))
				{
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x028CC699D32B4B9E(&Global_103236, 1, 1);
			unk_0x3BBF4C38038849A7(&Global_103236, "fSaveVersion");
			unk_0xAFCC79F3AF50AFA5();
			if (Global_1)
			{
				Global_0 = Global_103236;
			}
			Global_103236 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_28(Global_0);
				}
			}
			break;
	}
	unk_0x028CC699D32B4B9E(&Global_2097152, 10886, 0);
	unk_0xBE084B36FFEFBC09(&Global_2097152, 10886, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		func_20(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		func_18(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*10885*/]), iVar1);
		iVar1++;
	}
	unk_0x6B9634FCEFA12A5E();
	unk_0xAFCC79F3AF50AFA5();
	iVar18 = 10886;
	iVar19 = unk_0xF335D6F843C12A64(0);
	if (iVar18 != iVar19)
	{
	}
	if (!unk_0x419E27FF976AF39A() && !unk_0xACC3AA31908AE9DB())
	{
		unk_0xC5F3E14DFBF5DDE2(0);
	}
	unk_0x1433DA40236297F2(0);
	unk_0x3CE919AAB6850C46(0);
	func_2();
	func_1();
	unk_0xA232817B0B36F2E5();
}

void func_1()
{
	Global_30[0] = unk_0xD79C30F3A2706E90(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = unk_0xD79C30F3A2706E90(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = unk_0xD79C30F3A2706E90(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = unk_0xD79C30F3A2706E90(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = unk_0xD79C30F3A2706E90(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = unk_0xD79C30F3A2706E90(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = unk_0xD79C30F3A2706E90(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = unk_0xD79C30F3A2706E90(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = unk_0xD79C30F3A2706E90(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = unk_0xD79C30F3A2706E90(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = unk_0xD79C30F3A2706E90(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = unk_0xD79C30F3A2706E90(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = unk_0xD79C30F3A2706E90(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = unk_0xD79C30F3A2706E90(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = unk_0xD79C30F3A2706E90(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = unk_0xD79C30F3A2706E90(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = unk_0xD79C30F3A2706E90(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = unk_0xD79C30F3A2706E90(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = unk_0xD79C30F3A2706E90(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = unk_0xD79C30F3A2706E90(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = unk_0xD79C30F3A2706E90(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = unk_0xD79C30F3A2706E90(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = unk_0xD79C30F3A2706E90(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = unk_0xD79C30F3A2706E90(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = unk_0xD79C30F3A2706E90(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = unk_0xD79C30F3A2706E90(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = unk_0xD79C30F3A2706E90(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = unk_0xD79C30F3A2706E90(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = unk_0xD79C30F3A2706E90(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = unk_0xD79C30F3A2706E90(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = unk_0xD79C30F3A2706E90(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = unk_0xD79C30F3A2706E90(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = unk_0xD79C30F3A2706E90(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = unk_0xD79C30F3A2706E90(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = unk_0xD79C30F3A2706E90(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = unk_0xD79C30F3A2706E90(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = unk_0xD79C30F3A2706E90(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = unk_0xD79C30F3A2706E90(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = unk_0xD79C30F3A2706E90(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = unk_0xD79C30F3A2706E90(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = unk_0xD79C30F3A2706E90(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = unk_0xD79C30F3A2706E90(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = unk_0xD79C30F3A2706E90(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = unk_0xD79C30F3A2706E90(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = unk_0xD79C30F3A2706E90(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = unk_0xD79C30F3A2706E90(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = unk_0xD79C30F3A2706E90(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = unk_0xD79C30F3A2706E90(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = unk_0xD79C30F3A2706E90(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = unk_0xD79C30F3A2706E90(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = unk_0xD79C30F3A2706E90(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = unk_0xD79C30F3A2706E90(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = unk_0xD79C30F3A2706E90(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = unk_0xD79C30F3A2706E90(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = unk_0xD79C30F3A2706E90(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = unk_0xD79C30F3A2706E90(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = unk_0xD79C30F3A2706E90(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = unk_0xD79C30F3A2706E90(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = unk_0xD79C30F3A2706E90(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = unk_0xD79C30F3A2706E90(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = unk_0xD79C30F3A2706E90(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_141533 = 1;
	Global_141534 = 1;
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
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10858.f_19), 8, &cVar0);
	unk_0x20E30A55B0EB2235(&(uParam0->f_10858.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	unk_0x68CD23C333B44966(&(uParam0->f_10858.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	unk_0x68CD23C333B44966(&(uParam0->f_10858.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	unk_0x68CD23C333B44966(&(uParam0->f_10858.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	unk_0x68CD23C333B44966(&(uParam0->f_10858.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	unk_0x68CD23C333B44966(&(uParam0->f_10858.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	unk_0x68CD23C333B44966(&(uParam0->f_10858.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	unk_0x68CD23C333B44966(&(uParam0->f_10858.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	unk_0x6B9634FCEFA12A5E();
	unk_0x8296B55DBBF18C5B();
}

void func_5(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10858.f_15), 4, &cVar0);
	unk_0x20E30A55B0EB2235(&(uParam0->f_10858.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	unk_0x3BBF4C38038849A7(&(uParam0->f_10858.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	unk_0x3BBF4C38038849A7(&(uParam0->f_10858.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	unk_0x3BBF4C38038849A7(&(uParam0->f_10858.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	unk_0x6B9634FCEFA12A5E();
	unk_0x8296B55DBBF18C5B();
}

void func_6(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10858.f_6), 9, &cVar0);
	unk_0x0D6EB353EDA11653(&(uParam0->f_10858.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	unk_0x8296B55DBBF18C5B();
}

void func_7(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10858.f_4), 2, &cVar0);
	unk_0x76F4003DF9E8257F(&(uParam0->f_10858.f_4[0]), "TEMPSTAT_BOOL");
	unk_0x8296B55DBBF18C5B();
}

void func_8(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10858.f_2), 2, &cVar0);
	unk_0x3BBF4C38038849A7(&(uParam0->f_10858.f_2[0]), "TEMPSTAT_FLOAT");
	unk_0x8296B55DBBF18C5B();
}

void func_9(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10858), 2, &cVar0);
	unk_0x68CD23C333B44966(&(uParam0->f_10858[0]), "TEMPSTAT_INT1");
	unk_0x8296B55DBBF18C5B();
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
	unk_0x20E30A55B0EB2235(&(uParam0->f_10708), 150, &cVar0);
	unk_0x68CD23C333B44966(&(uParam0->f_10708), "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&Var7, "MPATMLOGVAL", 16);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10708.f_1), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar11 = { Var7 };
		StringIntConCat(&cVar11, iVar6, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_10708.f_1[iVar6]), &cVar11);
		iVar6++;
	}
	unk_0x8296B55DBBF18C5B();
	StringCopy(&Var7, "MPATMLOGSCRS", 16);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10708.f_18), 97, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar15 = { Var7 };
		StringIntConCat(&cVar15, iVar6, 16);
		unk_0x3A84993D7B8E8109(&(uParam0->f_10708.f_18[iVar6 /*6*/]), &cVar15);
		iVar6++;
	}
	unk_0x8296B55DBBF18C5B();
	StringCopy(&Var7, "MPATMLOGACT", 16);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10708.f_115), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar19 = { Var7 };
		StringIntConCat(&cVar19, iVar6, 16);
		unk_0xB6BD3878E8DF9EB3(&(uParam0->f_10708.f_115[iVar6]), &cVar19);
		iVar6++;
	}
	unk_0x8296B55DBBF18C5B();
	StringCopy(&Var7, "MPATMLOGDAT", 16);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10708.f_132), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar23 = { Var7 };
		StringIntConCat(&cVar23, iVar6, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_10708.f_132[iVar6]), &cVar23);
		iVar6++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x76F4003DF9E8257F(&(uParam0->f_10708.f_149), "mpAnyVecBought");
	unk_0x6B9634FCEFA12A5E();
}

void func_11(var uParam0, int iParam1)
{
	struct<6> Var0;
	char cVar6[32];
	int iVar14;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	unk_0x20E30A55B0EB2235(&(uParam0->f_10467), 241, &Var0);
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467), "BOUNTY_GAMERH64_1");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_1), "BOUNTY_GAMERH64_2");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_2), "BOUNTY_GAMERH64_3");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_3), "BOUNTY_GAMERH64_4");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_4), "BOUNTY_GAMERH64_5");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_5), "BOUNTY_GAMERH64_6");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_6), "BOUNTY_GAMERH64_7");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_7), "BOUNTY_GAMERH64_8");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_8), "BOUNTY_GAMERH64_9");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_9), "BOUNTY_GAMERH64_10");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_10), "BOUNTY_GAMERH64_11");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_11), "BOUNTY_GAMERH64_12");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_12), "BOUNTY_GAMERH64_13");
	unk_0x68CD23C333B44966(&(uParam0->f_10467.f_13), "BOUNTY_TIME");
	unk_0x68CD23C333B44966(&(uParam0->f_10467.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10467.f_15), 209, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/]), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_1), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_2), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_3), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_4), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_5), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_6), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_7), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_8), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_9), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_10), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_11), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10467.f_15[iVar14 /*13*/].f_12), &cVar6);
		iVar14++;
	}
	unk_0x8296B55DBBF18C5B();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_10467.f_224), 17, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		unk_0x68CD23C333B44966(&(uParam0->f_10467.f_224[iVar14]), &cVar6);
		iVar14++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x6B9634FCEFA12A5E();
}

void func_12(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_7546), &cVar0);
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
	
	unk_0x20E30A55B0EB2235(uParam0, 2921, cParam1);
	unk_0x68CD23C333B44966(uParam0, "CASH_GIVEN_TOTAL");
	unk_0x68CD23C333B44966(&(uParam0->f_1), "CASH_GIVEN_TIME");
	unk_0x68CD23C333B44966(&(uParam0->f_2), "LAST_SAVED_CAR");
	unk_0x68CD23C333B44966(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	unk_0x68CD23C333B44966(&(uParam0->f_11), "iNewVehPurchased");
	unk_0x68CD23C333B44966(&(uParam0->f_4), "WHEELIE_TIMER");
	unk_0x68CD23C333B44966(&(uParam0->f_5), "WHEELIE_UPDATES");
	unk_0x68CD23C333B44966(&(uParam0->f_6), "WHEELIE_TIME");
	unk_0x76F4003DF9E8257F(&(uParam0->f_7), "GRAB_TIME");
	unk_0x68CD23C333B44966(&(uParam0->f_8), "iLastSoldVehicleTime");
	unk_0x68CD23C333B44966(&(uParam0->f_9), "ilasttimeplayed");
	unk_0x68CD23C333B44966(&(uParam0->f_10), "iSaveCoupons");
	unk_0x68CD23C333B44966(&(uParam0->f_12), "iLastBruciePillReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_13), "iLastSecVanReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_14), "iLastBountyReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_15), "iLastParaReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_16), "iLastCrateDropReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_17), "iLastGangAttackReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_18), "iLastImpExpReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_19), "iLastInsuranceReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_20), "iLastSurvivalReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_21), "iLastBikerBackupReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_22), "iLastVagosBackupReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_23), "iLastLesterVehReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_24), "iLastPersonalVehDeliveryReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_25), "iLastPegasusVehicleReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_26), "iLastMerryweatherReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_27), "iLastLesterHelpReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_28), "iLastLesterReqJobReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_29), "iLastGeraldReqJobReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_30), "iLastSimeonReqJobReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_31), "iLastMartinReqJobReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_32), "iLastRonReqJobReminder");
	unk_0x68CD23C333B44966(&(uParam0->f_33), "iRecentlyPassedMissionBitset");
	unk_0x68CD23C333B44966(&(uParam0->f_34), "iRecentlyPassedMissionTime");
	unk_0x68CD23C333B44966(&(uParam0->f_35), "iLastImportExportDelTime");
	unk_0x68CD23C333B44966(&(uParam0->f_36), "iLastImportExportListTime");
	unk_0x68CD23C333B44966(&(uParam0->f_37), "iMyLastImportExportListDay");
	unk_0x68CD23C333B44966(&(uParam0->f_38), "iVehicleWebsiteReminderTime");
	unk_0x76F4003DF9E8257F(&(uParam0->f_39), "bDefaultClothesSet");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_40), 5, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&cVar1, "CLOTHES", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_40[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_45), 1037, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_45)
	{
		StringCopy(&cVar1, "CARMODS", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_45[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x68CD23C333B44966(&(uParam0->f_1082), "iLastCrewCharWasIn");
	unk_0x68CD23C333B44966(&(uParam0->f_1083), "iStripperUnlockedBS");
	unk_0x68CD23C333B44966(&(uParam0->f_1084), "iGeneralBS");
	unk_0x68CD23C333B44966(&(uParam0->f_1085), "iCarsModifiedTimeStamp");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1086), 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1086)
	{
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		unk_0x3BBF4C38038849A7(&(uParam0->f_1086[iVar5]), &cVar6);
		iVar5++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1096), 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1096)
	{
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		unk_0x3BBF4C38038849A7(&(uParam0->f_1096[iVar5]), &cVar6);
		iVar5++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x68CD23C333B44966(&(uParam0->f_1106), "GOLF_iBestRound");
	unk_0x3BBF4C38038849A7(&(uParam0->f_1107), "GOLF_fLongestDrive");
	unk_0x3BBF4C38038849A7(&(uParam0->f_1108), "GOLF_fLongestPutt");
	unk_0x68CD23C333B44966(&(uParam0->f_1109), "iShareLJCashTotal");
	unk_0x68CD23C333B44966(&(uParam0->f_1110), "iShareLJCashTime");
	unk_0x68CD23C333B44966(&(uParam0->f_1111), "iReceiveLJCashTotal");
	unk_0x68CD23C333B44966(&(uParam0->f_1112), "iReceiveLJCashTime");
	unk_0x68CD23C333B44966(&(uParam0->f_1113), "LAST_ACC_PROP");
	unk_0x68CD23C333B44966(&(uParam0->f_1114), "MULTI1_PROP_VAL");
	unk_0x68CD23C333B44966(&(uParam0->f_1126), "LAST_ACC_SMPLINT");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1115), 11, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1115)
	{
		StringCopy(&cVar1, "PROP_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_1115[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x68CD23C333B44966(&(uParam0->f_1127), "KR_PATCH_UPDATE");
	iVar22 = 0;
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1863), 778, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1863)
	{
		StringCopy(&cVar1, "DLC_MODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_1863[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	iVar22 = 0;
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2641), 178, "DLC_SUPERMODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_2641)
	{
		StringCopy(&cVar1, "DLC_SMODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_2641[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1128), 144, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CompDraw", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xBE084B36FFEFBC09(&(uParam0->f_1128[iVar22 /*13*/]), 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&cVar1, "CompDraw", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x68CD23C333B44966(&(uParam0->f_1128[iVar22 /*13*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x8296B55DBBF18C5B();
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1272), 144, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CompTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xBE084B36FFEFBC09(&(uParam0->f_1272[iVar22 /*13*/]), 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&cVar1, "CompTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x68CD23C333B44966(&(uParam0->f_1272[iVar22 /*13*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x8296B55DBBF18C5B();
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1416), 111, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "PropID", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xBE084B36FFEFBC09(&(uParam0->f_1416[iVar22 /*10*/]), 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&cVar1, "PropID", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x68CD23C333B44966(&(uParam0->f_1416[iVar22 /*10*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x8296B55DBBF18C5B();
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1527), 111, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "PropTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0xBE084B36FFEFBC09(&(uParam0->f_1527[iVar22 /*10*/]), 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&cVar1, "PropTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			unk_0x68CD23C333B44966(&(uParam0->f_1527[iVar22 /*10*/][iVar23]), &cVar1);
			iVar23++;
		}
		unk_0x8296B55DBBF18C5B();
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1638), 12, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "Stored", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1638[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1650), 12, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalA", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1650[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1662), 12, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalB", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1662[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1674), 12, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalC", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1674[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1686), 12, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalD", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1686[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1698), 12, "OUTFIT_CrewTatE");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalE", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1698[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1710), 12, "OUTFIT_CrewTatF");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalF", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1710[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1811), 12, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "ShirtDecal", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_1811[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1722), 89, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "Name", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x0D6EB353EDA11653(&(uParam0->f_1722[iVar22 /*8*/]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1823), 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "LastJobG64_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_1", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/]), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_2", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_1), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_3", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_2), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_4", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_3), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_5", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_4), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_6", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_5), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_7", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_6), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_8", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_7), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_9", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_8), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_10", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_9), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_11", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_10), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_12", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_11), &cVar24);
		cVar24 = { cVar1 };
		StringConCat(&cVar24, "_13", 16);
		unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1823[iVar22 /*13*/].f_12), &cVar24);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x76F4003DF9E8257F(&(uParam0->f_2819), "DO_CompletedObjectives");
	unk_0x76F4003DF9E8257F(&(uParam0->f_2820), "DO_LoggedInToday");
	unk_0x68CD23C333B44966(&(uParam0->f_2821), "DO_xValue");
	unk_0x68CD23C333B44966(&(uParam0->f_2822), "DO_LastHistoryLength");
	unk_0x68CD23C333B44966(&(uParam0->f_2823), "DO_LastResetTime");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2824), 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "Objective", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_2824[iVar22 /*3*/]), &cVar1);
		StringCopy(&cVar1, "Completed", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_2824[iVar22 /*3*/].f_1), &cVar1);
		StringCopy(&cVar1, "Initial", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_2824[iVar22 /*3*/].f_2), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2834), 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24)
	{
		StringCopy(&cVar1, "History", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_2834[iVar22]), &cVar1);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2859), 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "LastJobTL_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar28 = { cVar1 };
		StringConCat(&cVar28, "_1", 16);
		unk_0x50153789EFA98C01(&(uParam0->f_2859[iVar22 /*16*/]), &cVar28);
		iVar22++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2908), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar1, "BGSAVEINT", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_2908[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2919), 2, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&cVar1, "PROPLIB", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_2919[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x8296B55DBBF18C5B();
}

void func_14(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&(uParam0->f_5522), &cVar0, iParam1);
}

void func_15(var uParam0, char[4] cParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	
	unk_0x20E30A55B0EB2235(uParam0, 2024, cParam1);
	unk_0xBE084B36FFEFBC09(uParam0, 1808, "CAR_APP_DATA");
	iVar16 = 0;
	while (iVar16 < 139)
	{
		StringCopy(&cVar0, "CARAPP_DATA_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		func_17(uParam0[iVar16 /*13*/], &cVar0);
		iVar16++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x6B9634FCEFA12A5E();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1849), 140, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 139)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		unk_0x76F4003DF9E8257F(&(uParam0->f_1849[iVar16]), &cVar0);
		iVar16++;
	}
	unk_0x8296B55DBBF18C5B();
	func_16(&(uParam0->f_1808), "CAR_APP_ORDER");
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x76F4003DF9E8257F(&(uParam0->f_1989), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x76F4003DF9E8257F(&(uParam0->f_1991), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x76F4003DF9E8257F(&(uParam0->f_1990), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x68CD23C333B44966(&(uParam0->f_1996), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x1240EE092F2FEFD7(&(uParam0->f_1992), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x68CD23C333B44966(&(uParam0->f_1997), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	unk_0x68CD23C333B44966(&(uParam0->f_1998), &cVar0);
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1999), 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		unk_0x68CD23C333B44966(&(uParam0->f_1999[iVar16]), &cVar0);
		iVar16++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2010), 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		unk_0x68CD23C333B44966(&(uParam0->f_2010[iVar16]), &cVar0);
		iVar16++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x68CD23C333B44966(&(uParam0->f_2021), "LAST_USED");
	unk_0x68CD23C333B44966(&(uParam0->f_2022), "NEW_SAVED");
	unk_0x76F4003DF9E8257F(&(uParam0->f_2023), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)
{
	unk_0x20E30A55B0EB2235(uParam0, 41, sParam1);
	unk_0xB6BD3878E8DF9EB3(uParam0, "Model");
	unk_0x68CD23C333B44966(&(uParam0->f_1), "iColourID1");
	unk_0x68CD23C333B44966(&(uParam0->f_2), "iColourID2");
	unk_0x68CD23C333B44966(&(uParam0->f_3), "iColour1Group");
	unk_0x68CD23C333B44966(&(uParam0->f_4), "iColour2Group");
	unk_0x68CD23C333B44966(&(uParam0->f_5), "iWindowTint");
	unk_0x68CD23C333B44966(&(uParam0->f_6), "iTyreSmokeR");
	unk_0x68CD23C333B44966(&(uParam0->f_7), "iTyreSmokeG");
	unk_0x68CD23C333B44966(&(uParam0->f_8), "iTyreSmokeB");
	unk_0x68CD23C333B44966(&(uParam0->f_9), "iEngine");
	unk_0x68CD23C333B44966(&(uParam0->f_10), "iBrakes");
	unk_0x68CD23C333B44966(&(uParam0->f_11), "iWheels");
	unk_0x68CD23C333B44966(&(uParam0->f_12), "iWheelType");
	unk_0x68CD23C333B44966(&(uParam0->f_13), "iExhaust");
	unk_0x68CD23C333B44966(&(uParam0->f_14), "iSuspension");
	unk_0x68CD23C333B44966(&(uParam0->f_15), "iArmour");
	unk_0x68CD23C333B44966(&(uParam0->f_16), "iHorn");
	unk_0x68CD23C333B44966(&(uParam0->f_17), "iLights");
	unk_0x76F4003DF9E8257F(&(uParam0->f_18), "bBulletProofTyres");
	unk_0x68CD23C333B44966(&(uParam0->f_19), "iTurbo");
	unk_0x68CD23C333B44966(&(uParam0->f_20), "iTyreSmoke");
	unk_0x1240EE092F2FEFD7(&(uParam0->f_21), "tlPlateText");
	unk_0x68CD23C333B44966(&(uParam0->f_25), "iPlateBack");
	unk_0x68CD23C333B44966(&(uParam0->f_26), "UID");
	unk_0x68CD23C333B44966(&(uParam0->f_27), "Cost");
	unk_0x1240EE092F2FEFD7(&(uParam0->f_28), "tlPlateText_pending");
	unk_0x68CD23C333B44966(&(uParam0->f_32), "iPlateBack_pending");
	unk_0x76F4003DF9E8257F(&(uParam0->f_33), "bProcessOrder");
	unk_0x76F4003DF9E8257F(&(uParam0->f_36), "bOrderPending");
	unk_0x76F4003DF9E8257F(&(uParam0->f_35), "bOrderReceivedOnBoot");
	unk_0x76F4003DF9E8257F(&(uParam0->f_34), "bOrderForPlayerVehicle");
	unk_0x76F4003DF9E8257F(&(uParam0->f_37), "bCheckPlateProfanity");
	unk_0x76F4003DF9E8257F(&(uParam0->f_40), "bOrderPaidFor");
	unk_0x76F4003DF9E8257F(&(uParam0->f_38), "bSCProfanityFailed");
	unk_0x76F4003DF9E8257F(&(uParam0->f_39), "bOrderFailedFunds");
	unk_0x6B9634FCEFA12A5E();
}

void func_17(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x20E30A55B0EB2235(uParam0, 13, cParam1);
	unk_0xB6BD3878E8DF9EB3(uParam0, "Model");
	unk_0x68CD23C333B44966(&(uParam0->f_1), "iColourID1");
	unk_0x68CD23C333B44966(&(uParam0->f_2), "iColourID2");
	unk_0x68CD23C333B44966(&(uParam0->f_9), "iModCountWheels");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_3), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_3[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x76F4003DF9E8257F(&(uParam0->f_10), "bSendDataToCloud");
	unk_0x76F4003DF9E8257F(&(uParam0->f_11), "bDeleteData");
	unk_0x76F4003DF9E8257F(&(uParam0->f_12), "bUpdateMods");
	unk_0x6B9634FCEFA12A5E();
}

void func_18(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&(uParam0->f_5466), &cVar0);
}

void func_19(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x20E30A55B0EB2235(uParam0, 56, cParam1);
	unk_0x76F4003DF9E8257F(uParam0, "TV_ON");
	unk_0x68CD23C333B44966(&(uParam0->f_1), "TV_CHANNEL_ID");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_2), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x76F4003DF9E8257F(&(uParam0->f_2[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_5), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x76F4003DF9E8257F(&(uParam0->f_8), "GARAGE_TV_ON");
	unk_0x68CD23C333B44966(&(uParam0->f_9), "GARAGE_TV_CHANNEL_ID");
	unk_0x76F4003DF9E8257F(&(uParam0->f_10), "GARAGE_RADIO_ON");
	unk_0x68CD23C333B44966(&(uParam0->f_11), "GARAGE_RADIO_STATION_ID");
	unk_0x68CD23C333B44966(&(uParam0->f_12), "NUMBERS_TIMES_SMOKED");
	unk_0x68CD23C333B44966(&(uParam0->f_13), "NUMBER_TIMES_DRANK");
	unk_0x68CD23C333B44966(&(uParam0->f_14), "NUMBER_TIMES_STRIPPERS");
	unk_0x68CD23C333B44966(&(uParam0->f_15), "NUMBERS_TIMES_SMOKED_SECOND");
	unk_0x68CD23C333B44966(&(uParam0->f_16), "NUMBER_TIMES_DRANK_SECOND");
	unk_0x68CD23C333B44966(&(uParam0->f_17), "NUMBER_TIMES_STRIPPERS_SECOND");
	unk_0x68CD23C333B44966(&(uParam0->f_18), "NUMBERS_TIMES_SMOKED3");
	unk_0x68CD23C333B44966(&(uParam0->f_19), "NUMBER_TIMES_DRANK3");
	unk_0x68CD23C333B44966(&(uParam0->f_20), "NUMBER_TIMES_STRIPPERS3");
	unk_0x68CD23C333B44966(&(uParam0->f_21), "NUMBERS_TIMES_SMOKED4");
	unk_0x68CD23C333B44966(&(uParam0->f_22), "NUMBER_TIMES_DRANK4");
	unk_0x68CD23C333B44966(&(uParam0->f_23), "NUMBER_TIMES_STRIPPERS4");
	unk_0x68CD23C333B44966(&(uParam0->f_24), "NUMBERS_TIMES_SMOKED5");
	unk_0x68CD23C333B44966(&(uParam0->f_25), "NUMBER_TIMES_DRANK5");
	unk_0x68CD23C333B44966(&(uParam0->f_26), "NUMBER_TIMES_STRIPPERS5");
	unk_0x68CD23C333B44966(&(uParam0->f_27), "NUMBERS_TIMES_SMOKEDYacht");
	unk_0x68CD23C333B44966(&(uParam0->f_28), "NUMBER_TIMES_DRANKYacht");
	unk_0x68CD23C333B44966(&(uParam0->f_29), "NUMBER_TIMES_STRIPPERSYacht");
	unk_0xB6BD3878E8DF9EB3(&(uParam0->f_30), "DATE_LAST_CLEANED_APARTMENT");
	unk_0xB6BD3878E8DF9EB3(&(uParam0->f_31), "SHOWERS_TAKEN");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_32), 8, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_32[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_32[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_40), 8, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_40[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_40[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_48), 8, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_48[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_48[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x8296B55DBBF18C5B();
}

void func_20(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&(uParam0->f_5461), &cVar0);
}

void func_21(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x20E30A55B0EB2235(uParam0, 5, cParam1);
	unk_0x68CD23C333B44966(uParam0, "BAV_Timestamp");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_1), 4, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0x8296B55DBBF18C5B();
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
	unk_0xBE084B36FFEFBC09(uParam0, 5461, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&cVar1, "MP_VEHICLE", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		func_24(uParam0[iVar0 /*140*/], &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
}

void func_24(var uParam0, char[4] cParam1)
{
	unk_0x20E30A55B0EB2235(uParam0, 140, cParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	unk_0x68CD23C333B44966(&(uParam0->f_101), "VEHICLE_BS");
	unk_0x68CD23C333B44966(&(uParam0->f_103), "PAID_PREMIUM");
	unk_0x50153789EFA98C01(&(uParam0->f_104), "PAID_PLAYER");
	unk_0x50153789EFA98C01(&(uParam0->f_120), "RADIO_STATION");
	unk_0x68CD23C333B44966(&(uParam0->f_102), "IMPOUND_TIME");
	unk_0x68CD23C333B44966(&(uParam0->f_136), "COLOUR_GROUP1");
	unk_0x68CD23C333B44966(&(uParam0->f_137), "COLOUR_GROUP2");
	unk_0x68CD23C333B44966(&(uParam0->f_138), "PRICE_PAID");
	unk_0x68CD23C333B44966(&(uParam0->f_139), "OBTAIN_TIME");
	unk_0x6B9634FCEFA12A5E();
}

void func_25(var uParam0, char* sParam1)
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	unk_0x20E30A55B0EB2235(uParam0, 101, sParam1);
	unk_0x68CD23C333B44966(&(uParam0->f_78), "iSpawnVehicleHorn");
	unk_0x3BBF4C38038849A7(&(uParam0->f_79), "fEnveffScale");
	unk_0x68CD23C333B44966(&(uParam0->f_96), "iColour5");
	unk_0x68CD23C333B44966(&(uParam0->f_97), "iLivery2");
	unk_0x68CD23C333B44966(&(uParam0->f_98), "iColour6");
	func_26(&(uParam0->f_80), "GamerHandleOfCarOwner");
	unk_0x68CD23C333B44966(&(uParam0->f_93), "OwnerStatus");
	unk_0x68CD23C333B44966(&(uParam0->f_94), "iFlags");
	unk_0x68CD23C333B44966(&(uParam0->f_95), "iPVSlot");
	unk_0x68CD23C333B44966(&(uParam0->f_99), "iPlayerIndex");
	unk_0x68CD23C333B44966(&(uParam0->f_100), "iIEPlayerVehicle");
	unk_0x6B9634FCEFA12A5E();
}

void func_26(var uParam0, char* sParam1)
{
	unk_0x20E30A55B0EB2235(uParam0, 13, sParam1);
	unk_0x4FF59C9C79DD6DFE(uParam0, "Data64_1");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_1), "Data64_2");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_2), "Data64_3");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_3), "Data64_4");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_4), "Data64_5");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_5), "Data64_6");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_6), "Data64_7");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_7), "Data64_8");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_8), "Data64_9");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_9), "Data64_10");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_10), "Data64_11");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_11), "Data64_12");
	unk_0x4FF59C9C79DD6DFE(&(uParam0->f_12), "Data64_13");
	unk_0x6B9634FCEFA12A5E();
}

void func_27(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x20E30A55B0EB2235(uParam0, 78, sParam1);
	unk_0x68CD23C333B44966(uParam0, "iPlateIndex");
	unk_0x1240EE092F2FEFD7(&(uParam0->f_1), "tlPlateText");
	unk_0x68CD23C333B44966(&(uParam0->f_5), "iColour1");
	unk_0x68CD23C333B44966(&(uParam0->f_6), "iColour2");
	unk_0x68CD23C333B44966(&(uParam0->f_7), "iColourExtra1");
	unk_0x68CD23C333B44966(&(uParam0->f_8), "iColourExtra2");
	unk_0x68CD23C333B44966(&(uParam0->f_62), "iTyreR");
	unk_0x68CD23C333B44966(&(uParam0->f_63), "iTyreG");
	unk_0x68CD23C333B44966(&(uParam0->f_64), "iTyreB");
	unk_0x68CD23C333B44966(&(uParam0->f_65), "iWindowTintColour");
	unk_0x68CD23C333B44966(&(uParam0->f_67), "iLivery");
	unk_0x68CD23C333B44966(&(uParam0->f_69), "iWheelType");
	unk_0xB6BD3878E8DF9EB3(&(uParam0->f_68), "eRoofState");
	unk_0x68CD23C333B44966(&(uParam0->f_77), "iFlags");
	unk_0x68CD23C333B44966(&(uParam0->f_71), "iCustomR");
	unk_0x68CD23C333B44966(&(uParam0->f_72), "iCustomG");
	unk_0x68CD23C333B44966(&(uParam0->f_73), "iCustomB");
	unk_0x68CD23C333B44966(&(uParam0->f_74), "iNeonR");
	unk_0x68CD23C333B44966(&(uParam0->f_75), "iNeonG");
	unk_0x68CD23C333B44966(&(uParam0->f_76), "iNeonB");
	unk_0xB6BD3878E8DF9EB3(&(uParam0->f_66), "eModel");
	unk_0xBE084B36FFEFBC09(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xBE084B36FFEFBC09(&(uParam0->f_59), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x68CD23C333B44966(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x8296B55DBBF18C5B();
	unk_0xB6BD3878E8DF9EB3(&(uParam0->f_70), "eLockState");
	unk_0x6B9634FCEFA12A5E();
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
	Global_103236.f_26215.f_4 = 0;
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xC225A90A8DE0D96B(joaat("content_hanger_veh"), &iVar0, -1);
	unk_0xC225A90A8DE0D96B(joaat("content_marina_veh"), &iVar1, -1);
	unk_0xC225A90A8DE0D96B(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_103236.f_668.f_1113 = (Global_103236.f_668.f_1113 - iVar0);
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
			if (unk_0xAA4F14DA15DB0B51(Global_103236.f_24963[iVar1], iVar0))
			{
				unk_0x507FE690B1271947(&(Global_103236.f_24963[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_24963[iVar2]), iVar0);
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
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_9797.f_25), 6);
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_103236.f_8866.f_330[iParam0 /*6*/];
}

void func_34()
{
}

void func_35()
{
	if (Global_103236.f_8866.f_99.f_205[7] != 0)
	{
		if (!Global_103236.f_8866.f_330[86 /*6*/])
		{
			Global_103236.f_8866.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_103236.f_8866.f_99.f_205[8] != 0)
	{
		if (!Global_103236.f_8866.f_330[71 /*6*/])
		{
			Global_103236.f_8866.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_103236.f_8866.f_99.f_205[9] != 0)
	{
		if (!Global_103236.f_8866.f_330[91 /*6*/])
		{
			Global_103236.f_8866.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_103236.f_8866.f_99.f_205[10] != 0)
	{
		if (!Global_103236.f_8866.f_330[67 /*6*/])
		{
			Global_103236.f_8866.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_103236.f_8866.f_99.f_205[11] != 0)
	{
		if (!Global_103236.f_8866.f_330[77 /*6*/])
		{
			Global_103236.f_8866.f_330[77 /*6*/] = 1;
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
	
	Var0 = { Global_103236.f_9975[iParam0 /*12*/] };
	uVar4 = Global_103236.f_9975[iParam0 /*12*/].f_4;
	uVar5 = Global_103236.f_9975[iParam0 /*12*/].f_5;
	uVar6 = Global_103236.f_9975[iParam0 /*12*/].f_6;
	uVar7 = Global_103236.f_9975[iParam0 /*12*/].f_7;
	uVar8 = Global_103236.f_9975[iParam0 /*12*/].f_8;
	uVar9 = Global_103236.f_9975[iParam0 /*12*/].f_9;
	uVar10 = Global_103236.f_9975[iParam0 /*12*/].f_10;
	uVar11 = Global_103236.f_9975[iParam0 /*12*/].f_11;
	Global_103236.f_9975[iParam0 /*12*/] = { Global_103236.f_9975[iParam1 /*12*/] };
	Global_103236.f_9975[iParam0 /*12*/].f_4 = Global_103236.f_9975[iParam1 /*12*/].f_4;
	Global_103236.f_9975[iParam0 /*12*/].f_5 = Global_103236.f_9975[iParam1 /*12*/].f_5;
	Global_103236.f_9975[iParam0 /*12*/].f_6 = Global_103236.f_9975[iParam1 /*12*/].f_6;
	Global_103236.f_9975[iParam0 /*12*/].f_7 = Global_103236.f_9975[iParam1 /*12*/].f_7;
	Global_103236.f_9975[iParam0 /*12*/].f_8 = Global_103236.f_9975[iParam1 /*12*/].f_8;
	Global_103236.f_9975[iParam0 /*12*/].f_9 = Global_103236.f_9975[iParam1 /*12*/].f_9;
	Global_103236.f_9975[iParam0 /*12*/].f_10 = Global_103236.f_9975[iParam1 /*12*/].f_10;
	Global_103236.f_9975[iParam0 /*12*/].f_11 = Global_103236.f_9975[iParam1 /*12*/].f_11;
	Global_103236.f_9975[iParam1 /*12*/] = { Var0 };
	Global_103236.f_9975[iParam1 /*12*/].f_4 = uVar4;
	Global_103236.f_9975[iParam1 /*12*/].f_5 = uVar5;
	Global_103236.f_9975[iParam1 /*12*/].f_6 = uVar6;
	Global_103236.f_9975[iParam1 /*12*/].f_7 = uVar7;
	Global_103236.f_9975[iParam1 /*12*/].f_8 = uVar8;
	Global_103236.f_9975[iParam1 /*12*/].f_9 = uVar9;
	Global_103236.f_9975[iParam1 /*12*/].f_10 = uVar10;
	Global_103236.f_9975[iParam1 /*12*/].f_11 = uVar11;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_38(Global_103236.f_24685[iVar0 /*4*/]))
		{
			if (Global_103236.f_24685[iVar0 /*4*/] != 145)
			{
				Global_103236.f_24685[iVar0 /*4*/] = 145;
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
	unk_0x3AD2FD486E6D1025("No_Filter", 1);
	unk_0x3AD2FD486E6D1025("phone_cam1", 1);
	unk_0x3AD2FD486E6D1025("phone_cam2", 1);
	unk_0x3AD2FD486E6D1025("phone_cam3", 1);
	unk_0x3AD2FD486E6D1025("phone_cam4", 1);
	unk_0x3AD2FD486E6D1025("phone_cam5", 1);
	unk_0x3AD2FD486E6D1025("phone_cam6", 1);
	unk_0x3AD2FD486E6D1025("phone_cam7", 1);
	unk_0x3AD2FD486E6D1025("phone_cam9", 1);
	unk_0x3AD2FD486E6D1025("phone_cam12", 0);
}

void func_40(int iParam0, int iParam1)
{
	unk_0xA9515FF24FA319E3(iParam0);
	while (!unk_0x9C29C619BDECB0C6(iParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xA9515FF24FA319E3(iParam0);
	}
	unk_0xEB1C67C3A5333A92(iParam0, iParam1);
}

int func_41()
{
	if (((unk_0x82DFF1E96EC2F516() || unk_0x6BE61A05DE838619()) || unk_0x1C19EAF496CACCA1()) || unk_0xEF017E6C3DBF6E60())
	{
		return 1;
	}
	return 0;
}

