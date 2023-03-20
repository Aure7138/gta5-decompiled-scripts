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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char* sLocal_46 = NULL;
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	sLocal_46 = "CHECKPOINT_NORMAL";
	sLocal_47 = "CHECKPOINT_MISSED";
	sLocal_48 = "CHECKPOINT_PERFECT";
	Local_49 = { 1694.74f, 3276.502f, 41.2796f };
	Local_52 = { 8.79494f, 0.59893f, 154.8464f };
	unk_0x9243BAC96D64C050();
	unk_0x808519373FD336A3(false);
	unk_0x4EBB7E87AA0DBED4(false);
	unk_0xEE6C5AD3ECE0A82D("prologue_DistantLights");
	unk_0xEE6C5AD3ECE0A82D("prologue_LODLights");
	iLocal_55 = 0;
	bVar0 = func_30();
	if (unk_0xA049A5BE0F04F2F8())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		unk_0xB1577667C3708F9B();
	}
	unk_0x9BAE5AD2508DF078(0);
	func_29(joaat("mp_registration"), 1424);
	unk_0xC5BC038960E9DB27(joaat("mp_registration"));
	func_29(joaat("mp_fm_registration"), 1424);
	unk_0xC5BC038960E9DB27(joaat("mp_fm_registration"));
	func_29(joaat("tunables_registration"), 1424);
	unk_0xC5BC038960E9DB27(joaat("tunables_registration"));
	func_29(joaat("sc_lb_global_block"), 1424);
	unk_0xC5BC038960E9DB27(joaat("sc_lb_global_block"));
	func_29(joaat("mp_save_game_global_block"), 1424);
	unk_0xC5BC038960E9DB27(joaat("mp_save_game_global_block"));
	func_29(joaat("mp_prop_global_block"), 1424);
	unk_0xC5BC038960E9DB27(joaat("mp_prop_global_block"));
	func_29(joaat("title_update_registration"), 1424);
	unk_0xC5BC038960E9DB27(joaat("title_update_registration"));
	Global_2544098 = 0;
	func_29(joaat("sp_dlc_registration"), 1424);
	unk_0xC5BC038960E9DB27(joaat("sp_dlc_registration"));
	func_29(joaat("sp_pilotschool_reg"), 1424);
	unk_0xC5BC038960E9DB27(joaat("sp_pilotschool_reg"));
	func_28();
	switch (iLocal_55)
	{
		case 0:
			func_29(joaat("standard_global_init"), 1424);
			unk_0xC5BC038960E9DB27(joaat("standard_global_init"));
			break;
	}
	unk_0x4EDE34FBADD967A6(0);
	Global_68069 = 1;
	Global_2 = bVar0;
	unk_0xB4EC2312F4E5B1F1(0f);
	switch (iLocal_55)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_29(joaat("standard_global_reg"), 1424);
			unk_0xC90D2DCACD56184C("standard_global_reg");
			while ((!unk_0xA921AA820C25702F(Global_2544098, 0) || !unk_0xA921AA820C25702F(Global_2544098, 1)) || !unk_0xA921AA820C25702F(Global_2544098, 2))
			{
				if (!unk_0xA921AA820C25702F(Global_2544098, 0))
				{
				}
				if (!unk_0xA921AA820C25702F(Global_2544098, 1))
				{
				}
				if (!unk_0xA921AA820C25702F(Global_2544098, 2))
				{
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xA9575F812C6A7997(&Global_97173, 1, true);
			unk_0x7CAEC29ECB5DFEBB(&Global_97173, "fSaveVersion");
			unk_0x74E20C9145FB66FD();
			break;
	}
	unk_0xA9575F812C6A7997(&Global_2097152, 8054, false);
	unk_0x60FE567DF1B1AF9D(&Global_2097152, 8054, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_20(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_18(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		iVar1++;
	}
	unk_0xEB1774DF12BB9F12();
	unk_0x74E20C9145FB66FD();
	iVar18 = 8054;
	iVar19 = unk_0xA09F896CE912481F(false);
	if (iVar18 != iVar19)
	{
	}
	if (!unk_0xEA14EEF5B7CD2C30() && !unk_0x1D4DC17C38FEAFF0())
	{
		unk_0xB606E6CC59664972(0);
	}
	unk_0x228E5C6AD4D74BFD(false);
	unk_0x4EBB7E87AA0DBED4(false);
	func_2();
	func_1();
	unk_0x1090044AD1DA76FA();
}

void func_1()
{
	Global_29[0] = unk_0x05B7A89BD78797FC(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_29[1] = unk_0x05B7A89BD78797FC(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_29[2] = unk_0x05B7A89BD78797FC(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_29[3] = unk_0x05B7A89BD78797FC(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_29[4] = unk_0x05B7A89BD78797FC(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_29[5] = unk_0x05B7A89BD78797FC(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_29[6] = unk_0x05B7A89BD78797FC(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_29[7] = unk_0x05B7A89BD78797FC(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_29[8] = unk_0x05B7A89BD78797FC(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_29[9] = unk_0x05B7A89BD78797FC(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_29[0] = unk_0x05B7A89BD78797FC(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_29[11] = unk_0x05B7A89BD78797FC(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_29[12] = unk_0x05B7A89BD78797FC(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_29[13] = unk_0x05B7A89BD78797FC(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_29[14] = unk_0x05B7A89BD78797FC(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_29[15] = unk_0x05B7A89BD78797FC(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_29[16] = unk_0x05B7A89BD78797FC(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_29[17] = unk_0x05B7A89BD78797FC(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_29[18] = unk_0x05B7A89BD78797FC(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_29[19] = unk_0x05B7A89BD78797FC(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_29[20] = unk_0x05B7A89BD78797FC(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_29[21] = unk_0x05B7A89BD78797FC(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_29[22] = unk_0x05B7A89BD78797FC(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_29[23] = unk_0x05B7A89BD78797FC(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_29[24] = unk_0x05B7A89BD78797FC(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_29[25] = unk_0x05B7A89BD78797FC(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_29[26] = unk_0x05B7A89BD78797FC(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_29[27] = unk_0x05B7A89BD78797FC(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_29[28] = unk_0x05B7A89BD78797FC(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_29[29] = unk_0x05B7A89BD78797FC(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_29[30] = unk_0x05B7A89BD78797FC(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_29[31] = unk_0x05B7A89BD78797FC(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_29[32] = unk_0x05B7A89BD78797FC(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_29[33] = unk_0x05B7A89BD78797FC(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_29[34] = unk_0x05B7A89BD78797FC(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_29[35] = unk_0x05B7A89BD78797FC(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_29[36] = unk_0x05B7A89BD78797FC(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_29[37] = unk_0x05B7A89BD78797FC(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_29[38] = unk_0x05B7A89BD78797FC(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_29[39] = unk_0x05B7A89BD78797FC(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_29[40] = unk_0x05B7A89BD78797FC(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_29[41] = unk_0x05B7A89BD78797FC(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_29[42] = unk_0x05B7A89BD78797FC(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_29[43] = unk_0x05B7A89BD78797FC(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_29[44] = unk_0x05B7A89BD78797FC(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_29[45] = unk_0x05B7A89BD78797FC(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_29[46] = unk_0x05B7A89BD78797FC(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_29[47] = unk_0x05B7A89BD78797FC(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_29[48] = unk_0x05B7A89BD78797FC(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_29[49] = unk_0x05B7A89BD78797FC(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_29[50] = unk_0x05B7A89BD78797FC(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_29[51] = unk_0x05B7A89BD78797FC(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_29[52] = unk_0x05B7A89BD78797FC(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_29[53] = unk_0x05B7A89BD78797FC(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_29[54] = unk_0x05B7A89BD78797FC(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_29[55] = unk_0x05B7A89BD78797FC(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_29[56] = unk_0x05B7A89BD78797FC(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_29[57] = unk_0x05B7A89BD78797FC(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_29[58] = unk_0x05B7A89BD78797FC(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_29[59] = unk_0x05B7A89BD78797FC(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_29[60] = unk_0x05B7A89BD78797FC(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_131413 = 1;
	Global_131414 = 1;
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
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_8026.f_19), 8, &cVar0);
	unk_0xBF737600CDDBEADD(&(uParam0->f_8026.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	unk_0x34C9EE5986258415(&(uParam0->f_8026.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	unk_0x34C9EE5986258415(&(uParam0->f_8026.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	unk_0x34C9EE5986258415(&(uParam0->f_8026.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	unk_0x34C9EE5986258415(&(uParam0->f_8026.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	unk_0x34C9EE5986258415(&(uParam0->f_8026.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	unk_0x34C9EE5986258415(&(uParam0->f_8026.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	unk_0x34C9EE5986258415(&(uParam0->f_8026.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	unk_0xEB1774DF12BB9F12();
	unk_0x04456F95153C6BE4();
}

void func_5(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_8026.f_15), 4, &cVar0);
	unk_0xBF737600CDDBEADD(&(uParam0->f_8026.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_8026.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_8026.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_8026.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	unk_0xEB1774DF12BB9F12();
	unk_0x04456F95153C6BE4();
}

void func_6(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_8026.f_6), 9, &cVar0);
	unk_0x8269816F6CFD40F8(&(uParam0->f_8026.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	unk_0x04456F95153C6BE4();
}

void func_7(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_8026.f_4), 2, &cVar0);
	unk_0xC8F4131414C835A1(&(uParam0->f_8026.f_4[0]), "TEMPSTAT_BOOL");
	unk_0x04456F95153C6BE4();
}

void func_8(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_8026.f_2), 2, &cVar0);
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_8026.f_2[0]), "TEMPSTAT_FLOAT");
	unk_0x04456F95153C6BE4();
}

void func_9(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_8026), 2, &cVar0);
	unk_0x34C9EE5986258415(&(uParam0->f_8026[0]), "TEMPSTAT_INT1");
	unk_0x04456F95153C6BE4();
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
	unk_0xBF737600CDDBEADD(&(uParam0->f_7876), 150, &cVar0);
	unk_0x34C9EE5986258415(&(uParam0->f_7876), "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&Var7, "MPATMLOGVAL", 16);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_7876.f_1), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar11 = { Var7 };
		StringIntConCat(&cVar11, iVar6, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_7876.f_1[iVar6]), &cVar11);
		iVar6++;
	}
	unk_0x04456F95153C6BE4();
	StringCopy(&Var7, "MPATMLOGSCRS", 16);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_7876.f_18), 97, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar15 = { Var7 };
		StringIntConCat(&cVar15, iVar6, 16);
		unk_0x48F069265A0E4BEC(&(uParam0->f_7876.f_18[iVar6 /*6*/]), &cVar15);
		iVar6++;
	}
	unk_0x04456F95153C6BE4();
	StringCopy(&Var7, "MPATMLOGACT", 16);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_7876.f_115), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar19 = { Var7 };
		StringIntConCat(&cVar19, iVar6, 16);
		unk_0x10C2FA78D0E128A1(&(uParam0->f_7876.f_115[iVar6]), &cVar19);
		iVar6++;
	}
	unk_0x04456F95153C6BE4();
	StringCopy(&Var7, "MPATMLOGDAT", 16);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_7876.f_132), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar23 = { Var7 };
		StringIntConCat(&cVar23, iVar6, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_7876.f_132[iVar6]), &cVar23);
		iVar6++;
	}
	unk_0x04456F95153C6BE4();
	unk_0xC8F4131414C835A1(&(uParam0->f_7876.f_149), "mpAnyVecBought");
	unk_0xEB1774DF12BB9F12();
}

void func_11(var uParam0, int iParam1)
{
	struct<6> Var0;
	char cVar6[32];
	int iVar14;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	unk_0xBF737600CDDBEADD(&(uParam0->f_7635), 241, &Var0);
	unk_0xA735353C77334EA0(&(uParam0->f_7635), "BOUNTY_GAMERH64_1");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_1), "BOUNTY_GAMERH64_2");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_2), "BOUNTY_GAMERH64_3");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_3), "BOUNTY_GAMERH64_4");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_4), "BOUNTY_GAMERH64_5");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_5), "BOUNTY_GAMERH64_6");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_6), "BOUNTY_GAMERH64_7");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_7), "BOUNTY_GAMERH64_8");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_8), "BOUNTY_GAMERH64_9");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_9), "BOUNTY_GAMERH64_10");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_10), "BOUNTY_GAMERH64_11");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_11), "BOUNTY_GAMERH64_12");
	unk_0xA735353C77334EA0(&(uParam0->f_7635.f_12), "BOUNTY_GAMERH64_13");
	unk_0x34C9EE5986258415(&(uParam0->f_7635.f_13), "BOUNTY_TIME");
	unk_0x34C9EE5986258415(&(uParam0->f_7635.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_7635.f_15), 209, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/]), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_1), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_2), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_3), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_4), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_5), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_6), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_7), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_8), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_9), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_10), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_11), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		unk_0xA735353C77334EA0(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_12), &cVar6);
		iVar14++;
	}
	unk_0x04456F95153C6BE4();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_7635.f_224), 17, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		unk_0x34C9EE5986258415(&(uParam0->f_7635.f_224[iVar14]), &cVar6);
		iVar14++;
	}
	unk_0x04456F95153C6BE4();
	unk_0xEB1774DF12BB9F12();
}

void func_12(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_5756), &cVar0);
}

void func_13(var* uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	char cVar6[64];
	int iVar22;
	int iVar23;
	char cVar24[16];
	char cVar28[16];
	
	unk_0xBF737600CDDBEADD(uParam0, 1879, sParam1);
	unk_0x34C9EE5986258415(uParam0, "CASH_GIVEN_TOTAL");
	unk_0x34C9EE5986258415(&(uParam0->f_1), "CASH_GIVEN_TIME");
	unk_0x34C9EE5986258415(&(uParam0->f_2), "LAST_SAVED_CAR");
	unk_0x34C9EE5986258415(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	unk_0x34C9EE5986258415(&(uParam0->f_4), "WHEELIE_TIMER");
	unk_0x34C9EE5986258415(&(uParam0->f_5), "WHEELIE_UPDATES");
	unk_0x34C9EE5986258415(&(uParam0->f_6), "WHEELIE_TIME");
	unk_0xC8F4131414C835A1(&(uParam0->f_7), "GRAB_TIME");
	unk_0x34C9EE5986258415(&(uParam0->f_8), "iLastSoldVehicleTime");
	unk_0x34C9EE5986258415(&(uParam0->f_9), "ilasttimeplayed");
	unk_0x34C9EE5986258415(&(uParam0->f_10), "iSaveCoupons");
	unk_0x34C9EE5986258415(&(uParam0->f_11), "iLastBruciePillReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_12), "iLastSecVanReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_13), "iLastBountyReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_14), "iLastParaReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_15), "iLastCrateDropReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_16), "iLastGangAttackReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_17), "iLastImpExpReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_18), "iLastInsuranceReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_19), "iLastSurvivalReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_20), "iLastBikerBackupReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_21), "iLastVagosBackupReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_22), "iLastLesterVehReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_23), "iLastPersonalVehDeliveryReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_24), "iLastPegasusVehicleReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_25), "iLastMerryweatherReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_26), "iLastLesterHelpReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_27), "iLastLesterReqJobReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_28), "iLastGeraldReqJobReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_29), "iLastSimeonReqJobReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_30), "iLastMartinReqJobReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_31), "iLastRonReqJobReminder");
	unk_0x34C9EE5986258415(&(uParam0->f_32), "iRecentlyPassedMissionBitset");
	unk_0x34C9EE5986258415(&(uParam0->f_33), "iRecentlyPassedMissionTime");
	unk_0x34C9EE5986258415(&(uParam0->f_34), "iLastImportExportDelTime");
	unk_0x34C9EE5986258415(&(uParam0->f_35), "iLastImportExportListTime");
	unk_0x34C9EE5986258415(&(uParam0->f_36), "iMyLastImportExportListDay");
	unk_0x34C9EE5986258415(&(uParam0->f_37), "iVehicleWebsiteReminderTime");
	unk_0xC8F4131414C835A1(&(uParam0->f_38), "bDefaultClothesSet");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_39), 5, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_39)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_39[iVar0]), &Var1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_44), 605, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_44)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_44[iVar0]), &Var1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x34C9EE5986258415(&(uParam0->f_649), "iLastCrewCharWasIn");
	unk_0x34C9EE5986258415(&(uParam0->f_650), "iStripperUnlockedBS");
	unk_0x34C9EE5986258415(&(uParam0->f_651), "iGeneralBS");
	unk_0x34C9EE5986258415(&(uParam0->f_652), "iCarsModifiedTimeStamp");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_653), 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_653)
	{
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_653[iVar5]), &cVar6);
		iVar5++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_663), 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_663)
	{
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_663[iVar5]), &cVar6);
		iVar5++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x34C9EE5986258415(&(uParam0->f_673), "GOLF_iBestRound");
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_674), "GOLF_fLongestDrive");
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_675), "GOLF_fLongestPutt");
	unk_0x34C9EE5986258415(&(uParam0->f_676), "iShareLJCashTotal");
	unk_0x34C9EE5986258415(&(uParam0->f_677), "iShareLJCashTime");
	unk_0x34C9EE5986258415(&(uParam0->f_678), "iReceiveLJCashTotal");
	unk_0x34C9EE5986258415(&(uParam0->f_679), "iReceiveLJCashTime");
	unk_0x34C9EE5986258415(&(uParam0->f_680), "LAST_ACC_PROP");
	unk_0x34C9EE5986258415(&(uParam0->f_681), "MULTI1_PROP_VAL");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_682), 2, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < uParam0->f_682)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_682[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x34C9EE5986258415(&(uParam0->f_684), "KR_PATCH_UPDATE");
	iVar22 = 0;
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1336), 454, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1336)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_1336[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_685), 131, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x60FE567DF1B1AF9D(&(uParam0->f_685[iVar22 /*13*/]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			unk_0x34C9EE5986258415(&(uParam0->f_685[iVar22 /*13*/][iVar23]), &Var1);
			iVar23++;
		}
		unk_0x04456F95153C6BE4();
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_816), 131, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x60FE567DF1B1AF9D(&(uParam0->f_816[iVar22 /*13*/]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			unk_0x34C9EE5986258415(&(uParam0->f_816[iVar22 /*13*/][iVar23]), &Var1);
			iVar23++;
		}
		unk_0x04456F95153C6BE4();
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_947), 101, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x60FE567DF1B1AF9D(&(uParam0->f_947[iVar22 /*10*/]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			unk_0x34C9EE5986258415(&(uParam0->f_947[iVar22 /*10*/][iVar23]), &Var1);
			iVar23++;
		}
		unk_0x04456F95153C6BE4();
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1048), 101, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x60FE567DF1B1AF9D(&(uParam0->f_1048[iVar22 /*10*/]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			unk_0x34C9EE5986258415(&(uParam0->f_1048[iVar22 /*10*/][iVar23]), &Var1);
			iVar23++;
		}
		unk_0x04456F95153C6BE4();
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1149), 11, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0xC8F4131414C835A1(&(uParam0->f_1149[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1160), 11, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0xC8F4131414C835A1(&(uParam0->f_1160[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1171), 11, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0xC8F4131414C835A1(&(uParam0->f_1171[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1182), 11, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0xC8F4131414C835A1(&(uParam0->f_1182[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1193), 11, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0xC8F4131414C835A1(&(uParam0->f_1193[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1285), 11, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_1285[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1204), 81, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x8269816F6CFD40F8(&(uParam0->f_1204[iVar22 /*8*/]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1296), 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_1", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/]), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_2", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_1), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_3", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_2), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_4", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_3), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_5", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_4), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_6", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_5), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_7", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_6), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_8", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_7), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_9", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_8), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_10", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_9), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_11", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_10), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_12", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_11), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_13", 16);
		unk_0xA735353C77334EA0(&(uParam0->f_1296[iVar22 /*13*/].f_12), &cVar24);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0xC8F4131414C835A1(&(uParam0->f_1790), "DO_CompletedObjectives");
	unk_0xC8F4131414C835A1(&(uParam0->f_1791), "DO_LoggedInToday");
	unk_0x34C9EE5986258415(&(uParam0->f_1792), "DO_xValue");
	unk_0x34C9EE5986258415(&(uParam0->f_1793), "DO_LastHistoryLength");
	unk_0x34C9EE5986258415(&(uParam0->f_1794), "DO_LastResetTime");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1795), 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_1795[iVar22 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0xC8F4131414C835A1(&(uParam0->f_1795[iVar22 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_1795[iVar22 /*3*/].f_2), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1805), 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_1805[iVar22]), &Var1);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1830), 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar28 = { Var1 };
		StringConCat(&cVar28, "_1", 16);
		unk_0xFAA457EF263E8763(&(uParam0->f_1830[iVar22 /*16*/]), &cVar28);
		iVar22++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x04456F95153C6BE4();
}

void func_14(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&(uParam0->f_4358), &cVar0, iParam1);
}

void func_15(var* uParam0, char* sParam1, int iParam2)
{
	struct<8> Var0;
	int iVar16;
	
	unk_0xBF737600CDDBEADD(uParam0, 1398, sParam1);
	unk_0x60FE567DF1B1AF9D(uParam0, 1291, "CAR_APP_DATA");
	iVar16 = 0;
	while (iVar16 < 30)
	{
		StringCopy(&Var0, "CARAPP_DATA_", 64);
		StringIntConCat(&Var0, iVar16, 64);
		func_17(uParam0[iVar16 /*43*/], &Var0);
		iVar16++;
	}
	unk_0x04456F95153C6BE4();
	unk_0xEB1774DF12BB9F12();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1332), 31, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 30)
	{
		StringCopy(&Var0, "CAR_HIDDEN", 64);
		StringIntConCat(&Var0, iVar16, 64);
		unk_0xC8F4131414C835A1(&(uParam0->f_1332[iVar16]), &Var0);
		iVar16++;
	}
	unk_0x04456F95153C6BE4();
	func_16(&(uParam0->f_1291), "CAR_APP_ORDER");
	StringCopy(&Var0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0xC8F4131414C835A1(&(uParam0->f_1363), &Var0);
	StringCopy(&Var0, "bCarAppPlateSet", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0xC8F4131414C835A1(&(uParam0->f_1365), &Var0);
	StringCopy(&Var0, "bDeleteCarData", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0xC8F4131414C835A1(&(uParam0->f_1364), &Var0);
	StringCopy(&Var0, "iCarAppPlateBack", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x34C9EE5986258415(&(uParam0->f_1370), &Var0);
	StringCopy(&Var0, "tlCarAppPlateText", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x6F7794F28C6B2535(&(uParam0->f_1366), &Var0);
	StringCopy(&Var0, "iOrderCount", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x34C9EE5986258415(&(uParam0->f_1371), &Var0);
	StringCopy(&Var0, "iOrderVehicle", 64);
	StringIntConCat(&Var0, iParam2, 64);
	unk_0x34C9EE5986258415(&(uParam0->f_1372), &Var0);
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1373), 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&Var0, "VEH_SLOT", 64);
		StringIntConCat(&Var0, iVar16, 64);
		unk_0x34C9EE5986258415(&(uParam0->f_1373[iVar16]), &Var0);
		iVar16++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1384), 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&Var0, "VEH_PRIO", 64);
		StringIntConCat(&Var0, iVar16, 64);
		unk_0x34C9EE5986258415(&(uParam0->f_1384[iVar16]), &Var0);
		iVar16++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x34C9EE5986258415(&(uParam0->f_1395), "LAST_USED");
	unk_0x34C9EE5986258415(&(uParam0->f_1396), "NEW_SAVED");
	unk_0xC8F4131414C835A1(&(uParam0->f_1397), "SETUP_INIT");
}

void func_16(var* uParam0, char* sParam1)
{
	unk_0xBF737600CDDBEADD(uParam0, 41, sParam1);
	unk_0x10C2FA78D0E128A1(uParam0, "Model");
	unk_0x34C9EE5986258415(&(uParam0->f_1), "iColourID1");
	unk_0x34C9EE5986258415(&(uParam0->f_2), "iColourID2");
	unk_0x34C9EE5986258415(&(uParam0->f_3), "iColour1Group");
	unk_0x34C9EE5986258415(&(uParam0->f_4), "iColour2Group");
	unk_0x34C9EE5986258415(&(uParam0->f_5), "iWindowTint");
	unk_0x34C9EE5986258415(&(uParam0->f_6), "iTyreSmokeR");
	unk_0x34C9EE5986258415(&(uParam0->f_7), "iTyreSmokeG");
	unk_0x34C9EE5986258415(&(uParam0->f_8), "iTyreSmokeB");
	unk_0x34C9EE5986258415(&(uParam0->f_9), "iEngine");
	unk_0x34C9EE5986258415(&(uParam0->f_10), "iBrakes");
	unk_0x34C9EE5986258415(&(uParam0->f_11), "iWheels");
	unk_0x34C9EE5986258415(&(uParam0->f_12), "iWheelType");
	unk_0x34C9EE5986258415(&(uParam0->f_13), "iExhaust");
	unk_0x34C9EE5986258415(&(uParam0->f_14), "iSuspension");
	unk_0x34C9EE5986258415(&(uParam0->f_15), "iArmour");
	unk_0x34C9EE5986258415(&(uParam0->f_16), "iHorn");
	unk_0x34C9EE5986258415(&(uParam0->f_17), "iLights");
	unk_0xC8F4131414C835A1(&(uParam0->f_18), "bBulletProofTyres");
	unk_0x34C9EE5986258415(&(uParam0->f_19), "iTurbo");
	unk_0x34C9EE5986258415(&(uParam0->f_20), "iTyreSmoke");
	unk_0x6F7794F28C6B2535(&(uParam0->f_21), "tlPlateText");
	unk_0x34C9EE5986258415(&(uParam0->f_25), "iPlateBack");
	unk_0x34C9EE5986258415(&(uParam0->f_26), "UID");
	unk_0x34C9EE5986258415(&(uParam0->f_27), "Cost");
	unk_0x6F7794F28C6B2535(&(uParam0->f_28), "tlPlateText_pending");
	unk_0x34C9EE5986258415(&(uParam0->f_32), "iPlateBack_pending");
	unk_0xC8F4131414C835A1(&(uParam0->f_33), "bProcessOrder");
	unk_0xC8F4131414C835A1(&(uParam0->f_36), "bOrderPending");
	unk_0xC8F4131414C835A1(&(uParam0->f_35), "bOrderReceivedOnBoot");
	unk_0xC8F4131414C835A1(&(uParam0->f_34), "bOrderForPlayerVehicle");
	unk_0xC8F4131414C835A1(&(uParam0->f_37), "bCheckPlateProfanity");
	unk_0xC8F4131414C835A1(&(uParam0->f_40), "bOrderPaidFor");
	unk_0xC8F4131414C835A1(&(uParam0->f_38), "bSCProfanityFailed");
	unk_0xC8F4131414C835A1(&(uParam0->f_39), "bOrderFailedFunds");
	unk_0xEB1774DF12BB9F12();
}

void func_17(var* uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0xBF737600CDDBEADD(uParam0, 43, sParam1);
	unk_0x10C2FA78D0E128A1(uParam0, "Model");
	unk_0x34C9EE5986258415(&(uParam0->f_1), "iColourID1");
	unk_0x34C9EE5986258415(&(uParam0->f_2), "iColourID2");
	unk_0x34C9EE5986258415(&(uParam0->f_3), "iWindowTint");
	unk_0x34C9EE5986258415(&(uParam0->f_4), "iTyreSmokeR");
	unk_0x34C9EE5986258415(&(uParam0->f_5), "iTyreSmokeG");
	unk_0x34C9EE5986258415(&(uParam0->f_6), "iTyreSmokeB");
	unk_0x34C9EE5986258415(&(uParam0->f_7), "iEngine");
	unk_0x34C9EE5986258415(&(uParam0->f_8), "iBrakes");
	unk_0x34C9EE5986258415(&(uParam0->f_9), "iWheels");
	unk_0x34C9EE5986258415(&(uParam0->f_10), "iWheelType");
	unk_0x34C9EE5986258415(&(uParam0->f_11), "iExhaust");
	unk_0x34C9EE5986258415(&(uParam0->f_12), "iSuspension");
	unk_0x34C9EE5986258415(&(uParam0->f_13), "iArmour");
	unk_0x34C9EE5986258415(&(uParam0->f_14), "iHorn");
	unk_0x34C9EE5986258415(&(uParam0->f_15), "iLights");
	unk_0xC8F4131414C835A1(&(uParam0->f_16), "bBulletProofTyres");
	unk_0x34C9EE5986258415(&(uParam0->f_17), "iTurbo");
	unk_0x34C9EE5986258415(&(uParam0->f_18), "iTyreSmoke");
	unk_0x6F7794F28C6B2535(&(uParam0->f_19), "tlPlateText");
	unk_0x34C9EE5986258415(&(uParam0->f_23), "iPlateBack");
	unk_0x34C9EE5986258415(&(uParam0->f_24), "iModCountEngine");
	unk_0x34C9EE5986258415(&(uParam0->f_25), "iModCountBrakes");
	unk_0x34C9EE5986258415(&(uParam0->f_26), "iModCountExhaust");
	unk_0x34C9EE5986258415(&(uParam0->f_27), "iModCountWheels");
	unk_0x34C9EE5986258415(&(uParam0->f_28), "iModCountHorn");
	unk_0x34C9EE5986258415(&(uParam0->f_29), "iModCountArmour");
	unk_0x34C9EE5986258415(&(uParam0->f_30), "iModCountSuspension");
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_31), "fModPriceModifier");
	unk_0x34C9EE5986258415(&(uParam0->f_32), "iModColoursThatCanBeSet");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_33), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_33[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x10C2FA78D0E128A1(&(uParam0->f_39), "eModKitType");
	unk_0xC8F4131414C835A1(&(uParam0->f_40), "bSendDataToCloud");
	unk_0xC8F4131414C835A1(&(uParam0->f_41), "bDeleteData");
	unk_0xC8F4131414C835A1(&(uParam0->f_42), "bUpdateMods");
	unk_0xEB1774DF12BB9F12();
}

