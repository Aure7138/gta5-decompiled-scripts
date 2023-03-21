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
	uLocal_47 = unk_0x12B4A28A041D640E();
	uLocal_48 = unk_0xCBCFC1EA40F244E6();
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
	if (unk_0x78BF2001491914AC(11))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			if (unk_0xAB603D6FBED0F015(iLocal_72))
			{
				unk_0x799D2CB4039F4804(iLocal_72);
			}
		}
		func_170();
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0xA232817B0B36F2E5();
		}
	}
	if (func_128(Local_59, 22, iLocal_69, 0, 0))
	{
		func_125(22);
	}
	else
	{
		unk_0xA232817B0B36F2E5();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC6D11983DAD48A48() || iLocal_96)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			unk_0xE57EE82872DC7A9F("RE_PL", 0);
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
					if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
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
											if (!unk_0x769F0F6444C1ABE0(iLocal_72))
											{
												if ((unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 100f, 100f, 100f, 0, 1, 0) && !unk_0x812A9839F66D4B43(iLocal_72)) || unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													if (unk_0xBDD3EABACAB97D09(uLocal_105))
													{
														unk_0xE1E81CBB89115254(uLocal_105, 1);
													}
													func_89();
													if (!func_88())
													{
														if (unk_0x453DB1DBE5D81637(iLocal_72, "random@prisoner_lift", "arms_waving", 3) || unk_0x453DB1DBE5D81637(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															unk_0x654FFF4D16298AC5(iLocal_72);
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
											if (!unk_0x769F0F6444C1ABE0(iLocal_72))
											{
												if ((unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 105f, 105f, 105f, 0, 1, 0) && !unk_0x812A9839F66D4B43(iLocal_72)) || unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (!unk_0xA9A04898798AE9E6(iLocal_72, 0))
												{
													if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
													{
														if (unk_0xBDD3EABACAB97D09(uLocal_105))
														{
															unk_0xE1E81CBB89115254(uLocal_105, 1);
														}
														func_89();
													}
												}
												if (bLocal_99)
												{
													if (unk_0x83666F9FB8FEBD4B() > 2000 && unk_0x83666F9FB8FEBD4B() < 2100)
													{
														unk_0xEE46A5BD4C4846BF(iLocal_72);
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
												if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
												{
													if (unk_0x7FAC45D56235AB39(unk_0x19D9DFABC3C7D219(), 0))
													{
														if (!func_71(unk_0x19D9DFABC3C7D219()))
														{
															if (unk_0x2860DA9980AC4109(unk_0x19D9DFABC3C7D219(), iLocal_72, 40f, 40f, 20f, 0, 1, 0) && unk_0x2FF6D1D6A0790F5A(iLocal_72, unk_0x19D9DFABC3C7D219(), 17))
															{
																unk_0x654FFF4D16298AC5(iLocal_72);
																if (!unk_0x03322C3918511AA0(unk_0x19D9DFABC3C7D219()))
																{
																	unk_0x216B434C1A609F5B(unk_0x19D9DFABC3C7D219(), 1, 0);
																}
																unk_0x8C6A1F8B258BDF97(iLocal_72, unk_0x19D9DFABC3C7D219(), unk_0x2A5EB8B0FE590B91(), 8, 22f, 786469, 1f, 1f, 1);
																unk_0x015B50BC21C88C8C(iLocal_72, 1);
																iLocal_55 = 13;
															}
															else if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && unk_0x2FF6D1D6A0790F5A(iLocal_72, unk_0x2A5EB8B0FE590B91(), 17))
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
												if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
												{
													if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
													{
														if (((unk_0xD50DF0CF7D16F6D9(unk_0x2A5EB8B0FE590B91()) || unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("rhino"))) || unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91())) || unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
														{
															func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
												}
											}
											if (func_70())
											{
												if (!unk_0xA9A04898798AE9E6(iLocal_72, 0))
												{
													if (!unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("bus")))
													{
														if (func_69(unk_0x2A5EB8B0FE590B91(), iLocal_72) < 2.5f)
														{
															if (unk_0xD2660BAC03EB7433(uLocal_75) < 1f)
															{
																func_68();
															}
														}
													}
													else if (func_69(unk_0x2A5EB8B0FE590B91(), iLocal_72) < 10f)
													{
														if (unk_0xD2660BAC03EB7433(uLocal_75) < 1f)
														{
															func_68();
														}
													}
												}
											}
										}
										if (func_64())
										{
											if (!unk_0x769F0F6444C1ABE0(iLocal_72))
											{
												unk_0x654FFF4D16298AC5(iLocal_72);
												if (unk_0xAB603D6FBED0F015(iLocal_72))
												{
													unk_0x799D2CB4039F4804(iLocal_72);
												}
											}
											func_86();
										}
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x1EA7D129CB42F133(iLocal_72, 0);
										}
										break;
									
									case 2:
										func_63();
										func_84();
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x1EA7D129CB42F133(iLocal_72, 0);
										}
										break;
									
									case 3:
										if (func_62())
										{
											iLocal_55 = 9;
										}
										func_54();
										func_84();
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x1EA7D129CB42F133(iLocal_72, 0);
										}
										break;
									
									case 5:
										func_53();
										break;
									
									case 6:
										if (!iLocal_104 && !unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x219EE6A7B599E7DC(&uLocal_74);
											unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), 5000, 2048, 2);
											unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
											unk_0x70E0655D56C93CF1(0, 1500);
											unk_0x28FB7E63A217D6DE(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
											unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING", 0, 1);
											unk_0xBD718C5BA2122192(uLocal_74);
											unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
											unk_0xEDD36C58DDE03C8F(&uLocal_74);
											unk_0x015B50BC21C88C8C(iLocal_72, 1);
											func_72(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											unk_0x799D2CB4039F4804(iLocal_72);
											iLocal_104 = 1;
										}
										if (func_64())
										{
											if (!unk_0x769F0F6444C1ABE0(iLocal_72))
											{
												unk_0x654FFF4D16298AC5(iLocal_72);
												if (unk_0xAB603D6FBED0F015(iLocal_72))
												{
													unk_0x799D2CB4039F4804(iLocal_72);
												}
												func_51();
												unk_0x4EDE34FBADD967A6(0);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
												unk_0x015B50BC21C88C8C(iLocal_72, 1);
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
										if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
										{
											if (!unk_0xBDD3EABACAB97D09(uLocal_70))
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
											if (unk_0x2137828D03306CAF(uLocal_85))
											{
												if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0) || func_5(unk_0x2A5EB8B0FE590B91(), uLocal_85, 1) > 200f)
												{
													unk_0x6C559FCFFD2365CB(&(uLocal_82[0]));
													unk_0x6C559FCFFD2365CB(&(uLocal_82[1]));
													unk_0xFECCD8AF38671477(&uLocal_85);
												}
											}
										}
										if (func_64())
										{
											if (!unk_0x769F0F6444C1ABE0(iLocal_72))
											{
												unk_0x654FFF4D16298AC5(iLocal_72);
												if (unk_0xAB603D6FBED0F015(iLocal_72))
												{
													unk_0x799D2CB4039F4804(iLocal_72);
												}
												unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
												unk_0x015B50BC21C88C8C(iLocal_72, 1);
												func_51();
												unk_0x4EDE34FBADD967A6(0);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_86();
										}
										break;
									
									case 11:
										unk_0xFBC4596E19752537(0.1f);
										if (unk_0x7FAC45D56235AB39(uLocal_75, 0))
										{
											if (!func_71(iLocal_75))
											{
												if (!iLocal_101)
												{
													if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xC4A39E4229BD3ABE(iLocal_72, 0))
													{
														if (!unk_0x769F0F6444C1ABE0(iLocal_72))
														{
															if (!iLocal_103)
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_103 = 1;
															}
															unk_0xA6AC097BEBB7B1F0(iLocal_72, iLocal_75, -1, -1, 2f, 1, 0);
															unk_0x015B50BC21C88C8C(iLocal_72, 1);
															iLocal_55 = 12;
														}
													}
													if (!unk_0x769F0F6444C1ABE0(iLocal_72))
													{
														if (((unk_0xE8594BE97055E9A1(iLocal_72, unk_0x2A5EB8B0FE590B91(), 1) || (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_72) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))) || (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iLocal_72) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))) || (unk_0xD2660BAC03EB7433(iLocal_75) > 2.5f && unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_75, 0)))
														{
															unk_0xDD0413EAB0ADDE6A(iLocal_72, unk_0x2A5EB8B0FE590B91(), 0, 16);
															func_51();
															iLocal_101 = 1;
														}
													}
												}
											}
											else
											{
												if (unk_0xBDD3EABACAB97D09(uLocal_105))
												{
													unk_0x789C84F1B8496AD0(&uLocal_105);
												}
												if (!unk_0x769F0F6444C1ABE0(iLocal_72))
												{
													unk_0x219EE6A7B599E7DC(&uLocal_74);
													unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
													unk_0xBD718C5BA2122192(uLocal_74);
													unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
													unk_0xEDD36C58DDE03C8F(&uLocal_74);
													unk_0x015B50BC21C88C8C(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
										}
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 150f, 150f, 150f, 0, 1, 0))
											{
												unk_0x219EE6A7B599E7DC(&uLocal_74);
												unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
												unk_0xBD718C5BA2122192(uLocal_74);
												unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
												unk_0xEDD36C58DDE03C8F(&uLocal_74);
												unk_0x015B50BC21C88C8C(iLocal_72, 1);
												iLocal_55 = 13;
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 12:
										unk_0xFBC4596E19752537(0.1f);
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											if (unk_0xE8594BE97055E9A1(iLocal_72, unk_0x2A5EB8B0FE590B91(), 1))
											{
												if (unk_0xBDD3EABACAB97D09(uLocal_105))
												{
													unk_0xE1DA6FCEE4F2BEEC(uLocal_105, 0);
													unk_0x869E3FDF7FDABA6A(iLocal_72);
												}
											}
											if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
											{
												if (!func_71(iLocal_75))
												{
													if (unk_0x5B9B499C707C2A95(iLocal_72, iLocal_75, 0))
													{
														if (!unk_0x03322C3918511AA0(iLocal_75))
														{
															unk_0x216B434C1A609F5B(iLocal_75, 1, 0);
														}
														unk_0x8C6A1F8B258BDF97(iLocal_72, iLocal_75, unk_0x2A5EB8B0FE590B91(), 8, 22f, 786469, 1f, 1f, 1);
														unk_0x015B50BC21C88C8C(iLocal_72, 1);
														iLocal_55 = 13;
													}
													else if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_75, 0))
													{
														if (bLocal_110)
														{
															unk_0xDD0413EAB0ADDE6A(iLocal_72, unk_0x2A5EB8B0FE590B91(), 0, 16);
															func_51();
															iLocal_101 = 1;
															iLocal_55 = 11;
														}
														else
														{
															func_68();
														}
													}
													else if (unk_0xE897E371352225D5(iLocal_72, -1794415470) != 1 && unk_0xE897E371352225D5(iLocal_72, -1794415470) != 0)
													{
														if (unk_0xE897E371352225D5(iLocal_72, 780511057) != 1 && unk_0xE897E371352225D5(iLocal_72, 780511057) != 0)
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
													if (unk_0xBDD3EABACAB97D09(uLocal_105))
													{
														unk_0x789C84F1B8496AD0(&uLocal_105);
													}
													unk_0x219EE6A7B599E7DC(&uLocal_74);
													unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
													unk_0xBD718C5BA2122192(uLocal_74);
													unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
													unk_0xEDD36C58DDE03C8F(&uLocal_74);
													unk_0x015B50BC21C88C8C(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
											else
											{
												unk_0x219EE6A7B599E7DC(&uLocal_74);
												unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
												unk_0xBD718C5BA2122192(uLocal_74);
												unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
												unk_0xEDD36C58DDE03C8F(&uLocal_74);
												unk_0x015B50BC21C88C8C(iLocal_72, 1);
												iLocal_55 = 13;
											}
											if (!iLocal_101)
											{
												if (((unk_0xE8594BE97055E9A1(iLocal_72, unk_0x2A5EB8B0FE590B91(), 1) || (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_72) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))) || (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iLocal_72) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))) || (unk_0xD2660BAC03EB7433(iLocal_75) > 2.5f && unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_75, 0)))
												{
													unk_0xDD0413EAB0ADDE6A(iLocal_72, unk_0x2A5EB8B0FE590B91(), 0, 16);
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
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											if (unk_0xB833DDD4C8B30212(iLocal_72))
											{
												func_51();
											}
											if (unk_0xC4A39E4229BD3ABE(iLocal_72, 0))
											{
												if (unk_0xBDD3EABACAB97D09(uLocal_105))
												{
													unk_0xE1DA6FCEE4F2BEEC(uLocal_105, 0);
												}
												if (unk_0xEB018752B4AE9E13(unk_0x0C20E539D876C5B3(iLocal_72, 0), joaat("towtruck")) || unk_0xEB018752B4AE9E13(unk_0x0C20E539D876C5B3(iLocal_72, 0), joaat("towtruck2")))
												{
													uLocal_81 = unk_0xA753E2CF089823FF(unk_0x0C20E539D876C5B3(iLocal_72, 0));
													if (unk_0x2137828D03306CAF(uLocal_81))
													{
														iLocal_80 = unk_0x761AC59E782D169D(uLocal_81);
														if (!unk_0xA9A04898798AE9E6(unk_0x0C20E539D876C5B3(iLocal_72, 0), 0) && !unk_0xA9A04898798AE9E6(iLocal_80, 0))
														{
															if (unk_0x07FD82987E8F3A91(unk_0x0C20E539D876C5B3(iLocal_72, 0), iLocal_80))
															{
																unk_0x344E9F779CDAA5DA(unk_0x0C20E539D876C5B3(iLocal_72, 0), iLocal_80);
															}
														}
													}
												}
												if (unk_0xF147FDD417194D5D(unk_0x2A5EB8B0FE590B91(), unk_0x0C20E539D876C5B3(iLocal_72, 0)))
												{
													unk_0x219EE6A7B599E7DC(&uLocal_74);
													unk_0x8F2751B831A7B303(0, 0, 0);
													unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
													unk_0xBD718C5BA2122192(uLocal_74);
													unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
													unk_0xEDD36C58DDE03C8F(&uLocal_74);
													unk_0x015B50BC21C88C8C(iLocal_72, 1);
												}
												if (!iLocal_113)
												{
													if ((func_1(unk_0x0C20E539D876C5B3(iLocal_72, 0)) || !unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(iLocal_72, 0), 0)) || func_71(unk_0x0C20E539D876C5B3(iLocal_72, 0)))
													{
														if (unk_0xBDD3EABACAB97D09(uLocal_105))
														{
															unk_0xE1DA6FCEE4F2BEEC(uLocal_105, 0);
														}
														unk_0x219EE6A7B599E7DC(&uLocal_74);
														unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
														unk_0xBD718C5BA2122192(uLocal_74);
														unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
														unk_0xEDD36C58DDE03C8F(&uLocal_74);
														unk_0x015B50BC21C88C8C(iLocal_72, 1);
														iLocal_113 = 1;
													}
												}
												if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 245f, 245f, 245f, 0, 1, 0))
												{
													func_86();
												}
											}
											else if (unk_0xE897E371352225D5(iLocal_72, 242628503) != 1 && unk_0xE897E371352225D5(iLocal_72, 242628503) != 0)
											{
												iLocal_55 = 11;
											}
											else if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 200f, 200f, 200f, 0, 1, 0))
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
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x654FFF4D16298AC5(iLocal_72);
											if (unk_0xAB603D6FBED0F015(iLocal_72))
											{
												unk_0x799D2CB4039F4804(iLocal_72);
											}
											unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
											unk_0x015B50BC21C88C8C(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 2:
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x654FFF4D16298AC5(iLocal_72);
											if (unk_0xAB603D6FBED0F015(iLocal_72))
											{
												unk_0x799D2CB4039F4804(iLocal_72);
											}
											unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
											unk_0x015B50BC21C88C8C(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 3:
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x654FFF4D16298AC5(iLocal_72);
											if (unk_0xAB603D6FBED0F015(iLocal_72))
											{
												unk_0x799D2CB4039F4804(iLocal_72);
											}
											unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
											unk_0x015B50BC21C88C8C(iLocal_72, 1);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 4:
										if (!unk_0x769F0F6444C1ABE0(iLocal_72))
										{
											unk_0x654FFF4D16298AC5(iLocal_72);
											if (unk_0xAB603D6FBED0F015(iLocal_72))
											{
												unk_0x799D2CB4039F4804(iLocal_72);
											}
											unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
											unk_0x015B50BC21C88C8C(iLocal_72, 1);
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
	
	if ((func_4(unk_0x2A5EB8B0FE590B91()) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && func_2(iParam0))
	{
		iVar0 = unk_0x19D9DFABC3C7D219();
		if (func_2(iVar0))
		{
			iVar1 = unk_0xD3B21CE53AA7BE51(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x07FD82987E8F3A91(iVar0, iParam0))
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
		if (unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (!unk_0xFB4BF464D20ED824(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0))
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
		if (!unk_0x769F0F6444C1ABE0(iParam0))
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
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(uParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

var func_6(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x0B584E556B01101F(uVar0, func_7(unk_0x591AF4C50B46E014(), 1f, 1f));
	unk_0xD42DEAFD12809447(uVar0, iParam3);
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
	if (!unk_0x769F0F6444C1ABE0(iLocal_72))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!func_88())
			{
				if (unk_0xE897E371352225D5(iLocal_72, 1227113341) != 1 && unk_0xE897E371352225D5(iLocal_72, 1227113341) != 0)
				{
					unk_0x17DD40170243F0AB(iLocal_72, unk_0x2A5EB8B0FE590B91(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0xC4A39E4229BD3ABE(iLocal_72, 0))
				{
					unk_0x8F2751B831A7B303(iLocal_72, 0, 0);
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
				if (unk_0xE897E371352225D5(iLocal_72, 1227113341) == 1 && unk_0xE897E371352225D5(iLocal_72, 1227113341) == 0)
				{
					unk_0x654FFF4D16298AC5(iLocal_72);
				}
			}
		}
	}
}

int func_9()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		if (unk_0x7FAC45D56235AB39(unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91()), 1))
		{
			if ((unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 1))) || unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 1)))) || unk_0xD043D4D784E459B0(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_72))
	{
		if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
			{
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					if (unk_0x5B9B499C707C2A95(iLocal_72, unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
					{
						if (unk_0xBDD3EABACAB97D09(uLocal_105))
						{
							unk_0x789C84F1B8496AD0(&uLocal_105);
						}
						if (iLocal_55 != 10)
						{
							if (!unk_0xBDD3EABACAB97D09(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
						}
					}
				}
				else
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_105))
					{
						unk_0x789C84F1B8496AD0(&uLocal_105);
					}
					if (iLocal_55 != 10)
					{
						if (!unk_0xBDD3EABACAB97D09(uLocal_70))
						{
							uLocal_70 = func_6(Local_86, 1);
						}
					}
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_70))
			{
				unk_0x789C84F1B8496AD0(&uLocal_70);
			}
		}
		else
		{
			if (!unk_0xBDD3EABACAB97D09(uLocal_105))
			{
				uLocal_105 = func_11(iLocal_72, 0, 145);
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_70))
			{
				unk_0x789C84F1B8496AD0(&uLocal_70);
			}
		}
	}
}

