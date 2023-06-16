#
#  Logger.py
#
#  Copyright 2023 ADSC
#
#  This file is part of SGCR.
#
#  SGCR is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  SGCR is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with SGCR. If not, see <http://www.gnu.org/licenses/>.

import logging

import Constants


# info log, display at the left-hand side of the WebUI
log_level = logging.INFO
info_logger = logging.getLogger("info")
info_logger.setLevel(log_level)
fh_info = logging.FileHandler(Constants.LOG["info_path"], mode='w')
fh_info.setLevel(log_level)
fh_info.setFormatter(logging.Formatter("[%(asctime)s] - %(levelname)s - %(message)s"))
info_logger.addHandler(fh_info)

# warning log, display at the right-hand side of the WebUI
log_level = logging.WARN
warn_logger = logging.getLogger("warn")
warn_logger.setLevel(log_level)
fh_warn = logging.FileHandler(Constants.LOG["warn_path"], mode='w')
fh_warn.setLevel(log_level)
fh_warn.setFormatter(logging.Formatter(
    fmt     = "[%(asctime)s] - %(message)s",
    datefmt = "%H:%M:%S"
))
warn_logger.addHandler(fh_warn)

class Logger:
    def clean_log(self):
        with open(Constants.LOG["info_path"], "a+") as f:
            f.truncate()
        with open(Constants.LOG["warn_path"], "a+") as f:
            f.truncate()
    
    def log(self, level, msg):
        if level == "INFO":
            info_logger.info(msg)
        elif level == "WARNING":
            warn_logger.info(msg)
        elif level == "ERROR":
            info_logger.error(msg)
        elif level == "WARN_ERROR":
            warn_logger.error(msg)
