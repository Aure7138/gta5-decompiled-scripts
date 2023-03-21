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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
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
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81[2];
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	float fLocal_98[2] = { 0f, 0f };
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	int iLocal_110 = 0;
	var uLocal_111[2] = { 0, 0 };
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<6> Local_150 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_156 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 16;
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
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	int iVar0;
	
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	Local_107 = { 154.92f, 6841.12f, 19.14f };
	iLocal_125 = 200;
	Local_139 = { -1161.199f, 934.5912f, 196.7591f };
	Local_142 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_150, "", 24);
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_53))
		{
			if (unk_0x4732F444CD45A256(iLocal_53))
			{
				unk_0x95B1A64E8455A478(iLocal_53);
			}
		}
		func_206();
	}
	if (func_164(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		unk_0x810C5D6462DD69E6();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6E65FD9B611945AD() || iLocal_131)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			unk_0x89FD0BC32FAB9F88("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_66)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (bLocal_52)
					{
						iLocal_162 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
					{
						func_144();
						switch (iLocal_49)
						{
							case 0:
								func_134();
								iLocal_49 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) && !func_127(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) && !func_126())
								{
									switch (iLocal_50)
									{
										case 0:
											func_125();
											if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_78, 50f, 35f, 50f, 0, 1, 0))
											{
												func_124();
											}
											if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_78, 80f, 65f, 50f, 0, 1, 0))
											{
												func_123();
											}
											if (!unk_0x74C2FE037DFC8B4A(iLocal_58, 0))
											{
												if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_122();
													if (unk_0xE769D9B5158D0F11(uLocal_114))
													{
														unk_0x2E9500102925D891(uLocal_114, 0);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (unk_0xE769D9B5158D0F11(uLocal_111[iLocal_64]))
														{
															unk_0x2E9500102925D891(uLocal_111[iLocal_64], 0);
														}
														iLocal_64++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) || func_127(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) || iLocal_129)
								{
									iLocal_129 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (unk_0xE769D9B5158D0F11(uLocal_114))
									{
										unk_0x2E9500102925D891(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xE769D9B5158D0F11(uLocal_111[iLocal_64]))
										{
											unk_0x2E9500102925D891(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_75 = 1;
									if (unk_0xE769D9B5158D0F11(uLocal_114))
									{
										unk_0x2E9500102925D891(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xE769D9B5158D0F11(uLocal_111[iLocal_64]))
										{
											unk_0x2E9500102925D891(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									if (!func_111())
									{
										switch (iLocal_51)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x0FAE113CE72ED842(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x0FAE113CE72ED842(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										unk_0x4EDE34FBADD967A6(0);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!unk_0x0FAE113CE72ED842(iLocal_54[iVar0]))
											{
												unk_0x5B1F7C6F6193E5FB(iLocal_54[iVar0], 5, 0, 0);
												unk_0x9603FB72C3126396(iLocal_54[iVar0], unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
												unk_0x10F31830C95ED2E5(iLocal_54[iVar0], 1);
												if (unk_0x31F12808DC47A9E5(iLocal_60))
												{
													if (unk_0x4A296E47F281D02F(iLocal_60))
													{
														unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
													}
												}
												if (unk_0xE769D9B5158D0F11(uLocal_111[iVar0]))
												{
													unk_0x40D517D991458154(&(uLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_130)
								{
									func_101();
								}
								if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_107, 100f, 100f, 100f, 1, 1, 0))
								{
									unk_0x8BB3FA32294185BB(1f);
									if (unk_0x31F12808DC47A9E5(iLocal_54[0]) && unk_0x31F12808DC47A9E5(iLocal_54[1]))
									{
										unk_0xDBE64C5761554FBF(&(iLocal_54[0]));
										unk_0xDBE64C5761554FBF(&(iLocal_54[1]));
									}
								}
								if (!unk_0x31F12808DC47A9E5(iLocal_57))
								{
									if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_139, 200f, 200f, 200f, 1, 1, 0))
									{
										unk_0x9016574B77A748EE(joaat("s_m_m_highsec_01"));
										unk_0x9016574B77A748EE(joaat("granger"));
										if (unk_0xEDFE27D1AEA0EA7F(joaat("s_m_m_highsec_01")) && unk_0xEDFE27D1AEA0EA7F(joaat("granger")))
										{
											iLocal_59 = unk_0x3064CCF56C6C32BC(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1, 0);
											unk_0xC74F690FB603E9C5(iLocal_59, 200);
											unk_0x5BA0866A555BBEFD(iLocal_59, 1.5f);
											iLocal_57 = unk_0xC52E83A4C0F88DAB(iLocal_59, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											unk_0xDEA702F2138E0B35(iLocal_57, 0, 0, 2, 0);
											unk_0xDEA702F2138E0B35(iLocal_57, 3, 0, 0, 0);
											unk_0xDEA702F2138E0B35(iLocal_57, 4, 0, 0, 0);
											unk_0x7D154B840BD03D00(iLocal_57, joaat("weapon_pistol"), -1, 1, 1);
											unk_0x641E77554763EF06(iLocal_57, iLocal_177);
										}
									}
								}
								if (!unk_0x0FAE113CE72ED842(iLocal_53))
								{
									if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
									{
										if (unk_0xE4752B503DF3FEC0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) < 1)
										{
											if (!iLocal_132)
											{
												func_81(0);
												func_104();
												unk_0x4EDE34FBADD967A6(0);
												func_70(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_132 = 1;
											}
										}
									}
									else
									{
										iLocal_132 = 0;
									}
									if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_139, Global_22, 1, 1, 0) && unk_0xEA07F07380ABC460(iLocal_53, unk_0x18F7BE9ACB7D08F4(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0x4732F444CD45A256(iLocal_53))
										{
											if (unk_0xE769D9B5158D0F11(uLocal_137))
											{
												unk_0x40D517D991458154(&uLocal_137);
											}
											if (unk_0xE769D9B5158D0F11(uLocal_138))
											{
												unk_0x40D517D991458154(&uLocal_138);
											}
											if (func_69())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(Local_139))
										{
											func_81(0);
											func_104();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0x31F12808DC47A9E5(iLocal_60))
								{
									if (unk_0x4A296E47F281D02F(iLocal_60))
									{
										if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
										{
											if (unk_0xDFEB6D8BCE2B43F6(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
												}
											}
											else
											{
												unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
											}
										}
									}
								}
								if (unk_0x0FAE113CE72ED842(iLocal_54[0]) || unk_0x0FAE113CE72ED842(iLocal_54[1]))
								{
									bLocal_147 = true;
								}
								if (bLocal_147)
								{
									if (unk_0xC4B84EB67F78C1F0(iLocal_58, 0))
									{
										if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
										{
											unk_0x83222845D5C7852E(iLocal_54[0]);
											if (unk_0xDAE9D6BA21089B7F(iLocal_54[0], iLocal_58, -1, 0, 0) || unk_0xDAE9D6BA21089B7F(iLocal_54[0], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x267F7A2DFDFFB077(iLocal_54[0]);
													if (unk_0x31F12808DC47A9E5(iLocal_60))
													{
														if (unk_0x4A296E47F281D02F(iLocal_60))
														{
															unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
														}
													}
													unk_0xC8BEB049F3BFC0AB(&uLocal_65);
													unk_0x81D9C52E2A8DA464(0);
													unk_0x394F5D18B411ECAD(0, unk_0x0AF3D0AB54EA2104(iLocal_58, -0.5f, 0.5f, 0f), unk_0x18F7BE9ACB7D08F4(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xFDBDFC454E44A5BF(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0x48CA7222706D392C(0, iLocal_58, unk_0x18F7BE9ACB7D08F4(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xAFDA7B8F83B2CA58(uLocal_65);
													unk_0x73F69DD57B7E92A9(iLocal_54[0], uLocal_65);
													unk_0x56C7B20E11B37066(&uLocal_65);
													unk_0x10F31830C95ED2E5(iLocal_54[0], 1);
													unk_0xCA170C8E89CF7FEF(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0x2BBAA45ECDE3DAE2(iLocal_54[0], 242628503) == 1)
												{
													if (unk_0x461DEB4775BA9DC1(iLocal_54[0]) == 3)
													{
														if (!unk_0xEA07F07380ABC460(iLocal_54[0], unk_0x18F7BE9ACB7D08F4(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x8673F2F1802ADEF7(iLocal_54[0], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xDBE64C5761554FBF(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												unk_0x48B25C02FAB9DC81(iLocal_54[0], unk_0x18F7BE9ACB7D08F4(), 0, 16);
												unk_0x10F31830C95ED2E5(iLocal_54[0], 1);
											}
										}
										if (!unk_0x0FAE113CE72ED842(iLocal_54[1]))
										{
											unk_0x83222845D5C7852E(iLocal_54[1]);
											if (unk_0xDAE9D6BA21089B7F(iLocal_54[1], iLocal_58, -1, 0, 0) || unk_0xDAE9D6BA21089B7F(iLocal_54[1], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x267F7A2DFDFFB077(iLocal_54[1]);
													unk_0xC8BEB049F3BFC0AB(&uLocal_65);
													unk_0x81D9C52E2A8DA464(0);
													unk_0x394F5D18B411ECAD(0, unk_0x0AF3D0AB54EA2104(iLocal_58, -0.5f, 0.5f, 0f), unk_0x18F7BE9ACB7D08F4(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xFDBDFC454E44A5BF(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0x48CA7222706D392C(0, iLocal_58, unk_0x18F7BE9ACB7D08F4(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xAFDA7B8F83B2CA58(uLocal_65);
													unk_0x73F69DD57B7E92A9(iLocal_54[1], uLocal_65);
													unk_0x56C7B20E11B37066(&uLocal_65);
													unk_0x10F31830C95ED2E5(iLocal_54[1], 1);
													unk_0xCA170C8E89CF7FEF(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0x2BBAA45ECDE3DAE2(iLocal_54[1], 242628503) == 1)
												{
													if (unk_0x461DEB4775BA9DC1(iLocal_54[1]) == 3)
													{
														if (!unk_0xEA07F07380ABC460(iLocal_54[1], unk_0x18F7BE9ACB7D08F4(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x8673F2F1802ADEF7(iLocal_54[1], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xDBE64C5761554FBF(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												unk_0x48B25C02FAB9DC81(iLocal_54[1], unk_0x18F7BE9ACB7D08F4(), 0, 16);
												unk_0x10F31830C95ED2E5(iLocal_54[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_53))
							{
								if (unk_0x8673F2F1802ADEF7(iLocal_53, Local_142, 5f, 5f, 5f, 0, 1, 0))
								{
									func_8(0);
									unk_0x4EDE34FBADD967A6(0);
									func_104();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0x31F12808DC47A9E5(iLocal_53))
							{
								unk_0x63C116C2153FAA3C(&iLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								unk_0x9BEA833CAF67289C("RE6_BOTH_DEAD");
								if (!iLocal_74)
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_106 = unk_0x5AFB8ED811F05E4D() + 8500;
									iLocal_74 = 1;
								}
								if (!unk_0x0FAE113CE72ED842(iLocal_53))
								{
									if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!unk_0x0FAE113CE72ED842(iLocal_53))
							{
								if (!bLocal_130)
								{
									if (unk_0x2BBAA45ECDE3DAE2(iLocal_53, 1785177548) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_53, 1785177548) != 0)
									{
										unk_0xD9FCA20C1C5553F7(iLocal_53);
										uLocal_343 = unk_0x3C3438327FFEB224(Local_78, -2f, -4f, 18f, 2);
										unk_0x4DD2EB945B4192FD(iLocal_53, uLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0x2ADF31478643C93D(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x2ADF31478643C93D(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xAB888668498FCC04(uLocal_343, 1);
										unk_0x10F31830C95ED2E5(iLocal_53, 1);
									}
									if (unk_0x25A40FAC128F45B0(iLocal_53))
									{
										unk_0x4DDA430A22468428(iLocal_53, 1);
										unk_0xF9B6167CF8515470(iLocal_53, 1);
										unk_0x874004759C4BE8DC(iLocal_53, 0);
									}
								}
								if ((unk_0x2B9DD94F17265ECD(iLocal_53) || unk_0x7F3463BA18B53A3D(iLocal_53)) || (iLocal_125 - unk_0x0A088F357EF627CA(iLocal_53)) >= 50)
								{
									unk_0x4DDA430A22468428(iLocal_53, 1);
									unk_0xF9B6167CF8515470(iLocal_53, 1);
									unk_0x874004759C4BE8DC(iLocal_53, 0);
								}
								if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x74C2FE037DFC8B4A(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
								{
									if (unk_0x2A72627520A107B5(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) < 5f)
									{
									}
									else if (unk_0x8D11942CD2B49BB5(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), iLocal_53))
									{
										unk_0x4DDA430A22468428(iLocal_53, 1);
										unk_0xF9B6167CF8515470(iLocal_53, 1);
										unk_0x874004759C4BE8DC(iLocal_53, 0);
									}
								}
								if (!unk_0x74C2FE037DFC8B4A(iLocal_58, 0))
								{
									if (unk_0x8D11942CD2B49BB5(iLocal_58, iLocal_53))
									{
										unk_0x4DDA430A22468428(iLocal_53, 1);
										unk_0xF9B6167CF8515470(iLocal_53, 1);
										unk_0x874004759C4BE8DC(iLocal_53, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

int func_1()
{
	if (!bLocal_130)
	{
		if (!unk_0x31F12808DC47A9E5(iLocal_54[0]) && !unk_0x31F12808DC47A9E5(iLocal_54[1]))
		{
			return 1;
		}
		if (unk_0x31F12808DC47A9E5(iLocal_54[0]) && unk_0x31F12808DC47A9E5(iLocal_54[1]))
		{
			if (unk_0x0FAE113CE72ED842(iLocal_54[0]) && unk_0x0FAE113CE72ED842(iLocal_54[1]))
			{
				return 1;
			}
			if (unk_0x0FEE8F3B37E23585(iLocal_54[0]) && unk_0x0FEE8F3B37E23585(iLocal_54[1]))
			{
				return 1;
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_54[0]) && !unk_0x31F12808DC47A9E5(iLocal_54[1]))
		{
			if (unk_0x0FAE113CE72ED842(iLocal_54[0]))
			{
				return 1;
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_54[1]) && !unk_0x31F12808DC47A9E5(iLocal_54[0]))
		{
			if (unk_0x0FAE113CE72ED842(iLocal_54[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x0FAE113CE72ED842(iLocal_54[0]))
	{
		if (unk_0xE769D9B5158D0F11(uLocal_111[0]))
		{
			if (unk_0x31F12808DC47A9E5(iLocal_60))
			{
				if (unk_0x4A296E47F281D02F(iLocal_60))
				{
					unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
				}
			}
			func_3(&uLocal_178, 4);
			unk_0x40D517D991458154(&(uLocal_111[0]));
		}
	}
	if (unk_0x0FAE113CE72ED842(iLocal_54[1]))
	{
		if (unk_0xE769D9B5158D0F11(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			unk_0x40D517D991458154(&(uLocal_111[1]));
		}
	}
	if (unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (!unk_0x74C2FE037DFC8B4A(iLocal_53, 0))
		{
		}
		if (unk_0xE769D9B5158D0F11(uLocal_114))
		{
			func_3(&uLocal_178, 5);
			unk_0x40D517D991458154(&uLocal_114);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	unk_0x9BEA833CAF67289C("RE6_END");
	func_206();
}

int func_5()
{
	if (unk_0x0FAE113CE72ED842(iLocal_53))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_25468)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_104537 = iParam0;
}

void func_8(int iParam0)
{
	Global_16767 = iParam0;
}

int func_9()
{
	if (Global_104551.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_25467;
}

void func_11()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_54[0]) || !unk_0x0FAE113CE72ED842(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 1:
						if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 2:
						if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 3:
						if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(3500, 5000));
								iLocal_168 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_45())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0xD0A19BCBC3DB58DC(unk_0x8CFC7D6E1DA5D304(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_104551.f_24965.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_104539 = iParam1;
		if (Global_104537 == 0)
		{
			if (((Global_104540 == 1 || Global_104540 == 5) || Global_104540 == 11) || Global_104540 == 25)
			{
				func_7(2);
			}
			else if ((Global_104540 == 26 || Global_104540 == 8) || Global_104540 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_19();
	}
}

void func_19()
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_21(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_20() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_25233;
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
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

int func_23()
{
	return Global_1312736;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
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
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_104551.f_2353.f_539.f_4301)
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

void func_31()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_35(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_34(unk_0x18F7BE9ACB7D08F4());
			if (func_33(iVar0) && (!func_32(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_33(Global_104551.f_2353.f_539.f_4301))
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

bool func_32(int iParam0)
{
	return Global_35859 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)
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
		return unk_0xB03A1684359C50A1(Global_104551.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
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

int func_39()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6E987D62C8535B6E(&cParam0))
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_16(0))
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
		if (unk_0xB03A1684359C50A1(iParam2, iParam3))
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
	if (Global_104551.f_7658.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_104551.f_7658.f_911 == Var0.f_0)
		{
			Global_104551.f_7658.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x5AFB8ED811F05E4D() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x62148293B793073B(&(Var0.f_1), 1);
		unk_0x62148293B793073B(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xD2A9C3F486236CC5(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xD2A9C3F486236CC5(&(Var0.f_1), 10);
		}
		Global_104551.f_7658[Global_104551.f_7658.f_136 /*15*/] = { Var0 };
		Global_104551.f_7658.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0xB03A1684359C50A1(iParam2, iVar15))
			{
				func_42(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_7658.f_136)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_7658[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104551.f_7658[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104551.f_7658[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104551.f_7658.f_764)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_7658.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104551.f_7658.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104551.f_7658.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)
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

int func_44()
{
	func_31();
	return Global_104551.f_2353.f_539.f_4301;
}

int func_45()
{
	return 1;
}

void func_46()
{
	switch (iLocal_136)
	{
		case 0:
			if (!unk_0x0FAE113CE72ED842(iLocal_53) && unk_0xC4B84EB67F78C1F0(iLocal_59, 0))
			{
				if (unk_0x4732F444CD45A256(iLocal_53))
				{
					unk_0x95B1A64E8455A478(iLocal_53);
				}
				unk_0x40E2910BAF39B1C7(iLocal_53, 0);
				unk_0x44EB7E24C5D75087(iLocal_53, 1);
				unk_0xC8BEB049F3BFC0AB(&uLocal_65);
				unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 5000, 2048, 2);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0xFDBDFC454E44A5BF(0, iLocal_59, -1, 0, 1f, 1, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_65);
				unk_0x73F69DD57B7E92A9(iLocal_53, uLocal_65);
				unk_0x56C7B20E11B37066(&uLocal_65);
				unk_0x10F31830C95ED2E5(iLocal_53, 1);
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0xC4B84EB67F78C1F0(iLocal_59, 0))
			{
				if (unk_0x88B79D32B518C327(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_57))
					{
						unk_0x21D24CE144A81296(iLocal_57, iLocal_58, 10f, 786599);
						unk_0x10F31830C95ED2E5(iLocal_57, 1);
					}
					unk_0xCA170C8E89CF7FEF(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 2:
			iLocal_136++;
			break;
		
		case 3:
			iLocal_136++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		
		case 5:
			unk_0xC1B1E9A034A63A62(0);
			func_13();
			break;
	}
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			unk_0xFB5F4D76105A21B5(255, iLocal_177, joaat("player"));
			unk_0xFB5F4D76105A21B5(255, joaat("player"), iLocal_177);
			if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
			{
				unk_0x7F8DAED41E5794FC(unk_0x952F33F151D40D1A(), 5f, 2, 0);
				if (!unk_0x0FAE113CE72ED842(iLocal_53) && unk_0xC4B84EB67F78C1F0(iLocal_59, 0))
				{
					if (unk_0x4732F444CD45A256(iLocal_53))
					{
						unk_0x95B1A64E8455A478(iLocal_53);
					}
					unk_0x40E2910BAF39B1C7(iLocal_53, 0);
					unk_0x44EB7E24C5D75087(iLocal_53, 1);
					unk_0xC8BEB049F3BFC0AB(&uLocal_65);
					unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 5000, 2048, 2);
					unk_0xFDBDFC454E44A5BF(0, iLocal_59, -1, 0, 1f, 1, 0);
					unk_0xAFDA7B8F83B2CA58(uLocal_65);
					unk_0x73F69DD57B7E92A9(iLocal_53, uLocal_65);
					unk_0x56C7B20E11B37066(&uLocal_65);
					unk_0x10F31830C95ED2E5(iLocal_53, 1);
					func_104();
					unk_0x4EDE34FBADD967A6(0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2700);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
			{
				if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
				{
					if (!unk_0xEA44DF1A202A5946(unk_0x952F33F151D40D1A(), 1))
					{
						if (unk_0x841242FE915D0B29(unk_0x952F33F151D40D1A(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		
		case 2:
			if (unk_0xC4B84EB67F78C1F0(iLocal_59, 0))
			{
				if (unk_0x88B79D32B518C327(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_57))
					{
						unk_0x21D24CE144A81296(iLocal_57, iLocal_59, 10f, 786599);
						unk_0x10F31830C95ED2E5(iLocal_57, 1);
					}
					unk_0xCA170C8E89CF7FEF(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_124 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xED304DF0BE5BEBDD())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (bParam0)
		{
			if (unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) != unk_0x18F7BE9ACB7D08F4())
				{
					return 0;
				}
			}
		}
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x39B21DBADBAFCF25(iVar0) < 0.95f || unk_0x39B21DBADBAFCF25(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!unk_0x91FFC4C24A972415(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (func_44() == 2)
	{
		if (func_10())
		{
			if (unk_0x15EE504466B7BBD3(-1014.154f, 4881.411f, 245.0001f, unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), 0), 1) < 400f)
			{
				if (!Global_25472)
				{
					unk_0x9BEA833CAF67289C("AC_EN_ROUTE_CULT");
					Global_25472 = 1;
					if (!Global_25471)
					{
						Global_25471 = 1;
						return 1;
					}
				}
			}
			else if (Global_25472)
			{
				unk_0x9BEA833CAF67289C("AC_LEFT_AREA");
				Global_25472 = 0;
			}
		}
	}
	return 0;
}

int func_50(struct<3> Param0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_25470)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Param0) > (fLocal_47 + 200f) || unk_0x15EE504466B7BBD3(-1014.154f, 4881.411f, 245.0001f, unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), 0), 1) < 400f)
			{
				Global_25470 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_51()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0xC6FD5F4CF31458B8(iLocal_53, 1, 1);
			unk_0x81D9C52E2A8DA464(iLocal_53);
		}
		if (func_55("REBU2_LV2_9") || iLocal_72 > 1)
		{
			unk_0xC6FD5F4CF31458B8(iLocal_53, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_70(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 1:
				iLocal_73 = unk_0x5AFB8ED811F05E4D() + 1500;
				iLocal_72++;
				break;
			
			case 2:
				if (iLocal_73 < unk_0x5AFB8ED811F05E4D())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 4:
				iLocal_73 = unk_0x5AFB8ED811F05E4D() + 500;
				iLocal_72++;
				break;
			
			case 5:
				if (iLocal_73 < unk_0x5AFB8ED811F05E4D())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 7:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 9:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 11:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 13:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 15:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 17:
				iLocal_73 = unk_0x5AFB8ED811F05E4D() + 1000;
				iLocal_72++;
				break;
			
			case 18:
				if (iLocal_73 < unk_0x5AFB8ED811F05E4D())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 19:
				iLocal_73 = unk_0x5AFB8ED811F05E4D() + 2500;
				iLocal_72++;
				break;
			
			case 20:
				if (iLocal_73 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
			}
	}
}

int func_52()
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (unk_0x9D39145AD645E383(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_55(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (unk_0x9D39145AD645E383(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		if (iVar6 > -1)
		{
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_57()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (!iLocal_133)
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
			{
				if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), unk_0x952F33F151D40D1A(), 1) && unk_0x88B79D32B518C327(iLocal_53, unk_0x952F33F151D40D1A(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						unk_0x4EDE34FBADD967A6(0);
						func_70(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_133 = 1;
					}
				}
			}
		}
		else if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
		{
			if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), unk_0x952F33F151D40D1A(), 0) && unk_0x88B79D32B518C327(iLocal_53, unk_0x952F33F151D40D1A(), 0))
			{
				iLocal_133 = 0;
			}
		}
		if (!iLocal_134)
		{
			if (unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()))
			{
				func_81(0);
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (!unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()))
		{
			iLocal_134 = 0;
		}
		if (!iLocal_135)
		{
			if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
			{
				func_81(0);
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_135 = 1;
			}
		}
		else if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
		{
			iLocal_135 = 0;
		}
	}
}

void func_58()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (!func_61())
			{
				if (unk_0x4732F444CD45A256(iLocal_53))
				{
					unk_0x95B1A64E8455A478(iLocal_53);
				}
				if (unk_0x2BBAA45ECDE3DAE2(iLocal_53, 1227113341) != 1 && unk_0x2BBAA45ECDE3DAE2(iLocal_53, 1227113341) != 0)
				{
					unk_0x7F948DF34BFB8F5D(iLocal_53, unk_0x18F7BE9ACB7D08F4(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x657B649BA2AD3582(iLocal_53, 0))
				{
					unk_0x5941F8B2A813BBA8(iLocal_53, 0, 4194304);
				}
				if (!iLocal_132)
				{
					func_81(0);
					func_104();
					unk_0x4EDE34FBADD967A6(0);
					iLocal_132 = 1;
					if (!func_60())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_132 = 0;
				if (((unk_0x2BBAA45ECDE3DAE2(iLocal_53, 1227113341) == 1 || unk_0x2BBAA45ECDE3DAE2(iLocal_53, 1227113341) == 0) || unk_0x2BBAA45ECDE3DAE2(iLocal_53, 242628503) == 1) || unk_0x2BBAA45ECDE3DAE2(iLocal_53, 242628503) == 0)
				{
					unk_0x267F7A2DFDFFB077(iLocal_53);
				}
			}
		}
		else if (((!unk_0x4732F444CD45A256(iLocal_53) && !unk_0x657B649BA2AD3582(iLocal_53, 0)) && unk_0x2BBAA45ECDE3DAE2(iLocal_53, 242628503) != 1) && unk_0x2BBAA45ECDE3DAE2(iLocal_53, 242628503) != 0)
		{
			unk_0xE186B0FBC086038E(iLocal_53, func_59());
			unk_0xA19AA824CBE5CF6A(iLocal_53, 1);
			unk_0x49788920F4CF7FC1(iLocal_53, 0);
		}
	}
}

var func_59()
{
	return unk_0x7C9C05CA6A57A7E1(unk_0x0A91D180DDC7A1B8());
}

int func_60()
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if (unk_0xC4B84EB67F78C1F0(unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4()), 1))
		{
			if ((unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 1))) || unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 1)))) || unk_0x309C05EAA86E194E(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
		{
			if (((((!unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()) && !unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4())) && !unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4())) && !unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4())) && !unk_0x1EAAFC8E35F1C540(unk_0x18F7BE9ACB7D08F4())) && !unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("rhino")))
			{
				if (unk_0xE4752B503DF3FEC0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if (unk_0xC4B84EB67F78C1F0(unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4()), 0))
		{
			if ((((!unk_0xB6353CAE3EBC0919(unk_0x4F69FBD64CDF125B(unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4()))) && !unk_0xD8BB60C76D29E4BB(unk_0x4F69FBD64CDF125B(unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4())))) && !unk_0x9605D2F02FA93911(unk_0x4F69FBD64CDF125B(unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4())))) && !unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4())))) && unk_0x4F69FBD64CDF125B(unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (unk_0xB4FD6D3F49C8B3B4(iLocal_53))
		{
			if (!iLocal_170)
			{
				iLocal_171 = unk_0x5AFB8ED811F05E4D();
				iLocal_170 = 1;
			}
			else
			{
				iLocal_172 = unk_0x5AFB8ED811F05E4D();
			}
		}
		else
		{
			iLocal_170 = 0;
		}
	}
	if ((iLocal_172 - iLocal_171) > 180000)
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_53))
		{
			if (unk_0x4732F444CD45A256(iLocal_53))
			{
				unk_0x95B1A64E8455A478(iLocal_53);
				if (unk_0x8673F2F1802ADEF7(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xA303A4837FBB8DDE(iLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x10F31830C95ED2E5(iLocal_53, 1);
				}
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (unk_0x647522908459DE3C(unk_0x18F7BE9ACB7D08F4()))
	{
		if (!iLocal_173)
		{
			iLocal_174 = unk_0x5AFB8ED811F05E4D();
			iLocal_173 = 1;
		}
		else
		{
			iLocal_175 = unk_0x5AFB8ED811F05E4D();
		}
	}
	else
	{
		iLocal_173 = 0;
	}
	if ((iLocal_175 - iLocal_174) > 120000)
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_53))
		{
			if (unk_0x4732F444CD45A256(iLocal_53))
			{
				unk_0x95B1A64E8455A478(iLocal_53);
				if (unk_0x8673F2F1802ADEF7(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xA303A4837FBB8DDE(iLocal_53, Local_139, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x10F31830C95ED2E5(iLocal_53, 1);
				}
				else
				{
					unk_0x5941F8B2A813BBA8(iLocal_53, 0, 4194304);
				}
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_53, 8f, 8f, 8f, 0, 1, 0) || unk_0xE560C15EC5C2F304(unk_0x18F7BE9ACB7D08F4()))
		{
			if ((unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x88B79D32B518C327(iLocal_53, unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0)) && !unk_0xE560C15EC5C2F304(unk_0x18F7BE9ACB7D08F4()))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_114))
				{
					uLocal_114 = func_67(iLocal_53, 0, 145);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_137))
				{
					unk_0x40D517D991458154(&uLocal_137);
				}
			}
			else
			{
				if (!unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xE769D9B5158D0F11(uLocal_114))
					{
						unk_0x40D517D991458154(&uLocal_114);
					}
				}
				if (!unk_0xE769D9B5158D0F11(uLocal_137))
				{
					uLocal_137 = func_65(Local_139, 1);
				}
			}
		}
		else if (!unk_0xE769D9B5158D0F11(uLocal_114))
		{
			uLocal_114 = func_67(iLocal_53, 0, 145);
		}
		if (!unk_0x4732F444CD45A256(iLocal_53))
		{
			if (!unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0x267F7A2DFDFFB077(iLocal_53);
				unk_0xE186B0FBC086038E(iLocal_53, func_59());
				unk_0xA19AA824CBE5CF6A(iLocal_53, 1);
				unk_0x49788920F4CF7FC1(iLocal_53, 0);
			}
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
			{
				unk_0x267F7A2DFDFFB077(iLocal_53);
				unk_0xE186B0FBC086038E(iLocal_53, func_59());
				unk_0xA19AA824CBE5CF6A(iLocal_53, 1);
				unk_0x49788920F4CF7FC1(iLocal_53, 0);
			}
		}
		if (!unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_65(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_67(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE769D9B5158D0F11(uVar0)) && unk_0xD76CFACBF6A6F21E(&(Global_104551.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x61C2EC67C90074E5(uVar0, &(Global_104551.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_66(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_69()
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iLocal_169 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (unk_0xC4B84EB67F78C1F0(iLocal_169, 0))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_53))
			{
				if (unk_0x160400EAEE246B4D(iLocal_53, iLocal_169))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_79();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_77();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_76();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_75())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
				}
			}
			if (func_74())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_73();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_72();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_79();
	}
	return 0;
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_73()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_74()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_76()
{
	if (func_32(14))
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
		Global_14453 = func_44();
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

void func_77()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_78(int iParam0, int iParam1)
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

void func_79()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_149)
		{
			if (!unk_0xFAFFA408239A026B(&Local_156))
			{
				if (func_84(&uLocal_178, "REBU2AU", &Local_156, &Local_150, 8, 0, 0))
				{
					iLocal_149 = 0;
				}
			}
			else
			{
				iLocal_149 = 0;
			}
		}
	}
	else if ((!iLocal_149 && func_12()) && !func_52())
	{
		Local_156 = { func_54() };
		Local_150 = { func_56() };
		func_82();
		iLocal_149 = 1;
	}
}

void func_82()
{
	Global_14622 = 0;
	func_83();
}

void func_83()
{
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0x815093B4702C59D8();
		Global_16767 = 0;
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (unk_0x31F12808DC47A9E5(iLocal_53))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_53))
		{
			unk_0xB05E48165A6F6058(iLocal_53, 394, 1);
		}
		if (unk_0x1B843A60307EECA4(iLocal_53, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_53))
			{
				unk_0x9603FB72C3126396(iLocal_53, unk_0x18F7BE9ACB7D08F4(), 150f, -1, 0, 0);
				unk_0x10F31830C95ED2E5(iLocal_53, 1);
			}
			if (!unk_0x0FAE113CE72ED842(iLocal_57))
			{
				unk_0xFB5F4D76105A21B5(5, iLocal_177, joaat("player"));
				unk_0x48B25C02FAB9DC81(iLocal_57, unk_0x18F7BE9ACB7D08F4(), 0, 16);
				unk_0x10F31830C95ED2E5(iLocal_57, 1);
			}
			func_104();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (unk_0x31F12808DC47A9E5(iLocal_57))
		{
			if (unk_0x1B843A60307EECA4(iLocal_57, unk_0x18F7BE9ACB7D08F4(), 1))
			{
				if (!unk_0x0FAE113CE72ED842(iLocal_53))
				{
					unk_0x9603FB72C3126396(iLocal_53, unk_0x18F7BE9ACB7D08F4(), 150f, -1, 0, 0);
					unk_0x10F31830C95ED2E5(iLocal_53, 1);
				}
				if (!unk_0x0FAE113CE72ED842(iLocal_57))
				{
					unk_0xFB5F4D76105A21B5(5, iLocal_177, joaat("player"));
					unk_0x48B25C02FAB9DC81(iLocal_57, unk_0x18F7BE9ACB7D08F4(), 0, 16);
					unk_0x10F31830C95ED2E5(iLocal_57, 1);
				}
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 1)
		{
			unk_0x9603FB72C3126396(iLocal_53, unk_0x18F7BE9ACB7D08F4(), 150f, -1, 0, 0);
			unk_0x10F31830C95ED2E5(iLocal_53, 1);
			func_104();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if ((unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4())) && !unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_130 = true;
				if (!iLocal_115)
				{
					func_93(1, 1, 1, 0);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 24);
					unk_0xEFF1F12403847394(1);
					unk_0x4A3AD9384F0AAEA0(0);
					unk_0x77B57B2BB7F3EA0A(0);
					unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 1);
					if (unk_0x31F12808DC47A9E5(unk_0x952F33F151D40D1A()))
					{
						unk_0x337F2213526139E0(unk_0x952F33F151D40D1A(), 1, 0);
						if (unk_0x25A40FAC128F45B0(unk_0x952F33F151D40D1A()))
						{
							func_92(unk_0x952F33F151D40D1A());
							unk_0x1A9F0BE7AECEABB1(unk_0x952F33F151D40D1A(), 200f);
						}
						if (unk_0xEA07F07380ABC460(unk_0x952F33F151D40D1A(), iLocal_53, 5f, 5f, 5f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(unk_0x952F33F151D40D1A(), Local_88, 5f, 5f, 5f, 0, 1, 0))
						{
							unk_0x990FFD4FB6ADD630(unk_0x952F33F151D40D1A(), unk_0x761660F5CE986DC4(iLocal_53, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
							{
								unk_0x9B53B2691E2B1F79(unk_0x952F33F151D40D1A(), 1084227584);
							}
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_58))
					{
						if (unk_0x25A40FAC128F45B0(iLocal_58))
						{
							func_92(iLocal_58);
							unk_0x1A9F0BE7AECEABB1(iLocal_58, 200f);
						}
						if (unk_0xEA07F07380ABC460(iLocal_58, iLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x990FFD4FB6ADD630(iLocal_58, Local_88, 0, 0, 0, 1);
							if (!unk_0x74C2FE037DFC8B4A(iLocal_58, 0))
							{
								unk_0x9B53B2691E2B1F79(iLocal_58, 1084227584);
							}
						}
					}
					if (!unk_0x0FAE113CE72ED842(iLocal_53))
					{
						iLocal_169 = unk_0x048A9E2FC8C538E3(unk_0x761660F5CE986DC4(iLocal_53, 1), 5f, 0, 2);
						if (!unk_0x74C2FE037DFC8B4A(iLocal_169, 0))
						{
							if (unk_0x25A40FAC128F45B0(iLocal_169))
							{
								func_92(iLocal_169);
								unk_0x1A9F0BE7AECEABB1(iLocal_169, 200f);
							}
							unk_0x990FFD4FB6ADD630(iLocal_169, unk_0x761660F5CE986DC4(iLocal_53, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					unk_0x65A28A348055034B(Local_78, 10f);
					unk_0x8DE1BAABD1480350(Local_78, 10f, 0);
					unk_0xE54597236B7D8C63(Local_78, 4.5f, 0, 0, 0, 0, 0, 0);
					unk_0x990FFD4FB6ADD630(iLocal_53, Local_78, 1, 0, 0, 1);
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Local_78, 1, 0, 0, 1);
					if (!unk_0x0FAE113CE72ED842(iLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (unk_0x31F12808DC47A9E5(iLocal_54[iVar0]))
						{
							if (unk_0x8673F2F1802ADEF7(iLocal_54[iVar0], unk_0x761660F5CE986DC4(iLocal_53, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								unk_0x63C116C2153FAA3C(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x0FAE113CE72ED842(iLocal_53))
					{
						uLocal_343 = unk_0x3C3438327FFEB224(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_77 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0xFB34CCC40E7806C4(uLocal_77, uLocal_343, "untie_cam", "random@burial");
						unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 18.2311f);
						unk_0x874004759C4BE8DC(iLocal_53, 200);
						unk_0x4DDA430A22468428(iLocal_53, 0);
						unk_0xF9B6167CF8515470(iLocal_53, 0);
						unk_0xD9FCA20C1C5553F7(iLocal_53);
						unk_0x4DD2EB945B4192FD(iLocal_53, uLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x8F2E6C470A0005D4(iLocal_53, 0, 0);
						unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
						unk_0x2ADF31478643C93D(uLocal_61[0], uLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x2ADF31478643C93D(uLocal_61[1], uLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x2C535610856B3F4D(uLocal_77, 1);
						unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
						iLocal_120 = unk_0x5AFB8ED811F05E4D();
						iLocal_115 = 1;
					}
				}
			}
		}
	}
	if (iLocal_115 && !iLocal_117)
	{
		unk_0x3F19B70555683951();
		if (unk_0xCF0FA6AB02EA68F7(uLocal_343))
		{
			if ((unk_0x74CE979B042A1253(uLocal_343) > 0.115f && unk_0x74CE979B042A1253(uLocal_343) < 0.12f) || (unk_0x74CE979B042A1253(uLocal_343) > 0.355f && unk_0x74CE979B042A1253(uLocal_343) < 0.36f))
			{
				unk_0x929C3CBA660376D5(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (unk_0x74CE979B042A1253(uLocal_343) > 0.6f)
			{
				if (!iLocal_116)
				{
					func_104();
					unk_0x4EDE34FBADD967A6(0);
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_116 = 1;
					}
				}
			}
		}
		iLocal_119 = unk_0x5AFB8ED811F05E4D();
		if (((iLocal_119 - iLocal_120) > 9700 && !iLocal_123) && unk_0xDBB3D0EFC8DECE3D() == 4)
		{
			unk_0x9575CEFF222148A6("CamPushInNeutral", 0, 0);
			unk_0x929C3CBA660376D5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_123 = 1;
		}
		if ((iLocal_119 - iLocal_120) > 10000)
		{
			iLocal_117 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			unk_0xFF91FEC6E57575E4(800);
			while (unk_0xBC13F084F3B1B544())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_117 = 1;
			bLocal_118 = true;
		}
	}
	if (iLocal_117 && !bLocal_122)
	{
		unk_0x4A3AD9384F0AAEA0(1);
		unk_0x77B57B2BB7F3EA0A(1);
		unk_0xE8444942F8401658(uLocal_343, 1f);
		unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
		unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
		unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 256.7693f);
		if (!unk_0x0FAE113CE72ED842(iLocal_53))
		{
			unk_0xD9FCA20C1C5553F7(iLocal_53);
			unk_0x8F2E6C470A0005D4(iLocal_53, 0, 0);
			unk_0xBDFA8A71B1A23D86(iLocal_53, 1);
			unk_0x990FFD4FB6ADD630(iLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(iLocal_53, 73.449f);
		}
		unk_0xA3F41A1968319181(26.1578f);
		unk_0x4CCECEB2EA5D6A82(-8.1198f, 1065353216);
		unk_0x2C535610856B3F4D(uLocal_77, 0);
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
		unk_0x13AD763DBD687842(uLocal_77, 0);
		unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 0);
		if (bLocal_118)
		{
			unk_0x8359CF51370FC969(800);
			while (unk_0x610450B2545892B5())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		bLocal_122 = true;
	}
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		if (bLocal_122)
		{
			if (!iLocal_121)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0xFB5F4D76105A21B5(1, iLocal_177, joaat("player"));
					unk_0xFB5F4D76105A21B5(1, joaat("player"), iLocal_177);
					unk_0xC8BEB049F3BFC0AB(&uLocal_65);
					unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 4000);
					if (unk_0xC4B84EB67F78C1F0(unk_0x952F33F151D40D1A(), 0))
					{
						if (unk_0xEA07F07380ABC460(iLocal_53, unk_0x952F33F151D40D1A(), 20f, 20f, 20f, 0, 1, 0) && unk_0xE4752B503DF3FEC0(unk_0x952F33F151D40D1A()) > 0)
						{
							unk_0xFDBDFC454E44A5BF(0, unk_0x952F33F151D40D1A(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0x4732F444CD45A256(iLocal_53))
						{
							unk_0xE186B0FBC086038E(iLocal_53, func_59());
							unk_0xA19AA824CBE5CF6A(iLocal_53, 1);
							unk_0x49788920F4CF7FC1(iLocal_53, 0);
						}
					}
					else if (!unk_0x4732F444CD45A256(iLocal_53))
					{
						unk_0xE186B0FBC086038E(iLocal_53, func_59());
						unk_0xA19AA824CBE5CF6A(iLocal_53, 1);
						unk_0x49788920F4CF7FC1(iLocal_53, 0);
					}
					unk_0xAFDA7B8F83B2CA58(uLocal_65);
					unk_0x73F69DD57B7E92A9(iLocal_53, uLocal_65);
					unk_0x56C7B20E11B37066(&uLocal_65);
					if (unk_0xE769D9B5158D0F11(uLocal_114))
					{
						unk_0x40D517D991458154(&uLocal_114);
					}
					if (!unk_0xE769D9B5158D0F11(uLocal_137))
					{
						uLocal_137 = func_65(Local_139, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0xE769D9B5158D0F11(uLocal_138))
						{
							uLocal_138 = func_65(Local_142, 0);
							unk_0xDC0EBFC7730AA226(uLocal_138, 269);
							func_88();
						}
					}
					func_87();
					iLocal_131 = 1;
					iLocal_121 = 1;
					unk_0xC1B1E9A034A63A62(0);
					unk_0xC3033060E0409665(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0x3B4B46A2A779D56E(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_93(0, 1, 1, 0);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 4);
					unk_0xA3F48AA4B6323A62(unk_0x18F7BE9ACB7D08F4());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_87()
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_25467 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
	{
		if (!Global_25469)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_25469 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_90(int iParam0)
{
	if (unk_0xC8AB6A5E6C1E6613())
	{
		if ((unk_0x5AFB8ED811F05E4D() - Global_28) > iParam0)
		{
			Global_27 = unk_0x5AFB8ED811F05E4D();
		}
		Global_28 = unk_0x5AFB8ED811F05E4D();
		if ((unk_0x5AFB8ED811F05E4D() - Global_27) > iParam0)
		{
			if (func_91())
			{
				Global_27 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 18) || unk_0xFC0C00F9DE2AEC93(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			if (unk_0x25A40FAC128F45B0(iParam0))
			{
				unk_0x64F60654362EB9D6(iParam0);
				unk_0x874004759C4BE8DC(iParam0, unk_0x0A088F357EF627CA(iParam0) + 200);
				unk_0x1A9F0BE7AECEABB1(iParam0, (unk_0x5719E0F2FB0A1A07(iParam0) + 200f));
				unk_0xE4A75DC396208954(iParam0, (unk_0xF03A285147EEA7E5(iParam0) + 200f));
				unk_0x65A28A348055034B(unk_0x761660F5CE986DC4(iParam0, 1), 5f);
				unk_0x7EE425AE3317BA69(unk_0x761660F5CE986DC4(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_100(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_74())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_100(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_97(unk_0x8CFC7D6E1DA5D304())) && !func_95(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_94())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_97(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_94()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_97(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
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

bool func_98()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_99(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_100(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

void func_101()
{
	if (!unk_0x74C2FE037DFC8B4A(iLocal_53, 0))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4000, 5500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_102(var uParam0, char* sParam1, int iParam2)
{
	unk_0x729C5B8455454944(uParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)
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

void func_104()
{
	Global_14622 = 0;
	func_105();
}

void func_105()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_106()
{
	if (!iLocal_67 && unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_107, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	if (unk_0xC4B84EB67F78C1F0(iLocal_58, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
		{
			unk_0x48CA7222706D392C(iLocal_54[0], iLocal_58, unk_0x18F7BE9ACB7D08F4(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0x10F31830C95ED2E5(iLocal_54[0], 1);
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_54[1]))
		{
			unk_0xFDBDFC454E44A5BF(iLocal_54[1], iLocal_58, -1, 0, 3f, 1, 0);
			unk_0x10F31830C95ED2E5(iLocal_54[1], 1);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[iLocal_64]))
			{
				unk_0x9603FB72C3126396(iLocal_54[iLocal_64], unk_0x18F7BE9ACB7D08F4(), 250f, -1, 0, 0);
				unk_0x10F31830C95ED2E5(iLocal_54[iLocal_64], 1);
			}
			iLocal_64++;
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	func_4();
}

void func_107()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_54[0]) && !unk_0x0FAE113CE72ED842(iLocal_54[1]))
	{
		if (!unk_0x20BE2EAD83953A78(iLocal_54[0]) && !unk_0x20BE2EAD83953A78(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0xAADA5865C8BFAE94(iLocal_54[1]))
				{
					unk_0x267F7A2DFDFFB077(iLocal_54[1]);
					unk_0x7F978F7D92B78559(iLocal_54[1], unk_0x18F7BE9ACB7D08F4(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_108()
{
	float fVar0;
	
	if (!unk_0x0FAE113CE72ED842(iLocal_54[0]) && !unk_0x0FAE113CE72ED842(iLocal_54[1]))
	{
		if (!iLocal_69)
		{
			if (!iLocal_68)
			{
				unk_0xC8BEB049F3BFC0AB(&uLocal_65);
				unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_65);
				unk_0x73F69DD57B7E92A9(iLocal_54[1], uLocal_65);
				unk_0x56C7B20E11B37066(&uLocal_65);
				iLocal_68 = 1;
			}
			if (unk_0x3821A75ECC8A0D5B(iLocal_54[1], unk_0x18F7BE9ACB7D08F4(), 90f))
			{
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x0FAE113CE72ED842(iLocal_54[0]) && !unk_0x0FAE113CE72ED842(iLocal_54[1]))
				{
					fVar0 = func_110(iLocal_54[0], unk_0x18F7BE9ACB7D08F4(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x964B3F361C3DBDF4(iLocal_60, 0, 1);
					unk_0x947CE5CCDDBA0651(iLocal_60, iLocal_54[0], unk_0xCA57A734FF47CDF5(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x267F7A2DFDFFB077(iLocal_54[0]);
					unk_0xC8BEB049F3BFC0AB(&uLocal_65);
					unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					unk_0xB5746603774C4C9D(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
					unk_0xAFDA7B8F83B2CA58(uLocal_65);
					unk_0x73F69DD57B7E92A9(iLocal_54[0], uLocal_65);
					unk_0x56C7B20E11B37066(&uLocal_65);
					unk_0x5C7D86C4752CBC68(iLocal_54[1], joaat("weapon_sawnoffshotgun"), 1);
					unk_0x267F7A2DFDFFB077(iLocal_54[1]);
					unk_0xC8BEB049F3BFC0AB(&uLocal_65);
					unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					unk_0x7F948DF34BFB8F5D(0, unk_0x18F7BE9ACB7D08F4(), -1, fVar0, 1f, 1073741824, 0);
					unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
					unk_0xAFDA7B8F83B2CA58(uLocal_65);
					unk_0x73F69DD57B7E92A9(iLocal_54[1], uLocal_65);
					unk_0x56C7B20E11B37066(&uLocal_65);
					iLocal_69 = 1;
				}
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_60))
		{
			if (unk_0x4A296E47F281D02F(iLocal_60))
			{
				if (unk_0xDFEB6D8BCE2B43F6(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
					}
				}
			}
		}
		if (iLocal_69 && !iLocal_165)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0xC8BEB049F3BFC0AB(&uLocal_65);
				unk_0xF42EAC354CBE764D(0, unk_0x18F7BE9ACB7D08F4(), unk_0x18F7BE9ACB7D08F4(), 1f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), -1, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_65);
				unk_0x73F69DD57B7E92A9(iLocal_54[1], uLocal_65);
				unk_0x56C7B20E11B37066(&uLocal_65);
				unk_0x9BEA833CAF67289C("RE6_START");
				iLocal_165 = 1;
			}
		}
		if (iLocal_165 && !iLocal_166)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x89955D5A0644F92C(iLocal_54[0], unk_0x18F7BE9ACB7D08F4(), -1, 0);
				}
				iLocal_166 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (iLocal_166 && !bLocal_167)
		{
			if (unk_0xC9D9444186B5A374() > 15000 && !func_12())
			{
				if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x8F467CFC5FBBCE77(iLocal_54[0], unk_0x18F7BE9ACB7D08F4(), 0);
					unk_0x8F467CFC5FBBCE77(iLocal_54[1], unk_0x18F7BE9ACB7D08F4(), 0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
		if (((!iLocal_70 && iLocal_165) && !unk_0x0FAE113CE72ED842(iLocal_54[0])) && !unk_0x0FAE113CE72ED842(iLocal_54[1]))
		{
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0xC8BEB049F3BFC0AB(&uLocal_65);
				unk_0x7F948DF34BFB8F5D(0, iLocal_54[1], -1, 2f, 1f, 1073741824, 0);
				unk_0x8F467CFC5FBBCE77(0, iLocal_54[1], 0);
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xAFDA7B8F83B2CA58(uLocal_65);
				unk_0x73F69DD57B7E92A9(iLocal_54[0], uLocal_65);
				unk_0x56C7B20E11B37066(&uLocal_65);
				unk_0xC8BEB049F3BFC0AB(&uLocal_65);
				unk_0x7F948DF34BFB8F5D(0, iLocal_54[0], -1, 2f, 1f, 1073741824, 0);
				unk_0x8F467CFC5FBBCE77(0, iLocal_54[0], 0);
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xAFDA7B8F83B2CA58(uLocal_65);
				unk_0x73F69DD57B7E92A9(iLocal_54[1], uLocal_65);
				unk_0x56C7B20E11B37066(&uLocal_65);
				unk_0x5AE11BC36633DE4E(15000);
				iLocal_145 = 0;
				iLocal_166 = 1;
				iLocal_70 = 1;
			}
		}
		if (bLocal_167)
		{
			func_11();
			func_112();
		}
		if (((unk_0x6A180E89A0F78BEE(iLocal_54[0], unk_0x18F7BE9ACB7D08F4()) || unk_0x6A180E89A0F78BEE(iLocal_54[1], unk_0x18F7BE9ACB7D08F4())) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_54[0])) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_54[1]))
		{
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 4) && !unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 3))
			{
				if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!iLocal_76)
					{
						func_104();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 3) && !unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 4))
			{
				if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!iLocal_76)
					{
						func_104();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()) || unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
			{
				func_112();
			}
		}
	}
}

int func_109()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_110(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

int func_111()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
			{
				if ((((unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("rhino")) || unk_0x1995EFF5CCF36477(unk_0x18F7BE9ACB7D08F4())) || unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("annihilator"))) || unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("buzzard"))) || unk_0xFD166B55AB97EE31(unk_0x18F7BE9ACB7D08F4()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_112()
{
	func_11();
	unk_0x9BEA833CAF67289C("RE6_START");
	if (!iLocal_145)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_54[0]))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
			{
				unk_0xB05E48165A6F6058(iLocal_54[0], 156, 1);
				if (unk_0x31F12808DC47A9E5(iLocal_60))
				{
					unk_0x83222845D5C7852E(iLocal_54[0]);
					if (unk_0x4A296E47F281D02F(iLocal_60))
					{
						if (!iLocal_70)
						{
							unk_0x964B3F361C3DBDF4(iLocal_60, 0, 1);
							unk_0x947CE5CCDDBA0651(iLocal_60, iLocal_54[0], unk_0xCA57A734FF47CDF5(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x267F7A2DFDFFB077(iLocal_54[0]);
							unk_0xC8BEB049F3BFC0AB(&uLocal_65);
							unk_0x81D9C52E2A8DA464(0);
							unk_0xB5746603774C4C9D(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0xAFDA7B8F83B2CA58(uLocal_65);
							unk_0x73F69DD57B7E92A9(iLocal_54[0], uLocal_65);
							unk_0x56C7B20E11B37066(&uLocal_65);
							unk_0x10F31830C95ED2E5(iLocal_54[0], 1);
							unk_0x8F2E6C470A0005D4(iLocal_54[0], 0, 0);
							iLocal_145 = 1;
						}
					}
					else
					{
						unk_0xC8BEB049F3BFC0AB(&uLocal_65);
						unk_0x81D9C52E2A8DA464(0);
						unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
						unk_0xAFDA7B8F83B2CA58(uLocal_65);
						unk_0x73F69DD57B7E92A9(iLocal_54[0], uLocal_65);
						unk_0x56C7B20E11B37066(&uLocal_65);
						unk_0x10F31830C95ED2E5(iLocal_54[0], 1);
						iLocal_145 = 1;
					}
				}
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_60))
	{
		if (unk_0x4A296E47F281D02F(iLocal_60))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
			{
				if (unk_0xDFEB6D8BCE2B43F6(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_146)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_54[1]))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[1]))
			{
				unk_0xB05E48165A6F6058(iLocal_54[1], 156, 1);
				unk_0x83222845D5C7852E(iLocal_54[1]);
				unk_0xC8BEB049F3BFC0AB(&uLocal_65);
				unk_0x81D9C52E2A8DA464(0);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 500);
				unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
				unk_0xAFDA7B8F83B2CA58(uLocal_65);
				unk_0x73F69DD57B7E92A9(iLocal_54[1], uLocal_65);
				unk_0x56C7B20E11B37066(&uLocal_65);
				unk_0x10F31830C95ED2E5(iLocal_54[1], 1);
				iLocal_146 = 1;
			}
			else
			{
				iLocal_146 = 1;
			}
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	if (iLocal_146 && iLocal_145)
	{
		iLocal_106 = unk_0x5AFB8ED811F05E4D() + 8500;
		unk_0xC1B1E9A034A63A62(0);
		iLocal_49 = 7;
	}
}

int func_113(int iParam0)
{
	if (func_116())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_25(Global_104540))
		{
			func_114(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_25(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_89(func_115(iParam0), -1);
					Global_104551.f_24965.f_2++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB03A1684359C50A1(Global_104547, 1))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_89(func_115(iParam0), -1);
					Global_104551.f_24965.f_3++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_104547, 2))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_89(func_115(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)
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

int func_116()
{
	switch (func_117(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_121(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_119(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_35859);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (unk_0xE769D9B5158D0F11(uLocal_163))
	{
		unk_0x40D517D991458154(&uLocal_163);
	}
	if (!unk_0xE769D9B5158D0F11(uLocal_114))
	{
		if (!unk_0x74C2FE037DFC8B4A(iLocal_53, 0))
		{
			uLocal_114 = func_67(iLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!unk_0xE769D9B5158D0F11(uLocal_111[iLocal_64]))
		{
			if (!unk_0x74C2FE037DFC8B4A(iLocal_54[iLocal_64], 0))
			{
				uLocal_111[iLocal_64] = func_67(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_123()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x5AFB8ED811F05E4D())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4500, 6500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_124()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 4:
			iLocal_106 = unk_0x5AFB8ED811F05E4D() + 3000;
			iLocal_110++;
			break;
		
		case 5:
			break;
	}
}

void func_125()
{
	if (unk_0x31F12808DC47A9E5(iLocal_60))
	{
		if (unk_0x4A296E47F281D02F(iLocal_60))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[0]))
			{
				if (unk_0xDFEB6D8BCE2B43F6(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0xB168A220550FC047("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0xDFEB6D8BCE2B43F6(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") > 0.04f && unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") > 0.24f && unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") > 0.44f && unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") > 0.64f && unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") > 0.84f && unk_0xE825CDE0EAED051D(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0xB168A220550FC047("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_126()
{
	if (!iLocal_129)
	{
		if (unk_0x70832328F090DD95(Local_88, 100f, 1) || unk_0x70832328F090DD95(Local_88, 100f, 1))
		{
			if (unk_0x0FAE113CE72ED842(iLocal_54[0]) || unk_0x0FAE113CE72ED842(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return 1;
			}
			else if (!unk_0x70832328F090DD95(Local_88, 100f, 1) || !unk_0x70832328F090DD95(Local_88, 100f, 1))
			{
				iLocal_51 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x4D1880092896C427(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0x4D1880092896C427(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0x4D1880092896C427(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0x4D1880092896C427(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x4D1880092896C427(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x4D1880092896C427(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0x4D1880092896C427(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0xD7C6D93EF1B80F06(2, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0xD7C6D93EF1B80F06(4, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0xD7C6D93EF1B80F06(0, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return 1;
		}
		if (unk_0x31F12808DC47A9E5(iLocal_58))
		{
			if (!unk_0x74C2FE037DFC8B4A(iLocal_58, 0))
			{
				if (unk_0x1B843A60307EECA4(iLocal_58, unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_58, 0))
				{
					unk_0xA3F48AA4B6323A62(iLocal_58);
					func_112();
					iLocal_51 = 3;
					return 1;
				}
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("towtruck")) || unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("towtruck2")))
					{
						if (unk_0x3C87303CA056FB80(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), iLocal_58))
						{
							func_112();
							iLocal_51 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_75)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[0]) && !unk_0x0FAE113CE72ED842(iLocal_54[1]))
			{
				if ((((unk_0x6A180E89A0F78BEE(iLocal_54[0], unk_0x18F7BE9ACB7D08F4()) || unk_0x6A180E89A0F78BEE(iLocal_54[1], unk_0x18F7BE9ACB7D08F4())) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_54[0])) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), iLocal_54[1])) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_51 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[0]) && !unk_0x0FAE113CE72ED842(iLocal_54[1]))
			{
				if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
				{
					if (unk_0x8D11942CD2B49BB5(unk_0x952F33F151D40D1A(), iLocal_54[0]) || unk_0x8D11942CD2B49BB5(unk_0x952F33F151D40D1A(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_53))
		{
			if (unk_0x1B843A60307EECA4(iLocal_53, unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xB489A3EAA19E52F6(iLocal_53, joaat("weapon_stungun"), 0))
			{
				iLocal_51 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_51 = 4;
			return 1;
		}
		if (unk_0x74C2FE037DFC8B4A(iLocal_54[0], 0) || unk_0x74C2FE037DFC8B4A(iLocal_54[1], 0))
		{
			iLocal_51 = 6;
			return 1;
		}
		if (iLocal_75)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0) && !bParam4)
	{
		if (unk_0xB4FD6D3F49C8B3B4(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			Var6 = { unk_0x761660F5CE986DC4(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0xB03A1684359C50A1(iParam3, 3))
			{
				if (func_133(iParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x70832328F090DD95(Var6, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
				if (unk_0xAB3BDB14DC75494C(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 2))
			{
				fVar0 = unk_0xEE0ECB73BFB5F8C1(unk_0x18F7BE9ACB7D08F4());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
				{
					if (unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xAAB9BF2904B9E7CE(iParam0, unk_0x18F7BE9ACB7D08F4(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", (unk_0x5AFB8ED811F05E4D() - iLocal_19));
								func_132("\n");
								bVar2 = true;
								if (unk_0x5AFB8ED811F05E4D() > (iLocal_19 + *uParam2))
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 0))
			{
				if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x5AFB8ED811F05E4D();
	}
	return 0;
}

void func_128(char* sParam0, int iParam1)
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_130(char* sParam0)
{
	if (unk_0x9D39145AD645E383(uParam0, uParam0))
	{
	}
}

void func_131(int iParam0)
{
	unk_0xCC25274D48609FE0(iParam0);
}

void func_132(char* sParam0)
{
	func_130(sParam0);
}

int func_133(int iParam0, int iParam1)
{
	if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if ((unk_0x7E6B188C8AD32E2D(iParam0) - unk_0x0A088F357EF627CA(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_134()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	unk_0x1701E0E6A11D6B65(Local_139 - Vector(20f, 40f, 40f), Local_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x1701E0E6A11D6B65(Local_78 - Vector(20f, 50f, 60f), Local_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x116D235ABEF5CE46(iLocal_105, 1);
	unk_0x4F7751BE82240EB4(5, 0);
	unk_0x4F7751BE82240EB4(3, 0);
	unk_0x8BB3FA32294185BB(0f);
	iLocal_53 = unk_0x364B87C5C64BD100(26, iLocal_102, Local_78, fLocal_97, 1, 1);
	unk_0x40E2910BAF39B1C7(iLocal_53, 1);
	unk_0x44EB7E24C5D75087(iLocal_53, 0);
	unk_0x470C9634914699C0(iLocal_53, 2, 0);
	unk_0x470C9634914699C0(iLocal_53, 128, 1);
	unk_0x273FE09AE985A00A(iLocal_53, 1, 0);
	unk_0x273FE09AE985A00A(iLocal_53, 6, 0);
	unk_0x764AFC5A3A16C2B0(iLocal_53, 206, 1);
	unk_0x764AFC5A3A16C2B0(iLocal_53, 318, 0);
	unk_0x764AFC5A3A16C2B0(iLocal_53, 118, 0);
	unk_0x764AFC5A3A16C2B0(iLocal_53, 208, 1);
	unk_0x419C9117019F2E5A(iLocal_102);
	unk_0x874004759C4BE8DC(iLocal_53, iLocal_125);
	unk_0xFE6A6646619C0AED(unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0x48E76A4B7B58B77A("rghKidnappers", &iLocal_176);
	unk_0x48E76A4B7B58B77A("rghVictim", &iLocal_177);
	unk_0x641E77554763EF06(iLocal_53, iLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = unk_0x364B87C5C64BD100(26, iLocal_103, Local_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, 1);
		unk_0x40E2910BAF39B1C7(iLocal_54[iLocal_64], 1);
		unk_0xF44CD70625670772(iLocal_54[iLocal_64], 1);
		unk_0x273FE09AE985A00A(iLocal_54[iLocal_64], 0, 1);
		unk_0x470C9634914699C0(iLocal_54[iLocal_64], 2, 0);
		unk_0x470C9634914699C0(iLocal_54[iLocal_64], 128, 1);
		unk_0x764AFC5A3A16C2B0(iLocal_54[iLocal_64], 42, 1);
		unk_0x9B78D121254B9A0D(iLocal_54[0], 2);
		unk_0x273FE09AE985A00A(iLocal_54[0], 50, 1);
		unk_0xE54D36F901A54378(iLocal_54[iLocal_64], 50);
		unk_0x9D02030EF7A1C310(iLocal_54[iLocal_64], 13);
		unk_0x503DF1366BC3493D(iLocal_54[iLocal_64], 1, 1);
		unk_0x641E77554763EF06(iLocal_54[iLocal_64], iLocal_176);
		unk_0xD592E5486B0119A2(iLocal_54[iLocal_64], unk_0x61E9B3BFA06B017B(800, 2000));
		iLocal_64++;
	}
	unk_0x419C9117019F2E5A(iLocal_104);
	unk_0x419C9117019F2E5A(iLocal_103);
	unk_0xE54D36F901A54378(iLocal_54[1], 100);
	unk_0x3854056F5409CB9E(iLocal_54[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	unk_0xFB5F4D76105A21B5(5, iLocal_176, joaat("player"));
	unk_0x7D154B840BD03D00(iLocal_54[0], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x7D154B840BD03D00(iLocal_54[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_58 = unk_0x3064CCF56C6C32BC(iLocal_105, Local_88, fLocal_101, 1, 1, 0);
	unk_0x9B53B2691E2B1F79(iLocal_58, 1084227584);
	unk_0x91663DAD5DDAFA96(iLocal_58, 3);
	unk_0x9F2024F28D07EE1E(iLocal_58, 5, 0, 0);
	unk_0x419C9117019F2E5A(iLocal_105);
	iLocal_60 = unk_0x7082ECB3731CD86C(joaat("prop_ld_shovel"), Local_107, 1, 1, 0);
	unk_0x419C9117019F2E5A(joaat("prop_ld_shovel"));
	uLocal_61[0] = unk_0x7082ECB3731CD86C(joaat("p_arm_bind_cut_s"), Local_107, 1, 1, 0);
	uLocal_61[1] = unk_0x7082ECB3731CD86C(joaat("p_arm_bind_cut_s"), Local_107 + Vector(1f, 1f, 1f), 1, 1, 0);
	unk_0x9016574B77A748EE(joaat("p_arm_bind_cut_s"));
	unk_0x947CE5CCDDBA0651(iLocal_60, iLocal_54[0], unk_0xCA57A734FF47CDF5(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0xDEA702F2138E0B35(iLocal_54[0], 0, 0, 0, 0);
	unk_0xDEA702F2138E0B35(iLocal_54[0], 3, 0, 1, 0);
	unk_0xDEA702F2138E0B35(iLocal_54[0], 4, 1, 0, 0);
	unk_0xDEA702F2138E0B35(iLocal_54[1], 0, 0, 2, 0);
	unk_0xDEA702F2138E0B35(iLocal_54[1], 3, 2, 1, 0);
	unk_0xDEA702F2138E0B35(iLocal_54[1], 4, 1, 1, 0);
	Var0 = { Local_78 };
	Var3 = { -2f, -4f, 18f };
	uLocal_343 = unk_0x3C3438327FFEB224(Var0, Var3, 2);
	unk_0x4DD2EB945B4192FD(iLocal_53, uLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0x2ADF31478643C93D(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x2ADF31478643C93D(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xAB888668498FCC04(uLocal_343, 1);
	unk_0x10F31830C95ED2E5(iLocal_53, 1);
	unk_0xB5746603774C4C9D(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xB5746603774C4C9D(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x2CB5CF231B7FE84F(iLocal_54[0], Local_91, Local_94, 2.75f, 0, 0);
	unk_0x2CB5CF231B7FE84F(iLocal_54[1], Local_91, Local_94, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_178, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_178, 1, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_178, 2, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
	}
	unk_0x2F51E4FCC3B20959(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x2F51E4FCC3B20959(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x2F51E4FCC3B20959(iLocal_53, "KIDNAPPEDFEMALE");
	func_135(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_178, 5, iLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_136(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x62148293B793073B(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_20() == 0)
		{
			uVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0x62148293B793073B(&uVar0, iParam1);
			func_138(func_141(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_668[iParam0]), iParam1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_140(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_139(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7011;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7870;
}

void func_142(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_20() == 0)
		{
			uVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0xD2A9C3F486236CC5(&uVar0, iParam1);
			func_138(func_141(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_668[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB03A1684359C50A1(Global_92881.f_1322[iParam0], iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_20() == 0)
		{
			return unk_0xB03A1684359C50A1(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_144()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		uVar0 = unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4());
		if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
		{
			iVar1 = unk_0x4983F8C51A0C0AF3(iVar0, 0, 0);
			if (!unk_0x0FAE113CE72ED842(iVar1))
			{
				if (iVar1 != unk_0x18F7BE9ACB7D08F4())
				{
					if (unk_0x90D1FDC9D31B7BE1(iVar1))
					{
						if (!unk_0xEA9676A7B6531DD8(iVar1, unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0x6016A20BFEAEFE11(iVar1, unk_0x18F7BE9ACB7D08F4(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_145()
{
	unk_0x9016574B77A748EE(iLocal_102);
	unk_0x9016574B77A748EE(iLocal_104);
	unk_0x9016574B77A748EE(iLocal_103);
	unk_0x9016574B77A748EE(iLocal_105);
	unk_0x9016574B77A748EE(joaat("prop_ld_shovel"));
	unk_0x9016574B77A748EE(joaat("p_arm_bind_cut_s"));
	unk_0x831CD0FBFB26EC7E("random@burial");
	unk_0xF43D99776B580DA7();
	unk_0xFF22FE9205F44FB6("ROPE_CUT", 0, -1);
	unk_0x6662DABCFF1B4AD5("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0xEDFE27D1AEA0EA7F(iLocal_102) && unk_0xEDFE27D1AEA0EA7F(iLocal_104)) && unk_0xEDFE27D1AEA0EA7F(iLocal_103)) && unk_0xEDFE27D1AEA0EA7F(iLocal_105)) && unk_0xEDFE27D1AEA0EA7F(joaat("prop_ld_shovel"))) && unk_0xEDFE27D1AEA0EA7F(joaat("p_arm_bind_cut_s"))) && unk_0x028356968FDD2DF2("random@burial")) && unk_0x8851E7053F291F92()) && unk_0xFF22FE9205F44FB6("ROPE_CUT", 0, -1)) && unk_0x6662DABCFF1B4AD5("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		unk_0x9016574B77A748EE(iLocal_102);
		unk_0x9016574B77A748EE(iLocal_104);
		unk_0x9016574B77A748EE(iLocal_103);
		unk_0x9016574B77A748EE(iLocal_105);
		unk_0x9016574B77A748EE(joaat("prop_ld_shovel"));
		unk_0x9016574B77A748EE(joaat("p_arm_bind_cut_s"));
		unk_0x831CD0FBFB26EC7E("random@burial");
		unk_0xF43D99776B580DA7();
		unk_0xFF22FE9205F44FB6("ROPE_CUT", 0, -1);
		unk_0x6662DABCFF1B4AD5("RE6_BOTH_DEAD_OS");
	}
}

void func_146()
{
	iLocal_102 = joaat("u_f_y_mistress");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("a_m_m_salton_01");
	iLocal_105 = joaat("bison");
	Local_78 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_97 = 0f;
	Local_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_98[0] = 297.0056f;
	Local_81[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_98[1] = 193.3866f;
	Local_88 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_101 = 265.6862f;
	Local_91 = { 164.0896f, 6836.923f, 19.03899f };
	Local_94 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_66 = 1;
}

int func_147()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(float fParam0, bool bParam1)
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
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_33(func_44()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 2) && !unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 3))
				{
					func_149(iVar32, &Var0);
					fVar35 = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0.f_6, 1);
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

void func_149(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_151(int iParam0)
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

struct<2> func_152(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_153(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_153(int iParam0)
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

int func_154()
{
	if (func_157() && !func_158())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_104269 > 0;
}

int func_156()
{
	if (Global_89896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_158()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if ((Global_104540 == func_39() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	unk_0x0A022B047163ACAE(0);
	unk_0xD42F50467E7AD46D(1);
	Global_104537 = 0;
	func_162();
}

void func_162()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x116D235ABEF5CE46(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)), 1);
		}
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	}
}

void func_163(int iParam0)
{
	Global_104540 = iParam0;
}

int func_164(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142815)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_39();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_158())
			{
				return 0;
			}
		}
		if (!Global_104551.f_9055)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (Global_104540 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_203(iParam3))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_200(Global_104551.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() - Global_104542) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_199())
		{
			return 0;
		}
		if (unk_0xEFD3E4A202A0D9DA())
		{
			return 0;
		}
		if (unk_0xD436A6CEB14BAC66())
		{
			return 0;
		}
		if (!func_190(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_189(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xB79050CDE709F080(unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())))
		{
			if ((unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(377.153f, -717.567f, 10.0536f) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(320.9934f, 265.2515f, 82.1221f)) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_189(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104551.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104551.f_2353.f_539.f_2276[iVar4];
				if (func_188(iVar8))
				{
					if (func_166(iVar4))
					{
						if (!func_165(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var5) < (210f * 210f))
							{
								if (func_44() != iVar4)
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

bool func_165(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104551.f_2353.f_539.f_2276[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_171(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_171(float fParam0, float fParam1, float fParam2)
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

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_174(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_175(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_176(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_177(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_178(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	var uVar0;
	
	func_187(&uVar0, unk_0xB093145A4ED05C87());
	func_186(&uVar0, unk_0x4BF279EB036481A0());
	func_185(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_184(&uVar0, unk_0x518720E0DE404FFC());
	func_183(&uVar0, unk_0x5E3E9A684A609866());
	func_182(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
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

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_188(int iParam0)
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_198()) || Global_103598) || Global_25235) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_198()) || Global_25235) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_198()) || Global_103598) || Global_25235) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_198()) || Global_103598) || Global_25235) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_198() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_198()) || Global_25235) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_198()) || func_195()) || Global_103598) || Global_25235) || func_197()) || Global_36991) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_198()) || Global_103598) || Global_25235) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
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

var func_191()
{
	return Global_92868.f_1;
}

int func_192()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_193()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_195()
{
	return Global_92881.f_316 > 0;
}

bool func_196()
{
	return Global_92881.f_315 > 0;
}

var func_197()
{
	return Global_1312854;
}

int func_198()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_199()
{
	func_76();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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

int func_202(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_104551.f_7658.f_919[iParam0];
}

bool func_203(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_204()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x4983F8C51A0C0AF3(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_205()
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

void func_206()
{
	int iVar0;
	
	if (iLocal_162)
	{
		func_219(0);
		unk_0x6D88D1D62502CEFC();
		unk_0x633C8E78F68C0DAE("RE6_BOTH_DEAD_OS");
		if (iLocal_145 || iLocal_165)
		{
			if (Global_25471)
			{
				unk_0x9BEA833CAF67289C("AC_STOP");
			}
			else
			{
				unk_0x9BEA833CAF67289C("RE6_END");
			}
		}
		func_218();
		unk_0xFB5F4D76105A21B5(255, iLocal_177, joaat("player"));
		unk_0xFB5F4D76105A21B5(255, joaat("player"), iLocal_177);
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_53))
			{
				unk_0x764AFC5A3A16C2B0(iLocal_53, 317, 1);
				if (!unk_0x657B649BA2AD3582(iLocal_53, 0))
				{
					unk_0x456E65E2EDE3381E(iLocal_53);
				}
				if (unk_0x4732F444CD45A256(iLocal_53))
				{
					unk_0x95B1A64E8455A478(iLocal_53);
				}
				unk_0x40E2910BAF39B1C7(iLocal_53, 0);
				unk_0x44EB7E24C5D75087(iLocal_53, 1);
			}
			else if (!unk_0x74C2FE037DFC8B4A(iLocal_53, 0))
			{
				unk_0x4DDA430A22468428(iLocal_53, 1);
				unk_0xF9B6167CF8515470(iLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_54[iVar0]) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x83222845D5C7852E(iLocal_54[iVar0]);
				if (iLocal_69 || iLocal_76)
				{
					unk_0x48B25C02FAB9DC81(iLocal_54[iVar0], unk_0x18F7BE9ACB7D08F4(), 0, 16);
				}
				else
				{
					unk_0x9603FB72C3126396(iLocal_54[iVar0], unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
					func_104();
				}
				unk_0x10F31830C95ED2E5(iLocal_54[iVar0], 1);
			}
			iVar0++;
		}
		unk_0x5BE35A26B9097351(&(uLocal_61[0]));
		unk_0x5BE35A26B9097351(&(uLocal_61[1]));
		if (unk_0x31F12808DC47A9E5(iLocal_58))
		{
			unk_0x4F5FF3F3FDCAB15D(&iLocal_58);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_60))
		{
			if (unk_0x4A296E47F281D02F(iLocal_60))
			{
				unk_0x964B3F361C3DBDF4(iLocal_60, 1, 1);
			}
			unk_0xF0862FA354B164C4(&iLocal_60);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_163))
		{
			unk_0x40D517D991458154(&uLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (unk_0xE769D9B5158D0F11(uLocal_111[iLocal_64]))
			{
				unk_0x40D517D991458154(&(uLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (unk_0xE769D9B5158D0F11(uLocal_114))
		{
			unk_0x40D517D991458154(&uLocal_114);
		}
		if (unk_0x5400DC5FAEBF30F0(uLocal_77))
		{
			unk_0x13AD763DBD687842(uLocal_77, 0);
		}
		unk_0x4F7751BE82240EB4(5, 1);
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x8BB3FA32294185BB(1f);
		unk_0x3B4B46A2A779D56E(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_207(-1);
	unk_0x810C5D6462DD69E6();
}

void func_207(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_104540, 1), 64);
		if (func_38(Global_104540) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104539, 64);
		}
		unk_0x50686B0B250B8042(&cVar0, Global_104537, (unk_0x5AFB8ED811F05E4D() - Global_104538), 0);
	}
	else if (unk_0xB03A1684359C50A1(Global_104547, 0) && Global_104551.f_24965.f_2 < 3)
	{
		unk_0x62148293B793073B(&Global_104547, 0);
	}
	func_208(&Global_25292);
	Global_104541 = 0;
	func_163(-1);
}

void func_208(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
}

char* func_209(int iParam0, bool bParam1)
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

void func_210(int iParam0)
{
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_211(int iParam0)
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(iParam0, &uVar0);
	Var1 = { func_213(&uVar0) };
}

struct<16> func_213(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_176(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_214(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)
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

void func_218()
{
	Global_25467 = 0;
	Global_25468 = 0;
	Global_25470 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
}

void func_219(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

