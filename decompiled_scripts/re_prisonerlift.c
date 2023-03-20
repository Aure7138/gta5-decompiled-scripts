#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	struct<3> Local_76 = { 0, 0, 0 } ;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82[2] = { 0, 0 };
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	float fLocal_109 = 0f;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_132 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 16;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_47 = unk_0x41A93ECFFBBAC499();
	uLocal_48 = unk_0xEF74E92BF5AB1FC4();
	Local_63 = { 1492.31f, 2136.53f, 89.15f };
	Local_66 = { 1408.24f, 2522.803f, 41.0419f };
	Local_114 = { 370.2576f, -1597.488f, 35.94954f };
	Local_117 = { 824.992f, -1289.267f, 27.24564f };
	Local_120 = { 450.1889f, -981.6754f, 42.69174f };
	Local_123 = { -1088.37f, -842.2911f, 30.27554f };
	Local_126 = { 608.9076f, 0.806411f, 100.2497f };
	Local_129 = { -562.0159f, -130.8113f, 37.4369f };
	Local_132 = { 1855.237f, 3683.236f, 33.29165f };
	Local_135 = { -443.5063f, 6016.231f, 30.71787f };
	Local_138 = { 1693.518f, 2579.21f, 44.95713f };
	Local_59 = { ScriptParam_0.f_1[0 /*3*/] };
	func_185();
	if (unk_0x89522B8E487D4EF9(11))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			if (unk_0x6CCCE00683E8FD6D(iLocal_72))
			{
				unk_0x46D4C1D7588933FB(iLocal_72);
			}
		}
		func_170();
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			unk_0x52F20802944F8DCE();
		}
	}
	if (func_128(Local_59, 22, iLocal_69, 0, 0))
	{
		func_125(22);
	}
	else
	{
		unk_0x52F20802944F8DCE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x18544C93469391DA() || iLocal_96)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			unk_0xE10447427D928F55("RE_PL", 0);
			switch (iLocal_53)
			{
				case 0:
					if (func_111())
					{
						func_170();
					}
					if (!iLocal_58)
					{
						func_110();
					}
					else
					{
						func_109();
					}
					if (bLocal_57)
					{
						iLocal_141 = 1;
						iLocal_53 = 1;
					}
					break;
				
				case 1:
					if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
					{
						switch (iLocal_54)
						{
							case 0:
								switch (iLocal_55)
								{
									case 0:
										func_102();
										break;
									
									case 1:
										if (iLocal_56 == 0)
										{
											if (!unk_0xAF437D7C802AB246(iLocal_72))
											{
												if ((unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 100f, 100f, 100f, 0, 1, 0) && !unk_0x51AAB57E2FC16B14(iLocal_72)) || unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													if (unk_0xD11595488376CB53(uLocal_105))
													{
														unk_0x9C9B069F802F9A20(uLocal_105, 1);
													}
													func_89();
													if (!func_88())
													{
														if (unk_0x23417CDB252083F9(iLocal_72, "random@prisoner_lift", "arms_waving", 3) || unk_0x23417CDB252083F9(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															unk_0xFA2C5C2D054C888E(iLocal_72);
														}
														func_87(&uLocal_107);
													}
												}
											}
											else
											{
												func_86();
											}
											func_85();
											func_84();
										}
										else if (iLocal_56 == 1)
										{
											if (!unk_0xAF437D7C802AB246(iLocal_72))
											{
												if ((unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 105f, 105f, 105f, 0, 1, 0) && !unk_0x51AAB57E2FC16B14(iLocal_72)) || unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (!unk_0x76B2D234F1895632(iLocal_72))
												{
													if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
													{
														if (unk_0xD11595488376CB53(uLocal_105))
														{
															unk_0x9C9B069F802F9A20(uLocal_105, 1);
														}
														func_89();
													}
												}
												if (bLocal_99)
												{
													if (unk_0x83666F9FB8FEBD4B() > 2000 && unk_0x83666F9FB8FEBD4B() < 2100)
													{
														unk_0xAA6742AEFA0B2BC4(iLocal_72);
													}
													if (unk_0x83666F9FB8FEBD4B() > 3000)
													{
														if (!iLocal_102)
														{
															if (!func_83())
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_102 = 1;
															}
														}
													}
												}
												if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
												{
													if (unk_0xC45A34912542C4EB(unk_0xA0B1717D806F4901(), 0))
													{
														if (!func_71(unk_0xA0B1717D806F4901()))
														{
															if (unk_0x0E6C083BC5101C8B(unk_0xA0B1717D806F4901(), iLocal_72, 40f, 40f, 20f, 0, 1, 0) && unk_0xF70F7CD913F23E2A(iLocal_72, unk_0xA0B1717D806F4901(), 17))
															{
																unk_0xFA2C5C2D054C888E(iLocal_72);
																if (!unk_0x28D33422BA6C479D(unk_0xA0B1717D806F4901()))
																{
																	unk_0x20BB4B94CC6DDC9A(unk_0xA0B1717D806F4901(), 1, 0);
																}
																unk_0x547730440687D355(iLocal_72, unk_0xA0B1717D806F4901(), unk_0xE7869D5D7816A9B6(), 8, 22f, 786469, 1f, 1f, 1);
																unk_0x8D6671D78D1F569B(iLocal_72, 1);
																iLocal_55 = 13;
															}
															else if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && unk_0xF70F7CD913F23E2A(iLocal_72, unk_0xE7869D5D7816A9B6(), 17))
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_86();
															}
														}
														else
														{
															func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
													else
													{
														func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_86();
													}
												}
												if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
												{
													if (unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
													{
														if (((unk_0xCFA5146E8AEF8EB0(unk_0xE7869D5D7816A9B6()) || unk_0x63E25E4341FF2308(unk_0xE7869D5D7816A9B6(), joaat("rhino"))) || unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6())) || unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
														{
															func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
												}
											}
											if (func_70())
											{
												if (!unk_0x76B2D234F1895632(iLocal_72))
												{
													if (!unk_0x63E25E4341FF2308(unk_0xE7869D5D7816A9B6(), joaat("bus")))
													{
														if (func_69(unk_0xE7869D5D7816A9B6(), iLocal_72) < 2.5f)
														{
															if (unk_0xD4F0FC8FFEDE152B(uLocal_75) < 1f)
															{
																func_68();
															}
														}
													}
													else if (func_69(unk_0xE7869D5D7816A9B6(), iLocal_72) < 10f)
													{
														if (unk_0xD4F0FC8FFEDE152B(uLocal_75) < 1f)
														{
															func_68();
														}
													}
												}
											}
										}
										if (func_64())
										{
											if (!unk_0xAF437D7C802AB246(iLocal_72))
											{
												unk_0xFA2C5C2D054C888E(iLocal_72);
												if (unk_0x6CCCE00683E8FD6D(iLocal_72))
												{
													unk_0x46D4C1D7588933FB(iLocal_72);
												}
											}
											func_86();
										}
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0xD9404A1491ECECC4(iLocal_72, 0);
										}
										break;
									
									case 2:
										func_63();
										func_84();
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0xD9404A1491ECECC4(iLocal_72, 0);
										}
										break;
									
									case 3:
										if (func_62())
										{
											iLocal_55 = 9;
										}
										func_54();
										func_84();
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0xD9404A1491ECECC4(iLocal_72, 0);
										}
										break;
									
									case 5:
										func_53();
										break;
									
									case 6:
										if (!iLocal_104 && !unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0x94026C1D1DB14225(&uLocal_74);
											unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), 5000, 2048, 2);
											unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
											unk_0x82606438816C878C(0, 1500);
											unk_0x33E113E52A91C5C3(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
											unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_SMOKING", 0, 1);
											unk_0x911ECBCE73F8EC3F(uLocal_74);
											unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
											unk_0x33A90AD8FA327B72(&uLocal_74);
											unk_0x8D6671D78D1F569B(iLocal_72, 1);
											func_72(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											unk_0x46D4C1D7588933FB(iLocal_72);
											iLocal_104 = 1;
										}
										if (func_64())
										{
											if (!unk_0xAF437D7C802AB246(iLocal_72))
											{
												unk_0xFA2C5C2D054C888E(iLocal_72);
												if (unk_0x6CCCE00683E8FD6D(iLocal_72))
												{
													unk_0x46D4C1D7588933FB(iLocal_72);
												}
												func_51();
												unk_0x4EDE34FBADD967A6(0);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
												unk_0x8D6671D78D1F569B(iLocal_72, 1);
												unk_0x4EDE34FBADD967A6(0);
											}
											func_86();
										}
										if (!func_83())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
										{
											if (!unk_0xD11595488376CB53(uLocal_70))
											{
												uLocal_70 = func_6(Local_86, 1);
											}
											if (func_72(&uLocal_148, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_55 = 3;
											}
										}
										if (bLocal_100)
										{
											if (unk_0xD51CFE69539DB6D8(uLocal_85))
											{
												if (!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0) || func_5(unk_0xE7869D5D7816A9B6(), uLocal_85, 1) > 200f)
												{
													unk_0x506D42CB68AE4EA5(&(uLocal_82[0]));
													unk_0x506D42CB68AE4EA5(&(uLocal_82[1]));
													unk_0xC1F2137782A816E9(&uLocal_85);
												}
											}
										}
										if (func_64())
										{
											if (!unk_0xAF437D7C802AB246(iLocal_72))
											{
												unk_0xFA2C5C2D054C888E(iLocal_72);
												if (unk_0x6CCCE00683E8FD6D(iLocal_72))
												{
													unk_0x46D4C1D7588933FB(iLocal_72);
												}
												unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
												unk_0x8D6671D78D1F569B(iLocal_72, 1);
												func_51();
												unk_0x4EDE34FBADD967A6(0);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_86();
										}
										break;
									
									case 11:
										unk_0x63EB72E192731928(0.1f);
										if (unk_0xC45A34912542C4EB(uLocal_75, 0))
										{
											if (!func_71(iLocal_75))
											{
												if (!iLocal_101)
												{
													if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && !unk_0x51374A0BB2871E6E(iLocal_72, 0))
													{
														if (!unk_0xAF437D7C802AB246(iLocal_72))
														{
															if (!iLocal_103)
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_103 = 1;
															}
															unk_0x65682335D54DEA1C(iLocal_72, iLocal_75, -1, -1, 2f, 1, 0);
															unk_0x8D6671D78D1F569B(iLocal_72, 1);
															iLocal_55 = 12;
														}
													}
													if (!unk_0xAF437D7C802AB246(iLocal_72))
													{
														if (((unk_0x915685CA559C211B(iLocal_72, unk_0xE7869D5D7816A9B6(), 1) || (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iLocal_72) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))) || (unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iLocal_72) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))) || (unk_0xD4F0FC8FFEDE152B(iLocal_75) > 2.5f && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_75, 0)))
														{
															unk_0x13C351F151D49F89(iLocal_72, unk_0xE7869D5D7816A9B6(), 0, 16);
															func_51();
															iLocal_101 = 1;
														}
													}
												}
											}
											else
											{
												if (unk_0xD11595488376CB53(uLocal_105))
												{
													unk_0x5B62CAB9B0D6ABF1(&uLocal_105);
												}
												if (!unk_0xAF437D7C802AB246(iLocal_72))
												{
													unk_0x94026C1D1DB14225(&uLocal_74);
													unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
													unk_0x911ECBCE73F8EC3F(uLocal_74);
													unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
													unk_0x33A90AD8FA327B72(&uLocal_74);
													unk_0x8D6671D78D1F569B(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
										}
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											if (!unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 150f, 150f, 150f, 0, 1, 0))
											{
												unk_0x94026C1D1DB14225(&uLocal_74);
												unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
												unk_0x911ECBCE73F8EC3F(uLocal_74);
												unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
												unk_0x33A90AD8FA327B72(&uLocal_74);
												unk_0x8D6671D78D1F569B(iLocal_72, 1);
												iLocal_55 = 13;
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 12:
										unk_0x63EB72E192731928(0.1f);
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											if (unk_0x915685CA559C211B(iLocal_72, unk_0xE7869D5D7816A9B6(), 1))
											{
												if (unk_0xD11595488376CB53(uLocal_105))
												{
													unk_0x4ADC112587E95B61(uLocal_105, 0);
													unk_0x29FD5B1A4BA65801(iLocal_72);
												}
											}
											if (unk_0xC45A34912542C4EB(iLocal_75, 0))
											{
												if (!func_71(iLocal_75))
												{
													if (unk_0x8AF655CC5761C7A2(iLocal_72, iLocal_75, 0))
													{
														if (!unk_0x28D33422BA6C479D(iLocal_75))
														{
															unk_0x20BB4B94CC6DDC9A(iLocal_75, 1, 0);
														}
														unk_0x547730440687D355(iLocal_72, iLocal_75, unk_0xE7869D5D7816A9B6(), 8, 22f, 786469, 1f, 1f, 1);
														unk_0x8D6671D78D1F569B(iLocal_72, 1);
														iLocal_55 = 13;
													}
													else if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_75, 0))
													{
														if (bLocal_110)
														{
															unk_0x13C351F151D49F89(iLocal_72, unk_0xE7869D5D7816A9B6(), 0, 16);
															func_51();
															iLocal_101 = 1;
															iLocal_55 = 11;
														}
														else
														{
															func_68();
														}
													}
													else if (unk_0xC47857E5E74EA5AF(iLocal_72, -1794415470) != 1 && unk_0xC47857E5E74EA5AF(iLocal_72, -1794415470) != 0)
													{
														if (unk_0xC47857E5E74EA5AF(iLocal_72, 780511057) != 1 && unk_0xC47857E5E74EA5AF(iLocal_72, 780511057) != 0)
														{
														}
														else
														{
															iLocal_55 = 11;
														}
													}
												}
												else
												{
													if (unk_0xD11595488376CB53(uLocal_105))
													{
														unk_0x5B62CAB9B0D6ABF1(&uLocal_105);
													}
													unk_0x94026C1D1DB14225(&uLocal_74);
													unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
													unk_0x911ECBCE73F8EC3F(uLocal_74);
													unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
													unk_0x33A90AD8FA327B72(&uLocal_74);
													unk_0x8D6671D78D1F569B(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
											else
											{
												unk_0x94026C1D1DB14225(&uLocal_74);
												unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
												unk_0x911ECBCE73F8EC3F(uLocal_74);
												unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
												unk_0x33A90AD8FA327B72(&uLocal_74);
												unk_0x8D6671D78D1F569B(iLocal_72, 1);
												iLocal_55 = 13;
											}
											if (!iLocal_101)
											{
												if (((unk_0x915685CA559C211B(iLocal_72, unk_0xE7869D5D7816A9B6(), 1) || (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iLocal_72) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))) || (unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iLocal_72) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))) || (unk_0xD4F0FC8FFEDE152B(iLocal_75) > 2.5f && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_75, 0)))
												{
													unk_0x13C351F151D49F89(iLocal_72, unk_0xE7869D5D7816A9B6(), 0, 16);
													func_51();
													iLocal_101 = 1;
												}
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 13:
										iLocal_96 = 1;
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											if (unk_0x4231F56FA5885AE9(iLocal_72))
											{
												func_51();
											}
											if (unk_0x51374A0BB2871E6E(iLocal_72, 0))
											{
												if (unk_0xD11595488376CB53(uLocal_105))
												{
													unk_0x4ADC112587E95B61(uLocal_105, 0);
												}
												if (unk_0x7579897B912B3328(unk_0xF0295FF51F2D7803(iLocal_72, 0), joaat("towtruck")) || unk_0x7579897B912B3328(unk_0xF0295FF51F2D7803(iLocal_72, 0), joaat("towtruck2")))
												{
													uLocal_81 = unk_0x2C8FCD278A247AE4(unk_0xF0295FF51F2D7803(iLocal_72, 0));
													if (unk_0xD51CFE69539DB6D8(uLocal_81))
													{
														iLocal_80 = unk_0xE59FAD6B5E1AA42D(uLocal_81);
														if (!unk_0x76B2D234F1895632(unk_0xF0295FF51F2D7803(iLocal_72, 0)) && !unk_0x76B2D234F1895632(iLocal_80))
														{
															if (unk_0x3E29DD6D10980B6B(unk_0xF0295FF51F2D7803(iLocal_72, 0), iLocal_80))
															{
																unk_0xAD21FB183883C51A(unk_0xF0295FF51F2D7803(iLocal_72, 0), iLocal_80);
															}
														}
													}
												}
												if (unk_0x7216F2326CC6B06A(unk_0xE7869D5D7816A9B6(), unk_0xF0295FF51F2D7803(iLocal_72, 0)))
												{
													unk_0x94026C1D1DB14225(&uLocal_74);
													unk_0xCD7A5BCC47D00FB2(0, 0, 0);
													unk_0x13C351F151D49F89(0, unk_0xE7869D5D7816A9B6(), 0, 16);
													unk_0x911ECBCE73F8EC3F(uLocal_74);
													unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
													unk_0x33A90AD8FA327B72(&uLocal_74);
													unk_0x8D6671D78D1F569B(iLocal_72, 1);
												}
												if (!iLocal_113)
												{
													if ((func_1(unk_0xF0295FF51F2D7803(iLocal_72, 0)) || !unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(iLocal_72, 0), 0)) || func_71(unk_0xF0295FF51F2D7803(iLocal_72, 0)))
													{
														if (unk_0xD11595488376CB53(uLocal_105))
														{
															unk_0x4ADC112587E95B61(uLocal_105, 0);
														}
														unk_0x94026C1D1DB14225(&uLocal_74);
														unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
														unk_0x911ECBCE73F8EC3F(uLocal_74);
														unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
														unk_0x33A90AD8FA327B72(&uLocal_74);
														unk_0x8D6671D78D1F569B(iLocal_72, 1);
														iLocal_113 = 1;
													}
												}
												if (!unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 245f, 245f, 245f, 0, 1, 0))
												{
													func_86();
												}
											}
											else if (unk_0xC47857E5E74EA5AF(iLocal_72, 242628503) != 1 && unk_0xC47857E5E74EA5AF(iLocal_72, 242628503) != 0)
											{
												iLocal_55 = 11;
											}
											else if (!unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 200f, 200f, 200f, 0, 1, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_95)
								{
									case 1:
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0xFA2C5C2D054C888E(iLocal_72);
											if (unk_0x6CCCE00683E8FD6D(iLocal_72))
											{
												unk_0x46D4C1D7588933FB(iLocal_72);
											}
											unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
											unk_0x8D6671D78D1F569B(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 2:
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0xFA2C5C2D054C888E(iLocal_72);
											if (unk_0x6CCCE00683E8FD6D(iLocal_72))
											{
												unk_0x46D4C1D7588933FB(iLocal_72);
											}
											unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
											unk_0x8D6671D78D1F569B(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 3:
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0xFA2C5C2D054C888E(iLocal_72);
											if (unk_0x6CCCE00683E8FD6D(iLocal_72))
											{
												unk_0x46D4C1D7588933FB(iLocal_72);
											}
											unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
											unk_0x8D6671D78D1F569B(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 4:
										if (!unk_0xAF437D7C802AB246(iLocal_72))
										{
											unk_0xFA2C5C2D054C888E(iLocal_72);
											if (unk_0x6CCCE00683E8FD6D(iLocal_72))
											{
												unk_0x46D4C1D7588933FB(iLocal_72);
											}
											unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
											unk_0x8D6671D78D1F569B(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_170();
		}
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_4(unk_0xE7869D5D7816A9B6()) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0)) && func_2(iParam0))
	{
		iVar0 = unk_0xA0B1717D806F4901();
		if (func_2(iVar0))
		{
			iVar1 = unk_0x1B2DC87EFB36DF80(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x3E29DD6D10980B6B(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (!unk_0x9DD85FBDD5BC3BF1(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (!unk_0x76B2D234F1895632(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!unk_0xAF437D7C802AB246(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(uParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

var func_6(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_7(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
	return uVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()
{
	if (!unk_0xAF437D7C802AB246(iLocal_72))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (!func_88())
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_72, 1227113341) != 1 && unk_0xC47857E5E74EA5AF(iLocal_72, 1227113341) != 0)
				{
					unk_0xD0153915878AE371(iLocal_72, unk_0xE7869D5D7816A9B6(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x51374A0BB2871E6E(iLocal_72, 0))
				{
					unk_0xCD7A5BCC47D00FB2(iLocal_72, 0, 0);
				}
				if (!iLocal_111)
				{
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_111 = 1;
					}
				}
			}
			else
			{
				iLocal_111 = 0;
				if (unk_0xC47857E5E74EA5AF(iLocal_72, 1227113341) == 1 && unk_0xC47857E5E74EA5AF(iLocal_72, 1227113341) == 0)
				{
					unk_0xFA2C5C2D054C888E(iLocal_72);
				}
			}
		}
	}
}

int func_9()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		if (unk_0xC45A34912542C4EB(unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6()), 1))
		{
			if ((unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1))) || unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1)))) || unk_0x7BB0AC45FF0A3A28(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10()
{
	if (!unk_0xAF437D7C802AB246(iLocal_72))
	{
		if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (unk_0x8AF655CC5761C7A2(iLocal_72, unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
					{
						if (unk_0xD11595488376CB53(uLocal_105))
						{
							unk_0x5B62CAB9B0D6ABF1(&uLocal_105);
						}
						if (iLocal_55 != 10)
						{
							if (!unk_0xD11595488376CB53(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
						}
					}
				}
				else
				{
					if (unk_0xD11595488376CB53(uLocal_105))
					{
						unk_0x5B62CAB9B0D6ABF1(&uLocal_105);
					}
					if (iLocal_55 != 10)
					{
						if (!unk_0xD11595488376CB53(uLocal_70))
						{
							uLocal_70 = func_6(Local_86, 1);
						}
					}
				}
			}
			else if (unk_0xD11595488376CB53(uLocal_70))
			{
				unk_0x5B62CAB9B0D6ABF1(&uLocal_70);
			}
		}
		else
		{
			if (!unk_0xD11595488376CB53(uLocal_105))
			{
				uLocal_105 = func_11(iLocal_72, 0, 145);
			}
			if (unk_0xD11595488376CB53(uLocal_70))
			{
				unk_0x5B62CAB9B0D6ABF1(&uLocal_70);
			}
		}
	}
}

var func_11(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xD11595488376CB53(uVar0)) && unk_0x33FD8E2E139F4FAC(&(Global_99155.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x227FC39A4871C64F(uVar0, &(Global_99155.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_7(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, bParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_7(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, bParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_7(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_13()
{
	switch (iLocal_106)
	{
		case 0:
			if (func_14())
			{
				if (unk_0x6CCCE00683E8FD6D(iLocal_72))
				{
					unk_0x46D4C1D7588933FB(iLocal_72);
				}
				func_51();
				unk_0x4EDE34FBADD967A6(0);
				func_72(&uLocal_148, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_106++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					if (unk_0xC45A34912542C4EB(iLocal_75, 0))
					{
						unk_0x8B0B2B109668AA4F(iLocal_75, -1f);
						if (unk_0xD11595488376CB53(uLocal_70))
						{
							unk_0x5B62CAB9B0D6ABF1(&uLocal_70);
						}
						iLocal_106++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0xC45A34912542C4EB(iLocal_75, 0))
					{
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
						unk_0x94EB3B5D2CDEC0CD(unk_0xE7869D5D7816A9B6(), iLocal_75, 24, 2000);
						iLocal_106++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 4000)
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
					if (unk_0xC45A34912542C4EB(iLocal_75, 0))
					{
						if (!unk_0xAF437D7C802AB246(iLocal_72))
						{
							unk_0x46D4C1D7588933FB(iLocal_72);
							unk_0x8B0B2B109668AA4F(iLocal_75, 0f);
							unk_0x663F1B23D2C4D20A(iLocal_72, iLocal_75, 320);
							if (!unk_0xD11595488376CB53(uLocal_105))
							{
								uLocal_105 = func_11(iLocal_72, 1, 145);
							}
							iLocal_106++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xC45A34912542C4EB(iLocal_75, 0))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_72) && !unk_0x8AF655CC5761C7A2(iLocal_72, iLocal_75, 0))
				{
					unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
					unk_0x8D6671D78D1F569B(iLocal_72, 1);
					func_51();
					unk_0x4EDE34FBADD967A6(0);
					func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 5:
			unk_0x4EDE34FBADD967A6(0);
			func_86();
			break;
	}
}

int func_14()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iLocal_75 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (unk_0xC45A34912542C4EB(iLocal_75, 0))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_72))
			{
				if (unk_0xF50745B40235B5B8(iLocal_72, iLocal_75))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()
{
	if ((!iLocal_104 && !unk_0xAF437D7C802AB246(iLocal_72)) && unk_0xC45A34912542C4EB(iLocal_75, 0))
	{
		unk_0x46D4C1D7588933FB(iLocal_72);
		unk_0x94026C1D1DB14225(&uLocal_74);
		unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), 5000, 2048, 2);
		unk_0xCD7A5BCC47D00FB2(0, 0, 0);
		unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
		unk_0x33E113E52A91C5C3(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
		unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_SMOKING", 0, 1);
		unk_0x911ECBCE73F8EC3F(uLocal_74);
		unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
		unk_0x33A90AD8FA327B72(&uLocal_74);
		unk_0x8D6671D78D1F569B(iLocal_72, 1);
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
		iLocal_104 = 1;
	}
	if (func_64())
	{
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			unk_0xFA2C5C2D054C888E(iLocal_72);
			if (unk_0x6CCCE00683E8FD6D(iLocal_72))
			{
				unk_0x46D4C1D7588933FB(iLocal_72);
			}
			unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
			unk_0x8D6671D78D1F569B(iLocal_72, 1);
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (!func_83())
	{
		func_16();
	}
}

void func_16()
{
	if (!unk_0xAF437D7C802AB246(iLocal_72))
	{
		unk_0x9BEE7E791BC4D38B(iLocal_72, 0);
	}
	while (!func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (iLocal_56 == 0)
	{
		func_45(func_49(), 4, 3);
	}
	func_20(22, iLocal_69);
	func_17();
	func_170();
}

void func_17()
{
	func_18();
}

int func_18()
{
	if (func_19(0))
	{
		return 0;
	}
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_42(iParam0))
	{
		func_41(iParam0, iParam1);
		if (!func_40(51))
		{
			func_31("RE_REWARD", 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_99155.f_29444.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), Local_50.f_0, Local_50.f_1);
		}
		Global_99143 = iParam1;
		if (Global_99141 == 0)
		{
			if (((Global_99144 == 1 || Global_99144 == 5) || Global_99144 == 11) || Global_99144 == 25)
			{
				func_21(2);
			}
			else if ((Global_99144 == 26 || Global_99144 == 8) || Global_99144 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_99141 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)
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
		func_26((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99155.f_8808[iParam0 /*12*/].f_6 == 11 || Global_99155.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99155.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_99155.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_99155.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_23();
	}
}

void func_23()
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
	Global_98891 = 0;
	Global_98892 = 0;
	Global_98893 = 0;
	Global_98894 = 0;
	Global_98895 = 0;
	Global_98896 = 0;
	Global_98897 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99155.f_8808.f_3853;
	Global_99155.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99155.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99155.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98891++;
					fVar1 = (fVar1 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98892++;
					fVar2 = (fVar2 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98893++;
					fVar3 = (fVar3 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98894++;
					fVar4 = (fVar4 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98895++;
					fVar5 = (fVar5 + (Global_99155.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98896++;
					fVar6 = (fVar6 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98897++;
					fVar7 = (fVar7 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98874 > 0)
	{
		if (Global_98891 == Global_98874)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98875 > 0)
	{
		if (Global_98892 == Global_98875)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98876 > 0)
	{
		if (Global_98893 == Global_98876)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98877 > 0)
	{
		if (Global_98894 == Global_98877)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98878 > 0)
	{
		if (((Global_98895 == Global_98878 || (Global_98878 * 10 / Global_98895) < 41) || Global_98895 > Global_98881) || Global_98895 == Global_98881)
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_8808.f_3856, 14))
			{
				if (Global_98895 == Global_98878)
				{
					unk_0xE4A025C0D4FCCAFA(joaat("num_rndevents_completed"), Global_98878, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98879 > 0)
	{
		if (Global_98896 == Global_98879)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98880 > 0)
	{
		if (Global_98897 == Global_98880)
		{
			fVar7 = 5f;
		}
	}
	Global_99155.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98895 > Global_98881 || Global_98895 == Global_98881)
	{
		iVar9 = Global_98881;
	}
	else
	{
		iVar9 = Global_98895;
	}
	unk_0x39DEDCCD70293F58(joaat("num_missions_completed"), Global_98891, 1);
	unk_0x39DEDCCD70293F58(joaat("num_missions_available"), Global_98874, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_completed"), Global_98892, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_available"), Global_98875, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_completed"), Global_98893, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_available"), Global_98876, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_completed"), Global_98894, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_available"), Global_98877, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_available"), Global_98881, 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_completed"), (Global_98897 + Global_98896), 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_available"), (Global_98880 + Global_98879), 1);
	Global_98898 = (Global_98891 * 100 / Global_98874);
	Global_98900 = ((Global_98893 + Global_98892) * 100 / (Global_98876 + Global_98875));
	Global_98899 = ((Global_98894 + iVar9) * 100 / (Global_98877 + Global_98881));
	Global_98901 = ((Global_98896 + Global_98897) * 100 / (Global_98879 + Global_98880));
	unk_0xFF6A346D78DD4938(joaat("total_progress_made"), Global_99155.f_8808.f_3853, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_story_missions"), Global_98898, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_ambient_missions"), Global_98899, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_oddjobs"), Global_98900, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853))
	{
		func_25(13, unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853));
	}
	if (!unk_0x11ED867E5A37BE49())
	{
		if (!Global_69236)
		{
			if (func_24() == 2 == 0 && !unk_0x00AAD79B42B3E036())
			{
				if (unk_0x472ED84D47326927())
				{
					Global_98889 = 0;
				}
				if (!Global_55578)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()
{
	return Global_25034;
}

int func_25(int iParam0, int iParam1)
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
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_27()
{
	return Global_1312746;
}

int func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_30(int iParam0)
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
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x04E7E853E31F41A3(sParam0, ""))
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
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99155.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_8 = (unk_0x9D40BBF80D8F5E8A() + iParam3);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = ((unk_0x9D40BBF80D8F5E8A() + iParam3) + iParam4);
		}
		else
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_99155.f_24859.f_145++;
		func_33();
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99155.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[0])
			{
				Global_99155.f_24859.f_146[0] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[1])
			{
				Global_99155.f_24859.f_146[1] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[2])
			{
				Global_99155.f_24859.f_146[2] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_34()
{
	func_35();
	switch (Global_99155.f_1750.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_35()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_39(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_38(unk_0xE7869D5D7816A9B6());
			if (func_37(iVar0) && (!func_36(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_37(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_36(int iParam0)
{
	return Global_35619 == iParam0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_40(int iParam0)
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
		return unk_0xB519E5386FBF69E5(Global_99155.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_99155.f_29444.f_8[iParam0]), iParam1);
}

int func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_43()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x959E7FA37C0D0892(), 64);
	uVar16 = func_44(Var0);
	return uVar16;
}

int func_44(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xC7C6DDDE84A8E734(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_99155.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_99155.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3717;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3717)
			{
				iVar0 = func_48(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_47(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
}

int func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_47(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49()
{
	func_35();
	return Global_99155.f_1750.f_539.f_3549;
}

int func_50()
{
	return 1;
}

void func_51()
{
	Global_14578 = 0;
	func_52();
}

void func_52()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

void func_53()
{
	if (unk_0xD11595488376CB53(uLocal_70))
	{
		unk_0x1AD7485666C5160C(uLocal_70, 0);
		unk_0x5B62CAB9B0D6ABF1(&uLocal_70);
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			unk_0x00400F14096FE01D();
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 1000)
	{
		iLocal_55 = 7;
	}
}

void func_54()
{
	struct<3> Var0[4];
	
	func_10();
	func_61();
	func_60();
	func_8();
	if (!iLocal_97 && !iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
	}
	if (iLocal_97 && !iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
	}
	if (iLocal_97 && iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
	}
	if (func_64())
	{
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			unk_0xFA2C5C2D054C888E(iLocal_72);
			if (unk_0x6CCCE00683E8FD6D(iLocal_72))
			{
				unk_0x46D4C1D7588933FB(iLocal_72);
			}
			unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
			unk_0x8D6671D78D1F569B(iLocal_72, 1);
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (func_59(unk_0xE7869D5D7816A9B6(), Local_59, 1) > 200f)
	{
		if (!bLocal_100)
		{
			Var0[0 /*3*/] = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) - Vector(0f, 9f, 0f) };
			unk_0xDDF72D11359E25EC(Var0[0 /*3*/], 0, &(Var0[0 /*3*/]), 0);
			Var0[1 /*3*/] = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) + Vector(0f, 9f, 0f) };
			unk_0xDDF72D11359E25EC(Var0[1 /*3*/], 0, &(Var0[1 /*3*/]), 0);
			Var0[2 /*3*/] = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) - Vector(0f, 0f, 9f) };
			unk_0xDDF72D11359E25EC(Var0[2 /*3*/], 0, &(Var0[2 /*3*/]), 0);
			Var0[3 /*3*/] = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) + Vector(0f, 0f, 9f) };
			unk_0xDDF72D11359E25EC(Var0[3 /*3*/], 0, &(Var0[3 /*3*/]), 0);
			if (!unk_0x86ECD59CFE6143AC(Var0[0 /*3*/], 3f))
			{
				uLocal_85 = unk_0xD504D1FF5DD2FFD7(joaat("sheriff"), Var0[0 /*3*/], func_57(Var0[0 /*3*/], func_58(unk_0x3F80C6638E3A1A90())), 1, 1);
				uLocal_82[0] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCC897563F1971D6A(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCC897563F1971D6A(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xFBDF63459A604D13(unk_0x3F80C6638E3A1A90(), 1, 0);
				unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x86ECD59CFE6143AC(Var0[1 /*3*/], 3f))
			{
				uLocal_85 = unk_0xD504D1FF5DD2FFD7(joaat("sheriff"), Var0[1 /*3*/], func_57(Var0[1 /*3*/], func_58(unk_0x3F80C6638E3A1A90())), 1, 1);
				uLocal_82[0] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCC897563F1971D6A(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCC897563F1971D6A(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xFBDF63459A604D13(unk_0x3F80C6638E3A1A90(), 1, 0);
				unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x86ECD59CFE6143AC(Var0[2 /*3*/], 3f))
			{
				uLocal_85 = unk_0xD504D1FF5DD2FFD7(joaat("sheriff"), Var0[2 /*3*/], func_57(Var0[2 /*3*/], func_58(unk_0x3F80C6638E3A1A90())), 1, 1);
				uLocal_82[0] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCC897563F1971D6A(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCC897563F1971D6A(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xFBDF63459A604D13(unk_0x3F80C6638E3A1A90(), 1, 0);
				unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x86ECD59CFE6143AC(Var0[3 /*3*/], 3f))
			{
				uLocal_85 = unk_0xD504D1FF5DD2FFD7(joaat("sheriff"), Var0[3 /*3*/], func_57(Var0[3 /*3*/], func_58(unk_0x3F80C6638E3A1A90())), 1, 1);
				uLocal_82[0] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0xF430A9686E704FA3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0xCC897563F1971D6A(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xCC897563F1971D6A(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xFBDF63459A604D13(unk_0x3F80C6638E3A1A90(), 1, 0);
				unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				bLocal_100 = true;
			}
		}
	}
	if (!unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), unk_0x1141852D07400777(iLocal_79, 0), 10f, 10f, 10f, 0, 0, 0) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
	{
		func_56();
	}
	if (!unk_0xAF437D7C802AB246(iLocal_72))
	{
		if (((!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0) && unk_0x22E902D6AF27E232(iLocal_72, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) || (unk_0x3761EA7F8628B81A(iLocal_72, Local_86, Global_19, 1, 1, 0) && func_55(1, 0, 1)))
		{
			unk_0xC1B1E9A034A63A62(0);
			if (func_14())
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					unk_0x1B9F8E5CCC384F1E(unk_0xA0B1717D806F4901(), 10.5f, 2, 0);
				}
				unk_0x00400F14096FE01D();
				iLocal_55 = 5;
			}
			else
			{
				iLocal_55 = 6;
			}
		}
	}
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x9DAD36BD64512352())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (bParam0)
		{
			if (unk_0x76B2D234F1895632(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) != unk_0xE7869D5D7816A9B6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x58D00CB831F3E1D3(iVar0) < 0.95f || unk_0x58D00CB831F3E1D3(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (!unk_0x380205D43AE9485A(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	return 1;
}

void func_56()
{
	struct<3> Var0;
	
	Var0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
	{
		if (func_14())
		{
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_55 = 10;
			}
		}
		else if (unk_0x9C591E519D409699((Var0.f_0 - 50f), (Var0.f_1 - 50f), (Var0.f_2 - 50f), (Var0.f_0 + 50f), (Var0.f_1 + 50f), (Var0.f_2 + 50f)))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_72))
			{
				unk_0xFA2C5C2D054C888E(iLocal_72);
				if (unk_0x6CCCE00683E8FD6D(iLocal_72))
				{
					unk_0x46D4C1D7588933FB(iLocal_72);
				}
				unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
				unk_0x8D6671D78D1F569B(iLocal_72, 1);
				unk_0x4EDE34FBADD967A6(0);
			}
			func_86();
		}
	}
	else if (func_14())
	{
		if (unk_0x9C591E519D409699((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
		{
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 3, 0);
				unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				unk_0xCCB4EC76BC988F09(unk_0x3F80C6638E3A1A90(), 0f);
				if (unk_0xD11595488376CB53(uLocal_70))
				{
					unk_0x5B62CAB9B0D6ABF1(&uLocal_70);
				}
				iLocal_55 = 10;
			}
		}
	}
	else if (unk_0x9C591E519D409699((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			unk_0xFA2C5C2D054C888E(iLocal_72);
			if (unk_0x6CCCE00683E8FD6D(iLocal_72))
			{
				unk_0x46D4C1D7588933FB(iLocal_72);
			}
			unk_0x29F2993666F68F46(iLocal_72, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
			unk_0x8D6671D78D1F569B(iLocal_72, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_86();
	}
}

var func_57(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2C393A56EDEECDE4((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_58(var uParam0)
{
	return unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(uParam0), 0);
}

float func_59(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

void func_60()
{
	if (!unk_0xAF437D7C802AB246(iLocal_72))
	{
		if (unk_0xD33337101FE7D2FE(iLocal_72))
		{
			if (!iLocal_142)
			{
				iLocal_143 = unk_0x9D40BBF80D8F5E8A();
				iLocal_142 = 1;
			}
			else
			{
				iLocal_144 = unk_0x9D40BBF80D8F5E8A();
			}
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	if ((iLocal_144 - iLocal_143) > 120000)
	{
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			if (unk_0x6CCCE00683E8FD6D(iLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					unk_0x46D4C1D7588933FB(iLocal_72);
					func_86();
				}
			}
		}
	}
}

void func_61()
{
	if (unk_0x960D953E3623A78D(unk_0xE7869D5D7816A9B6()))
	{
		if (!iLocal_145)
		{
			iLocal_146 = unk_0x9D40BBF80D8F5E8A();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_147 = unk_0x9D40BBF80D8F5E8A();
		}
	}
	else
	{
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 60000)
	{
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			if (unk_0x6CCCE00683E8FD6D(iLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					unk_0x46D4C1D7588933FB(iLocal_72);
					func_86();
				}
			}
		}
	}
}

int func_62()
{
	if (!unk_0xAF437D7C802AB246(iLocal_72))
	{
		if (unk_0x6CCCE00683E8FD6D(iLocal_72))
		{
			if ((((((((unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_114, 50f, 50f, 50f, 0, 1, 0) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_117, 50f, 50f, 50f, 0, 1, 0)) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_120, 50f, 50f, 50f, 0, 1, 0)) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_123, 50f, 50f, 50f, 0, 1, 0)) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_126, 50f, 50f, 50f, 0, 1, 0)) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_129, 50f, 50f, 50f, 0, 1, 0)) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_132, 50f, 50f, 50f, 0, 1, 0)) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_135, 50f, 50f, 50f, 0, 1, 0)) || func_59(unk_0xE7869D5D7816A9B6(), Local_138, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!unk_0xAF437D7C802AB246(iLocal_72) && func_88())
	{
		if (unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
		{
			if (unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) && unk_0xF50745B40235B5B8(iLocal_72, unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
			{
				unk_0xC1B1E9A034A63A62(0);
				if (!unk_0x6CCCE00683E8FD6D(iLocal_72))
				{
					unk_0x560F88FE1A93011B(iLocal_72, unk_0xF6138D85451616EC(unk_0x3F80C6638E3A1A90()));
					unk_0xD8F094CB1BFE6F88(iLocal_72, 0);
					unk_0x0B3D58B4B3F33CE5(iLocal_72, 1);
				}
				if (iLocal_56 == 0)
				{
					if (!func_83())
					{
						if (func_72(&uLocal_148, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!unk_0xD11595488376CB53(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
							unk_0x73817D396768E4C6(&uLocal_94, 3);
							iLocal_96 = 1;
							iLocal_55 = 3;
						}
					}
				}
				else if (iLocal_56 == 1)
				{
					if (func_49() == 0)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_49() == 1)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_49() == 2)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					unk_0x7346544C767CFCBF(iLocal_72, 2, 1);
					iLocal_55 = 3;
				}
			}
		}
	}
}

int func_64()
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iLocal_72))
	{
		if (unk_0xC45A34912542C4EB(unk_0xA0B1717D806F4901(), 0))
		{
			if (unk_0x915685CA559C211B(iLocal_72, unk_0xA0B1717D806F4901(), 1))
			{
				func_51();
				return 1;
			}
		}
		if (unk_0x915685CA559C211B(iLocal_72, unk_0xE7869D5D7816A9B6(), 1))
		{
			func_51();
			return 1;
		}
		if (!unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 250f, 250f, 250f, 0, 1, 0))
		{
			return 1;
		}
		if (iLocal_56 == 0)
		{
			iVar0 = 0;
			if (func_67())
			{
				iVar0 = 0;
				while (iVar0 < func_66())
				{
					if (unk_0x915685CA559C211B(func_65(iVar0), unk_0xE7869D5D7816A9B6(), 0))
					{
						if (unk_0x1EB88099AAF24BDE(unk_0x10E754B2E0DF2A70(func_65(iVar0))) == -1865950624)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_55 < 2)
		{
			if (unk_0xC06784B4179CA473(iLocal_72, 126))
			{
				return 1;
			}
			if (iLocal_56 == 0)
			{
				if (unk_0xD51CFE69539DB6D8(iLocal_79))
				{
					if (((unk_0x3498640250A18717(unk_0x1141852D07400777(iLocal_79, 0) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x1141852D07400777(iLocal_79, 0) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || unk_0x3498640250A18717(unk_0x1141852D07400777(iLocal_79, 0) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x1141852D07400777(iLocal_79, 0) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || unk_0x3498640250A18717(unk_0x1141852D07400777(iLocal_79, 0) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x1141852D07400777(iLocal_79, 0) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || unk_0x3498640250A18717(unk_0x1141852D07400777(iLocal_79, 0) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x1141852D07400777(iLocal_79, 0) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						unk_0x4B79E06845D63B96(iLocal_72, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
						unk_0x8D6671D78D1F569B(iLocal_72, 1);
						return 1;
					}
				}
			}
			else if (iLocal_56 == 1)
			{
				if (unk_0x3498640250A18717(unk_0x1141852D07400777(iLocal_72, 0) - Vector(70f, 70f, 70f), unk_0x1141852D07400777(iLocal_72, 0) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (unk_0x742CA22C114D89E4(unk_0x1141852D07400777(iLocal_72, 1), 20f, 1))
			{
				return 1;
			}
			if ((unk_0xE31E0B1502061553(unk_0x1141852D07400777(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0x1141852D07400777(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || unk_0xE31E0B1502061553(unk_0x1141852D07400777(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0x1141852D07400777(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || unk_0xE31E0B1502061553(unk_0x1141852D07400777(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0x1141852D07400777(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return 1;
			}
			if (unk_0x7D7A581CD9045B46(unk_0x1141852D07400777(iLocal_72, 1), 3f))
			{
				return 1;
			}
			if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
			{
				return 1;
			}
			if ((unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && unk_0x3D501875CBE31D51(iLocal_72, unk_0xE7869D5D7816A9B6())) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))
			{
				if (unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iLocal_72) || unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iLocal_72))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		func_51();
		return 1;
	}
	return 0;
}

var func_65(int iParam0)
{
	return Global_47830.f_25[iParam0];
}

int func_66()
{
	return Global_47830.f_24;
}

bool func_67()
{
	return Global_47830.f_24 > 0;
}

void func_68()
{
	if (unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			if (!func_83())
			{
				if (func_9())
				{
					func_72(&uLocal_148, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_72(&uLocal_148, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (unk_0xD11595488376CB53(uLocal_105))
				{
					unk_0x4ADC112587E95B61(uLocal_105, false);
				}
				unk_0xFA2C5C2D054C888E(iLocal_72);
				unk_0x94026C1D1DB14225(&uLocal_74);
				unk_0xA02736B50802C8BB(0, unk_0xE7869D5D7816A9B6(), 500, 1);
				unk_0x8C2752F3FF55C28A(0, unk_0xE7869D5D7816A9B6(), unk_0xE7869D5D7816A9B6(), 1f, 0, 1f, 0.5f, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x65682335D54DEA1C(0, unk_0xA0B1717D806F4901(), -1, -1, 2f, 9, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_74);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
				unk_0x33A90AD8FA327B72(&uLocal_74);
				unk_0xC1B1E9A034A63A62(0);
				bLocal_110 = true;
				iLocal_55 = 11;
			}
		}
	}
}

float func_69(var uParam0, int iParam1)
{
	return func_5(uParam0, iParam1, 1);
}

int func_70()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iLocal_75 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (unk_0xC45A34912542C4EB(iLocal_75, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if ((((unk_0xF675ACE4149620B8(iParam0, 0, 3000) || unk_0x9DD85FBDD5BC3BF1(iParam0)) || unk_0x743D96D854EFA6C5(unk_0x1141852D07400777(iParam0, 0), 5f) > 0) || unk_0x3D06E0340496855A(iParam0, joaat("weapon_molotov"), 0)) || unk_0xE31E0B1502061553(unk_0x1141852D07400777(iParam0, 0) - Vector(5f, 5f, 5f), unk_0x1141852D07400777(iParam0, 0) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
	{
		return 1;
	}
	return 0;
}

bool func_72(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_73(sParam2, iParam3, 0);
}

int func_73(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_81();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_79();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_78();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_77())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
				}
			}
			if (func_76())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_75();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_74();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_81();
	}
	return 0;
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_75()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_76()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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

void func_78()
{
	if (func_36(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_49();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_81()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_83()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (!unk_0x76B2D234F1895632(iLocal_79))
	{
		if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_79, 0) && !unk_0xD12071DBE8393EC8(iLocal_79, -1))
		{
			unk_0xEB8B8C2A73945CE1(iLocal_79, 60000f);
			unk_0xE58DC0F562760DCE(iLocal_79);
		}
	}
}

void func_85()
{
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0xAF437D7C802AB246(iLocal_72))
			{
				if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
				{
					if (unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) < 2.5f || !(unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_72, 15f, 15f, 8f, 0, 1, 0)))
					{
						unk_0x94026C1D1DB14225(&uLocal_74);
						unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), 30000, 2050, 2);
						unk_0xD0153915878AE371(0, unk_0xE7869D5D7816A9B6(), -1, 2f, 1f, 1073741824, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_74);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
						unk_0x33A90AD8FA327B72(&uLocal_74);
						if (func_72(&uLocal_148, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_99 = true;
							iLocal_108++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_87(&uLocal_107);
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
			{
				if (func_88())
				{
					iLocal_75 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					if (unk_0xD4F0FC8FFEDE152B(iLocal_75) < 9f)
					{
						if (!unk_0xAF437D7C802AB246(iLocal_72))
						{
							if (unk_0x0E6C083BC5101C8B(iLocal_72, iLocal_75, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_108++;
							}
						}
					}
				}
				else if (!bLocal_110)
				{
					fLocal_109 = func_5(iLocal_72, unk_0xE7869D5D7816A9B6(), 1);
					unk_0x94026C1D1DB14225(&uLocal_74);
					unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), 7000, 2048, 2);
					unk_0xD0153915878AE371(0, unk_0xE7869D5D7816A9B6(), -1, (fLocal_109 - 3f), 1f, 1073741824, 0);
					unk_0x911ECBCE73F8EC3F(uLocal_74);
					unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
					unk_0x33A90AD8FA327B72(&uLocal_74);
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_110 = true;
						bLocal_99 = true;
					}
				}
			}
			break;
		
		case 2:
			func_87(&uLocal_107);
			if (!iLocal_112)
			{
				if (unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) < 2.5f)
				{
					if (!unk_0xAF437D7C802AB246(iLocal_72))
					{
						unk_0xFA2C5C2D054C888E(iLocal_72);
						unk_0x414F8CCF85A62A2F(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
				if (!func_83())
				{
					if (!unk_0xAF437D7C802AB246(iLocal_72))
					{
						unk_0xFA2C5C2D054C888E(iLocal_72);
						unk_0x414F8CCF85A62A2F(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
			}
			if (func_88())
			{
				iLocal_75 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				if (unk_0xD4F0FC8FFEDE152B(iLocal_75) < 2.5f)
				{
					if (unk_0x3761EA7F8628B81A(iLocal_75, unk_0x1141852D07400777(iLocal_72, 1), 20f, 20f, 5f, 0, 1, 0))
					{
						if (iLocal_56 == 0)
						{
							if (!func_83())
							{
								if (func_49() == 0)
								{
									if (func_9())
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 1)
								{
									if (func_9())
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 2)
								{
									func_72(&uLocal_148, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_108++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_88())
			{
				iLocal_75 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				if (unk_0xD4F0FC8FFEDE152B(iLocal_75) < 0.5f)
				{
					if (!unk_0xAF437D7C802AB246(iLocal_72))
					{
						unk_0xFA2C5C2D054C888E(iLocal_72);
						if (!unk_0x6CCCE00683E8FD6D(iLocal_72))
						{
							unk_0x560F88FE1A93011B(iLocal_72, unk_0xF6138D85451616EC(unk_0x3F80C6638E3A1A90()));
							unk_0xD8F094CB1BFE6F88(iLocal_72, 0);
							unk_0x0B3D58B4B3F33CE5(iLocal_72, 1);
						}
						iLocal_108++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_56 == 0)
			{
				if (!func_83())
				{
					if (func_72(&uLocal_148, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_108++;
					}
				}
			}
			else
			{
				iLocal_108++;
			}
			break;
		
		case 5:
			if (func_88())
			{
				if (unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
				{
					if (!unk_0xAF437D7C802AB246(iLocal_72))
					{
						if (unk_0xF50745B40235B5B8(iLocal_72, unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
						{
							if (unk_0xD11595488376CB53(uLocal_105))
							{
								unk_0x5B62CAB9B0D6ABF1(&uLocal_105);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_86()
{
	func_170();
}

void func_87(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!unk_0xAF437D7C802AB246(iLocal_72))
			{
				if (!unk_0xFA68268DB708808B(iLocal_72, unk_0xE7869D5D7816A9B6(), 90f))
				{
					unk_0x58F62EDF6111D598(iLocal_72, unk_0xE7869D5D7816A9B6(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!unk_0xAF437D7C802AB246(iLocal_72))
			{
				if (unk_0xFA68268DB708808B(iLocal_72, unk_0xE7869D5D7816A9B6(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xAF437D7C802AB246(iLocal_72))
			{
				if (!unk_0xFA68268DB708808B(iLocal_72, unk_0xE7869D5D7816A9B6(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_88()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (unk_0xD51CFE69539DB6D8(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
		{
			if ((((((!unk_0xCFA5146E8AEF8EB0(unk_0xE7869D5D7816A9B6()) && !unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6())) && !unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6())) && !unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6())) && !unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6())) && !unk_0x7D1C9ABC64D56FA0(unk_0xE7869D5D7816A9B6())) && !unk_0xF54ECC20AEF6A194(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
			{
				if (unk_0x25ECA1DD55F6CB7F(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_89()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iLocal_75 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if ((unk_0xC45A34912542C4EB(iLocal_75, 0) && !unk_0xAF437D7C802AB246(iLocal_72)) && !bLocal_99)
		{
			fLocal_109 = func_5(iLocal_72, unk_0xE7869D5D7816A9B6(), 1);
			if (fLocal_109 > 5f)
			{
				fLocal_109 = (fLocal_109 - 2.5f);
			}
			else
			{
				fLocal_109 = (fLocal_109 - 1f);
			}
			unk_0xFA2C5C2D054C888E(iLocal_72);
			unk_0x94026C1D1DB14225(&uLocal_74);
			if (iLocal_56 == 0)
			{
				unk_0x6A8BCE61F660B8D0(0, iLocal_75, 10000, 2048, 2);
				unk_0xDCF460AE46C9489C(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x8C2752F3FF55C28A(0, unk_0xE7869D5D7816A9B6(), unk_0xE7869D5D7816A9B6(), 1f, 0, fLocal_109, 1f, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (iLocal_56 == 1)
			{
				unk_0x6A8BCE61F660B8D0(0, iLocal_75, 10000, 2052, 2);
				unk_0xDCF460AE46C9489C(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0xE0B41A177C6DAB44(0, unk_0xE7869D5D7816A9B6(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			unk_0x911ECBCE73F8EC3F(uLocal_74);
			unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
			unk_0x33A90AD8FA327B72(&uLocal_74);
			if (iLocal_56 == 0)
			{
				func_72(&uLocal_148, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				bLocal_99 = true;
			}
			else if (iLocal_56 == 1)
			{
				if (func_72(&uLocal_148, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					bLocal_99 = true;
				}
			}
		}
	}
}

void func_90(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_98211, unk_0x959E7FA37C0D0892(), 24);
		Global_98205 = 1;
	}
	else
	{
		StringCopy(&Global_98211, "NULL", 24);
		Global_98205 = 0;
	}
}

int func_91(int iParam0)
{
	if (func_95())
	{
		Global_99145 = 1;
		Global_99142 = unk_0x9D40BBF80D8F5E8A();
		if (func_29(Global_99144))
		{
			func_92(0);
		}
		unk_0xFB04AECD5A11A220(1, "RE_TITLE");
		if (iParam0 && func_29(Global_99144))
		{
			unk_0xD84E02209FE454B0();
		}
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_99155.f_29444.f_2 < 3)
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_93(func_94(iParam0), -1);
					Global_99155.f_29444.f_2++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB519E5386FBF69E5(Global_99151, 1))
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_93(func_94(iParam0), -1);
					Global_99155.f_29444.f_3++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB519E5386FBF69E5(Global_99151, 2))
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_93(func_94(iParam0), -1);
					Global_99155.f_29444.f_4++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 2);
				}
			}
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	unk_0xCAFBB15049416379(uParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

char* func_94(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_95()
{
	switch (func_96(&Global_25093, 0, 5, 0, unk_0xE3E113B4DB09AAF8()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_96(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88836.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_100(0))
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		unk_0xD30CBD7E69615F8C(unk_0xBFAE5F9DEC53DAE2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6581912D0AD8605D(8);
		}
		Global_35619 = iParam2;
		Global_35581 = *uParam0;
		Global_35582 = iParam4;
		Global_35580 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35580 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35580)
			{
				if (Global_35586[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35581 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_98(iParam2))
		{
			return 0;
		}
		if (Global_35580 == 8)
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		Global_35586[Global_35580 /*4*/] = Global_35583;
		Global_35586[Global_35580 /*4*/].f_1 = iParam1;
		Global_35586[Global_35580 /*4*/].f_2 = iParam2;
		Global_35586[Global_35580 /*4*/].f_3 = 0;
		Global_35580++;
		if (iParam4 != 0)
		{
			func_97(uParam0, iParam4);
		}
	}
	return 2;
}

void func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35580 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35580)
	{
		if (Global_35586[iVar0 /*4*/] == *uParam0)
		{
			Global_35586[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_98(int iParam0)
{
	return func_99(iParam0, Global_35619);
}

int func_99(int iParam0, int iParam1)
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

int func_100(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_98(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_101()
{
	if (unk_0xD11595488376CB53(uLocal_71))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_71);
	}
	if (!unk_0xD11595488376CB53(uLocal_105))
	{
		uLocal_105 = func_11(iLocal_72, 0, 145);
		unk_0x9C9B069F802F9A20(uLocal_105, 0);
	}
}

void func_102()
{
	var uVar0;
	var uVar1[2];
	
	func_104(39, 1);
	func_104(40, 1);
	func_104(41, 1);
	func_104(42, 1);
	func_104(43, 1);
	func_104(44, 1);
	unk_0xC2D151904C72E95F(3, 0);
	unk_0xC2D151904C72E95F(5, 0);
	unk_0xC2D151904C72E95F(11, 0);
	iLocal_72 = unk_0xA7F4088D9A2629CC(26, iLocal_90, Local_76, fLocal_89, 1, 1);
	unk_0x9BEE7E791BC4D38B(iLocal_72, 1);
	unk_0x1C26C4B0DAB91B21(iLocal_72, 134, 1);
	unk_0x1C26C4B0DAB91B21(iLocal_72, 137, 1);
	unk_0x103FCC2BD24292A3("PedPrisoner", &iLocal_73);
	unk_0x690C5239500171FE(iLocal_72, iLocal_73);
	unk_0xA9CA101B50B90993(5, joaat("COP"), iLocal_73);
	unk_0xA9CA101B50B90993(5, iLocal_73, joaat("COP"));
	unk_0xDCF460AE46C9489C(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x82F10D839CF95C09(iLocal_72, 0);
	unk_0x7E3DC7ED30B648F0(iLocal_72, 8, 0);
	unk_0x7346544C767CFCBF(iLocal_72, 128, 1);
	unk_0x7346544C767CFCBF(iLocal_72, 2, 1);
	unk_0x7346544C767CFCBF(iLocal_72, 1, 0);
	unk_0x9956FB0E4B50ECB8(&uLocal_94, 3);
	unk_0x9956FB0E4B50ECB8(&uLocal_94, 5);
	unk_0x9956FB0E4B50ECB8(&uLocal_94, 0);
	if (iLocal_56 == 0)
	{
		unk_0x0814FB03E16A03C1(iLocal_72, "REPRI1Lost");
		func_103(&uLocal_148, 3, iLocal_72, "REPRI1Lost", 0, 1);
		unk_0xB0A7E0A62FB61A06(Local_76, 50f, 0);
		unk_0xB86B1248EA9B87EA(Local_76, 10f, 0, 0, 0, 0);
		unk_0x8668A841B325FF16(Local_76 - Vector(50f, 50f, 50f), Local_76 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		unk_0x8668A841B325FF16(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		unk_0xBDF0A810DD6A47D3(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 0, 1);
		unk_0xA9CA101B50B90993(1, iLocal_73, -1865950624);
		unk_0xA9CA101B50B90993(1, -1865950624, iLocal_73);
		unk_0x7E3DC7ED30B648F0(iLocal_72, 17, 1);
		iLocal_79 = unk_0xD504D1FF5DD2FFD7(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, 1);
		unk_0x07C7B5F986353F8B(iLocal_79, 0f);
		unk_0xDBF2D7502C37C299(iLocal_79, 4, 0, 0);
		unk_0x102F5B8556B83EED(iLocal_79, 0, 0, 1148846080);
		unk_0x4E692C03947D9BCE(iLocal_79, 0);
		unk_0x93B861AEF23C1C4C(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		uVar0 = unk_0xF430A9686E704FA3(iLocal_79, 26, joaat("s_m_y_ranger_01"), -1, 1, 1);
		unk_0x1C26C4B0DAB91B21(uVar0, 326, 1);
		unk_0x09714949CF524B00(iVar0, 99);
		unk_0xD7A3D89A53B60C9C(iVar0, 1);
		uVar1[0] = unk_0xD504D1FF5DD2FFD7(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, 1);
		uVar1[1] = unk_0xD504D1FF5DD2FFD7(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, 1);
		unk_0xC9CEB5227A733CE6(uVar1[0]);
		unk_0xC9CEB5227A733CE6(uVar1[1]);
	}
	else if (iLocal_56 == 1)
	{
		unk_0x4D067011AB7A4264(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, 0, 1);
		unk_0x0814FB03E16A03C1(iLocal_72, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_103(&uLocal_148, 3, iLocal_72, "REPRI2Prisoner", 0, 1);
		unk_0xCC897563F1971D6A(iLocal_72, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (func_49() == 0)
	{
		func_103(&uLocal_148, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
	}
	else if (func_49() == 1)
	{
		func_103(&uLocal_148, 1, unk_0xE7869D5D7816A9B6(), "FRANKLIN", 0, 1);
	}
	else if (func_49() == 2)
	{
		func_103(&uLocal_148, 2, unk_0xE7869D5D7816A9B6(), "TREVOR", 0, 1);
	}
	iLocal_55 = 1;
}

void func_103(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_108(iParam0, 2, 1))
		{
			func_107(iParam0, 2, 1);
		}
	}
	else if (func_108(iParam0, 2, 1))
	{
		func_105(iParam0, 2, 1);
	}
}

void func_105(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x73817D396768E4C6(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_24() == 0)
		{
			uVar0 = func_48(func_106(iParam0), -1, 0);
			unk_0x73817D396768E4C6(&uVar0, iParam1);
			func_46(func_106(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3640;
			break;
		
		default:
			break;
	}
	return 3717;
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_24() == 0)
		{
			uVar0 = func_48(func_106(iParam0), -1, 0);
			unk_0x9956FB0E4B50ECB8(&uVar0, iParam1);
			func_46(func_106(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB519E5386FBF69E5(Global_91077.f_1286[iParam0], iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_24() == 0)
		{
			return unk_0xB519E5386FBF69E5(func_48(func_106(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_109()
{
	unk_0x801429C020C467BA(iLocal_90);
	unk_0x2B0BB514F9140141("random@prisoner_lift");
	if (iLocal_56 == 0)
	{
		unk_0x801429C020C467BA(joaat("s_m_y_ranger_01"));
		unk_0x801429C020C467BA(joaat("sheriff"));
		unk_0x801429C020C467BA(joaat("ratloader"));
		unk_0x801429C020C467BA(joaat("bfinjection"));
	}
	if (unk_0x5053BF6D5604065B(iLocal_90) && unk_0x2917D5E1CB5CE43A("random@prisoner_lift"))
	{
		if (iLocal_56 == 0)
		{
			if (((unk_0x5053BF6D5604065B(joaat("s_m_y_ranger_01")) && unk_0x5053BF6D5604065B(joaat("sheriff"))) && unk_0x5053BF6D5604065B(joaat("ratloader"))) && unk_0x5053BF6D5604065B(joaat("bfinjection")))
			{
				bLocal_57 = true;
			}
		}
		else
		{
			bLocal_57 = true;
		}
	}
	else
	{
		unk_0x801429C020C467BA(iLocal_90);
		unk_0x2B0BB514F9140141("random@prisoner_lift");
		if (iLocal_56 == 0)
		{
			unk_0x801429C020C467BA(joaat("s_m_y_ranger_01"));
			unk_0x801429C020C467BA(joaat("sheriff"));
			unk_0x801429C020C467BA(joaat("ratloader"));
			unk_0x801429C020C467BA(joaat("bfinjection"));
		}
	}
}

void func_110()
{
	if (iLocal_62 == 1)
	{
		iLocal_90 = joaat("g_m_y_lost_02");
		Local_76 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_89 = 142.0201f;
		Local_91 = { 984.3975f, -106.9935f, 73.3531f };
		Local_86 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_62 == 2)
	{
		iLocal_90 = joaat("s_m_y_prisoner_01");
		Local_76 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_89 = 301.2458f;
		Local_91 = { 938.5384f, -2167.42f, 29.5153f };
		Local_86 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_58 = 1;
}

int func_111()
{
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_50) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (func_37(func_49()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 2) && !unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 3))
				{
					func_113(iVar32, &Var0);
					fVar35 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_113(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_116(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_116(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_116(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_116(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_116(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_116(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_116(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_116(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_116(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_116(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_116(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_117(iParam0) };
	if (unk_0xF6917DE0E003509D(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_117(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_118()
{
	if (func_121() && !func_122())
	{
		return 1;
	}
	if (func_120() && func_119())
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return Global_98873 > 0;
}

int func_120()
{
	if (Global_88280 != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 20);
	}
	return 0;
}

int func_122()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xB6A14C2017960DFA() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_123()
{
	if (!func_98(5))
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if ((Global_99144 == func_43() && unk_0x4341FD2C227CC4C0()) && Global_99145)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_127(iParam0);
	unk_0xCC7B0EAA74A0A981(0);
	unk_0x51FBA873FE592D01(1);
	Global_99141 = 0;
	func_126();
}

void func_126()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			unk_0x7E38E815EF844C74(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)), 1);
		}
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
	}
}

void func_127(int iParam0)
{
	Global_99144 = iParam0;
}

int func_128(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135947)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_43();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_169())
		{
			return 0;
		}
	}
	Local_50 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_122())
			{
				return 0;
			}
		}
		if (!Global_99155.f_7699)
		{
			return 0;
		}
		if (func_19(0))
		{
			return 0;
		}
		if (func_118())
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (Global_99144 != -1)
		{
			return 0;
		}
		if (func_37(func_49()))
		{
			if (func_112(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !bParam6)
		{
			if ((Var1.f_2 - Local_50.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_167(iParam3))
		{
			return 0;
		}
		if (func_37(func_49()))
		{
			if (func_166(func_49()) == 4 || func_166(func_49()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_49()))
		{
			if (!func_165(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_164(Global_99155.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9D40BBF80D8F5E8A() - Global_99146) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_163())
		{
			return 0;
		}
		if (unk_0xFCD171641347C2B0())
		{
			return 0;
		}
		if (unk_0x4341FD2C227CC4C0())
		{
			return 0;
		}
		if (!func_154(4))
		{
			return 0;
		}
		if (!func_98(5))
		{
			return 0;
		}
		if (func_153(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x4443D8D533ACB547(unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6())))
		{
			if ((unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(377.153f, -717.567f, 10.0536f) || unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(320.9934f, 265.2515f, 82.1221f)) || unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_25180)
		{
			return 0;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_49()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_99155.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99155.f_1750.f_539.f_1524[iVar4];
				if (func_152(iVar8))
				{
					if (func_130(iVar4))
					{
						if (!func_129(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Var5) < (210f * 210f))
							{
								if (func_49() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_129(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_99155.f_1750.f_539.f_1524[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)
{
	return func_132(iParam0, 1);
}

int func_132(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_152(iParam0))
	{
		return 0;
	}
	func_133(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143(iParam1);
		iVar1 = func_141(iParam0);
		iVar2 = (func_141(iParam0) - func_141(iParam1));
		iVar3 = (func_143(iParam0) - func_143(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_139(iParam0) - func_139(iParam1));
		iVar6 = (func_138(iParam0) - func_138(iParam1));
		iVar7 = (func_137(iParam0) - func_137(iParam1));
	}
	else
	{
		iVar0 = func_143(iParam0);
		iVar1 = func_141(iParam1);
		iVar2 = (func_141(iParam1) - func_141(iParam0));
		iVar3 = (func_143(iParam1) - func_143(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_139(iParam1) - func_139(iParam0));
		iVar6 = (func_138(iParam1) - func_138(iParam0));
		iVar7 = (func_137(iParam1) - func_137(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_136(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_135(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_135(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_136(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_137(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_138(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_139(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_140(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_141(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_142(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)
{
	return iParam0 & 15;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_152(iParam1) || !func_152(iParam0))
	{
		return 1;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	var uVar0;
	
	func_151(&uVar0, unk_0x0CE219089BDB83C5());
	func_150(&uVar0, unk_0x1B24A2CA27443F7B());
	func_149(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_148(&uVar0, unk_0x2DA3502053F9E535());
	func_147(&uVar0, unk_0xEB4EA596232DA76E());
	func_146(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_143(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_136(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1)
{
	if (unk_0xB519E5386FBF69E5(Global_99155.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				iVar0 = func_49();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_162()) || Global_98202) || Global_25036) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1) || func_162()) || Global_25036) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_162()) || Global_98202) || Global_25036) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_99155.f_6302.f_919[iVar0] == 5) || Global_36166 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_162()) || Global_98202) || Global_25036) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_157()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || func_80(8, -1)) || func_157()) || func_156()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
						{
							return 0;
						}
						if ((unk_0xF478777FFCC96862() && unk_0x5824E40B4C3C5757() != 3) && unk_0x3ABB0F1D57A0AD8C() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
						{
							if ((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_162()) || Global_25036) || func_161()) || func_80(8, -1)) || func_159()) || func_158()) || func_157()) || Global_99155.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || func_162()) || func_159()) || Global_98202) || Global_25036) || func_161()) || Global_36669) || func_80(8, -1)) || func_158()) || func_156()) || func_157()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0x43F528FB3D5E9B0F(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_162()) || Global_98202) || Global_25036) || func_161()) || func_80(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_155()
{
	return Global_91064.f_1;
}

int func_156()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 13);
	}
	return 0;
}

int func_157()
{
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if (Global_69496)
	{
		return 1;
	}
	else if (Global_55572 && !Global_55578)
	{
		return 1;
	}
	return 0;
}

bool func_159()
{
	return Global_91077.f_297 > 0;
}

bool func_160()
{
	return Global_91077.f_296 > 0;
}

var func_161()
{
	return Global_1315909;
}

int func_162()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return Global_88836.f_44 == 1;
	}
	return 0;
}

int func_163()
{
	func_78();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_49();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_166(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_99155.f_6302.f_919[iParam0];
}

bool func_167(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_169())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB519E5386FBF69E5(Global_99155.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB519E5386FBF69E5(Global_99155.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_168()
{
	var uVar0;
	
	if (Global_25184)
	{
		uVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (unk_0xC45A34912542C4EB(uVar0, 0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xBD6B21D725712BDE(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	var uVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0xACCC319A72FE75AB())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x9956FB0E4B50ECB8(&uVar0, 2);
				unk_0x9956FB0E4B50ECB8(&uVar0, 4);
				unk_0x9956FB0E4B50ECB8(&uVar0, 6);
				unk_0x9956FB0E4B50ECB8(&Global_25, 2);
				unk_0x9956FB0E4B50ECB8(&Global_25, 4);
				unk_0x9956FB0E4B50ECB8(&Global_25, 6);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6FBD7D781A378269())
				{
					iVar0 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&iVar0, 0);
					unk_0x305E571F148D27EA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136199 == 2)
	{
		return 1;
	}
	else if (Global_136199 == 3)
	{
		return 0;
	}
	if (unk_0x6FBD7D781A378269())
	{
		if (unk_0xB519E5386FBF69E5(unk_0x623F98022BC99367(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_170()
{
	if (iLocal_141)
	{
		func_184(0);
		func_182();
		func_90(0);
		unk_0x63EB72E192731928(1f);
		unk_0xBDF0A810DD6A47D3(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 1, 1);
		unk_0xBE426BCBF9244EC3(unk_0x3F80C6638E3A1A90());
		unk_0x8BF2AD7A954B9A59(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			}
		}
		if (!unk_0xAF437D7C802AB246(iLocal_72))
		{
			unk_0x9BEE7E791BC4D38B(iLocal_72, 0);
			if (iLocal_56 == 0)
			{
				unk_0x1C26C4B0DAB91B21(iLocal_72, 317, 1);
				if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x94026C1D1DB14225(&uLocal_74);
					unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
					unk_0x911ECBCE73F8EC3F(uLocal_74);
					unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
					unk_0x33A90AD8FA327B72(&uLocal_74);
					unk_0x8D6671D78D1F569B(iLocal_72, 1);
				}
			}
			else if (iLocal_56 == 1)
			{
				if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x94026C1D1DB14225(&uLocal_74);
					unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
					unk_0x911ECBCE73F8EC3F(uLocal_74);
					unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
					unk_0x33A90AD8FA327B72(&uLocal_74);
					unk_0x8D6671D78D1F569B(iLocal_72, 1);
				}
				else if (unk_0xC45A34912542C4EB(iLocal_75, 0))
				{
					unk_0x94026C1D1DB14225(&uLocal_74);
					unk_0x65682335D54DEA1C(0, iLocal_75, -1, -1, 2f, 9, 0);
					unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
					unk_0x911ECBCE73F8EC3F(uLocal_74);
					unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
					unk_0x33A90AD8FA327B72(&uLocal_74);
					unk_0x8D6671D78D1F569B(iLocal_72, 1);
				}
				else
				{
					unk_0x94026C1D1DB14225(&uLocal_74);
					unk_0x29F2993666F68F46(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0x29F2993666F68F46(0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 300f, -1, 0, 0);
					unk_0x911ECBCE73F8EC3F(uLocal_74);
					unk_0xC2C4A3A9FF2FBFFF(iLocal_72, uLocal_74);
					unk_0x33A90AD8FA327B72(&uLocal_74);
					unk_0x8D6671D78D1F569B(iLocal_72, 1);
				}
			}
		}
		unk_0xC2D151904C72E95F(3, 1);
		unk_0xC2D151904C72E95F(5, 1);
		unk_0xC2D151904C72E95F(11, 1);
		unk_0x213FA0896D2B70DA();
	}
	func_171(-1);
	unk_0x52F20802944F8DCE();
}

void func_171(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		unk_0xFB04AECD5A11A220(0, 0);
		Global_99146 = unk_0x9D40BBF80D8F5E8A();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_99144, 1), 64);
		if (func_42(Global_99144) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99143, 64);
		}
		unk_0x2DE5A7EBFE83C154(&cVar0, Global_99141, (unk_0x9D40BBF80D8F5E8A() - Global_99142), 0);
	}
	else if (unk_0xB519E5386FBF69E5(Global_99151, 0) && Global_99155.f_29444.f_2 < 3)
	{
		unk_0x73817D396768E4C6(&Global_99151, 0);
	}
	func_172(&Global_25093);
	Global_99145 = 0;
	func_127(-1);
}

void func_172(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35581)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35580 = 0;
	Global_35582 = 0;
	Global_35619 = 15;
	Global_55575 = 0;
	Global_55576 = 0;
}

char* func_173(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_174(int iParam0)
{
	Global_36170 = (unk_0x9D40BBF80D8F5E8A() + iParam0);
}

void func_175(int iParam0)
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_141(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)
{
	Global_99155.f_29444.f_43[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_143(*uParam0);
	iVar2 = func_140(*uParam0);
	iVar3 = func_139(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_137(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_136(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_136(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_180(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_147(uParam0, iParam5);
	func_148(uParam0, iParam4);
	func_146(uParam0, iParam6);
}

int func_181(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_182()
{
	Global_14578 = 0;
	func_183();
}

void func_183()
{
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xACA77D3E6C847C83();
		Global_16723 = 0;
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_184(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_104(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_185()
{
	float fVar0;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		fVar0 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_63, 1);
		iLocal_62 = 1;
		if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_66, 1) < fVar0)
		{
			fVar0 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_66, 1);
			iLocal_62 = 2;
		}
		if (iLocal_62 == 1)
		{
			iLocal_69 = 1;
			iLocal_56 = 0;
			return Local_63;
		}
		if (iLocal_62 == 2)
		{
			iLocal_69 = 2;
			iLocal_56 = 1;
			return Local_66;
		}
	}
	return 0f, 0f, 0f;
}