void func_18(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&(uParam0->f_4335), &cVar0);
}

void func_19(var* uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0xBF737600CDDBEADD(uParam0, 23, sParam1);
	unk_0xC8F4131414C835A1(uParam0, "TV_ON");
	unk_0x34C9EE5986258415(&(uParam0->f_1), "TV_CHANNEL_ID");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_2), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xC8F4131414C835A1(&(uParam0->f_2[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_5), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0xC8F4131414C835A1(&(uParam0->f_8), "GARAGE_TV_ON");
	unk_0x34C9EE5986258415(&(uParam0->f_9), "GARAGE_TV_CHANNEL_ID");
	unk_0xC8F4131414C835A1(&(uParam0->f_10), "GARAGE_RADIO_ON");
	unk_0x34C9EE5986258415(&(uParam0->f_11), "GARAGE_RADIO_STATION_ID");
	unk_0x34C9EE5986258415(&(uParam0->f_12), "NUMBERS_TIMES_SMOKED");
	unk_0x34C9EE5986258415(&(uParam0->f_13), "NUMBER_TIMES_DRANK");
	unk_0x34C9EE5986258415(&(uParam0->f_14), "NUMBER_TIMES_STRIPPERS");
	unk_0x34C9EE5986258415(&(uParam0->f_15), "NUMBERS_TIMES_SMOKED_SECOND");
	unk_0x34C9EE5986258415(&(uParam0->f_16), "NUMBER_TIMES_DRANK_SECOND");
	unk_0x34C9EE5986258415(&(uParam0->f_17), "NUMBER_TIMES_STRIPPERS_SECOND");
	unk_0x34C9EE5986258415(&(uParam0->f_18), "NUMBERS_TIMES_SMOKED3");
	unk_0x34C9EE5986258415(&(uParam0->f_19), "NUMBER_TIMES_DRANK3");
	unk_0x34C9EE5986258415(&(uParam0->f_20), "NUMBER_TIMES_STRIPPERS3");
	unk_0x10C2FA78D0E128A1(&(uParam0->f_21), "DATE_LAST_CLEANED_APARTMENT");
	unk_0x10C2FA78D0E128A1(&(uParam0->f_22), "SHOWERS_TAKEN");
	unk_0x04456F95153C6BE4();
}

void func_20(var uParam0, int iParam1)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&(uParam0->f_4330), &cVar0);
}