var func_11(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xBDD3EABACAB97D09(uVar0)) && unk_0x9418F0AE636D9770(&(Global_103236.f_27831[iParam2 /*29*/].f_3)))
	{
		unk_0xA6B842B66643C116(uVar0, &(Global_103236.f_27831[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_7(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_7(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_7(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
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
				if (unk_0xAB603D6FBED0F015(iLocal_72))
				{
					unk_0x799D2CB4039F4804(iLocal_72);
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
					if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
					{
						unk_0x243386B6BFEC85CF(iLocal_75, -1f);
						if (unk_0xBDD3EABACAB97D09(uLocal_70))
						{
							unk_0x789C84F1B8496AD0(&uLocal_70);
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
					if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
					{
						unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 0);
						unk_0xA05ED0EFFC6C6A11(unk_0x2A5EB8B0FE590B91(), iLocal_75, 24, 2000);
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
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
					if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
					{
						if (!unk_0x769F0F6444C1ABE0(iLocal_72))
						{
							unk_0x799D2CB4039F4804(iLocal_72);
							unk_0x243386B6BFEC85CF(iLocal_75, 0f);
							unk_0x153CD660E835E570(iLocal_72, iLocal_75, 320);
							if (!unk_0xBDD3EABACAB97D09(uLocal_105))
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
			if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_72) && !unk_0x5B9B499C707C2A95(iLocal_72, iLocal_75, 0))
				{
					unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
					unk_0x015B50BC21C88C8C(iLocal_72, 1);
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
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iLocal_75 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_72))
			{
				if (unk_0xF8ED2D0629FE764D(iLocal_72, iLocal_75))
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
	if ((!iLocal_104 && !unk_0x769F0F6444C1ABE0(iLocal_72)) && unk_0x7FAC45D56235AB39(iLocal_75, 0))
	{
		unk_0x799D2CB4039F4804(iLocal_72);
		unk_0x219EE6A7B599E7DC(&uLocal_74);
		unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), 5000, 2048, 2);
		unk_0x8F2751B831A7B303(0, 0, 0);
		unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
		unk_0x28FB7E63A217D6DE(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
		unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING", 0, 1);
		unk_0xBD718C5BA2122192(uLocal_74);
		unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
		unk_0xEDD36C58DDE03C8F(&uLocal_74);
		unk_0x015B50BC21C88C8C(iLocal_72, 1);
		unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
		iLocal_104 = 1;
	}
	if (func_64())
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			unk_0x654FFF4D16298AC5(iLocal_72);
			if (unk_0xAB603D6FBED0F015(iLocal_72))
			{
				unk_0x799D2CB4039F4804(iLocal_72);
			}
			unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_72, 1);
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
	if (!unk_0x769F0F6444C1ABE0(iLocal_72))
	{
		unk_0x4C47904AE69D7393(iLocal_72, 0);
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
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
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
			Global_103236.f_24776.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), Local_50.f_0, Local_50.f_1);
		}
		Global_103224 = iParam1;
		if (Global_103222 == 0)
		{
			if (((Global_103225 == 1 || Global_103225 == 5) || Global_103225 == 11) || Global_103225 == 25)
			{
				func_21(2);
			}
			else if ((Global_103225 == 26 || Global_103225 == 8) || Global_103225 == 17)
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
	Global_103222 = iParam0;
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
	if (Global_103236.f_9975[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_103236.f_9975[iParam0 /*12*/].f_6 == 11 || Global_103236.f_9975[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_103236.f_9975[iParam0 /*12*/].f_5 = 1;
		Global_103236.f_9975[iParam0 /*12*/].f_10 = uParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_102972 = 0;
	Global_102973 = 0;
	Global_102974 = 0;
	Global_102975 = 0;
	Global_102976 = 0;
	Global_102977 = 0;
	Global_102978 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_103236.f_9975.f_3853;
	Global_103236.f_9975.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_103236.f_9975[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_103236.f_9975[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_102972++;
					fVar1 = (fVar1 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_102973++;
					fVar2 = (fVar2 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_102974++;
					fVar3 = (fVar3 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_102975++;
					fVar4 = (fVar4 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_102976++;
					fVar5 = (fVar5 + (Global_103236.f_9975[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_102977++;
					fVar6 = (fVar6 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_102978++;
					fVar7 = (fVar7 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_102955 > 0)
	{
		if (Global_102972 == Global_102955)
		{
			fVar1 = 55f;
		}
	}
	if (Global_102956 > 0)
	{
		if (Global_102973 == Global_102956)
		{
			fVar2 = 10f;
		}
	}
	if (Global_102957 > 0)
	{
		if (Global_102974 == Global_102957)
		{
			fVar3 = 0f;
		}
	}
	if (Global_102958 > 0)
	{
		if (Global_102975 == Global_102958)
		{
			fVar4 = 10f;
		}
	}
	if (Global_102959 > 0)
	{
		if (((Global_102976 == Global_102959 || (Global_102959 * 10 / Global_102976) < 41) || Global_102976 > Global_102962) || Global_102976 == Global_102962)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_103236.f_9975.f_3856, 14))
			{
				if (Global_102976 == Global_102959)
				{
					unk_0x19AA4F8D57E34A69(joaat("num_rndevents_completed"), Global_102959, 0);
					unk_0xF6082E2ADA1C795B(&(Global_103236.f_9975.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_102960 > 0)
	{
		if (Global_102977 == Global_102960)
		{
			fVar6 = 15f;
		}
	}
	if (Global_102961 > 0)
	{
		if (Global_102978 == Global_102961)
		{
			fVar7 = 5f;
		}
	}
	Global_103236.f_9975.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_102976 > Global_102962 || Global_102976 == Global_102962)
	{
		iVar9 = Global_102962;
	}
	else
	{
		iVar9 = Global_102976;
	}
	unk_0xC94674712BED1A82(joaat("num_missions_completed"), Global_102972, 1);
	unk_0xC94674712BED1A82(joaat("num_missions_available"), Global_102955, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_completed"), Global_102973, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_available"), Global_102956, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_completed"), Global_102974, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_available"), Global_102957, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_completed"), Global_102975, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_available"), Global_102958, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_available"), Global_102962, 1);
	unk_0xC94674712BED1A82(joaat("num_misc_completed"), (Global_102978 + Global_102977), 1);
	unk_0xC94674712BED1A82(joaat("num_misc_available"), (Global_102961 + Global_102960), 1);
	Global_102979 = (Global_102972 * 100 / Global_102955);
	Global_102981 = ((Global_102974 + Global_102973) * 100 / (Global_102957 + Global_102956));
	Global_102980 = ((Global_102975 + iVar9) * 100 / (Global_102958 + Global_102962));
	Global_102982 = ((Global_102977 + Global_102978) * 100 / (Global_102960 + Global_102961));
	unk_0x24CB8183E6499C7F(joaat("total_progress_made"), Global_103236.f_9975.f_3853, 1);
	unk_0xC94674712BED1A82(joaat("percent_story_missions"), Global_102979, 1);
	unk_0xC94674712BED1A82(joaat("percent_ambient_missions"), Global_102980, 1);
	unk_0xC94674712BED1A82(joaat("percent_oddjobs"), Global_102981, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853))
	{
		func_25(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_24() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
				}
				if (!Global_55854)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()
{
	return Global_25222;
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
	iVar0 = unk_0x0C54585A239FF08F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB88BC822A9F5BED8(iParam0, iParam1);
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
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
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

int func_27()
{
	return Global_1312735;
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
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_20191.f_150[iVar1]), iVar0);
	}
}

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35302CD5A5D37EED(sParam0, ""))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_103236.f_20191.f_145 < 9)
	{
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_4), sParam1, 16);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_8 = (unk_0x3732B96D7A1859B4() + iParam3);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_9 = iParam5;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_11 = iParam6;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_12 = uParam2;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_13 = iParam7;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_14 = iParam8;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = ((unk_0x3732B96D7A1859B4() + iParam3) + iParam4);
		}
		else
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = -1;
		}
		Global_103236.f_20191.f_145++;
		func_33();
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_103236.f_20191.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 0))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[0])
			{
				Global_103236.f_20191.f_146[0] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 1))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[1])
			{
				Global_103236.f_20191.f_146[1] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 2))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[2])
			{
				Global_103236.f_20191.f_146[2] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_34()
{
	func_35();
	switch (Global_103236.f_2164.f_539.f_4301)
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
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_39(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_38(unk_0x2A5EB8B0FE590B91());
			if (func_37(iVar0) && (!func_36(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_37(Global_103236.f_2164.f_539.f_4301))
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

bool func_36(int iParam0)
{
	return Global_35813 == iParam0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
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
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_20191.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_24776.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xFABF5258A318B1DC(), 64);
	uVar16 = func_44(Var0);
	return uVar16;
}

int func_44(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xCAEDBF30E3EA14FC(&cParam0))
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
			Global_103236.f_2164.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_103236.f_2164.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 6309;
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
			if (iVar1 != 6309)
			{
				iVar0 = func_48(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_47(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
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

int func_48(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_47(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49()
{
	func_35();
	return Global_103236.f_2164.f_539.f_4301;
}

int func_50()
{
	return 1;
}

void func_51()
{
	Global_14611 = 0;
	func_52();
}

void func_52()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

void func_53()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_70))
	{
		unk_0xD42DEAFD12809447(uLocal_70, 0);
		unk_0x789C84F1B8496AD0(&uLocal_70);
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			unk_0x0508903FC1B0ED24();
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
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			unk_0x654FFF4D16298AC5(iLocal_72);
			if (unk_0xAB603D6FBED0F015(iLocal_72))
			{
				unk_0x799D2CB4039F4804(iLocal_72);
			}
			unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_72, 1);
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (func_59(unk_0x2A5EB8B0FE590B91(), Local_59, 1) > 200f)
	{
		if (!bLocal_100)
		{
			Var0[0 /*3*/] = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) - Vector(0f, 9f, 0f) };
			unk_0xDB2C6DD0E49577D6(Var0[0 /*3*/], 0, &(Var0[0 /*3*/]), 0);
			Var0[1 /*3*/] = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) + Vector(0f, 9f, 0f) };
			unk_0xDB2C6DD0E49577D6(Var0[1 /*3*/], 0, &(Var0[1 /*3*/]), 0);
			Var0[2 /*3*/] = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) - Vector(0f, 0f, 9f) };
			unk_0xDB2C6DD0E49577D6(Var0[2 /*3*/], 0, &(Var0[2 /*3*/]), 0);
			Var0[3 /*3*/] = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) + Vector(0f, 0f, 9f) };
			unk_0xDB2C6DD0E49577D6(Var0[3 /*3*/], 0, &(Var0[3 /*3*/]), 0);
			if (!unk_0x14CEA5D3B9541B99(Var0[0 /*3*/], 3f))
			{
				uLocal_85 = unk_0xE42A511281C9895B(joaat("sheriff"), Var0[0 /*3*/], func_57(Var0[0 /*3*/], func_58(unk_0x0FFED3E94261A832())), 1, 1, 0);
				uLocal_82[0] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0x0013D519C885E60B(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x0013D519C885E60B(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 1, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x14CEA5D3B9541B99(Var0[1 /*3*/], 3f))
			{
				uLocal_85 = unk_0xE42A511281C9895B(joaat("sheriff"), Var0[1 /*3*/], func_57(Var0[1 /*3*/], func_58(unk_0x0FFED3E94261A832())), 1, 1, 0);
				uLocal_82[0] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0x0013D519C885E60B(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x0013D519C885E60B(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 1, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x14CEA5D3B9541B99(Var0[2 /*3*/], 3f))
			{
				uLocal_85 = unk_0xE42A511281C9895B(joaat("sheriff"), Var0[2 /*3*/], func_57(Var0[2 /*3*/], func_58(unk_0x0FFED3E94261A832())), 1, 1, 0);
				uLocal_82[0] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0x0013D519C885E60B(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x0013D519C885E60B(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 1, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				bLocal_100 = true;
			}
			else if (!unk_0x14CEA5D3B9541B99(Var0[3 /*3*/], 3f))
			{
				uLocal_85 = unk_0xE42A511281C9895B(joaat("sheriff"), Var0[3 /*3*/], func_57(Var0[3 /*3*/], func_58(unk_0x0FFED3E94261A832())), 1, 1, 0);
				uLocal_82[0] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = unk_0x7B47BFDF39EC38D3(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				unk_0x0013D519C885E60B(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x0013D519C885E60B(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 1, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				bLocal_100 = true;
			}
		}
	}
	if (!unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), unk_0xD1EE0E9FCD74A37B(iLocal_79, 0), 10f, 10f, 10f, 0, 0, 0) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
	{
		func_56();
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_72))
	{
		if (((!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0) && unk_0x9A46207BB68ED2F0(iLocal_72, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) && unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) || (unk_0x7DDA81F38FB30F23(iLocal_72, Local_86, Global_19, 1, 1, 0) && func_55(1, 0, 1)))
		{
			unk_0xC1B1E9A034A63A62(0);
			if (func_14())
			{
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					unk_0x8231579045104F87(unk_0x19D9DFABC3C7D219(), 10.5f, 2, 0);
				}
				unk_0x0508903FC1B0ED24();
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
	
	if (unk_0xDDA1B42A28EFD32F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (bParam0)
		{
			if (unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0x3A564E53FCAA6917(iVar0) < 0.95f || unk_0x3A564E53FCAA6917(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!unk_0x30B90655507F26E3(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

void func_56()
{
	struct<3> Var0;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
	if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
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
		else if (unk_0xAB808887BA51FF69((Var0.f_0 - 50f), (Var0.f_1 - 50f), (Var0.f_2 - 50f), (Var0.f_0 + 50f), (Var0.f_1 + 50f), (Var0.f_2 + 50f)))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_72))
			{
				unk_0x654FFF4D16298AC5(iLocal_72);
				if (unk_0xAB603D6FBED0F015(iLocal_72))
				{
					unk_0x799D2CB4039F4804(iLocal_72);
				}
				unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
				unk_0x015B50BC21C88C8C(iLocal_72, 1);
				unk_0x4EDE34FBADD967A6(0);
			}
			func_86();
		}
	}
	else if (func_14())
	{
		if (unk_0xAB808887BA51FF69((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
		{
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 3, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				unk_0x219804CBDE138C4C(unk_0x0FFED3E94261A832(), 0f);
				if (unk_0xBDD3EABACAB97D09(uLocal_70))
				{
					unk_0x789C84F1B8496AD0(&uLocal_70);
				}
				iLocal_55 = 10;
			}
		}
	}
	else if (unk_0xAB808887BA51FF69((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			unk_0x654FFF4D16298AC5(iLocal_72);
			if (unk_0xAB603D6FBED0F015(iLocal_72))
			{
				unk_0x799D2CB4039F4804(iLocal_72);
			}
			unk_0x07A44999F605B530(iLocal_72, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_72, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_86();
	}
}

var func_57(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2410C2F4DC01A40D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_58(var uParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(uParam0), 0);
}

float func_59(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam4);
}

void func_60()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_72))
	{
		if (unk_0xC212BF73836863E3(iLocal_72))
		{
			if (!iLocal_142)
			{
				iLocal_143 = unk_0x3732B96D7A1859B4();
				iLocal_142 = 1;
			}
			else
			{
				iLocal_144 = unk_0x3732B96D7A1859B4();
			}
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	if ((iLocal_144 - iLocal_143) > 120000)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			if (unk_0xAB603D6FBED0F015(iLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					unk_0x799D2CB4039F4804(iLocal_72);
					func_86();
				}
			}
		}
	}
}

void func_61()
{
	if (unk_0xBBEAEDA40178A7D0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!iLocal_145)
		{
			iLocal_146 = unk_0x3732B96D7A1859B4();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_147 = unk_0x3732B96D7A1859B4();
		}
	}
	else
	{
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 60000)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			if (unk_0xAB603D6FBED0F015(iLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					unk_0x799D2CB4039F4804(iLocal_72);
					func_86();
				}
			}
		}
	}
}

int func_62()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_72))
	{
		if (unk_0xAB603D6FBED0F015(iLocal_72))
		{
			if ((((((((unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_114, 50f, 50f, 50f, 0, 1, 0) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_117, 50f, 50f, 50f, 0, 1, 0)) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_120, 50f, 50f, 50f, 0, 1, 0)) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_123, 50f, 50f, 50f, 0, 1, 0)) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_126, 50f, 50f, 50f, 0, 1, 0)) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_129, 50f, 50f, 50f, 0, 1, 0)) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_132, 50f, 50f, 50f, 0, 1, 0)) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_135, 50f, 50f, 50f, 0, 1, 0)) || func_59(unk_0x2A5EB8B0FE590B91(), Local_138, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_72) && func_88())
	{
		if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
		{
			if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) && unk_0xF8ED2D0629FE764D(iLocal_72, unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
			{
				unk_0xC1B1E9A034A63A62(0);
				if (!unk_0xAB603D6FBED0F015(iLocal_72))
				{
					unk_0xD234B4C90ED0E156(iLocal_72, unk_0x60A7F9A542DD09AD(unk_0x0FFED3E94261A832()));
					unk_0x6DADD4361C85DDAC(iLocal_72, 0);
					unk_0xAF0A51CDFB0B9352(iLocal_72, 1);
				}
				if (iLocal_56 == 0)
				{
					if (!func_83())
					{
						if (func_72(&uLocal_148, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!unk_0xBDD3EABACAB97D09(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
							unk_0x507FE690B1271947(&uLocal_94, 3);
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
					unk_0xAE833788DEAB23CA(iLocal_72, 2, 1);
					iLocal_55 = 3;
				}
			}
		}
	}
}

int func_64()
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iLocal_72))
	{
		if (unk_0x7FAC45D56235AB39(unk_0x19D9DFABC3C7D219(), 0))
		{
			if (unk_0xE8594BE97055E9A1(iLocal_72, unk_0x19D9DFABC3C7D219(), 1))
			{
				func_51();
				return 1;
			}
		}
		if (unk_0xE8594BE97055E9A1(iLocal_72, unk_0x2A5EB8B0FE590B91(), 1))
		{
			func_51();
			return 1;
		}
		if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 250f, 250f, 250f, 0, 1, 0))
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
					if (unk_0xE8594BE97055E9A1(func_65(iVar0), unk_0x2A5EB8B0FE590B91(), 0))
					{
						if (unk_0xF14CC08EB3D9D296(unk_0xC3A7AD90290CA72E(func_65(iVar0))) == -1865950624)
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
			if (unk_0x002C96066F2BBA2F(iLocal_72, 126))
			{
				return 1;
			}
			if (iLocal_56 == 0)
			{
				if (unk_0x2137828D03306CAF(iLocal_79))
				{
					if (((unk_0xFA2E229A03371E02(unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || unk_0xFA2E229A03371E02(unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || unk_0xFA2E229A03371E02(unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || unk_0xFA2E229A03371E02(unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0xD1EE0E9FCD74A37B(iLocal_79, 0) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						unk_0xCD6FB688ED8B6284(iLocal_72, unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 0);
						unk_0x015B50BC21C88C8C(iLocal_72, 1);
						return 1;
					}
				}
			}
			else if (iLocal_56 == 1)
			{
				if (unk_0xFA2E229A03371E02(unk_0xD1EE0E9FCD74A37B(iLocal_72, 0) - Vector(70f, 70f, 70f), unk_0xD1EE0E9FCD74A37B(iLocal_72, 0) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (unk_0xD42AA0CF76AFB4D8(unk_0xD1EE0E9FCD74A37B(iLocal_72, 1), 20f, 1))
			{
				return 1;
			}
			if ((unk_0x2C29BD9A139568E2(unk_0xD1EE0E9FCD74A37B(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0xD1EE0E9FCD74A37B(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || unk_0x2C29BD9A139568E2(unk_0xD1EE0E9FCD74A37B(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0xD1EE0E9FCD74A37B(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || unk_0x2C29BD9A139568E2(unk_0xD1EE0E9FCD74A37B(iLocal_72, 1) - Vector(15f, 15f, 15f), unk_0xD1EE0E9FCD74A37B(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return 1;
			}
			if (unk_0x74C3E52BCC6361BD(unk_0xD1EE0E9FCD74A37B(iLocal_72, 1), 3f))
			{
				return 1;
			}
			if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
			{
				return 1;
			}
			if ((unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && unk_0x4E9A7A90A945365B(iLocal_72, unk_0x2A5EB8B0FE590B91())) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))
			{
				if (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iLocal_72) || unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_72))
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
	return Global_48105.f_25[iParam0];
}

int func_66()
{
	return Global_48105.f_24;
}

bool func_67()
{
	return Global_48105.f_24 > 0;
}

void func_68()
{
	if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
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
				if (unk_0xBDD3EABACAB97D09(uLocal_105))
				{
					unk_0xE1DA6FCEE4F2BEEC(uLocal_105, false);
				}
				unk_0x654FFF4D16298AC5(iLocal_72);
				unk_0x219EE6A7B599E7DC(&uLocal_74);
				unk_0xD6E739D9CC93B1C2(0, unk_0x2A5EB8B0FE590B91(), 500, 1);
				unk_0xF37957BD055DBCF9(0, unk_0x2A5EB8B0FE590B91(), unk_0x2A5EB8B0FE590B91(), 1f, 0, 1f, 0.5f, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xA6AC097BEBB7B1F0(0, unk_0x19D9DFABC3C7D219(), -1, -1, 2f, 9, 0);
				unk_0xBD718C5BA2122192(uLocal_74);
				unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
				unk_0xEDD36C58DDE03C8F(&uLocal_74);
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
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iLocal_75 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if ((((unk_0x12CF5C6534A94BEE(iParam0, 0, 3000) || unk_0xFB4BF464D20ED824(iParam0)) || unk_0x9B4C386906F18D2A(unk_0xD1EE0E9FCD74A37B(iParam0, 0), 5f) > 0) || unk_0xE781FF266FA8648E(iParam0, joaat("weapon_molotov"), 0)) || unk_0x2C29BD9A139568E2(unk_0xD1EE0E9FCD74A37B(iParam0, 0) - Vector(5f, 5f, 5f), unk_0xD1EE0E9FCD74A37B(iParam0, 0) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_73(sParam2, iParam3, 0);
}

int func_73(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0xE40123A348A5FEDA(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_79();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_78();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_77())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
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
				switch (Global_14443.f_1)
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_75();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_74();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_75()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_76()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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
		Global_14443 = func_49();
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

void func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_80(int iParam0, int iParam1)
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

void func_81()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_83()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (!unk_0xA9A04898798AE9E6(iLocal_79, 0))
	{
		if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_79, 0) && !unk_0x457D9E478E06E354(iLocal_79, -1, 0))
		{
			unk_0x750EC417184671E0(iLocal_79, 60000f);
			unk_0x737455EE89E80133(iLocal_79);
		}
	}
}

void func_85()
{
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x769F0F6444C1ABE0(iLocal_72))
			{
				if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
				{
					if (unk_0xD2660BAC03EB7433(unk_0x2A5EB8B0FE590B91()) < 2.5f || !(unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_72, 15f, 15f, 8f, 0, 1, 0)))
					{
						unk_0x219EE6A7B599E7DC(&uLocal_74);
						unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), 30000, 2050, 2);
						unk_0x17DD40170243F0AB(0, unk_0x2A5EB8B0FE590B91(), -1, 2f, 1f, 1073741824, 0);
						unk_0xBD718C5BA2122192(uLocal_74);
						unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
						unk_0xEDD36C58DDE03C8F(&uLocal_74);
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
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
			{
				if (func_88())
				{
					iLocal_75 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					if (unk_0xD2660BAC03EB7433(iLocal_75) < 9f)
					{
						if (!unk_0x769F0F6444C1ABE0(iLocal_72))
						{
							if (unk_0x2860DA9980AC4109(iLocal_72, iLocal_75, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_108++;
							}
						}
					}
				}
				else if (!bLocal_110)
				{
					fLocal_109 = func_5(iLocal_72, unk_0x2A5EB8B0FE590B91(), 1);
					unk_0x219EE6A7B599E7DC(&uLocal_74);
					unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), 7000, 2048, 2);
					unk_0x17DD40170243F0AB(0, unk_0x2A5EB8B0FE590B91(), -1, (fLocal_109 - 3f), 1f, 1073741824, 0);
					unk_0xBD718C5BA2122192(uLocal_74);
					unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
					unk_0xEDD36C58DDE03C8F(&uLocal_74);
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
				if (unk_0xD2660BAC03EB7433(unk_0x2A5EB8B0FE590B91()) < 2.5f)
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_72))
					{
						unk_0x654FFF4D16298AC5(iLocal_72);
						unk_0xBD2E09A7FCD164FA(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
				if (!func_83())
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_72))
					{
						unk_0x654FFF4D16298AC5(iLocal_72);
						unk_0xBD2E09A7FCD164FA(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
			}
			if (func_88())
			{
				iLocal_75 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0xD2660BAC03EB7433(iLocal_75) < 2.5f)
				{
					if (unk_0x7DDA81F38FB30F23(iLocal_75, unk_0xD1EE0E9FCD74A37B(iLocal_72, 1), 20f, 20f, 5f, 0, 1, 0))
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
				iLocal_75 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0xD2660BAC03EB7433(iLocal_75) < 0.5f)
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_72))
					{
						unk_0x654FFF4D16298AC5(iLocal_72);
						if (!unk_0xAB603D6FBED0F015(iLocal_72))
						{
							unk_0xD234B4C90ED0E156(iLocal_72, unk_0x60A7F9A542DD09AD(unk_0x0FFED3E94261A832()));
							unk_0x6DADD4361C85DDAC(iLocal_72, 0);
							unk_0xAF0A51CDFB0B9352(iLocal_72, 1);
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
				if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_72))
					{
						if (unk_0xF8ED2D0629FE764D(iLocal_72, unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
						{
							if (unk_0xBDD3EABACAB97D09(uLocal_105))
							{
								unk_0x789C84F1B8496AD0(&uLocal_105);
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
			if (!unk_0x769F0F6444C1ABE0(iLocal_72))
			{
				if (!unk_0x16EDD647B91D8D8F(iLocal_72, unk_0x2A5EB8B0FE590B91(), 90f))
				{
					unk_0x88E3EDF9AF851486(iLocal_72, unk_0x2A5EB8B0FE590B91(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x769F0F6444C1ABE0(iLocal_72))
			{
				if (unk_0x16EDD647B91D8D8F(iLocal_72, unk_0x2A5EB8B0FE590B91(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x769F0F6444C1ABE0(iLocal_72))
			{
				if (!unk_0x16EDD647B91D8D8F(iLocal_72, unk_0x2A5EB8B0FE590B91(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_88()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0x2137828D03306CAF(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
		{
			if ((((((!unk_0xD50DF0CF7D16F6D9(unk_0x2A5EB8B0FE590B91()) && !unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91())) && !unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91())) && !unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91())) && !unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91())) && !unk_0x833B8D234938E4CD(unk_0x2A5EB8B0FE590B91())) && !unk_0xD540D62327324842(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
			{
				if (unk_0xCBA4F77BB9D2F115(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) >= 1)
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
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iLocal_75 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if ((unk_0x7FAC45D56235AB39(iLocal_75, 0) && !unk_0x769F0F6444C1ABE0(iLocal_72)) && !bLocal_99)
		{
			fLocal_109 = func_5(iLocal_72, unk_0x2A5EB8B0FE590B91(), 1);
			if (fLocal_109 > 5f)
			{
				fLocal_109 = (fLocal_109 - 2.5f);
			}
			else
			{
				fLocal_109 = (fLocal_109 - 1f);
			}
			unk_0x654FFF4D16298AC5(iLocal_72);
			unk_0x219EE6A7B599E7DC(&uLocal_74);
			if (iLocal_56 == 0)
			{
				unk_0xEDF42871EAD55C9B(0, iLocal_75, 10000, 2048, 2);
				unk_0xF1C3427BFED79E6B(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0xF37957BD055DBCF9(0, unk_0x2A5EB8B0FE590B91(), unk_0x2A5EB8B0FE590B91(), 1f, 0, fLocal_109, 1f, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (iLocal_56 == 1)
			{
				unk_0xEDF42871EAD55C9B(0, iLocal_75, 10000, 2052, 2);
				unk_0xF1C3427BFED79E6B(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0xF172DDE61134A915(0, unk_0x2A5EB8B0FE590B91(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			unk_0xBD718C5BA2122192(uLocal_74);
			unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
			unk_0xEDD36C58DDE03C8F(&uLocal_74);
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
		StringCopy(&Global_102292, unk_0xFABF5258A318B1DC(), 24);
		Global_102286 = 1;
	}
	else
	{
		StringCopy(&Global_102292, "NULL", 24);
		Global_102286 = 0;
	}
}

int func_91(int iParam0)
{
	if (func_95())
	{
		Global_103226 = 1;
		Global_103223 = unk_0x3732B96D7A1859B4();
		if (func_29(Global_103225))
		{
			func_92(0);
		}
		unk_0x016711C6F4D08FCE(1, "RE_TITLE");
		if (iParam0 && func_29(Global_103225))
		{
			unk_0x847E5C2DF89423C1();
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
			if (Global_103236.f_24776.f_2 < 3)
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_93(func_94(iParam0), -1);
					Global_103236.f_24776.f_2++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 1))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_93(func_94(iParam0), -1);
					Global_103236.f_24776.f_3++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 2))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_93(func_94(iParam0), -1);
					Global_103236.f_24776.f_4++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 2);
				}
			}
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(uParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
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
	switch (func_96(&Global_25281, 0, 5, 0, unk_0xFF09208EC90C94CB()))
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
		if (Global_89400.f_44 == 1)
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
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x1EF72C87138AD63D(unk_0x8A41C463063AFC8E(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6A11DD53643C828(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *uParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *uParam0)
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
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
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
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_98(int iParam0)
{
	return func_99(iParam0, Global_35813);
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
	if (Global_35813 == 15)
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
	if (unk_0xBDD3EABACAB97D09(uLocal_71))
	{
		unk_0x789C84F1B8496AD0(&uLocal_71);
	}
	if (!unk_0xBDD3EABACAB97D09(uLocal_105))
	{
		uLocal_105 = func_11(iLocal_72, 0, 145);
		unk_0xE1E81CBB89115254(uLocal_105, 0);
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
	unk_0xBAD89C59C9871295(3, 0);
	unk_0xBAD89C59C9871295(5, 0);
	unk_0xBAD89C59C9871295(11, 0);
	iLocal_72 = unk_0xD00B79C0E206E082(26, iLocal_90, Local_76, fLocal_89, 1, 1);
	unk_0x4C47904AE69D7393(iLocal_72, 1);
	unk_0x31AC59B7C21A2047(iLocal_72, 134, 1);
	unk_0x31AC59B7C21A2047(iLocal_72, 137, 1);
	unk_0xEE8231F61ED038B0("PedPrisoner", &iLocal_73);
	unk_0x3C030E241A3543D2(iLocal_72, iLocal_73);
	unk_0x3A8EFBE4AB457FE2(5, joaat("COP"), iLocal_73);
	unk_0x3A8EFBE4AB457FE2(5, iLocal_73, joaat("COP"));
	unk_0xF1C3427BFED79E6B(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x88D9DF53359130B9(iLocal_72, 0);
	unk_0x89AEA58335779997(iLocal_72, 8, 0);
	unk_0xAE833788DEAB23CA(iLocal_72, 128, 1);
	unk_0xAE833788DEAB23CA(iLocal_72, 2, 1);
	unk_0xAE833788DEAB23CA(iLocal_72, 1, 0);
	unk_0xF6082E2ADA1C795B(&uLocal_94, 3);
	unk_0xF6082E2ADA1C795B(&uLocal_94, 5);
	unk_0xF6082E2ADA1C795B(&uLocal_94, 0);
	if (iLocal_56 == 0)
	{
		unk_0x28AB07F44A348EFC(iLocal_72, "REPRI1Lost");
		func_103(&uLocal_148, 3, iLocal_72, "REPRI1Lost", 0, 1);
		unk_0xF128ECFE9D500DA6(Local_76, 50f, 0);
		unk_0x333EF04F1A5ADEB5(Local_76, 10f, 0, 0, 0, 0);
		unk_0x25118499AB6F447B(Local_76 - Vector(50f, 50f, 50f), Local_76 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		unk_0x25118499AB6F447B(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		unk_0x20A9229D8F4F054A(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 0, 1);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_73, -1865950624);
		unk_0x3A8EFBE4AB457FE2(1, -1865950624, iLocal_73);
		unk_0x89AEA58335779997(iLocal_72, 17, 1);
		iLocal_79 = unk_0xE42A511281C9895B(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, 1, 0);
		unk_0x525CB8A0699017B3(iLocal_79, 0f);
		unk_0xE90B4C21E7E6817C(iLocal_79, 4, 0, 0);
		unk_0xAC6A1AC7B55BB46C(iLocal_79, 0, 0, 1148846080);
		unk_0x4FF56972862B602F(iLocal_79, 0);
		unk_0x4EC348B7C975DB3A(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		uVar0 = unk_0x7B47BFDF39EC38D3(iLocal_79, 26, joaat("s_m_y_ranger_01"), -1, 1, 1);
		unk_0x31AC59B7C21A2047(uVar0, 326, 1);
		unk_0x67E5DE1657F60AC6(iVar0, 99);
		unk_0xC5C40F444D9F3FEE(iVar0, 1);
		uVar1[0] = unk_0xE42A511281C9895B(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, 1, 0);
		uVar1[1] = unk_0xE42A511281C9895B(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, 1, 0);
		unk_0x07C140F31B3CDAFA(uVar1[0], 1084227584);
		unk_0x07C140F31B3CDAFA(uVar1[1], 1084227584);
	}
	else if (iLocal_56 == 1)
	{
		unk_0x4AE062EA52E5F2B3(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, 0, 1);
		unk_0x28AB07F44A348EFC(iLocal_72, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_103(&uLocal_148, 3, iLocal_72, "REPRI2Prisoner", 0, 1);
		unk_0x0013D519C885E60B(iLocal_72, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (func_49() == 0)
	{
		func_103(&uLocal_148, 0, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
	}
	else if (func_49() == 1)
	{
		func_103(&uLocal_148, 1, unk_0x2A5EB8B0FE590B91(), "FRANKLIN", 0, 1);
	}
	else if (func_49() == 2)
	{
		func_103(&uLocal_148, 2, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
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
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
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
		unk_0x507FE690B1271947(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_24() == 0)
		{
			uVar0 = func_48(func_106(iParam0), -1, 0);
			unk_0x507FE690B1271947(&uVar0, iParam1);
			func_46(func_106(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_24() == 0)
		{
			uVar0 = func_48(func_106(iParam0), -1, 0);
			unk_0xF6082E2ADA1C795B(&uVar0, iParam1);
			func_46(func_106(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_24() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_48(func_106(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_109()
{
	unk_0x0F39DF6675B2333E(iLocal_90);
	unk_0xA7C81DED990D3418("random@prisoner_lift");
	if (iLocal_56 == 0)
	{
		unk_0x0F39DF6675B2333E(joaat("s_m_y_ranger_01"));
		unk_0x0F39DF6675B2333E(joaat("sheriff"));
		unk_0x0F39DF6675B2333E(joaat("ratloader"));
		unk_0x0F39DF6675B2333E(joaat("bfinjection"));
	}
	if (unk_0xA1FC9D7AEA164881(iLocal_90) && unk_0x45834D6C20FFF689("random@prisoner_lift"))
	{
		if (iLocal_56 == 0)
		{
			if (((unk_0xA1FC9D7AEA164881(joaat("s_m_y_ranger_01")) && unk_0xA1FC9D7AEA164881(joaat("sheriff"))) && unk_0xA1FC9D7AEA164881(joaat("ratloader"))) && unk_0xA1FC9D7AEA164881(joaat("bfinjection")))
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
		unk_0x0F39DF6675B2333E(iLocal_90);
		unk_0xA7C81DED990D3418("random@prisoner_lift");
		if (iLocal_56 == 0)
		{
			unk_0x0F39DF6675B2333E(joaat("s_m_y_ranger_01"));
			unk_0x0F39DF6675B2333E(joaat("sheriff"));
			unk_0x0F39DF6675B2333E(joaat("ratloader"));
			unk_0x0F39DF6675B2333E(joaat("bfinjection"));
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
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_50) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_122())
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
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (func_37(func_49()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 2) && !unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 3))
				{
					func_113(iVar32, &Var0);
					fVar35 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0.f_6, 1);
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
	if (unk_0x58478145CAF8429C(&cVar2))
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
	return Global_102954 > 0;
}

int func_120()
{
	if (Global_88844 != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 20);
	}
	return 0;
}

int func_122()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x693458AABD7F18D7() == 1f)
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
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_122())
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
	if ((Global_103225 == func_43() && unk_0x0EF1484C8ECA32F8()) && Global_103226)
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
	unk_0x2D47D0FBCE479E9D(0);
	unk_0x0A397D1B8C0E7CF0(1);
	Global_103222 = 0;
	func_126();
}

void func_126()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0x02E663D7DDAE8202(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)), 1);
		}
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
	}
}

void func_127(int iParam0)
{
	Global_103225 = iParam0;
}

int func_128(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_141282)
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_122())
			{
				return 0;
			}
		}
		if (!Global_103236.f_8866)
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
		if (Global_103225 != -1)
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !bParam6)
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
		if (!func_164(Global_103236.f_24776.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3732B96D7A1859B4() - Global_103227) < 150000)
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
		if (unk_0xB2F8D1B7C533483C())
		{
			return 0;
		}
		if (unk_0x0EF1484C8ECA32F8())
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
		if (unk_0xA419466089F321B4(unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91())))
		{
			if ((unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(377.153f, -717.567f, 10.0536f) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(320.9934f, 265.2515f, 82.1221f)) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_25368)
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
				Var5 = { Global_103236.f_2164.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_103236.f_2164.f_539.f_2276[iVar4];
				if (func_152(iVar8))
				{
					if (func_130(iVar4))
					{
						if (!func_129(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_103236.f_2164.f_539.f_2276[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_142(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
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
	
	func_151(&uVar0, unk_0xD887411BD4A4A92D());
	func_150(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_149(&uVar0, unk_0xDA870B7547A455EA());
	func_148(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_147(&uVar0, unk_0x0FD588FC21950895());
	func_146(&uVar0, unk_0x15C180E135C728D1());
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
	if (unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
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
						if (((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_162()) || Global_102283) || Global_25224) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1) || func_162()) || Global_25224) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_162()) || Global_102283) || Global_25224) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_103236.f_7469.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_162()) || Global_102283) || Global_25224) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_157()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || func_80(8, -1)) || func_157()) || func_156()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
						{
							return 0;
						}
						if ((unk_0x0AFBA1AD6DC1C540() && unk_0xD7037D74D866BD7D() != 3) && unk_0xE858C2EA240D3C68() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
						{
							if ((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_162()) || Global_25224) || func_161()) || func_80(8, -1)) || func_159()) || func_158()) || func_157()) || Global_103236.f_7469.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || func_162()) || func_159()) || Global_102283) || Global_25224) || func_161()) || Global_36944) || func_80(8, -1)) || func_158()) || func_156()) || func_157()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_162()) || Global_102283) || Global_25224) || func_161()) || func_80(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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
	return Global_91816.f_1;
}

int func_156()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 13);
	}
	return 0;
}

int func_157()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_159()
{
	return Global_91829.f_310 > 0;
}

bool func_160()
{
	return Global_91829.f_309 > 0;
}

var func_161()
{
	return Global_1312852;
}

int func_162()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
	}
	return 0;
}

int func_163()
{
	func_78();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_103236.f_7469.f_919[iParam0];
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
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_1, iVar0);
	}
	return bVar1;
}

int func_168()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(uVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x8F8E5C33266ED978(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_169()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					iVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&iVar0, 0);
					unk_0x01D51AAE02B320BA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
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
		unk_0xFBC4596E19752537(1f);
		unk_0x20A9229D8F4F054A(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x2D48AAEAE70BCD6E(unk_0x0FFED3E94261A832());
		unk_0xB887F7201FD411C1(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
			{
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_72))
		{
			unk_0x4C47904AE69D7393(iLocal_72, 0);
			if (iLocal_56 == 0)
			{
				unk_0x31AC59B7C21A2047(iLocal_72, 317, 1);
				if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x219EE6A7B599E7DC(&uLocal_74);
					unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
					unk_0xBD718C5BA2122192(uLocal_74);
					unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
					unk_0xEDD36C58DDE03C8F(&uLocal_74);
					unk_0x015B50BC21C88C8C(iLocal_72, 1);
				}
			}
			else if (iLocal_56 == 1)
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x219EE6A7B599E7DC(&uLocal_74);
					unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
					unk_0xBD718C5BA2122192(uLocal_74);
					unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
					unk_0xEDD36C58DDE03C8F(&uLocal_74);
					unk_0x015B50BC21C88C8C(iLocal_72, 1);
				}
				else if (unk_0x7FAC45D56235AB39(iLocal_75, 0))
				{
					unk_0x219EE6A7B599E7DC(&uLocal_74);
					unk_0xA6AC097BEBB7B1F0(0, iLocal_75, -1, -1, 2f, 9, 0);
					unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
					unk_0xBD718C5BA2122192(uLocal_74);
					unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
					unk_0xEDD36C58DDE03C8F(&uLocal_74);
					unk_0x015B50BC21C88C8C(iLocal_72, 1);
				}
				else
				{
					unk_0x219EE6A7B599E7DC(&uLocal_74);
					unk_0x07A44999F605B530(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0x07A44999F605B530(0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 300f, -1, 0, 0);
					unk_0xBD718C5BA2122192(uLocal_74);
					unk_0x234E551BB8E8813B(iLocal_72, uLocal_74);
					unk_0xEDD36C58DDE03C8F(&uLocal_74);
					unk_0x015B50BC21C88C8C(iLocal_72, 1);
				}
			}
		}
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
		unk_0xBAD89C59C9871295(11, 1);
		unk_0xF185F03C5796A4F6();
	}
	func_171(-1);
	unk_0xA232817B0B36F2E5();
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
		unk_0x016711C6F4D08FCE(0, 0);
		Global_103227 = unk_0x3732B96D7A1859B4();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_103225, 1), 64);
		if (func_42(Global_103225) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_103224, 64);
		}
		unk_0xFB2DC910C33320E0(&cVar0, Global_103222, (unk_0x3732B96D7A1859B4() - Global_103223), 0);
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_103232, 0) && Global_103236.f_24776.f_2 < 3)
	{
		unk_0x507FE690B1271947(&Global_103232, 0);
	}
	func_172(&Global_25281);
	Global_103226 = 0;
	func_127(-1);
}

void func_172(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35775)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
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
	Global_36364 = (unk_0x3732B96D7A1859B4() + iParam0);
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
	Global_103236.f_24776.f_43[iParam0] = *uParam1;
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
	Global_14611 = 0;
	func_183();
}

void func_183()
{
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xA37D20A4B77452D4();
		Global_16756 = 0;
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_184(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 47)
	{
		func_104(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_185()
{
	float fVar0;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		fVar0 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_63, 1);
		iLocal_62 = 1;
		if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_66, 1) < fVar0)
		{
			fVar0 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_66, 1);
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

