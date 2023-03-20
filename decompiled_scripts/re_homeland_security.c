#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_18 = 0;
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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[2] = { 0, 0 };
	struct<3> Local_54[2];
	float fLocal_61[2] = { 0f, 0f };
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_83 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120[2] = { 0, 0 };
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 16;
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
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
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
	
	iLocal_0 = 3;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	StringCopy(&Local_77, "", 24);
	if (unk_0x8D841F1DD3FA555F(11))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_71))
		{
			if (unk_0xCD67A1A6022640ED(iLocal_71))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_71);
			}
		}
		func_204();
	}
	if (func_162(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_159(-1);
	}
	else
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0x52AB115D3D6A8417() || iLocal_107) || iLocal_136)
		{
			if (!func_158())
			{
				if (func_157())
				{
					func_204();
				}
			}
			unk_0x36137B7A77318822("RE_RA", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_145())
					{
						func_204();
					}
					if (!iLocal_102)
					{
						func_144();
					}
					else
					{
						func_143();
					}
					if (bLocal_103)
					{
						iLocal_101 = 1;
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
					{
						switch (iLocal_48)
						{
							case 0:
								func_133();
								iLocal_48 = 1;
								break;
							
							case 1:
								if (!func_132())
								{
									if ((unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_72, 75f, 75f, 75f, 0, 1, 0) && !unk_0x895C275673BCEAB0(iLocal_71)) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_71, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_158())
										{
											unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_71, -1, 0, 2);
											unk_0x5B6D37392F5991C3(0.1f);
											func_131();
											func_122(1);
										}
										bLocal_110 = true;
									}
									if (!unk_0x5FEB513A4402FD59(iLocal_51[0]) && !unk_0x5FEB513A4402FD59(iLocal_51[1]))
									{
										if (unk_0xBBEF8270CE27C0EE(iLocal_51[0], unk_0x81873881071CD9FE(), 1) || unk_0xBBEF8270CE27C0EE(iLocal_51[1], unk_0x81873881071CD9FE(), 1))
										{
											func_131();
											bLocal_110 = true;
										}
									}
									if (bLocal_110)
									{
										func_116();
									}
									if (!unk_0x5FEB513A4402FD59(iLocal_71) && unk_0x7404950238A154C2(uLocal_64, 0))
									{
										if (unk_0x04C377C10639B842(iLocal_71, uLocal_64, 0))
										{
											iLocal_136 = 1;
										}
									}
									if (bLocal_137)
									{
										if (unk_0x7404950238A154C2(uLocal_64, 0))
										{
											if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), uLocal_64, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_48 = 9;
											}
										}
									}
								}
								if (func_115())
								{
									func_131();
									iLocal_48 = 3;
								}
								else if (func_132())
								{
									func_131();
									func_113();
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_131)
								{
									case 0:
										iLocal_48 = 3;
										break;
									
									case 1:
										iLocal_48 = 3;
										break;
									
									case 3:
										iLocal_48 = 3;
										break;
									
									case 4:
										iLocal_48 = 3;
										break;
									
									case 5:
										if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4))
										{
											iLocal_139 = 1;
											iLocal_50 = 9;
										}
										else
										{
											iLocal_50 = 13;
										}
										iLocal_48 = 1;
										break;
								}
								if (func_132())
								{
									switch (iLocal_49)
									{
										case 2:
											func_112();
											break;
										
										case 4:
											func_111();
											break;
										
										case 5:
											func_110();
											break;
										}
								}
								break;
							
							case 3:
								func_107();
								unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
								if (!unk_0x5FEB513A4402FD59(iLocal_71))
								{
									unk_0x832B749856D487BE(iLocal_71, 3, 0, 0);
									if (!unk_0xE5AB05962FA1FF3F(iLocal_71, 0))
									{
										if (!iLocal_116)
										{
											if (unk_0x0BAE7BE122182FA8(iLocal_71, "random@homelandsecurity", "idle_girl", 3) && !unk_0xD81BC0FD4D47CC04(iLocal_71))
											{
												unk_0x62EB663FEC08FF11(iLocal_71, 16);
												unk_0xEAD984C2869B8B7C(&uLocal_135);
												unk_0x31C1393E4ACFD794(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												unk_0x31C1393E4ACFD794(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												unk_0x56D9ED1541046AF6(uLocal_135);
												unk_0xC65002CAA1212AF9(iLocal_71, uLocal_135);
												unk_0xA3561415EB3DA3A3(&uLocal_135);
												iLocal_116 = 1;
											}
											else
											{
												unk_0x492E306B5A7C779A(iLocal_71, -1);
												iLocal_116 = 1;
											}
										}
										else if ((((!unk_0x0BAE7BE122182FA8(iLocal_71, "random@homelandsecurity", "idle_girl", 3) && !unk_0x0BAE7BE122182FA8(iLocal_71, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0x0BAE7BE122182FA8(iLocal_71, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0xFA1212DE7C455679(iLocal_71, 474215631) != 0) && unk_0xFA1212DE7C455679(iLocal_71, 474215631) != 1)
										{
											iLocal_116 = 0;
										}
									}
									else if (unk_0x7404950238A154C2(iLocal_64, 0))
									{
										if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_64, 0))
										{
											if (unk_0xFBACB273AA628CC5(uLocal_119))
											{
												unk_0x0A8175F24237A3D4(&uLocal_119);
											}
										}
									}
								}
								else
								{
									func_106();
								}
								if (!func_105())
								{
									if (iLocal_128 < unk_0x48E480685981C7D4())
									{
										if (func_104())
										{
											if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
											{
												func_103(&uLocal_153, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
										{
											func_103(&uLocal_153, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_128 = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(4500, 5000));
									}
								}
								if (unk_0x5FEB513A4402FD59(iLocal_51[0]))
								{
									if (unk_0xFBACB273AA628CC5(uLocal_120[0]))
									{
										unk_0x0A8175F24237A3D4(&(uLocal_120[0]));
									}
									func_102(&uLocal_153, 5);
								}
								else if (unk_0x76C5D372647A62A7(iLocal_51[0], unk_0x81873881071CD9FE()) || unk_0x8D28631AAAEFC957(iLocal_51[0], unk_0x81873881071CD9FE(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xFBACB273AA628CC5(uLocal_120[0]))
								{
									unk_0x0A8175F24237A3D4(&(uLocal_120[0]));
								}
								if (unk_0x5FEB513A4402FD59(iLocal_51[1]))
								{
									if (unk_0xFBACB273AA628CC5(uLocal_120[1]))
									{
										unk_0x0A8175F24237A3D4(&(uLocal_120[1]));
									}
									func_102(&uLocal_153, 4);
								}
								else if (unk_0x76C5D372647A62A7(iLocal_51[1], unk_0x81873881071CD9FE()) || unk_0x8D28631AAAEFC957(iLocal_51[1], unk_0x81873881071CD9FE(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xFBACB273AA628CC5(uLocal_120[1]))
								{
									unk_0x0A8175F24237A3D4(&(uLocal_120[1]));
								}
								if (unk_0x86CCCD2FAE9D5E65(iLocal_51[0]) && unk_0x86CCCD2FAE9D5E65(iLocal_51[1]))
								{
									if (((unk_0xCF1857501787B489(iLocal_51[0], joaat("weapon_stungun"), 0) && unk_0xCF1857501787B489(iLocal_51[1], joaat("weapon_stungun"), 0)) || (unk_0x82F01138B895DCE6(iLocal_51[0], 1) && unk_0x82F01138B895DCE6(iLocal_51[1], 1))) || func_101())
									{
										if (unk_0xFBACB273AA628CC5(uLocal_120[0]))
										{
											unk_0x0A8175F24237A3D4(&(uLocal_120[0]));
										}
										if (unk_0xFBACB273AA628CC5(uLocal_120[1]))
										{
											unk_0x0A8175F24237A3D4(&(uLocal_120[1]));
										}
										if (!unk_0x5FEB513A4402FD59(iLocal_71))
										{
											if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_71, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_105())
												{
													func_103(&uLocal_153, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_89 = false;
													iLocal_107 = 1;
													unk_0xAC62FC4A9B87E20D(iLocal_71, 16);
													unk_0xD24EA1F9FB501BB5(iLocal_71);
													iLocal_48 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_89)
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_71))
									{
										if ((unk_0x0BAE7BE122182FA8(iLocal_71, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0x0BAE7BE122182FA8(iLocal_71, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0xD81BC0FD4D47CC04(iLocal_71))
										{
											unk_0x31C1393E4ACFD794(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											unk_0x27CC98B7C879C320(iLocal_71);
										}
										unk_0x2DA3CE5ACB2F30AC(iLocal_71, 0);
										unk_0xABED360AB1F46D3D(iLocal_71, func_100());
										unk_0x64ACA71A49AA111C(iLocal_71, 1);
										func_99();
										bLocal_89 = true;
									}
								}
								if (!unk_0x5FEB513A4402FD59(iLocal_71))
								{
									if (unk_0x0BAE7BE122182FA8(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0xC00796CF40447CA8(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											unk_0x27CC98B7C879C320(iLocal_71);
										}
									}
								}
								if (!iLocal_91)
								{
									if (!func_105())
									{
										if (func_103(&uLocal_153, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_91 = 1;
										}
									}
								}
								else if (!iLocal_90)
								{
									if (!func_105())
									{
										if (func_98() == 0)
										{
											func_103(&uLocal_153, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_98() == 1)
										{
											func_103(&uLocal_153, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_90 = 1;
									}
								}
								if (bLocal_89)
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_71))
									{
										if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_71, 8f, 8f, 8f, 0, 1, 0) || unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()))
										{
											if (unk_0xFBACB273AA628CC5(uLocal_119))
											{
												unk_0x0A8175F24237A3D4(&uLocal_119);
											}
										}
										else if (!unk_0xFBACB273AA628CC5(uLocal_119))
										{
											uLocal_119 = func_96(iLocal_71, 0, 145);
										}
									}
								}
								if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
								{
									if (unk_0x76C5D372647A62A7(iLocal_51[0], unk_0x81873881071CD9FE()))
									{
										if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) < 2)
										{
										}
									}
								}
								if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
								{
									if (unk_0x76C5D372647A62A7(iLocal_51[1], unk_0x81873881071CD9FE()))
									{
										if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) < 2)
										{
										}
									}
								}
								if (iLocal_90 && func_95())
								{
									if (!func_105())
									{
										func_93();
										unk_0x4EDE34FBADD967A6(0);
										func_103(&uLocal_153, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0x71A8BCA218722FA1(&(iLocal_51[0]));
										unk_0x71A8BCA218722FA1(&(iLocal_51[1]));
										if (!unk_0x5FEB513A4402FD59(iLocal_71))
										{
											if (unk_0xCD67A1A6022640ED(iLocal_71))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_51)
												{
													if (unk_0x86CCCD2FAE9D5E65(iLocal_51[iVar0]))
													{
														unk_0x71A8BCA218722FA1(&(iLocal_51[iVar0]));
													}
													iVar0++;
												}
												unk_0x5B6D37392F5991C3(1f);
												iLocal_48 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_87();
								func_82();
								func_81();
								func_78();
								func_77();
								if (func_76(Local_92))
								{
									func_62(0);
									func_93();
									unk_0x4EDE34FBADD967A6(0);
									func_103(&uLocal_153, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_60())
								{
									func_62(0);
									func_93();
									unk_0x4EDE34FBADD967A6(0);
									func_103(&uLocal_153, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x5FEB513A4402FD59(iLocal_71))
								{
									if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_92, Global_22, 1, 1, 0) && unk_0x8D28631AAAEFC957(iLocal_71, unk_0x81873881071CD9FE(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (unk_0xCD67A1A6022640ED(iLocal_71))
										{
											if (unk_0xFBACB273AA628CC5(uLocal_119))
											{
												unk_0x0A8175F24237A3D4(&uLocal_119);
											}
											if (unk_0xFBACB273AA628CC5(uLocal_123))
											{
												unk_0x0A8175F24237A3D4(&uLocal_123);
											}
											if (unk_0xFBACB273AA628CC5(uLocal_124))
											{
												unk_0x0A8175F24237A3D4(&uLocal_124);
											}
											if (unk_0xCD67A1A6022640ED(iLocal_71))
											{
												unk_0x6EC15FE0ADD3E99C(iLocal_71);
											}
											if (func_95())
											{
												if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
												{
													unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), 5f, 2, 0);
												}
												iLocal_48 = 6;
											}
											else
											{
												func_93();
												unk_0x4EDE34FBADD967A6(0);
												func_103(&uLocal_153, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x5FEB513A4402FD59(iLocal_71))
												{
													unk_0xEAD984C2869B8B7C(&uLocal_135);
													unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 5000, 2052, 2);
													unk_0xD91194CE3D1E1D77(0, Local_95, 1f, -1, 0.25f, 0, 38.9844f);
													unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING", 0, 1);
													unk_0x56D9ED1541046AF6(uLocal_135);
													unk_0xC65002CAA1212AF9(iLocal_71, uLocal_135);
													unk_0xA3561415EB3DA3A3(&uLocal_135);
													unk_0x6CB332CB31E9FA96(iLocal_71, 1);
												}
												func_34(func_98(), 1, 80, 0, 1);
												iLocal_48 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_106();
								break;
						}
						if (iLocal_149 && !iLocal_150)
						{
							if (iLocal_48 != 6)
							{
								if (unk_0xDD7720E17AF5FE17(uLocal_148))
								{
									if (unk_0xF855C83E3A17514B(uLocal_148) > 0.85f)
									{
										if (unk_0x7404950238A154C2(iLocal_64, 0))
										{
											if (!unk_0x5FEB513A4402FD59(iLocal_71))
											{
												if (!unk_0x04C377C10639B842(iLocal_71, iLocal_64, 0))
												{
													if (!unk_0xD81BC0FD4D47CC04(iLocal_71))
													{
														unk_0x27CC98B7C879C320(iLocal_71);
														unk_0xDC81A805934C85CD(iLocal_71, iLocal_64, 2);
														unk_0x6CB332CB31E9FA96(iLocal_71, 1);
														iLocal_150 = 1;
													}
													else
													{
														iLocal_150 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_71))
							{
								unk_0xF210D34D7F7152ED(&iLocal_71);
							}
							func_4();
						}
						if ((iLocal_48 != 0 && iLocal_48 != 6) && iLocal_48 != 7)
						{
							if (func_1())
							{
								iLocal_48 = 9;
							}
						}
						if (iLocal_48 == 4 || iLocal_48 == 5)
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_71))
							{
								if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_71, 150f, 150f, 150f, 0, 1, 0) || unk_0xBBEF8270CE27C0EE(iLocal_71, unk_0x81873881071CD9FE(), 1))
								{
									unk_0x754376E2234CBB4A(iLocal_71, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
									func_93();
									func_106();
								}
							}
						}
						if (iLocal_48 < 5)
						{
							unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
						}
						if (unk_0x5FEB513A4402FD59(iLocal_51[0]))
						{
							if (unk_0xFBACB273AA628CC5(uLocal_120[0]))
							{
								unk_0x0A8175F24237A3D4(&(uLocal_120[0]));
							}
						}
						if (unk_0x5FEB513A4402FD59(iLocal_51[1]))
						{
							if (unk_0xFBACB273AA628CC5(uLocal_120[1]))
							{
								unk_0x0A8175F24237A3D4(&(uLocal_120[1]));
							}
						}
						if (unk_0x5FEB513A4402FD59(iLocal_71))
						{
							if (unk_0xFBACB273AA628CC5(uLocal_119))
							{
								unk_0x0A8175F24237A3D4(&uLocal_119);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_204();
		}
	}
}

int func_1()
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0x86CCCD2FAE9D5E65(iLocal_51[0]))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_51[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_51[1]))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_51[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_71))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_71))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_25181)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	Global_98917 = iParam0;
}

void func_4()
{
	while (func_105())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_32())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_8(-1, 0);
	func_5();
	func_204();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_3(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
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
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_10();
	}
}

void func_10()
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_12(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_11() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_24946;
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1312729;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0)
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

void func_17(int iParam0)
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_20();
	}
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_21()
{
	func_22();
	switch (Global_98931.f_1750.f_539.f_3549)
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

void func_22()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_26(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_25(unk_0x81873881071CD9FE());
			if (func_24(iVar0) && (!func_23(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_24(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_23(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)
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

int func_30()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_31(Var0);
	return uVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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

int func_32()
{
	return 1;
}

void func_33()
{
	switch (iLocal_151)
	{
		case 0:
			func_93();
			unk_0x4EDE34FBADD967A6(0);
			func_103(&uLocal_153, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_151++;
			break;
		
		case 1:
			iLocal_151++;
			break;
		
		case 2:
			iLocal_151++;
			break;
		
		case 3:
			if (!unk_0x5FEB513A4402FD59(iLocal_71))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_135);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 5000, 2052, 2);
				unk_0xD91194CE3D1E1D77(0, Local_95, 1f, -1, 0.25f, 0, 38.9844f);
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x56D9ED1541046AF6(uLocal_135);
				unk_0xC65002CAA1212AF9(iLocal_71, uLocal_135);
				unk_0xA3561415EB3DA3A3(&uLocal_135);
				unk_0x6CB332CB31E9FA96(iLocal_71, 1);
			}
			iLocal_151++;
			break;
		
		case 4:
			func_34(func_98(), 1, 80, 0, 1);
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			func_4();
			break;
	}
}

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_35(Global_98931.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x85C45034BA638694(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x123B783056E76C4E(iVar1, iVar0, 1);
	}
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_59();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_58(99, 1);
					func_57(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_57(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_57(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_43(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_42(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_42(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_42(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_41(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_58(95, iParam3);
					break;
				
				case 1:
					func_58(97, iParam3);
					break;
				
				case 2:
					func_58(96, iParam3);
					break;
			}
			func_58(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_38(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_38(iVar1);
	}
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_57(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_57(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_57(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_37(iParam0);
	if (Global_35443 == 15)
	{
		func_36(0);
	}
	return 1;
}

void func_36(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_38(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_40() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_40() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_39(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_41(int iParam0)
{
	func_58(93, iParam0);
	func_58(29, iParam0);
	func_58(30, iParam0);
}

bool func_42(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_40() /*9662*/].f_7252.f_10, iParam0);
}

int func_43(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_44(27, 1);
	return 1;
}

int func_44(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_45(iParam0, iParam1);
}

int func_45(int iParam0, int iParam1)
{
	if (func_23(14) && !func_56(iParam0))
	{
		return 0;
	}
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_55(&Global_2550589))
	{
		if (func_53(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_46(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_46(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_56(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	if (func_52(uParam0) < 0f)
	{
		func_51(uParam0, 0);
	}
	func_49(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_47(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_47(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_56(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	if (func_52(uParam0) < 0f)
	{
		func_51(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_48(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_48(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_50(uParam0, iVar0);
		iVar0++;
	}
	func_51(uParam0, (Global_2550588 - 0.5f));
}

void func_50(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_51(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_52(var uParam0)
{
	return uParam0->f_72;
}

bool func_53(var uParam0, int iParam1)
{
	return func_54(uParam0, iParam1) != -1;
}

int func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_55(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_59()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_60()
{
	if (func_98() == 2)
	{
		if (func_61())
		{
			if (unk_0x0D6E79537424BACE(-1014.154f, 4881.411f, 245.0001f, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), 0), 1) < 400f)
			{
				if (!Global_25185)
				{
					unk_0x80650551CC58C784("AC_EN_ROUTE_CULT");
					Global_25185 = 1;
					if (!Global_25184)
					{
						Global_25184 = 1;
						return 1;
					}
				}
			}
			else if (Global_25185)
			{
				unk_0x80650551CC58C784("AC_LEFT_AREA");
				Global_25185 = 0;
			}
		}
	}
	return 0;
}

bool func_61()
{
	return Global_25180;
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_76)
		{
			if (func_65(&uLocal_153, "REHOMAU", &Local_83, &Local_77, 8, 0, 0))
			{
				iLocal_76 = 0;
			}
		}
	}
	else if (!iLocal_76 && unk_0xE1772957381F609F())
	{
		Local_83 = { func_64() };
		Local_77 = { func_63() };
		func_113();
		iLocal_76 = 1;
	}
}

struct<6> func_63()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x21C9C1BDAA5B68B1();
		iVar6 = (iVar6 + Global_16703);
		if (iVar6 > -1)
		{
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_64()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

bool func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_66(sParam2, iParam4, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_73(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_72();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_71();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_70())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_69())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_68();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_67();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_74();
	}
	return 0;
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_68()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_69()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_71()
{
	if (func_23(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_98();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_73(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_74()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_76(struct<3> Param0)
{
	if (func_98() == 2)
	{
		if (func_61() && !Global_25183)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param0) > (fLocal_46 + 200f) || unk_0x0D6E79537424BACE(-1014.154f, 4881.411f, 245.0001f, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), 0), 1) < 400f)
			{
				Global_25183 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_77()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_71))
	{
		if (!iLocal_104)
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x2ADE2CEED2637E95(), 1) && unk_0x04C377C10639B842(iLocal_71, unk_0x2ADE2CEED2637E95(), 0))
				{
					func_62(0);
					func_93();
					unk_0x4EDE34FBADD967A6(0);
					func_103(&uLocal_153, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_104 = 1;
				}
			}
		}
		else if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x2ADE2CEED2637E95(), 0) && unk_0x04C377C10639B842(iLocal_71, unk_0x2ADE2CEED2637E95(), 0))
			{
				iLocal_104 = 0;
			}
		}
		if (!iLocal_105)
		{
			if (unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()))
			{
				func_62(0);
				func_93();
				unk_0x4EDE34FBADD967A6(0);
				func_103(&uLocal_153, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_105 = 1;
			}
		}
		else if (!unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()))
		{
			iLocal_105 = 0;
		}
		if (!iLocal_106)
		{
			if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
			{
				func_62(0);
				func_93();
				unk_0x4EDE34FBADD967A6(0);
				func_103(&uLocal_153, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_106 = 1;
			}
		}
		else if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			iLocal_106 = 0;
		}
	}
}

void func_78()
{
	if (!func_79())
	{
		func_62(1);
	}
	if (!func_105())
	{
		switch (iLocal_129)
		{
			case 0:
				if (func_98() == 0)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 1:
				func_103(&uLocal_153, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 2:
				func_103(&uLocal_153, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 3:
				if (func_98() == 0)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 4:
				func_103(&uLocal_153, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 5:
				if (func_98() == 0)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 6:
				func_103(&uLocal_153, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 7:
				func_103(&uLocal_153, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 8:
				if (func_98() == 0)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_153, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 9:
				func_103(&uLocal_153, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_129++;
				break;
			}
	}
}

int func_79()
{
	if (((((((((func_80("REHOM_QM") || func_80("REHOM_GETOUT")) || func_80("REHOM_SHOOT")) || func_80("REHOM_JACK")) || func_80("REHOM_WRONG")) || func_80("REHOM_CULT")) || func_80("REHOM_STOP")) || func_80("REHOM_NOVEH")) || func_80("REHOM_UNS1")) || func_80("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_80(char* sParam0)
{
	var uVar0;
	
	if (func_105())
	{
		MemCopy(&uVar0, {func_64()}, 4);
		if (unk_0xD994929E13CC1ED5(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_81()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_71))
	{
		if (unk_0x25CC8E51B72F474F(iLocal_71))
		{
			if (!iLocal_141)
			{
				iLocal_142 = unk_0x48E480685981C7D4();
				iLocal_141 = 1;
			}
			else
			{
				iLocal_143 = unk_0x48E480685981C7D4();
			}
		}
		else
		{
			iLocal_141 = 0;
		}
		if ((iLocal_143 - iLocal_142) > 180000)
		{
			if (unk_0xCD67A1A6022640ED(iLocal_71))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_71);
				func_103(&uLocal_153, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_106();
			}
		}
	}
}

void func_82()
{
	if (unk_0x7E0C455D8C091153(unk_0x81873881071CD9FE()))
	{
		if (!iLocal_144)
		{
			iLocal_146 = unk_0x48E480685981C7D4();
			iLocal_144 = 1;
		}
		else
		{
			iLocal_147 = unk_0x48E480685981C7D4();
		}
	}
	else
	{
		iLocal_147 = 0;
		iLocal_144 = 0;
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 50000 && !iLocal_145)
	{
		func_62(0);
		func_93();
		unk_0x4EDE34FBADD967A6(0);
		func_103(&uLocal_153, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_145 = 1;
	}
	if ((iLocal_147 - iLocal_146) > 60000 && iLocal_145)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_71))
		{
			unk_0x754376E2234CBB4A(iLocal_71, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
			func_83(iLocal_71, 120000, 0);
			unk_0x6CB332CB31E9FA96(iLocal_71, 1);
			if (unk_0xCD67A1A6022640ED(iLocal_71))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_71);
			}
		}
		func_106();
	}
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	iVar0 = func_86(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_85(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_84();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36270[iVar2 /*5*/] = 0;
	Global_36270[iVar2 /*5*/].f_1 = iParam0;
	Global_36270[iVar2 /*5*/].f_2 = iParam1;
	Global_36270[iVar2 /*5*/].f_3 = iParam1;
	Global_36270[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x81873881071CD9FE())
	{
		Global_36491 = 1;
	}
	Global_36269++;
	return 1;
}

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36270[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36270[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_86(int iParam0)
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
		if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
		{
			return Global_36296[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_87()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_71))
	{
		if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_71, 8f, 8f, 8f, 0, 1, 0) || unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_119))
			{
				unk_0x0A8175F24237A3D4(&uLocal_119);
			}
			if (!unk_0xCD67A1A6022640ED(iLocal_71))
			{
				unk_0xABED360AB1F46D3D(iLocal_71, unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63()));
				unk_0x2DA3CE5ACB2F30AC(iLocal_71, 0);
			}
			if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_123))
				{
					uLocal_123 = func_91(Local_92, 1);
				}
				if (unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()))
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_123))
					{
						uLocal_123 = func_91(Local_92, 1);
					}
				}
				if (func_98() == 2 && !func_90())
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_124))
					{
						uLocal_124 = func_91(Local_98, 0);
						unk_0x8F827BB0F6ED7AA8(uLocal_124, 269);
						func_88();
					}
				}
			}
		}
		else
		{
			if (!unk_0xFBACB273AA628CC5(uLocal_119))
			{
				uLocal_119 = func_96(iLocal_71, 0, 145);
			}
			if (unk_0xFBACB273AA628CC5(uLocal_123))
			{
				unk_0x0A8175F24237A3D4(&uLocal_123);
			}
		}
	}
}

void func_88()
{
	if (func_98() == 2)
	{
		if (!Global_25182)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_25182 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_90()
{
	if (Global_98931.f_29444.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_91(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_92(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

float func_92(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_93()
{
	Global_14559 = 0;
	func_94();
}

void func_94()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

int func_95()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		uLocal_117 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uLocal_117, 0))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_71))
			{
				if (unk_0x58A69336FE7307D8(iLocal_71, iLocal_117))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_96(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_97(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_97(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_92(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_92(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_92(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_98()
{
	func_22();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_99()
{
	if (!func_90())
	{
		if (func_98() == 2)
		{
			Global_25180 = 1;
		}
	}
}

var func_100()
{
	return unk_0xC80D3C64CC2CE6A3(unk_0xEC537F0C0E8265EE());
}

int func_101()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_64))
	{
		if (((unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_64, 0) && unk_0x04C377C10639B842(iLocal_71, iLocal_64, 0)) && !unk_0x04C377C10639B842(iLocal_51[0], iLocal_64, 0)) && !unk_0x04C377C10639B842(iLocal_51[1], iLocal_64, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_102(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_66(sParam2, iParam3, 0);
}

int func_104()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	func_204();
}

void func_107()
{
	if (!iLocal_108)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
		{
			unk_0xA97FB3A1E6744863(iLocal_51[0], 0);
			unk_0x27CC98B7C879C320(iLocal_51[0]);
			unk_0xEAD984C2869B8B7C(&uLocal_135);
			unk_0xF64D185C5B88AF31(0);
			unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
			unk_0x56D9ED1541046AF6(uLocal_135);
			unk_0xC65002CAA1212AF9(iLocal_51[0], uLocal_135);
			unk_0xA3561415EB3DA3A3(&uLocal_135);
			unk_0x6CB332CB31E9FA96(iLocal_51[0], 1);
			if (unk_0xFBACB273AA628CC5(uLocal_120[0]))
			{
				unk_0xD5CD0E7173F858FF(uLocal_120[0], false);
			}
			unk_0x5AE11BC36633DE4E(0);
			iLocal_108 = 1;
		}
		else
		{
			unk_0x5AE11BC36633DE4E(500);
			iLocal_108 = 1;
		}
	}
	if (!iLocal_109)
	{
		if (unk_0xFBACB273AA628CC5(uLocal_120[1]))
		{
			unk_0xD5CD0E7173F858FF(uLocal_120[1], false);
		}
		func_93();
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
		{
			func_108(iLocal_51[1], "GENERIC_INSULT_HIGH", 24);
			unk_0xA97FB3A1E6744863(iLocal_51[1], 2);
			if ((unk_0x0BAE7BE122182FA8(iLocal_51[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0xDD7720E17AF5FE17(uLocal_148)) && !unk_0xD81BC0FD4D47CC04(iLocal_51[1]))
			{
				unk_0x62EB663FEC08FF11(iLocal_51[1], 16);
				unk_0xEAD984C2869B8B7C(&uLocal_135);
				unk_0x31C1393E4ACFD794(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
				unk_0x56D9ED1541046AF6(uLocal_135);
				unk_0xC65002CAA1212AF9(iLocal_51[1], uLocal_135);
				unk_0xA3561415EB3DA3A3(&uLocal_135);
				unk_0x6CB332CB31E9FA96(iLocal_51[1], 1);
				iLocal_109 = 1;
			}
			else
			{
				unk_0x633A554EB6BC4E71(iLocal_51[1], unk_0x81873881071CD9FE(), 0, 16);
				unk_0x6CB332CB31E9FA96(iLocal_51[1], 1);
				iLocal_109 = 1;
			}
		}
	}
	else if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
	{
		if (((!unk_0x0BAE7BE122182FA8(iLocal_51[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0x0BAE7BE122182FA8(iLocal_51[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0xFA1212DE7C455679(iLocal_51[1], 780511057) != 0) && unk_0xFA1212DE7C455679(iLocal_51[1], 780511057) != 1)
		{
			iLocal_109 = 1;
		}
	}
}

void func_108(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(uParam0, sParam1, func_109(iParam2), 1);
}

int func_109(int iParam0)
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

void func_110()
{
	iLocal_48 = 3;
}

void func_111()
{
	func_93();
	unk_0x4EDE34FBADD967A6(0);
	func_103(&uLocal_153, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_48 = 3;
}

void func_112()
{
	iLocal_48 = 3;
}

void func_113()
{
	Global_14559 = 0;
	func_114();
}

void func_114()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

int func_115()
{
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		if (unk_0x930F8FBB8E9537CC(iLocal_51[iLocal_125]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_51[iLocal_125], unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
		iLocal_125++;
	}
	return 0;
}

void func_116()
{
	iLocal_127 = unk_0x48E480685981C7D4();
	if (!bLocal_137)
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_121())
				{
					iLocal_50 = 9;
				}
				if (func_120() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (func_103(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x48E480685981C7D4();
					iLocal_50 = 1;
				}
				break;
			
			case 1:
				if (func_121())
				{
					iLocal_50 = 9;
				}
				if (func_120() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (func_103(&uLocal_153, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x48E480685981C7D4();
					iLocal_50 = 2;
				}
				break;
			
			case 2:
				if (func_121())
				{
					iLocal_50 = 9;
				}
				if (func_120() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if ((iLocal_127 - iLocal_126) > 6000)
				{
					if (func_103(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_126 = unk_0x48E480685981C7D4();
						iLocal_50 = 3;
					}
				}
				break;
			
			case 3:
				if (func_121())
				{
					iLocal_50 = 9;
				}
				if (func_120() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (func_103(&uLocal_153, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x48E480685981C7D4();
					iLocal_50 = 4;
				}
				break;
			
			case 4:
				if (func_121())
				{
					iLocal_50 = 9;
				}
				if (func_120() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if ((iLocal_127 - iLocal_126) > 5500)
				{
					if (func_103(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_126 = unk_0x48E480685981C7D4();
						iLocal_50 = 5;
					}
				}
				break;
			
			case 5:
				if (func_121())
				{
					iLocal_50 = 9;
				}
				if (func_120() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (!iLocal_114 && unk_0x83666F9FB8FEBD4B() > 5000)
				{
					unk_0xEAD984C2869B8B7C(&uLocal_135);
					unk_0xAF625598EDA64AD3(0, iLocal_71, -1, 2054, 2);
					unk_0xF88735A9354A45F3(0, iLocal_71, -1);
					unk_0x56D9ED1541046AF6(uLocal_135);
					unk_0xC65002CAA1212AF9(iLocal_51[0], uLocal_135);
					unk_0x6CB332CB31E9FA96(iLocal_51[0], 1);
					iLocal_114 = 1;
				}
				if ((iLocal_127 - iLocal_126) > 3000 || iLocal_113)
				{
					if (((unk_0x7404950238A154C2(iLocal_64, 0) && !unk_0x5FEB513A4402FD59(iLocal_51[0])) && !unk_0x5FEB513A4402FD59(iLocal_51[1])) && !unk_0x5FEB513A4402FD59(iLocal_71))
					{
						if (unk_0xDD7720E17AF5FE17(uLocal_148))
						{
							if (unk_0xF855C83E3A17514B(uLocal_148) > 0.98f)
							{
								if (!func_105())
								{
									if (unk_0x598CCC94D95857D9(iLocal_51[0], iLocal_71, 10f))
									{
										if (func_103(&uLocal_153, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0xF64D185C5B88AF31(iLocal_51[0]);
											uLocal_148 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0xBCD946677FB3F5D5(uLocal_148, iLocal_64, 0);
											unk_0x58BEA8B2364F8C48(iLocal_71, uLocal_148, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x58BEA8B2364F8C48(iLocal_51[0], uLocal_148, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x58BEA8B2364F8C48(iLocal_51[1], uLocal_148, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x72C254C049438316(iLocal_64, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0, 0);
											iLocal_149 = 1;
											iLocal_126 = unk_0x48E480685981C7D4();
											iLocal_50 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_119())
				{
					iLocal_50 = 15;
				}
				break;
			
			case 15:
				if (((unk_0x7404950238A154C2(iLocal_64, 0) && !unk_0x5FEB513A4402FD59(iLocal_51[0])) && !unk_0x5FEB513A4402FD59(iLocal_51[1])) && !unk_0x5FEB513A4402FD59(iLocal_71))
				{
					if (unk_0xDD7720E17AF5FE17(uLocal_148))
					{
						if (!func_105())
						{
							if (unk_0x598CCC94D95857D9(iLocal_51[0], iLocal_71, 10f))
							{
								if (func_103(&uLocal_153, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0xF64D185C5B88AF31(iLocal_51[0]);
									uLocal_148 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0xBCD946677FB3F5D5(uLocal_148, iLocal_64, 0);
									unk_0x58BEA8B2364F8C48(iLocal_71, uLocal_148, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x58BEA8B2364F8C48(iLocal_51[0], uLocal_148, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x58BEA8B2364F8C48(iLocal_51[1], uLocal_148, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x72C254C049438316(iLocal_64, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0, 0);
									iLocal_149 = 1;
									iLocal_126 = unk_0x48E480685981C7D4();
									iLocal_50 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_117();
				if (unk_0xDD7720E17AF5FE17(uLocal_148))
				{
					if (unk_0xF855C83E3A17514B(uLocal_148) > 0.45f)
					{
						if ((unk_0x7404950238A154C2(iLocal_64, 0) && !unk_0x5FEB513A4402FD59(iLocal_71)) && !unk_0x5FEB513A4402FD59(iLocal_51[0]))
						{
						}
					}
				}
				if (unk_0xDD7720E17AF5FE17(uLocal_148))
				{
					if (unk_0xF855C83E3A17514B(uLocal_148) > 0.9f)
					{
						if (unk_0x7404950238A154C2(iLocal_64, 0))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
							{
								unk_0x3C3A95141D01773E(iLocal_51[0], iLocal_64, -1, -1, 1f, 9, 0);
								iLocal_50 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_117();
				if (unk_0xDD7720E17AF5FE17(uLocal_148))
				{
					if (unk_0xF855C83E3A17514B(uLocal_148) > 0.95f)
					{
						if (unk_0x7404950238A154C2(iLocal_64, 0))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
							{
								unk_0x3C3A95141D01773E(iLocal_51[1], iLocal_64, -1, 0, 1f, 9, 0);
								unk_0x6CB332CB31E9FA96(iLocal_51[1], 1);
								iLocal_50 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_117();
				if ((unk_0x7404950238A154C2(iLocal_64, 0) && !unk_0x5FEB513A4402FD59(iLocal_51[0])) && !unk_0x5FEB513A4402FD59(iLocal_51[1]))
				{
					if ((unk_0x58A69336FE7307D8(iLocal_71, iLocal_64) && unk_0x58A69336FE7307D8(iLocal_51[0], iLocal_64)) && unk_0x58A69336FE7307D8(iLocal_51[1], iLocal_64))
					{
						unk_0x2D7E8CD6F4101CAB(iLocal_51[0], iLocal_64, 15f, 786468);
						unk_0x6A8A78C1DAEC9CEB(iLocal_64, 1);
						bLocal_137 = true;
					}
				}
				break;
			
			case 9:
				unk_0xEAD984C2869B8B7C(&uLocal_135);
				unk_0xF64D185C5B88AF31(0);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 20000, 0, 2);
				unk_0xE7D69AA8A129E7D3(0, unk_0x81873881071CD9FE(), -1, 0);
				unk_0x56D9ED1541046AF6(uLocal_135);
				if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
				{
					unk_0xC65002CAA1212AF9(iLocal_51[0], uLocal_135);
				}
				unk_0xA3561415EB3DA3A3(&uLocal_135);
				if (!iLocal_111)
				{
					if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4) && !unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 3))
					{
						func_93();
						unk_0x4EDE34FBADD967A6(0);
						func_103(&uLocal_153, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 3) && !unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4))
					{
						func_93();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
						{
							func_108(iLocal_51[0], "GUN_COOL", 24);
						}
					}
					iLocal_111 = 1;
					iLocal_133 = unk_0x48E480685981C7D4();
				}
				iLocal_50 = 10;
				break;
			
			case 10:
				if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6) && unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_134 = unk_0x48E480685981C7D4();
				}
				else
				{
					iLocal_50 = 13;
				}
				if (((iLocal_134 - iLocal_133) > 6000 && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6)) && !iLocal_112)
				{
					if (func_103(&uLocal_153, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_133 = unk_0x48E480685981C7D4();
						iLocal_112 = 1;
					}
					iLocal_50 = 11;
				}
				break;
			
			case 11:
				if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6) && unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_134 = unk_0x48E480685981C7D4();
				}
				else
				{
					iLocal_50 = 13;
				}
				if (((iLocal_134 - iLocal_133) > 9000 && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6)) || iLocal_139)
				{
					if (func_103(&uLocal_153, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_50 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
				{
					iLocal_134 = unk_0x48E480685981C7D4();
				}
				else
				{
					iLocal_50 = 13;
				}
				if ((iLocal_134 - iLocal_133) > 13000)
				{
					iLocal_48 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
				{
					unk_0xEAD984C2869B8B7C(&uLocal_135);
					unk_0xF64D185C5B88AF31(0);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 4);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), -1);
					unk_0x56D9ED1541046AF6(uLocal_135);
					unk_0xC65002CAA1212AF9(iLocal_51[0], uLocal_135);
					unk_0xA3561415EB3DA3A3(&uLocal_135);
				}
				if (iLocal_140)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_71))
						{
							if (unk_0xFA1212DE7C455679(iLocal_51[1], 1785177548) != 1)
							{
								unk_0xEAD984C2869B8B7C(&uLocal_135);
								unk_0xF64D185C5B88AF31(0);
								unk_0xF88735A9354A45F3(0, iLocal_71, 0);
								unk_0xAF625598EDA64AD3(0, iLocal_71, 20000, 0, 2);
								unk_0x874614DC82BB9C8A(0, iLocal_71, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								unk_0x56D9ED1541046AF6(uLocal_135);
								unk_0xC65002CAA1212AF9(iLocal_51[1], uLocal_135);
								unk_0xA3561415EB3DA3A3(&uLocal_135);
							}
						}
						else if (unk_0xFA1212DE7C455679(iLocal_51[1], 1785177548) != 1)
						{
							unk_0xEAD984C2869B8B7C(&uLocal_135);
							unk_0xF64D185C5B88AF31(0);
							unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
							unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 20000, 0, 2);
							unk_0x56D9ED1541046AF6(uLocal_135);
							unk_0xC65002CAA1212AF9(iLocal_51[1], uLocal_135);
							unk_0xA3561415EB3DA3A3(&uLocal_135);
						}
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_71))
					{
						if (unk_0xFA1212DE7C455679(iLocal_71, 1785177548) != 1)
						{
							unk_0xFD21E38B63412197(iLocal_71, unk_0x81873881071CD9FE(), -1, 0);
							unk_0x6CB332CB31E9FA96(iLocal_71, 1);
						}
					}
				}
				iLocal_50 = 14;
				break;
			
			case 14:
				if (func_121())
				{
					iLocal_50 = 9;
				}
				if (func_119())
				{
					if (unk_0xDD7720E17AF5FE17(uLocal_148))
					{
						if (!iLocal_140)
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
							{
							}
							if (!unk_0x5FEB513A4402FD59(iLocal_71))
							{
								unk_0xFD21E38B63412197(iLocal_71, unk_0x81873881071CD9FE(), -1, 0);
								unk_0x6CB332CB31E9FA96(iLocal_71, 1);
							}
							iLocal_140 = 1;
						}
					}
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
				{
					if (!func_105() && !iLocal_113)
					{
						if (func_104())
						{
							func_103(&uLocal_153, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_103(&uLocal_153, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_113 = 1;
					}
					iLocal_114 = 0;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_126 = (unk_0x48E480685981C7D4() - 4500);
					iLocal_50 = 5;
				}
			}
	}
}

void func_117()
{
	if (!func_105())
	{
		if (unk_0x7404950238A154C2(iLocal_64, 0))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_71))
			{
				if (unk_0x04C377C10639B842(iLocal_71, iLocal_64, 0))
				{
					if (func_118(iLocal_71, 0) == 2)
					{
						if (iLocal_128 < unk_0x48E480685981C7D4())
						{
							func_103(&uLocal_153, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_128 = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (unk_0xE5AB05962FA1FF3F(iParam0, iParam1))
		{
			uVar0 = unk_0xE68E6B44DABA9C05(iParam0, iParam1);
			if (unk_0x86CCCD2FAE9D5E65(uVar0))
			{
				if (!unk_0x930F8FBB8E9537CC(iVar0))
				{
					iVar1 = unk_0x56F6C62C27F50DCB(unk_0x14B7103DBD149FFE(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xBEB00EB4ADDC2A33(iVar0, iVar3))
						{
							if (unk_0xB0B9E53CEFDB16AA(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_119()
{
	if ((!unk_0x5FEB513A4402FD59(iLocal_51[0]) && !unk_0x5FEB513A4402FD59(iLocal_51[1])) && !unk_0x5FEB513A4402FD59(iLocal_71))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if ((unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[0], 1.5f, 1.5f, 5f, 0, 1, 2) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_71, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[0], 0.5f, 0.5f, 5f, 0, 1, 1) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_71, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_120()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
	{
		if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (unk_0x598CCC94D95857D9(iLocal_51[1], unk_0x81873881071CD9FE(), 120f))
			{
				if (!unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
	{
		if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_51[1]))
	{
		if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x598CCC94D95857D9(iLocal_51[1], unk_0x81873881071CD9FE(), 120f))
			{
				if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_51[0]))
	{
		if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_51[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x598CCC94D95857D9(iLocal_51[0], unk_0x81873881071CD9FE(), 120f))
			{
				if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (func_125())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_16(Global_98920))
		{
			func_123(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_16(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
		}
		return 1;
	}
	return 0;
}

void func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_89(func_124(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_89(func_124(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_89(func_124(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
				}
			}
			break;
	}
}

char* func_124(int iParam0)
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

int func_125()
{
	switch (func_126(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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

int func_126(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88620.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_130(0))
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_128(iParam2))
		{
			return 0;
		}
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
		if (iParam4 != 0)
		{
			func_127(uParam0, iParam4);
		}
	}
	return 2;
}

void func_127(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_128(int iParam0)
{
	return func_129(iParam0, Global_35443);
}

int func_129(int iParam0, int iParam1)
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

int func_130(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_128(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_131()
{
	if (unk_0xFBACB273AA628CC5(uLocal_118))
	{
		unk_0x0A8175F24237A3D4(&uLocal_118);
	}
	if (!unk_0xFBACB273AA628CC5(uLocal_119))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_71))
		{
			uLocal_119 = func_96(iLocal_71, 0, 145);
			unk_0x3C8D013C840ADA0A(uLocal_119, 0);
		}
	}
	else
	{
		unk_0x3C8D013C840ADA0A(uLocal_119, 1);
	}
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		if (!unk_0xFBACB273AA628CC5(uLocal_120[iLocal_125]))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_51[iLocal_125]))
			{
				uLocal_120[iLocal_125] = func_96(iLocal_51[iLocal_125], 0, 145);
				unk_0x3C8D013C840ADA0A(uLocal_120[iLocal_125], 0);
			}
		}
		else
		{
			unk_0x3C8D013C840ADA0A(uLocal_120[iLocal_125], 1);
		}
		iLocal_125++;
	}
}

int func_132()
{
	var uVar0;
	var uVar1;
	
	if (!bLocal_132)
	{
		if (unk_0x6DF2A27FBC647AEC(Local_65 - Vector(30f, 30f, 30f), Local_65 + Vector(30f, 30f, 30f), 1) || unk_0xA345276C242E42FC(Local_65 - Vector(30f, 30f, 30f), Local_65 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_49 = 2;
			return 1;
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_51[0]) && !unk_0x5FEB513A4402FD59(iLocal_51[1]))
		{
			if (unk_0x8D28631AAAEFC957(iLocal_51[0], unk_0x81873881071CD9FE(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 7) || (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()) && unk_0x8D28631AAAEFC957(iLocal_51[0], unk_0x81873881071CD9FE(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_51[0]) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_51[0])) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_51[1])) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_51[1]))
					{
						if (unk_0x76C5D372647A62A7(iLocal_51[0], unk_0x81873881071CD9FE()) || unk_0x76C5D372647A62A7(iLocal_51[1], unk_0x81873881071CD9FE()))
						{
							iLocal_49 = 2;
							return 1;
						}
					}
				}
			}
		}
		uVar0 = unk_0x2ADE2CEED2637E95();
		if (unk_0x86CCCD2FAE9D5E65(iLocal_64))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_64))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_64, unk_0x81873881071CD9FE(), 1))
				{
					iLocal_49 = 2;
					return 1;
				}
				if (unk_0xF2B8FCF27DF5227E(unk_0x81873881071CD9FE(), iLocal_64) && unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 0.1f)
				{
					iLocal_49 = 2;
					return 1;
				}
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_64, 0))
				{
					iLocal_49 = 2;
					return 1;
				}
				if (unk_0x7404950238A154C2(uVar0, 0))
				{
					if (unk_0xBBEF8270CE27C0EE(iLocal_64, iVar0, 1))
					{
						iLocal_49 = 2;
						return 1;
					}
				}
			}
			else if (unk_0xBBEF8270CE27C0EE(iLocal_64, unk_0x81873881071CD9FE(), 1))
			{
				iLocal_49 = 2;
				return 1;
			}
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (unk_0x557EC1A9A884772D(unk_0x81873881071CD9FE(), joaat("towtruck")) || unk_0x557EC1A9A884772D(unk_0x81873881071CD9FE(), joaat("towtruck2")))
			{
				uVar1 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (!unk_0x930F8FBB8E9537CC(iLocal_64))
				{
					if (unk_0x6AD274E515B19C02(uVar1, iLocal_64))
					{
						iLocal_49 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_51[0]) || unk_0x930F8FBB8E9537CC(iLocal_51[0]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_51[0], unk_0x81873881071CD9FE(), 1))
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_51[0]) && unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 0.1f)
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_51[0], iVar0, 1))
				{
					iLocal_49 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_51[1]) || unk_0x930F8FBB8E9537CC(iLocal_51[1]))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_51[1], unk_0x81873881071CD9FE(), 1))
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_51[1]) && unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 0.1f)
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_51[1], iVar0, 1))
				{
					iLocal_49 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iLocal_71))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_71, unk_0x81873881071CD9FE(), 1))
			{
				iLocal_49 = 4;
				return 1;
			}
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_71))
			{
				iLocal_49 = 4;
				return 1;
			}
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_71, iVar0, 1))
				{
					iLocal_49 = 4;
					return 1;
				}
			}
		}
		else if (unk_0xBBEF8270CE27C0EE(iLocal_71, unk_0x81873881071CD9FE(), 1))
		{
			iLocal_49 = 4;
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	func_135(39, 1);
	func_135(40, 1);
	func_135(41, 1);
	func_135(42, 1);
	func_135(43, 1);
	func_135(44, 1);
	unk_0x13705C66F125D98D(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	unk_0x13705C66F125D98D(Local_95 - Vector(20f, 20f, 20f), Local_95 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x984F8E3A66FFFEE5(Local_72, 50f, 0);
	unk_0xF47DE13A08D86AB8(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	unk_0xF3148AAF69AF9CBC(&uLocal_130, 5);
	iLocal_71 = unk_0x206897C6DBC12488(26, iLocal_75, Local_72, 0, 1, 1);
	unk_0x1D15D99A10A15334(iLocal_71, 1);
	unk_0x887F4488DA99FD21(iLocal_75);
	unk_0x33B1E568CEF14B0D(iLocal_71, 0);
	unk_0xCE566DBDCACD245E(iLocal_71, 185, 1);
	unk_0xCE566DBDCACD245E(iLocal_71, 206, 1);
	unk_0x7F5F0D37173E518C(iLocal_71, 2, 0);
	unk_0xC9E1121219C75417(iLocal_71, 1);
	unk_0xEF1A2C5B3EE83E3E(iLocal_71, "REHOMGirl");
	unk_0x03F73D35E5AC583A(iLocal_71, 0, 2, 1, 0);
	unk_0x03F73D35E5AC583A(iLocal_71, 2, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_71, 3, 1, 4, 0);
	unk_0x03F73D35E5AC583A(iLocal_71, 4, 0, 5, 0);
	unk_0x03F73D35E5AC583A(iLocal_71, 6, 1, 0, 0);
	unk_0x4865E80F793024CE("OFFICERS", &iLocal_152);
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		iLocal_51[iLocal_125] = unk_0x206897C6DBC12488(6, iLocal_69, Local_54[iLocal_125 /*3*/], fLocal_61[iLocal_125], 1, 1);
		unk_0x1D15D99A10A15334(iLocal_51[iLocal_125], 1);
		unk_0x887F4488DA99FD21(iLocal_69);
		unk_0x506A601663C5417C(iLocal_51[iLocal_125], iLocal_152);
		unk_0xCE566DBDCACD245E(iLocal_51[iLocal_125], 42, 1);
		iLocal_125++;
	}
	unk_0x8E4A427F5C43E416(iLocal_51[0], joaat("weapon_pistol"), -1, 1, 1);
	unk_0x8E4A427F5C43E416(iLocal_51[1], joaat("weapon_pistol"), -1, 0, 1);
	unk_0xF8E77F310A5B6EAB(5, iLocal_152, joaat("player"));
	unk_0xF8E77F310A5B6EAB(1, iLocal_152, joaat("COP"));
	unk_0xF8E77F310A5B6EAB(1, joaat("COP"), iLocal_152);
	iLocal_64 = unk_0xE00F8DEA9778FC87(iLocal_70, Local_65, fLocal_68, 1, 1);
	unk_0xB5A91586385F755B(iLocal_70, 1);
	unk_0x5CC9D6711FE01F0D(iLocal_64);
	unk_0x6A8A78C1DAEC9CEB(iLocal_64, 1);
	func_134(&uLocal_153, 5, iLocal_51[0], "ACULTMember1", 0, 1);
	func_134(&uLocal_153, 4, iLocal_51[1], "ACULTMember2", 0, 1);
	func_134(&uLocal_153, 3, iLocal_71, "REHOMGirl", 0, 1);
	if (func_98() == 0)
	{
		func_134(&uLocal_153, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	else if (func_98() == 1)
	{
		func_134(&uLocal_153, 1, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	uLocal_148 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0xBCD946677FB3F5D5(uLocal_148, iLocal_64, 0);
	unk_0x58BEA8B2364F8C48(iLocal_71, uLocal_148, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x58BEA8B2364F8C48(iLocal_51[0], uLocal_148, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x58BEA8B2364F8C48(iLocal_51[1], uLocal_148, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0xFD9AE4CEB0ED9DDF(uLocal_148, 1);
}

void func_134(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_142(iParam0, 2, 1))
		{
			func_141(iParam0, 2, 1);
		}
	}
	else if (func_142(iParam0, 2, 1))
	{
		func_136(iParam0, 2, 1);
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_11() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

int func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_138(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_140(int iParam0)
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
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_11() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_11() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_139(func_140(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_143()
{
	unk_0x32A12757CBF48A33(iLocal_75);
	unk_0x32A12757CBF48A33(iLocal_69);
	unk_0x32A12757CBF48A33(iLocal_70);
	unk_0x295DC04FC13E025B("random@homelandsecurity");
	if (((unk_0x33ACB874CECA2D4B(iLocal_75) && unk_0x33ACB874CECA2D4B(iLocal_69)) && unk_0x33ACB874CECA2D4B(iLocal_70)) && unk_0x8E8B546E1A81D27F("random@homelandsecurity"))
	{
		bLocal_103 = true;
	}
	else
	{
		unk_0x32A12757CBF48A33(iLocal_75);
		unk_0x32A12757CBF48A33(iLocal_69);
		unk_0x32A12757CBF48A33(iLocal_70);
		unk_0x295DC04FC13E025B("random@homelandsecurity");
	}
}

void func_144()
{
	iLocal_75 = joaat("a_f_y_tourist_01");
	iLocal_69 = joaat("a_m_o_acult_01");
	iLocal_70 = joaat("fugitive");
	Local_72 = { -174.0522f, 1905.611f, 197.0466f };
	Local_54[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_61[0] = 147.8596f;
	Local_54[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_61[1] = 164.5974f;
	Local_65 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_68 = 187.3899f;
	Local_92 = { 469.8768f, 2617.532f, 42.2566f };
	Local_95 = { 472.2393f, 2611.611f, 42.2676f };
	Local_98 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_102 = 1;
}

int func_145()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_156())
		{
			return 0;
		}
	}
	if (func_152())
	{
		return 1;
	}
	if (func_146(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_146(float fParam0, bool bParam1)
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_24(func_98()))
		{
			iVar36 = func_21();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_147(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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

void func_147(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_148(uParam1, "Abigail1", func_150(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 1:
			func_148(uParam1, "Abigail2", func_150(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 2:
			func_148(uParam1, "Barry1", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 3:
			func_148(uParam1, "Barry2", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 4:
			func_148(uParam1, "Barry3", func_150(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 5:
			func_148(uParam1, "Barry3A", func_150(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 6:
			func_148(uParam1, "Barry3C", func_150(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 7:
			func_148(uParam1, "Barry4", func_150(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_149(iParam0), 0, 0);
			break;
		
		case 8:
			func_148(uParam1, "Dreyfuss1", func_150(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 9:
			func_148(uParam1, "Epsilon1", func_150(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 10:
			func_148(uParam1, "Epsilon2", func_150(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 11:
			func_148(uParam1, "Epsilon3", func_150(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 12:
			func_148(uParam1, "Epsilon4", func_150(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 13:
			func_148(uParam1, "Epsilon5", func_150(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 14:
			func_148(uParam1, "Epsilon6", func_150(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 15:
			func_148(uParam1, "Epsilon7", func_150(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 16:
			func_148(uParam1, "Epsilon8", func_150(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 17:
			func_148(uParam1, "Extreme1", func_150(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 18:
			func_148(uParam1, "Extreme2", func_150(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 19:
			func_148(uParam1, "Extreme3", func_150(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 20:
			func_148(uParam1, "Extreme4", func_150(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 21:
			func_148(uParam1, "Fanatic1", func_150(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_149(iParam0), 1, 0);
			break;
		
		case 22:
			func_148(uParam1, "Fanatic2", func_150(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_149(iParam0), 1, 0);
			break;
		
		case 23:
			func_148(uParam1, "Fanatic3", func_150(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_149(iParam0), 0, 1);
			break;
		
		case 24:
			func_148(uParam1, "Hao1", func_150(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_149(iParam0), 0, 1);
			break;
		
		case 25:
			func_148(uParam1, "Hunting1", func_150(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 26:
			func_148(uParam1, "Hunting2", func_150(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 27:
			func_148(uParam1, "Josh1", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 28:
			func_148(uParam1, "Josh2", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 29:
			func_148(uParam1, "Josh3", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 30:
			func_148(uParam1, "Josh4", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 31:
			func_148(uParam1, "Maude1", func_150(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 32:
			func_148(uParam1, "Minute1", func_150(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 33:
			func_148(uParam1, "Minute2", func_150(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 34:
			func_148(uParam1, "Minute3", func_150(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 35:
			func_148(uParam1, "MrsPhilips1", func_150(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 36:
			func_148(uParam1, "MrsPhilips2", func_150(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 37:
			func_148(uParam1, "Nigel1", func_150(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 38:
			func_148(uParam1, "Nigel1A", func_150(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 39:
			func_148(uParam1, "Nigel1B", func_150(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 40:
			func_148(uParam1, "Nigel1C", func_150(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 41:
			func_148(uParam1, "Nigel1D", func_150(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 42:
			func_148(uParam1, "Nigel2", func_150(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 43:
			func_148(uParam1, "Nigel3", func_150(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 44:
			func_148(uParam1, "Omega1", func_150(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 45:
			func_148(uParam1, "Omega2", func_150(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 46:
			func_148(uParam1, "Paparazzo1", func_150(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 47:
			func_148(uParam1, "Paparazzo2", func_150(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 48:
			func_148(uParam1, "Paparazzo3", func_150(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 49:
			func_148(uParam1, "Paparazzo3A", func_150(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 50:
			func_148(uParam1, "Paparazzo3B", func_150(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 51:
			func_148(uParam1, "Paparazzo4", func_150(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 52:
			func_148(uParam1, "Rampage1", func_150(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 54:
			func_148(uParam1, "Rampage3", func_150(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 55:
			func_148(uParam1, "Rampage4", func_150(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 56:
			func_148(uParam1, "Rampage5", func_150(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 53:
			func_148(uParam1, "Rampage2", func_150(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 57:
			func_148(uParam1, "TheLastOne", func_150(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 58:
			func_148(uParam1, "Tonya1", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 59:
			func_148(uParam1, "Tonya2", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 60:
			func_148(uParam1, "Tonya3", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 61:
			func_148(uParam1, "Tonya4", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 62:
			func_148(uParam1, "Tonya5", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_148(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_149(int iParam0)
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

struct<2> func_150(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_151(iParam0) };
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_151(int iParam0)
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

int func_152()
{
	if (func_155() && !func_156())
	{
		return 1;
	}
	if (func_154() && func_153())
	{
		return 1;
	}
	return 0;
}

bool func_153()
{
	return Global_98649 > 0;
}

int func_154()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_156()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	if (!func_128(5))
	{
		return 1;
	}
	if (func_152())
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_156())
		{
			return 0;
		}
	}
	if (func_146(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if ((Global_98920 == func_30() && unk_0x9284F36E422CA571()) && Global_98921)
	{
		return 1;
	}
	return 0;
}

void func_159(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_161(iParam0);
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_160();
}

void func_160()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_161(int iParam0)
{
	Global_98920 = iParam0;
}

int func_162(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_203())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_156())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_152())
		{
			return 0;
		}
		if (func_202())
		{
			return 0;
		}
		if (Global_98920 != -1)
		{
			return 0;
		}
		if (func_24(func_98()))
		{
			if (func_146(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_201(iParam3))
		{
			return 0;
		}
		if (func_24(func_98()))
		{
			if (func_200(func_98()) == 4 || func_200(func_98()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_98()))
		{
			if (!func_199(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_198(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_197())
		{
			return 0;
		}
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
		{
			return 0;
		}
		if (!func_188(4))
		{
			return 0;
		}
		if (!func_128(5))
		{
			return 0;
		}
		if (func_187(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_187(0, 0))
		{
			return 0;
		}
		if (Global_25092)
		{
			return 0;
		}
		if (func_201(30) && !func_187(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_98()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_186(iVar8))
				{
					if (func_164(iVar4))
					{
						if (!func_163(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
							{
								if (func_98() != iVar4)
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

bool func_163(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
	return func_165(iVar0);
}

int func_165(int iParam0)
{
	return func_166(iParam0, 1);
}

int func_166(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_186(iParam0))
	{
		return 0;
	}
	func_167(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_168(func_179(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_168(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_178(iParam0, iParam1))
	{
		iVar0 = func_177(iParam1);
		iVar1 = func_175(iParam0);
		iVar2 = (func_175(iParam0) - func_175(iParam1));
		iVar3 = (func_177(iParam0) - func_177(iParam1));
		iVar4 = (func_174(iParam0) - func_174(iParam1));
		iVar5 = (func_173(iParam0) - func_173(iParam1));
		iVar6 = (func_172(iParam0) - func_172(iParam1));
		iVar7 = (func_171(iParam0) - func_171(iParam1));
	}
	else
	{
		iVar0 = func_177(iParam0);
		iVar1 = func_175(iParam1);
		iVar2 = (func_175(iParam1) - func_175(iParam0));
		iVar3 = (func_177(iParam1) - func_177(iParam0));
		iVar4 = (func_174(iParam1) - func_174(iParam0));
		iVar5 = (func_173(iParam1) - func_173(iParam0));
		iVar6 = (func_172(iParam1) - func_172(iParam0));
		iVar7 = (func_171(iParam1) - func_171(iParam0));
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
		iVar4 = (iVar4 + func_170(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_169(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_169(float fParam0, float fParam1, float fParam2)
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

int func_170(int iParam0, int iParam1)
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

int func_171(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_172(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_174(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_175(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_176(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_176(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_177(int iParam0)
{
	return iParam0 & 15;
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_186(iParam1) || !func_186(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	var uVar0;
	
	func_185(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_184(&uVar0, unk_0x25B31B877207A3A9());
	func_183(&uVar0, unk_0x0C937048CF6952B5());
	func_182(&uVar0, unk_0x8B6B3DD84CE74978());
	func_181(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_180(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_180(var uParam0, int iParam1)
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

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_175(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_186(int iParam0)
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
	iVar0 = func_171(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_172(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_173(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_175(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_177(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_174(iParam0);
	if (iVar5 < 1 || iVar5 > func_170(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_187(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iVar0 = func_98();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_196()) || Global_97978) || Global_24948) || func_195()) || func_73(8, -1)) || func_194()) || func_193()) || func_192()) || func_191()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_196()) || Global_24948) || func_195()) || func_73(8, -1)) || func_192()) || func_194()) || func_193()) || func_191()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_196()) || Global_97978) || Global_24948) || func_195()) || func_73(8, -1)) || func_192()) || func_194()) || func_193()) || func_191()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_196()) || Global_97978) || Global_24948) || func_195()) || func_73(8, -1)) || func_194()) || func_193()) || func_191()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_196() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_73(8, -1)) || func_191()) || func_190()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_73(8, -1) || func_194()) || func_193()) || func_190()) || func_189())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_196()) || Global_24948) || func_195()) || func_73(8, -1)) || func_193()) || func_192()) || func_191()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_196()) || func_193()) || Global_97978) || Global_24948) || func_195()) || Global_36493) || func_73(8, -1)) || func_192()) || func_190()) || func_191()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_196()) || Global_97978) || Global_24948) || func_195()) || func_73(8, -1)) || func_192()) || func_190()) || func_194()) || func_193()) || func_191())
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

var func_189()
{
	return Global_90848.f_1;
}

int func_190()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_191()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_90861.f_297 > 0;
}

bool func_194()
{
	return Global_90861.f_296 > 0;
}

var func_195()
{
	return Global_1315892;
}

int func_196()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_197()
{
	func_71();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_198(int iParam0)
{
	return func_178(func_179(), iParam0);
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_98();
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

int func_200(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_98931.f_6302.f_919[iParam0];
}

bool func_201(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_203())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_202()
{
	var uVar0;
	
	if (Global_25096)
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_203()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_204()
{
	int iVar0;
	
	if (iLocal_101)
	{
		func_218(0);
		if (Global_25184)
		{
			unk_0x80650551CC58C784("AC_STOP");
		}
		func_217();
		unk_0x3C936873011FA97B();
		unk_0x8DBC0C86D2397C6A(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0xD600F85196278A9D(unk_0x1329891157A54C63());
		unk_0x5B6D37392F5991C3(1f);
		func_93();
		if (iLocal_102)
		{
			unk_0x887F4488DA99FD21(iLocal_75);
			unk_0x887F4488DA99FD21(iLocal_69);
			unk_0x887F4488DA99FD21(iLocal_70);
			unk_0xB5A91586385F755B(iLocal_70, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_51[iVar0]))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_51[iVar0]))
				{
					if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						unk_0x9746FEAEDB7B010A(iLocal_51[iVar0], func_216(unk_0x1329891157A54C63()), -1, 0, 0);
						unk_0x6CB332CB31E9FA96(iLocal_51[iVar0], 1);
						if (!unk_0x5FEB513A4402FD59(iLocal_71))
						{
							unk_0x492E306B5A7C779A(iLocal_71, -1);
							unk_0x6CB332CB31E9FA96(iLocal_71, 1);
						}
					}
					unk_0x1D15D99A10A15334(iLocal_51[iVar0], 0);
				}
				unk_0x71A8BCA218722FA1(&(iLocal_51[iVar0]));
			}
			iVar0++;
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_71))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_71))
			{
				unk_0xCE566DBDCACD245E(iLocal_71, 317, 1);
				if (unk_0xCD67A1A6022640ED(iLocal_71))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_71);
				}
				if (!unk_0xE5AB05962FA1FF3F(iLocal_71, 0))
				{
					unk_0x40C2DE5A3C7D6ACD(iLocal_71);
				}
				unk_0x1D15D99A10A15334(iLocal_71, 0);
			}
			unk_0x71A8BCA218722FA1(&iLocal_71);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_64))
		{
			unk_0xE0913C01F5C0CC3D(&iLocal_64);
		}
		unk_0xCF03502D0A0CF8C3(5, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			}
		}
	}
	func_205(-1);
	unk_0xC23A229F78DAD92A();
}

void func_205(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_158())
	{
		func_209(iParam0);
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_208(30000);
		StringCopy(&cVar0, func_207(Global_98920, 1), 64);
		if (func_29(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_206(&Global_25005);
	Global_98921 = 0;
	func_161(-1);
}

void func_206(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

char* func_207(int iParam0, bool bParam1)
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

void func_208(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_209(int iParam0)
{
	func_210(iParam0, 0, func_215(iParam0));
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_179();
	func_213(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_212(iParam0, &uVar0);
	Var1 = { func_211(&uVar0) };
}

struct<16> func_211(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_172(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_171(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_177(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_175(*uParam0), 64);
	return Var0;
}

void func_212(int iParam0, var uParam1)
{
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_175(*uParam0);
	iVar1 = func_177(*uParam0);
	iVar2 = func_174(*uParam0);
	iVar3 = func_173(*uParam0);
	iVar4 = func_172(*uParam0);
	iVar5 = func_171(*uParam0);
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
	iVar6 = func_170(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_170(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_214(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_214(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_185(uParam0, iParam1);
	func_184(uParam0, iParam2);
	func_183(uParam0, iParam3);
	func_181(uParam0, iParam5);
	func_182(uParam0, iParam4);
	func_180(uParam0, iParam6);
}

int func_215(int iParam0)
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

Vector3 func_216(var uParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(uParam0), 0);
}

void func_217()
{
	Global_25180 = 0;
	Global_25181 = 0;
	Global_25183 = 0;
	Global_25184 = 0;
	Global_25185 = 0;
}

void func_218(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_135(iVar0, bParam0);
		iVar0++;
	}
}