void func_21(var* uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0xBF737600CDDBEADD(uParam0, 5, sParam1);
	unk_0x34C9EE5986258415(uParam0, "BAV_Timestamp");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_1), 4, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x04456F95153C6BE4();
}

void func_22(var* uParam0, int iParam1)
{
	struct<3> Var0;
	
	StringCopy(&Var0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_23(uParam0, &Var0);
}

void func_23(var* uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	unk_0x60FE567DF1B1AF9D(uParam0, 4330, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&Var1, "MP_VEHICLE", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_24(uParam0[iVar0 /*111*/], &Var1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
}

void func_24(var* uParam0, char* sParam1)
{
	unk_0xBF737600CDDBEADD(uParam0, 111, sParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	unk_0x34C9EE5986258415(&(uParam0->f_72), "VEHICLE_BS");
	unk_0x34C9EE5986258415(&(uParam0->f_74), "PAID_PREMIUM");
	unk_0xFAA457EF263E8763(&(uParam0->f_75), "PAID_PLAYER");
	unk_0xFAA457EF263E8763(&(uParam0->f_91), "RADIO_STATION");
	unk_0x34C9EE5986258415(&(uParam0->f_73), "IMPOUND_TIME");
	unk_0x34C9EE5986258415(&(uParam0->f_107), "COLOUR_GROUP1");
	unk_0x34C9EE5986258415(&(uParam0->f_108), "COLOUR_GROUP2");
	unk_0x34C9EE5986258415(&(uParam0->f_109), "PRICE_PAID");
	unk_0x34C9EE5986258415(&(uParam0->f_110), "OBTAIN_TIME");
	unk_0xEB1774DF12BB9F12();
}

void func_25(var* uParam0, char* sParam1)
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	unk_0xBF737600CDDBEADD(uParam0, 72, sParam1);
	unk_0x34C9EE5986258415(&(uParam0->f_54), "iSpawnVehicleHorn");
	unk_0x7CAEC29ECB5DFEBB(&(uParam0->f_55), "fEnveffScale");
	func_26(&(uParam0->f_56), "GamerHandleOfCarOwner");
	unk_0x34C9EE5986258415(&(uParam0->f_69), "OwnerStatus");
	unk_0x34C9EE5986258415(&(uParam0->f_70), "iFlags");
	unk_0x34C9EE5986258415(&(uParam0->f_71), "iPVSlot");
	unk_0xEB1774DF12BB9F12();
}

void func_26(var* uParam0, char* sParam1)
{
	unk_0xBF737600CDDBEADD(uParam0, 13, sParam1);
	unk_0xA735353C77334EA0(uParam0, "Data64_1");
	unk_0xA735353C77334EA0(&(uParam0->f_1), "Data64_2");
	unk_0xA735353C77334EA0(&(uParam0->f_2), "Data64_3");
	unk_0xA735353C77334EA0(&(uParam0->f_3), "Data64_4");
	unk_0xA735353C77334EA0(&(uParam0->f_4), "Data64_5");
	unk_0xA735353C77334EA0(&(uParam0->f_5), "Data64_6");
	unk_0xA735353C77334EA0(&(uParam0->f_6), "Data64_7");
	unk_0xA735353C77334EA0(&(uParam0->f_7), "Data64_8");
	unk_0xA735353C77334EA0(&(uParam0->f_8), "Data64_9");
	unk_0xA735353C77334EA0(&(uParam0->f_9), "Data64_10");
	unk_0xA735353C77334EA0(&(uParam0->f_10), "Data64_11");
	unk_0xA735353C77334EA0(&(uParam0->f_11), "Data64_12");
	unk_0xA735353C77334EA0(&(uParam0->f_12), "Data64_13");
	unk_0xEB1774DF12BB9F12();
}

void func_27(var* uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0xBF737600CDDBEADD(uParam0, 54, sParam1);
	unk_0x34C9EE5986258415(uParam0, "iPlateIndex");
	unk_0x6F7794F28C6B2535(&(uParam0->f_1), "tlPlateText");
	unk_0x34C9EE5986258415(&(uParam0->f_5), "iColour1");
	unk_0x34C9EE5986258415(&(uParam0->f_6), "iColour2");
	unk_0x34C9EE5986258415(&(uParam0->f_7), "iColourExtra1");
	unk_0x34C9EE5986258415(&(uParam0->f_8), "iColourExtra2");
	unk_0x34C9EE5986258415(&(uParam0->f_38), "iTyreR");
	unk_0x34C9EE5986258415(&(uParam0->f_39), "iTyreG");
	unk_0x34C9EE5986258415(&(uParam0->f_40), "iTyreB");
	unk_0x34C9EE5986258415(&(uParam0->f_41), "iWindowTintColour");
	unk_0x34C9EE5986258415(&(uParam0->f_43), "iLivery");
	unk_0x34C9EE5986258415(&(uParam0->f_45), "iWheelType");
	unk_0x10C2FA78D0E128A1(&(uParam0->f_44), "eRoofState");
	unk_0x34C9EE5986258415(&(uParam0->f_53), "iFlags");
	unk_0x34C9EE5986258415(&(uParam0->f_47), "iCustomR");
	unk_0x34C9EE5986258415(&(uParam0->f_48), "iCustomG");
	unk_0x34C9EE5986258415(&(uParam0->f_49), "iCustomB");
	unk_0x34C9EE5986258415(&(uParam0->f_50), "iNeonR");
	unk_0x34C9EE5986258415(&(uParam0->f_51), "iNeonG");
	unk_0x34C9EE5986258415(&(uParam0->f_52), "iNeonB");
	unk_0x10C2FA78D0E128A1(&(uParam0->f_42), "eModel");
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_9), 26, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x60FE567DF1B1AF9D(&(uParam0->f_35), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x34C9EE5986258415(&(uParam0->f_35[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0x04456F95153C6BE4();
	unk_0x10C2FA78D0E128A1(&(uParam0->f_46), "eLockState");
	unk_0xEB1774DF12BB9F12();
}

void func_28()
{
	unk_0x7E2BD3EF6C205F09("No_Filter", true);
	unk_0x7E2BD3EF6C205F09("phone_cam1", true);
	unk_0x7E2BD3EF6C205F09("phone_cam2", true);
	unk_0x7E2BD3EF6C205F09("phone_cam3", true);
	unk_0x7E2BD3EF6C205F09("phone_cam4", true);
	unk_0x7E2BD3EF6C205F09("phone_cam5", true);
	unk_0x7E2BD3EF6C205F09("phone_cam6", true);
	unk_0x7E2BD3EF6C205F09("phone_cam7", true);
	unk_0x7E2BD3EF6C205F09("phone_cam9", true);
	unk_0x7E2BD3EF6C205F09("phone_cam12", false);
}

void func_29(int iParam0, int iParam1)
{
	unk_0xD62A67D26D9653E6(iParam0);
	while (!unk_0x5F0F0C783EB16C04(iParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xD62A67D26D9653E6(iParam0);
	}
	unk_0xEB1C67C3A5333A92(iParam0, iParam1);
}

int func_30()
{
	if (((unk_0xEF7D17BC6C85264C() || unk_0xF2CA003F167E21D2()) || unk_0x88B588B41FF7868E()) || unk_0x67FC09BC554A75E5())
	{
		return 1;
	}
	return 0;
}

